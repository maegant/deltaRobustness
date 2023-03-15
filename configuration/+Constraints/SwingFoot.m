function SwingFoot(bounds, nlp, stanceFoot)
%% Constraints on swing foot

domain = nlp.Plant;
x = domain.States.x;
dx = domain.States.dx;
N = nlp.NumNode;

% functions for feet (do not change)
switch stanceFoot
    case 'Right'
        nsf_pos = domain.getCartesianPosition(domain.ContactPoints.LeftSole);
        sf_pos = domain.getCartesianPosition(domain.ContactPoints.RightSole);
    case 'Left'
        nsf_pos = domain.getCartesianPosition(domain.ContactPoints.RightSole);
        sf_pos = domain.getCartesianPosition(domain.ContactPoints.LeftSole);
end
nsf_vel = jacobian(nsf_pos, x) * dx;
nsf_posX_fun = SymFunction('nsf_posX', nsf_pos(1)-sf_pos(1), {x});
nsf_posZ_fun = SymFunction('nsf_posZ', nsf_pos(3)-sf_pos(3), {x});
nsf_velX_fun = SymFunction('nsf_velX', nsf_vel(1), {x, dx});
nsf_velZ_fun = SymFunction('nsf_velZ', nsf_vel(3), {x, dx});

%% Fixed Constraints
% %% NSF always move forward (stay fixed)
addNodeConstraint(nlp, nsf_velX_fun, {'x','dx'}, 'all', -0.2, 1.5, 'Nonlinear');
addNodeConstraint(nlp, nsf_velX_fun, {'x','dx'}, 1:floor(N/2), -0.01, 1.5, 'Nonlinear');

% %% redundant (stay fixed)
addNodeConstraint(nlp, nsf_posZ_fun, {'x'}, 'first', -bounds.stair_height, -bounds.stair_height,'Nonlinear');
addNodeConstraint(nlp, nsf_posZ_fun, {'x'}, 'last', bounds.stair_height, bounds.stair_height,'Nonlinear');

% %% NSF always above ground (stay fixed)
if bounds.stair_height > 0
%     addNodeConstraint(nlp, nsf_posZ_fun, {'x'}, floor(N/2):N, bounds.stair_height+bounds.min_step_height, 0.5,'Nonlinear'); 
elseif bounds.stair_height < 0
    addNodeConstraint(nlp, nsf_posZ_fun, {'x'}, 1:floor(N/2), abs(bounds.stair_height), 0.5,'Nonlinear'); 
else
    addNodeConstraint(nlp, nsf_posZ_fun, {'x'}, 'all', -abs(bounds.stair_height), 0.5,'Nonlinear'); 
    addNodeConstraint(nlp, nsf_posZ_fun, {'x'}, 'last', bounds.stair_height, 0.5,'Nonlinear'); 
end
addNodeConstraint(nlp, nsf_posZ_fun, {'x'}, floor(N*0.3):floor(N*0.8), ...
                                                 -abs(bounds.stair_height), 0.5,'Nonlinear'); 
                                             
%% nonstance foot (essential )

%%% lift off velocity
addNodeConstraint(nlp, nsf_velZ_fun, {'x','dx'}, 'first', 0.01, 0.5, 'Nonlinear');

%%% foot clearance (tune)
% max_height_tau = 0.5;
addNodeConstraint(nlp, nsf_posZ_fun, {'x'},  floor(N*0.5):floor(N*0.6), abs(bounds.stair_height)+bounds.min_step_height, 0.3,'Nonlinear');
 
%%% impact velocity (tune)
addNodeConstraint(nlp, nsf_velZ_fun, {'x','dx'}, 'last', -0.8, -0.2, 'Nonlinear');

%%% impact velocity (tune)
% addNodeConstraint(nlp, nsf_velZ_fun, {'x','dx'}, 'last', ...
%                     bounds.impact_vel-(delta_percent*0.05), ...
%                     bounds.impact_vel+(delta_percent*0.05), ...
%                     'Nonlinear');

%%% Step length (final posture) (tune)
% addNodeConstraint(nlp, nsf_posX_fun, {'x'}, 'last',...
%                     bounds.step_length(1), ...
%                     bounds.step_length(2), ...
%                     'Nonlinear');
% addNodeConstraint(nlp, nsf_posX_fun, {'x'}, 'last',...
%                     0.01, ...
%                     1, ...
%                     'Nonlinear');


end

