function [ nlp ] = setupOptMultiImpact( behavior, inputParams )
% This function defines cost function and NLP constraints.
import([behavior.name, '.Constraints.*']);
    
%% Customize model boundaries (tunable)
model_bounds = behavior.robotModel.getLimits();
model_bounds.states.ddx.lb = -150 * ones(behavior.robotModel.numState,1);
model_bounds.states.ddx.ub =  150 * ones(behavior.robotModel.numState,1);

model_bounds.states.x.x0 = zeros(9,1)+eps;
model_bounds.states.dx.x0 = zeros(9,1)+eps;

name = 'BasePosX';
idx = behavior.robotModel.getJointIndices(name);
model_bounds.states.x.lb(idx) = -0.4;
model_bounds.states.x.ub(idx) = 0.6;
model_bounds.states.dx.lb(idx) = 0.5;
model_bounds.states.dx.ub(idx) = 1.5;

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
model_bounds.states.x.lb(idx) = deg2rad(-90);
model_bounds.states.x.ub(idx) = deg2rad(90);
model_bounds.states.dx.lb(idx) = -2;
model_bounds.states.dx.ub(idx) =  2;

idx = behavior.robotModel.getJointIndices({'RightKnee','LeftKnee'});
model_bounds.states.x.lb(idx) = deg2rad(10);
model_bounds.states.x.ub(idx) = deg2rad(80);
model_bounds.states.dx.lb(idx) = -2;
model_bounds.states.dx.ub(idx) =  2;

idx = behavior.robotModel.getJointIndices({'RightAnkle','LeftAnkle'});
model_bounds.states.x.lb(idx) = -deg2rad(60);
model_bounds.states.x.ub(idx) = deg2rad(60);
model_bounds.states.dx.lb(idx) = -2;
model_bounds.states.dx.ub(idx) =  2;

trans = 91.4286;
torque_limit = 60/trans;

%% Use Inputs
model_bounds.step_length = inputParams.step_length;
model_bounds.step_duration = inputParams.step_duration;
model_bounds.min_step_height = inputParams.min_step_height;
model_bounds.stair_height = inputParams.stair_height;
model_bounds.dmax = abs(inputParams.dmax); 

%% Shared Bounds Across Domains:
bounds = struct();
vNames = fields(behavior.vertices);
eNames = fields(behavior.edges);

for i = 1:length(vNames)
    % initialize bounds with shared model_bounds
    bounds.(vNames{i}) = model_bounds;
    bounds.(eNames{i}) = model_bounds;

    % output gains
    bounds.(vNames{i}).velocity.kp = 25;
    bounds.(vNames{i}).position.kp = 400;
    bounds.(vNames{i}).position.kd = 60;
    
    % bezier coefficient bounds
    bounds.(vNames{i}).params.aposition.lb = -10; 
    bounds.(vNames{i}).params.aposition.ub =  10;
    bounds.(vNames{i}).params.aposition.x0 =  0;
    bounds.(vNames{i}).params.avelocity.lb = 0.4; 
    bounds.(vNames{i}).params.avelocity.ub =  1.2;
    bounds.(vNames{i}).params.avelocity.x0 =  0.5;
    
    % constraint wrench bounds
    bounds.(vNames{i}).inputs.ConstraintWrench.fRightSole.lb = [-100, -10, -50]; %x z pitch
    bounds.(vNames{i}).inputs.ConstraintWrench.fRightSole.ub = [ 100, 500 , 50]; 
    bounds.(vNames{i}).inputs.ConstraintWrench.fRightSole.x0 = [ 0, 300, 20]; 
    bounds.(vNames{i}).params.pRightSole.lb = zeros(3,1);
    bounds.(vNames{i}).params.pRightSole.ub = zeros(3,1);
    bounds.(vNames{i}).params.pRightSole.x0 = zeros(3,1);
    
    % input bounds
    actuator_indices = 1:6;
    bounds.(vNames{i}).inputs.Control.u.lb = model_bounds.inputs.Control.u.lb(actuator_indices);
    bounds.(vNames{i}).inputs.Control.u.ub = model_bounds.inputs.Control.u.ub(actuator_indices);
    bounds.(vNames{i}).inputs.Control.u.lb = -torque_limit * ones(6,1);
    bounds.(vNames{i}).inputs.Control.u.ub = torque_limit * ones(6,1);
    
    % phase variable bounds
    bounds.(vNames{i}).params.pposition.lb = [0.06, -0.4]; %[theta-,theta+]
    bounds.(vNames{i}).params.pposition.ub = [0.4,  -0.06];
    bounds.(vNames{i}).params.pposition.x0 = [0.1,  -0.1];
    bounds.(vNames{i}).params.pvelocity.lb = [0.06, -0.4]; %[theta-,theta+]
    bounds.(vNames{i}).params.pvelocity.ub = [0.4,  -0.06];
    bounds.(vNames{i}).params.pvelocity.ub = [0.1,  -0.1];

