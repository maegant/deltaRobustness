function [obj] = compute_DP0(obj)

% Compute DP0 for each gait
for i = 1:length(obj.gaits)
    
    xstar = obj.gaits(i).nominal.xstar;
    
    % Compute Jacobian Analytically
    n = length(xstar);
    fprintf('Simulating nominal: ');
    eps=1.e-8;
    xstarFixed = obj.getPinned(xstar);
    xperturb=xstarFixed;
    
    % CHECK THAT xstar is truely a fixed point
    Pxstar = obj.PoincarePinned(i,xstarFixed,0,0,0);
    if ~norm(Pxstar-xstarFixed) > 1e-5
        error('check that xstar is fixed point');
    end
    
    J = [];
    fprintf('Computing row           ');
    for j=1:length(xperturb)
        fprintf('\b\b\b\b\b\b\b\b\b\b%2.0f of %d: ', j, length(xperturb));
        xperturb(j)=xstarFixed(j)+eps;
        Px = obj.PoincarePinned(i,xperturb,0,0,0);
        J(:,j) =(Px-Pxstar)/eps;
        xperturb(j)=xstarFixed(j);
    end
    
    eigenvalues = abs(eig(J));
    fprintf('\n The eigenvalues are:');
    disp(eigenvalues');
    
    % Store Values in Class
    obj.gaits(i).DP0 = J;
end


end
