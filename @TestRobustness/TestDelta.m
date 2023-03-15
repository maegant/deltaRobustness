function obj = TestDelta(obj,gait,delta,num_steps)

for i = gait
    
    % Initialize Containers
    clear step_heights logger_sim
    
    % Get Nominal Gait Parameters
    params = obj.gaits(i).params;
    step_length = obj.gaits(i).nominal.step_length;
    behavior = obj.behavior;
        
    % Forward Simulate for Random Stair Heights in [-delta,delta]
    x0 = params{1}.x0;
    
    for n = 1:num_steps
        
        % Get random step height
        step_heights(n) = unifrnd(-delta,delta);
        
        logger_sim(n) = obj.fsl(i,x0,step_heights(n));
        
        % Get xminus as last step in height
        xm = [logger_sim(n).flow.states.x(:,end);...
              logger_sim(n).flow.states.dx(:,end)];
        sf_pos = p_sf_rSS(logger_sim(n).flow.states.x(:,end));
        
        % Denote Failure as Outside of COMZ Bounds
        % (This prevents infinite simulation time from
        % failure to return to P(x,d))
        if xm(2)-sf_pos(3) < 0.5 || xm(2)-sf_pos(3) > 1.5
            warning('Failed');
            break;
        end
        
        % Get x_0 for next step using reset map
        guard = behavior.hybridSystem.Gamma.Edges.Guard{end};
        [~, x0, ~]  = guard.calcDiscreteMap(0, xm);
        
    end
    
    %% Find Bound for Random Gait
%     xstar = obj.gaits(i).nominal.xstar;
%     for j = 1:length(logger_sim)
%         curx = [logger_sim(j).flow.states.x(:,end);logger_sim(j).flow.states.dx(:,end)];
%         lhs(j) = norm(curx(3:end)-xstar(3:end),2);
%     end
    

    %% PLOT
    % Get Step Locations from Logger
    sf_locations = zeros(length(logger_sim),1);
    for j = 2:length(logger_sim)
        temp = p_nsf_rSS(logger_sim(j-1).flow.states.x(:,end));
        if temp < sf_locations(j-1)
            sf_locations(j) = sf_locations(j-1);
        else
            sf_locations(j) = temp(1);
        end
    end
    
    % Load Animator
    conGUI = Plot.LoadAnimatorSteps(obj.behavior, logger_sim, step_heights,sf_locations,obj.gaits(i).nominal.step_length);

    % Make Gif of Animator
    gifname = sprintf('gait%i_delta%i',i,delta);
    giffolder = fullfile('planar_FF_params','gifs',gifname);
    obj.MakeGIFSteps(conGUI,logger_sim,giffolder);
    
end
    
end

