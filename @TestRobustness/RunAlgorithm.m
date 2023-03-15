function [deltastar,chistar] = RunAlgorithm(obj, gait, deltad, deltachi)

chi_max = 50;

% Delta Values to Check
delta = 0; deltastar = []; chistar = [];

% num samples per delta
num_samples = 50;

% xstar
xstar = obj.gaits(gait).nominal.xstar;
xstarPinned = obj.getPinned(xstar);

% Make sure Lyapunov function is updated
obj.getLyap;

% Find max \delta with \chi > 0 s.t. lyapunov condition holds-
while 1
    
    % use last chi to save time:
    chi = 1e-10;
    
    % find chi s.t. system is robust for current delta
    temp_robust = 0;
    while ~temp_robust
        
        all_success = 1; % start with assumption that all will be successful
        for n = 1:num_samples
            
            % Get random x s.t. \|x\| = \chi \delta
            x = obj.getRandomPinned(xstar,chi*abs(delta),gait,0);
            
            % To save time, only check for [+delta,0,-delta]
            % (for completeness you can include more step heights)
            if delta > 0
                dVec = linspace(-delta,delta,3);
            else
                dVec = 0;
            end
            
            % Check Lyapunov condition for each d \in [dVec]
            for s = dVec
                fprintf('Sample %i, delta = %2.3f, chi = %3.3f, simulating for d = %2.3f \n',n,delta,chi,s);
                animate = 0;
                Pxd = obj.PoincarePinned(gait,x,s,0,animate);
                [check, lhs, rhs] = obj.checkLyapCond(gait,Pxd,x,xstarPinned);
                
                if ~check
                    all_success = 0;
                end
                
                if all_success == 0
                    break;
                end
                
            end
            
            if all_success == 0
                break;
            end
            
        end
        
        % if it did not succeed, try a higher value of chi
        if ~all_success && chi < chi_max
            chi = chi+deltachi;
            fprintf('Delta = %2.3f. Increasing chi to %3.3f \n',delta, chi);
        elseif all_success
            temp_robust = 1;
            deltastar = cat(2,deltastar,delta);
            chistar = cat(2,chistar,chi);
            delta = delta+deltad;
            chilast = chi;
            fprintf('Succeeded with chi = %3.3f. Increasing delta to %3.3f \n',chilast,delta);
        else
            warning('highest chi was reached')
            return;
        end
    end
end
end