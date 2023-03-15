function obj = TestRandom(obj,delta,num_steps)

for i = 1:length(obj.gaits)
    
    % Initialize Containers
    clear step_heights logger_sim
    
    % Get Nominal Gait Parameters
    params = obj.gaits(i).params;
    behavior = obj.behavior;
    
    % Forward Simulate for Random Stair Heights in [-delta,delta]
    x0 = params{1}.x0;
    for n = 1:num_steps
        
        fprintf('Simulating for Gait %i, Step %i ... \n',i,n);
        
        % Get random step height
        step_heights(n) = unifrnd(-delta,delta);
        
        % Simulate 1 step for random step height
        logger_sim(n) = obj.fsl(i,x0,step_heights(n),1);
        
        % Get xminus as last step in height
        xm = [logger_sim(n).flow.states.x(:,end);...
              logger_sim(n).flow.states.dx(:,end)];
        sf_pos = p_sf_rSS(logger_sim(n).flow.states.x(:,end));
        nsf_pos = p_nsf_rSS(logger_sim(n).flow.states.x(:,end));
        
        % Denote Failure as Outside of COMZ Bounds
        % (This prevents infinite simulation time from
        % failure to return to P(x,d))
        if xm(2)-sf_pos(3) < 0.5 || xm(2)-sf_pos(3) > 1.5
            warning('Failed: Forward simulation failed due to instability');
            break;
        elseif abs((nsf_pos(3)-sf_pos(3) - step_heights(n))) > 0.001
            % fail if it hits the side of the stair
            warning('Failed: Swing-foot failed to impact the intended guard');
            break;
        end
        
        % Get x_0 for next step using reset map
        guard = behavior.hybridSystem.Gamma.Edges.Guard{end};
        [~, x0, ~]  = guard.calcDiscreteMap(0, xm);
        
    end
    
    obj.gaits(i).simulated_random.logger = logger_sim;
    obj.gaits(i).simulated_random.step_heights = step_heights;
    obj.gaits(i).simulated_random.delta = delta;
    
    %% Find Bound for Random Gait
    xstar = obj.gaits(i).nominal.xstar;
    for j = 1:length(logger_sim)
        curx = [logger_sim(j).flow.states.x(:,end);logger_sim(j).flow.states.dx(:,end)];
        lhs(j) = norm(curx(3:end)-xstar(3:end),2);
    end
end

end

