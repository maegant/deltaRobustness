function xrand = getRandomPinned(obj,xstar,bound,gait,d)
% Get Random State

success = 0;

while ~success
    xstarPinned = obj.getPinned(xstar);
    xrand = xstarPinned;
    random_vector = unifrnd(-1,1,length(xrand),1);
    xrand = xrand + (bound+eps)*(random_vector./vecnorm(random_vector,2,1));
    
    % Check if xrand is on reset of guard
    xrandFull = obj.getFull(gait,xrand,d);
    if nsf_velZ(xrandFull(1:end/2),xrandFull(end/2+1:end)) < 0 && norm(xrand-xstarPinned,2)+1e-10 > bound
        
        % Also check that \|x-xstar\| < r2
        r2 = (obj.gaits(gait).lyap.k2/obj.gaits(gait).lyap.k1)^(1/2)*bound;
        if norm(xrand-xstarPinned,2)-1e-10 < r2 
            stepXerr = (nsf_posX(xrandFull(1:end/2)) - obj.gaits(gait).nominal.step_length);
            if abs(stepXerr) < 0.01 
                
                % Check that x \in \Omega_{r(\delta)}
                rdelta = obj.gaits(gait).lyap.k2*(bound)^2;
                Vx = (xrand-xstarPinned)'*obj.gaits(gait).lyap.P*(xrand-xstarPinned);
                if Vx <= rdelta
                    success = 1;
                else
                    fprintf('sample not in forward invariant set \n');
                end
                
                % Constraint for forward zero dynamics (only for point-foot):
                if length(xrandFull) == 14
                    success = 0;
                    if z1dot_func(xrandFull(1:end/2),xrandFull(end/2+1:end)) >= z1dot_func(xstar(1:end/2),xstar(end/2+1:end))
                        if norm(z1_func(xrandFull(1:end/2))-z1_func(xstar(1:end/2)),2) < 0.01
                            success = 1;
                        end
                    end
                else
                    success = 1;
                end
                
            end
        end
    end
end
end