function RSS1_constraints(nlp, bounds, varargin)
% NL constraint on a vertex

domain = nlp.Plant;
x = domain.States.x;
dx = domain.States.dx;
u  = domain.Inputs.Control.u;
N = nlp.NumNode;

%% RD 2 output (Better Not Tune)
domain.VirtualConstraints.position.imposeNLPConstraint(nlp, ...
                     [bounds.position.kp, bounds.position.kd], [1, 1]);

%%% RD2 tau boundary [0,1]
tau = domain.VirtualConstraints.position.PhaseFuncs{1};
tauv = domain.VirtualConstraints.velocity.PhaseFuncs{1};

switch domain.VirtualConstraints.position.PhaseType
    case 'TimeBased'
        T_name = nlp.OptVarTable.T(1).Name;
        T  = SymVariable(lower(T_name),[nlp.OptVarTable.T(1).Dimension,1]);
        p_name = nlp.OptVarTable.pposition(1).Name;
        p  = SymVariable(lower(p_name),[nlp.OptVarTable.pposition(1).Dimension,1]);
        tau_0 = SymFunction(['tau_0_',domain.Name], T(1) - p(2), {T,p});
        tau_F = SymFunction(['tau_F_',domain.Name], T(2) - p(1), {T,p});
        addNodeConstraint(nlp, tau_0, {T_name,p_name}, 'first', 0, 0, 'Linear');
        addNodeConstraint(nlp, tau_F, {T_name,p_name}, 'last', 0, 0, 'Linear');
    
    case 'StateBased'
        addNodeConstraint(nlp, tau, {'x','pposition'}, 'all', 0, 1, 'Nonlinear');
        addNodeConstraint(nlp, tau, {'x','pposition'}, 'first', 0, 0, 'Nonlinear');
        addNodeConstraint(nlp, tauv, {'x','pvelocity'}, 'all',  0, 1, 'Nonlinear');
        addNodeConstraint(nlp, tauv, {'x','pvelocity'}, 'first', 0, 0, 'Nonlinear');
end

%% Swing Foot Constraints (Right Stance)
domain = nlp.Plant;
x = domain.States.x;
dx = domain.States.dx;
N = nlp.NumNode;

% SymFunction for Swing Foot
nsf_pos = domain.getCartesianPosition(domain.ContactPoints.LeftSole);
sf_pos = domain.getCartesianPosition(domain.ContactPoints.RightSole);
nsf_vel = jacobian(nsf_pos, x) * dx;
nsf_posX_fun = SymFunction('nsf_posX', nsf_pos(1)-sf_pos(1), {x});
nsf_posZ_fun = SymFunction('nsf_posZ', nsf_pos(3)-sf_pos(3), {x});
nsf_velX_fun = SymFunction('nsf_velX', nsf_vel(1), {x, dx});
nsf_velZ_fun = SymFunction('nsf_velZ', nsf_vel(3), {x, dx});

%% Step Length
addNodeConstraint(nlp, nsf_posX_fun, {'x'}, 'last',...
                    bounds.step_length(1), ...
                    bounds.step_length(2), ...
                    'Nonlinear');
                
%% Fixed Constraints
%%% NSF always move forward (stay fixed)
addNodeConstraint(nlp, nsf_velX_fun, {'x','dx'}, 'all', -0.2, 1.5, 'Nonlinear');
addNodeConstraint(nlp, nsf_velX_fun, {'x','dx'}, 1:floor(N/2), -0.01, 1.5, 'Nonlinear');


%% nonstance foot (essential )
%%% lift off velocity
addNodeConstraint(nlp, nsf_velZ_fun, {'x','dx'}, 'first', 0.01, 0.5, 'Nonlinear');

%%% impact velocity (tune)
addNodeConstraint(nlp, nsf_velZ_fun, {'x','dx'}, 'last', -0.8, -0.2, 'Nonlinear');

%% Conditions for a stair step

%%% NSF terminal height constraints
addNodeConstraint(nlp, nsf_posZ_fun, {'x'}, 'first', 0, 0,'Nonlinear');
addNodeConstraint(nlp, nsf_posZ_fun, {'x'}, 'last', 0, 0,'Nonlinear');

% Add swing foot clearance for a step
max_height_tau = 0.7;
% addNodeConstraint(nlp, nsf_posZ_fun, {'x'}, floor(0.3*N):floor(0.7*N), 0.01, 0.3,'Nonlinear');
addNodeConstraint(nlp, nsf_posZ_fun, {'x'}, floor(N*max_height_tau), abs(bounds.dmax)+bounds.min_step_height, 0.3,'Nonlinear');

% Flat Swing Foot    
nsf_orientation = domain.getEulerAngles(domain.ContactPoints.LeftSole);
pitch_constr_fun = SymFunction(['nsf_pitch_',domain.Name], nsf_orientation(2), x);
addNodeConstraint(nlp, pitch_constr_fun, {'x'}, 'all', 0-deg2rad(2), 0+deg2rad(2), 'Nonlinear');
addNodeConstraint(nlp, pitch_constr_fun, {'x'}, 'terminal', 0, 0, 'Nonlinear');
addNodeConstraint(nlp, pitch_constr_fun, {'x'}, floor(N*0.7):N, 0, 0, 'Nonlinear');
   

end