function [conGUI] = LoadAnimatorSteps(obj,gait, logger, stepHeights, varargin)
    
    
%     if isa(logger, 'SimLogger')
        np = length(logger);
        
        t = [];
        q = [];
        step_locations = [];
        stepLength = obj.gaits(gait).nominal.step_length;
        behavior = obj.behavior;
        
        for i=1:np
            if i == 1
                t = [t, logger(i).flow.t]; %#ok<*AGROW>
                q = [q, logger(i).flow.states.x];
                step_locations = 0;
            else
                
                % Reset time to be continuous
                t_offset = t(end)-logger(i).flow.t(1);
                t = [t, logger(i).flow.t+t_offset]; %#ok<*AGROW>
                
                % Reset stance foot position to be continuous
                qtemp = logger(i).flow.states.x;
                sf_offset = p_nsf_rSS(q(:,end))-p_sf_rSS(qtemp(:,1));
                qtemp(1,:) = qtemp(1,:)+sf_offset(1);
                qtemp(2,:) = qtemp(2,:)+sf_offset(3);
                q = [q, qtemp];
                
                % Update step location for plotting stairs
                step_pos = p_nsf_rSS(qtemp(:,end))-p_sf_rSS(qtemp(:,end));
                step_locations(i) = step_locations(i-1)+step_pos(1);
                                
            end
        end

    robot_disp = obj.LoadDisplay(behavior, varargin{:});
    
    % Define terrain height based on behavior description
    stepStarts = reshape(step_locations+stepLength-stepLength/2,[],1);
    steps = reshape([stepStarts, stepStarts+eps]',1,[]);
    Tx = [-1,0,steps,20];
    terrain.Tx = repmat(Tx,length(Tx),1);
    terrain.Ty = zeros(size(terrain.Tx));    
    
    % Get column inds of Tx associated with the location of each step
%     [~,firstStepInd] = min(abs(terrain.Tx(1,:) - (stepLength-((stepLength*i)/2))));
    firstStepInd = 3;
    terrain.Tz = zeros(size(terrain.Tx));
    for i = 1:length(stepHeights)
        terrain.Tz(:,[firstStepInd+2*i-1,firstStepInd+2*i]) = terrain.Tz(1,firstStepInd+(2*i-2))+stepHeights(i);    
    end
    
    
    anim = frost.Animator.AbstractAnimator(robot_disp, t, q, terrain);
    anim.isLooping = false;
    anim.speed = 1;
    anim.isPlaying = 0;
    anim.pov = frost.Animator.AnimatorPointOfView.Free;
    anim.updateWorldPosition = false;
    anim.Animate(true);
    conGUI = frost.Animator.AnimatorControls();
    conGUI.anim = anim;
end