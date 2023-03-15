function StepLength(bounds, nlp, stanceFoot)
%% Constraints on swing foot

domain = nlp.Plant;
x = domain.States.x;
dx = domain.States.dx;
N = nlp.NumNode;

% functions for feet (do not change)
switch stanceFoot
    case 'Right'
        nsf_pos = domain.getCartesianPosition(domain.ContactPoints.LeftSole);
    case 'Left'
        nsf_pos = domain.getCartesianPosition(domain.ContactPoints.RightSole);
end
nsf_vel = jacobian(nsf_pos, x) * dx;
nsf_posX_fun = SymFunction('nsf_posX', nsf_pos(1), {x});
nsf_posZ_fun = SymFunction('nsf_posZ', nsf_pos(3), {x});
nsf_velX_fun = SymFunction('nsf_velX', nsf_vel(1), {x, dx});
nsf_velZ_fun = SymFunction('nsf_velZ', nsf_vel(3), {x, dx});

%% Constraints

%%% redundant (stay fixed)
% addNodeConstraint(nlp, nsf_posZ_fun, {'x'}, 'first', 0, 0,'Nonlinear');
% addNodeConstraint(nlp, nsf_posZ_fun, {'x'}, 'last', 0, 0,'Nonlinear');

%%% Step length (final posture) (tune)
addNodeConstraint(nlp, nsf_posX_fun, {'x'}, 'last',...
                    bounds.step_length(1), ...
                    bounds.step_length(2), ...
                    'Nonlinear');

end