end

%% Zero Impact Domain
%%% Time
bounds.(vNames{1}).time.t0.lb = 0;
bounds.(vNames{1}).time.t0.ub = 0;
bounds.(vNames{1}).time.t0.x0 = 0;
bounds.(vNames{1}).time.tf.lb = model_bounds.step_duration(1); 
bounds.(vNames{1}).time.tf.ub = model_bounds.step_duration(2);
bounds.(vNames{1}).time.tf.x0 = mean(model_bounds.step_duration);

% phase variable: linearized hip position
switch behavior.phaseType 
    case 'TimeBased'
        bounds.(vNames{1}).params.pposition.lb = [bounds.(vNames{1}).time.tf.lb, bounds.(vNames{1}).time.t0.lb]; 
        bounds.(vNames{1}).params.pposition.ub = [bounds.(vNames{1}).time.tf.ub, bounds.(vNames{1}).time.t0.ub];
        bounds.(vNames{1}).params.pposition.x0 = [bounds.(vNames{1}).time.tf.x0, bounds.(vNames{1}).time.t0.x0];
end

%% Late Impact Domain
%%% Time
bounds.(vNames{2}).time.t0.lb = model_bounds.step_duration(1);
bounds.(vNames{2}).time.t0.ub = model_bounds.step_duration(2);
bounds.(vNames{2}).time.t0.x0 = mean(model_bounds.step_duration);
bounds.(vNames{2}).time.tf.lb = model_bounds.step_duration(1); 
bounds.(vNames{2}).time.tf.ub = model_bounds.step_duration(2)+1;
bounds.(vNames{2}).time.tf.x0 = model_bounds.step_duration(2);

% phase variable: linearized hip position
switch behavior.phaseType 
    case 'TimeBased'
        bounds.(vNames{2}).params.pposition.lb = [bounds.(vNames{2}).time.tf.lb, bounds.(vNames{2}).time.t0.lb]; 
        bounds.(vNames{2}).params.pposition.ub = [bounds.(vNames{2}).time.tf.ub, bounds.(vNames{2}).time.t0.ub];
        bounds.(vNames{2}).params.pposition.x0 = [bounds.(vNames{2}).time.tf.x0, bounds.(vNames{2}).time.t0.x0];
end

%% Setup the NLP
behavior.vertices.(vNames{1}).UserNlpConstraint = @RSS1_constraints;
behavior.vertices.(vNames{2}).UserNlpConstraint = @RSS2_constraints;
behavior.edges.(eNames{1}).UserNlpConstraint = @mid_impact_constraint;
behavior.edges.(eNames{2}).UserNlpConstraint = @late_impact_constraint;

num_grid.(vNames{1}) = 7;
num_grid.(vNames{2}) = 2;
nlp = HybridTrajectoryOptimization(behavior.name, behavior.hybridSystem, num_grid, ...
                                   [], 'EqualityConstraintBoundary', 1e-4);
nlp.configure(bounds);


%% Add a cost function
weight= 1e3;
CostType = repmat({'TorqueSquare'},length(vNames),1);
nlp = Opt.applyCost(behavior, nlp, CostType, weight);

nlp.update;


