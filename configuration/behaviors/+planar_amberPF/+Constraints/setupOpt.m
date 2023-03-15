function [ nlp ] = setupOpt( behavior, inputParams )

warning('Not set up to use custom inputParams!')
if nargin < 2
    inputParams = [];
end

% This function defines cost function and NLP constraints.
import([behavior.name, '.Constraints.*']);
    
%% Customize model boundaries (tunable)
model_bounds = behavior.robotModel.getLimits();
model_bounds.states.ddx.lb = -150 * ones(behavior.robotModel.numState,1);
model_bounds.states.ddx.ub =  150 * ones(behavior.robotModel.numState,1);

name = 'BasePosX';
idx = behavior.robotModel.getJointIndices(name);
model_bounds.states.x.lb(idx) = -0.4;
model_bounds.states.x.ub(idx) = 0.6;
model_bounds.states.dx.lb(idx) = 0.3;
model_bounds.states.dx.ub(idx) = 1;

name = 'BasePosZ';
idx = behavior.robotModel.getJointIndices(name);
model_bounds.states.x.lb(idx) = 0.7;
model_bounds.states.x.ub(idx) = 2;
model_bounds.states.dx.lb(idx) = -0.5;
model_bounds.states.dx.ub(idx) = 0.5;

name = 'BaseRotY';
idx = behavior.robotModel.getJointIndices(name);
model_bounds.states.x.lb(idx) = -0.05;
model_bounds.states.x.ub(idx) = 0.15;
model_bounds.states.dx.lb(idx) = -0.5;
model_bounds.states.dx.ub(idx) = 0.5;

idx = behavior.robotModel.getJointIndices({'RightHip','LeftHip'});
model_bounds.states.dx.lb(idx) = -2;
model_bounds.states.dx.ub(idx) =  2;

idx = behavior.robotModel.getJointIndices({'RightKnee','LeftKnee'});
model_bounds.states.x.lb(idx) = deg2rad(10);
model_bounds.states.x.ub(idx) = deg2rad(80);
model_bounds.states.dx.lb(idx) = -2;
model_bounds.states.dx.ub(idx) =  2;

trans = 91.4286;
torque_limit = 60/trans;

step_duration = [0.3, 1.2]; %essential: how long should a step last

%% Use Inputs
% model_bounds.averageVel = inputParams.average_vel;
% model_bounds.lift_off_vel = inputParams.lift_off_vel;
% model_bounds.min_foot_clearance = inputParams.min_foot_clearance;
% model_bounds.impact_vel = inputParams.impact_vel;
% model_bounds.max_height_tau = inputParams.max_height_tau;

% Max Guard Uncertainty

%% Domain-specified bounds (Better Not Tune)
bounds = struct();
vNames = fields(behavior.vertices);
bounds.(vNames{1}) = model_bounds;
eNames = fields(behavior.edges);

%%% Time
bounds.(vNames{1}).time.t0.lb = 0;
bounds.(vNames{1}).time.t0.ub = 0;
bounds.(vNames{1}).time.tf.lb = step_duration(1); 
bounds.(vNames{1}).time.tf.ub = step_duration(2);

%%% Constraint Wrench Forces 
bounds.(vNames{1}).inputs.ConstraintWrench.fRightSole.lb = -300;
bounds.(vNames{1}).inputs.ConstraintWrench.fRightSole.ub =  300; 
bounds.(vNames{1}).params.pRightSole.lb = zeros(2,1);
bounds.(vNames{1}).params.pRightSole.ub = zeros(2,1);

%%% actuator bounds for SS domain %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% actuator_indices = 1:4;
% bounds.RightSS.inputs.Control.u.lb = model_bounds.inputs.Control.u.lb(actuator_indices);
% bounds.RightSS.inputs.Control.u.ub = model_bounds.inputs.Control.u.ub(actuator_indices);
% bounds.(vNames{1}).inputs.Control.u.lb = -torque_limit * ones(4,1);
% bounds.(vNames{1}).inputs.Control.u.ub = torque_limit * ones(4,1);

%%% RD2 outputs
bounds.(vNames{1}).position.kp = 400;
bounds.(vNames{1}).position.kd = 60;
% trajectories coefficient
bounds.(vNames{1}).params.aposition.lb = -10; 
bounds.(vNames{1}).params.aposition.ub =  10;

% phase variable: linearized hip position
switch behavior.phaseType 
    case 'TimeBased'
        bounds.(vNames{1}).params.pposition.lb = [bounds.(vNames{1}).time.tf.lb, bounds.(vNames{1}).time.t0.lb]; 
        bounds.(vNames{1}).params.pposition.ub = [bounds.(vNames{1}).time.tf.ub, bounds.(vNames{1}).time.t0.ub];
    case 'StateBased'
        bounds.(vNames{1}).params.pposition.lb = [0.06, -0.4]; %[theta-,theta+]
        bounds.(vNames{1}).params.pposition.ub = [0.4,  -0.06];
end

%% Setup the NLP
behavior.vertices.(vNames{1}).UserNlpConstraint = str2func('V_constraints');
behavior.edges.(eNames{1}).UserNlpConstraint = str2func('E_constraints');

num_grid.(vNames{1}) = 7;
nlp = HybridTrajectoryOptimization(behavior.name, behavior.hybridSystem, num_grid, ...
                                   [], 'EqualityConstraintBoundary', 1e-4);
nlp.configure(bounds);


%% Add a cost function
weight= 1e1;
CostType = {'mCOT'};   
nlp = Opt.applyCost(behavior, nlp, CostType, weight);

% weight = 1e6;
% CostType = {'impact'};
% nlp = Opt.applyCost(behavior,nlp, CostType, weight);

nlp.update;

end