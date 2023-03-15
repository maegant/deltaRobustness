classdef TestRobustness < handle
    %TESTROBUSTNESS Compare Robustness Properties of Gaits
    
    properties
        behavior_name
        gaits
        behavior
        footpitch
    end
    
    methods
        function obj = TestRobustness(behavior_name,gait_names)
            
            % Nominal behavior name associated with exported mex files
            obj.behavior_name = behavior_name;
            
            % Load Parameters from gaits
            for i = 1:length(gait_names)
                obj.gaits(i).name = gait_names{i};
                clear data;
                load(fullfile('saved_params',behavior_name,gait_names{i},'optData.mat'));
                obj.gaits(i).params = data.params;
            end
            
            % Load Nominal Hybrid System
            behavior_opts = struct('Step',0,'StepX',0,'dmax',0);
            behavior = loadBehavior(behavior_name, true, 'StateBased', ...
                false, false, 0, 0, behavior_opts);
            inputParams = struct('dmax',0','step_length',[0,0],'step_duration',[0,0],'stair_height',0,'min_step_height',0);
            nlp = feval(strcat(behavior.name, '.Constraints.setupOpt'), behavior, inputParams);
            customExportOptimization(behavior, nlp, 0, 0, 0);
            obj.behavior = behavior;
            
            % Simulate Nominal Gaits
            for i = 1:length(gait_names)
                x0 = obj.gaits(i).params{1}.x0;
                obj.gaits(i).nominal.step_length = 0; % temporary for fsl
                obj.gaits(i).nominal.logger = obj.fsl(i,x0,0,3);
                tempxstar = [obj.gaits(i).nominal.logger(end).flow.states.x(:,end);obj.gaits(i).nominal.logger(end).flow.states.dx(:,end)];
                
                % Get xstar for given controller
                guard = obj.behavior.hybridSystem.Gamma.Edges.Guard{end};
                [~,x0,~] = guard.calcDiscreteMap(0,tempxstar);
                obj.gaits(i).nominal.logger = obj.fsl(i,x0,0);
                xstar = [obj.gaits(i).nominal.logger.flow.states.x(:,end);obj.gaits(i).nominal.logger.flow.states.dx(:,end)];
                obj.gaits(i).nominal.xstar = obj.zeroStanceFoot(xstar);
                
                % Get nominal step length
                temp =  p_nsf_rSS(obj.gaits(i).nominal.xstar(1:end/2));
                obj.gaits(i).nominal.step_length = temp(1);
                
                % Get nominal foot pitch associated with fixed point for
                % pinned model
                if length(xstar) == 18
                    obj.footpitch(i) = nsf_pitch_RightSS1(obj.gaits(i).nominal.xstar(1:end/2));
                end
                
            end
            
            % Get DP0
            obj.compute_DP0;
            
        end
    end
    
    %%
    methods (Access = public)
        
        % Main Code: Run Algorithm for finding optimal delta-robustness 
        [deltastar, chistar] = RunAlgorithm(obj, gait, deltad, deltachi)
        
        % Random Sampling Method:
        xrand = getRandomPinned(obj,xstar,bound,gait,d)
        
        % Compute Linearized Poincar\'e Return Map for Nominal Guard
        obj = compute_DP0(obj);
        
        % Get simulated_random loggers for random step heights
        obj = TestRandom(obj,delta,num_steps);
        obj = PlotRandom(obj,plot_steps);
        obj = PlotStillFrames(obj,gait,plot_steps);
        
        % Plot phase portraits associated with simulated_random.logger
        obj = plotPortraits(obj);
        
        % Obtain Heuristic Bound from simulated_random.logger
        obj = getBound(obj);
                
        % Plot ISS bound obtained from Lyapunov function
        obj = plotLyapunov(obj,deltas,chis, numsteps);
        
        % Poincare return maps for pinned model:
        xkp1 = PoincarePinned(obj,gait,xk,d,rangeFlag,animateFlag);
        
        % Forward Simulate
        logger = fsl(obj,gait,x0,d, num_steps);
        
        % Pinned to Full Model Conversion
        x = getFull(obj,gait,xPinned,d);
        checkState(obj,x);
        
        %  Plot Step Walking
        [conGUI] = LoadAnimatorSteps(obj,gait, logger, stepHeights, varargin)
        
        % Lyapunov Condition
        [check, lhs, rhs] = checkLyapCond(obj,gait,Pxd,x,xstar);
        
        % Method of Getting x_k s.t. \|x_k - x^*\| = \chi|d|
        xAll = getDeltaBall(obj,xstar,bound,gait,d)
        
        % Random plotting functions
        plotAlgResults(obj, deltastar1,chistar1,deltastar2,chistar2)
        plotLyapunovBall(obj, deltas, chis, numSamples)
        
        %%% Check Random State
        function [check,lhs, rhs] = CheckLyapRandom(obj,gait,delta,chi,animate)
            
            if nargin < 4
                animate = 0;
            end
            
            % find a random state within \|x - x^*\| \geq \chi d
            xstar = obj.gaits(gait).nominal.xstar;
            
            % Enforce that \hdot{x} > 0, p_nsf < p_sf, and v_x > 0
            x = obj.getRandomPinned(xstar,chi*abs(delta), gait, delta);
            
            xFull = obj.getFull(gait,x,delta);
            if norm(xstar-xFull) < chi*abs(delta)
                error('something is wrong');
            end
            
            % Get Poincare return map for a single delta
            range = 0;
            Pxd = obj.PoincarePinned(gait,x,delta,range,animate);
            
            % Check that h(Pxd) = delta, and \dot{h}(Pxd) < 0
            pos_err = 0.01;
            PxdFull = obj.getFull(gait,Pxd,delta);
            if (abs(nsf_posZ(PxdFull(1:end/2)) - delta) < pos_err && nsf_velZ(PxdFull(1:end/2),PxdFull(end/2+1:end)) < 0)
                [check, lhs, rhs] = obj.checkLyapCond(gait,Pxd,x,obj.getPinned(xstar));
            else
                check = 0;
                lhs = []; rhs = [];
            end
            
        end
        
        %%% Test Pinned Model Conversion
        function testPinned(obj,gait)
            if nargin < 2
                gait = 1;
            end
            
            xstar = obj.gaits(gait).nominal.xstar;
            xstarPinned = obj.getPinned(xstar);
            xstarTest = obj.getFull(gait,xstarPinned,0);
            
            if norm(xstar-xstarTest,2) < 1e-5
                fprintf('Test Passed \n')
            else
%                 [xstar, xstarTest]
                fprintf('Test Failed \n')
            end
        end
        
    end
    
    %%
    methods (Access = private)
        % Update Lyapunov Function
        obj = getLyap(obj);
    end
    
    methods (Static)
        
        % Animating
        robot_disp = LoadDisplay(behavior, varargin)
        
        % GIF plotter
        MakeGIFSteps(conGUI,logger,folder);
        
        % Pinned conversion
        function xPinned = getPinned(x)
            
            if length(x) == 18
                % 1 - nsf hip: x(4)
                % 2 - nsf knee: x(5)
                % 3 - sf hip: x(7)
                % 4 - sf knee: x(8)
                % 5 - sf ankle: x(9)
                % 6 - nsf hip vel: x(13)
                % 7 - nsf knee vel: x(14)
                % 8 - nsf ankle vel: x(15)
                % 9 - sf hip vel: x(16)
                % 10 - sf knee vel: x(17)
                % 11 - sf ankle vel: x(18)
                xPinned = zeros(11,1);
                xPinned(1) = x(4);
                xPinned(2) = x(5);
                xPinned(3) = x(7);
                xPinned(4) = x(8);
                xPinned(5) = x(9);
                xPinned(6:11) = x(13:18);
                
            elseif length(x) == 14
                % 1 - nsf hip: x(4)
                % 2 - nsf knee: x(5)
                % 3 - sf hip: x(6)
                % 4 - sf knee: x(7)
                % 5 - torso pitch rate: x(10)
                % 6 - nsf hip vel: x(11)
                % 7 - nsf knee vel: x(12)
                % 8 - sf hip vel: x(13)
                % 9 - sf knee vel: x(14)
                xPinned = zeros(9,1);
                xPinned(1:4) = x(4:7);
                xPinned(5:9) = x(10:14);
            else
                error('wrong size x');
            end
        end
        
        % Zero Stance Foot
        function xzero = zeroStanceFoot(x)
            xzero = x;
            sf_offset = p_sf_rSS(x(1:end/2));
            xzero(1) = xzero(1) - sf_offset(1);
            xzero(2) = xzero(2) - sf_offset(3);
        end
    end
    
end

