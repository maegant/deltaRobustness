function [params, fric_coef] = Params()
    params = struct();
      
    params.rFoot = struct();
    params.lFoot = struct();
    
    % Rabbit params:
    params.rFoot.width = 0;
    params.rFoot.height = 0; %height of foot
    params.rFoot.lengthToSole = 0.06; %from right_foot to RightSole (-x direction)
    params.rFoot.lengthToToe = 0.1; %from right_foot to toe (+x)
    params.rFoot.lengthToHeel = 0.1; %from right_foot to heel (-x)
    params.lFoot = params.rFoot;

    fric_coef.mu = 0.5;
    fric_coef.gamma = 5;
end