%% Walking Speed
v_target(1) = model_bounds.step_length(1)/model_bounds.step_duration(2);
v_target(2) = model_bounds.step_length(2)/model_bounds.step_duration(1);

T0  = SymVariable('t0',  [2, 1]);
TF  = SymVariable('tf',  [2, 1]);
X0  = SymVariable('x0', [nlp.Phase(1).Plant.numState,1]);
XF  = SymVariable('xF', [nlp.Phase(1).Plant.numState,1]);
avg_vel = (XF(1) - X0(1)) / (TF(2) - T0(1)); 
avg_vel_fun = SymFunction('average_velocity', avg_vel, {T0, TF, X0, XF});
avg_vel_cstr = NlpFunction('Name','average_velocity',...
    'Dimension',1, ...
    'lb', v_target(1), ...
    'ub', v_target(2), ...
    'Type','Nonlinear', ...
    'SymFun', avg_vel_fun,...
    'DepVariables', [nlp.Phase(1).OptVarTable.T(1); nlp.Phase(1).OptVarTable.T(end); ...
                     nlp.Phase(1).OptVarTable.x(1); nlp.Phase(1).OptVarTable.x(end)]);
nlp.Phase(1).addConstraint('average_velocity','last',avg_vel_cstr);

%% Custom Jump Constraints

%%%% Remove jump constraint from late-impact
removeConstraint(nlp.Phase(end),'xMinusCont');
removeConstraint(nlp.Phase(end),'xPlusCont');
removeConstraint(nlp.Phase(end),'dxMinusCont');
removeConstraint(nlp.Phase(end),'dxPlusCont');

%%%% Add jump constraint for mid-impact
edge = nlp.Phase(2); tar = nlp.Phase(1);

% xPlusCont
x_t = tar.Plant.States.x;
x_e = edge.Plant.States.xnImp;
x_cont_tar = SymFunction(['xPlusPeriodicCont_' edge.Name],x_e(2:end)-x_t(2:end),{x_e,x_t});
x_tar_cstr = NlpFunction('Name',['xPlusPeriodicCont_' edge.Name],...
    'Dimension',tar.Plant.numState-1,...
    'lb', 0,...
    'ub', 0,...
    'Type','Linear',...
    'SymFun',x_cont_tar,...
    'DepVariables',[edge.OptVarTable.xnImp(1);tar.OptVarTable.x(1)]);
nlp.Phase(2).addConstraint('xPlusPeriodicCont','first',x_tar_cstr);
        
% dxPlusCont
dx_t = tar.Plant.States.dx;
dx_e = edge.Plant.States.dxnImp;
dx_cont_tar = SymFunction(['dxPlusPeriodicCont_' edge.Name],dx_e-dx_t,{dx_e,dx_t});
dx_tar_cstr = NlpFunction('Name',['dxPlusPeriodicCont_' edge.Name],...
    'Dimension',tar.Plant.numState,...
    'lb', 0,...
    'ub', 0,...
    'Type','Linear',...
    'SymFun',dx_cont_tar,...
    'DepVariables',[edge.OptVarTable.dxnImp(1);tar.OptVarTable.dx(1)]);
nlp.Phase(2).addConstraint('dxPlusPeriodicCont','first',dx_tar_cstr);

%%% Add periodicity to first state for mid-impact
% nsfPos = tar.Plant.getCartesianPosition(tar.Plant.ContactPoints.RightSole);
% x_cont_tar = SymFunction(['xPosPeriodic_' edge.Name],(x_e(1)-nsfPos(1))-x_t(1),{x_e,x_t});
% x_tar_cstr = NlpFunction('Name',['xPosPeriodic' edge.Name],...
%     'Dimension',1,...
%     'lb', 0,...
%     'ub', 0,...
%     'Type','Linear',...
%     'SymFun',x_cont_tar,...
%     'DepVariables',[edge.OptVarTable.xnImp(1);tar.OptVarTable.x(1)]);
% nlp.Phase(2).addConstraint('xPosPeriodic','first',x_tar_cstr);
        

end