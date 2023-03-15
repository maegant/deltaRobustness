function logger = fsl(obj,gait,x0,d, num_steps)
% Forward Simulate


if nargin < 5
    num_steps = 1;
end

% Load params corresponding to gaits(gait)
step_length = obj.gaits(gait).nominal.step_length;
params = obj.gaits(gait).params;
temp_behavior = obj.behavior;

% Update behavior with step height d
temp_behavior.options.Step = d;
temp_behavior.options.StepX = step_length/2;
% temp_behavior.options.StepX = unifrnd(0,step_length,1);
temp_behavior.update(temp_behavior.options);

% Update control params
for j = 1 : height(temp_behavior.hybridSystem.Gamma.Nodes)
    params{j}.epsilon = 40;
%     params{j}.kvelocity = 25; 
%     params{j}.kposition = [625,50];
    temp_behavior.hybridSystem = setVertexProperties(temp_behavior.hybridSystem, ...
        temp_behavior.hybridSystem.Gamma.Nodes.Name{j}, ...
        'Param', params{j},...
        'Control',IOFeedback('IO'));
end
temp_behavior.hybridSystem.setOption('OdeSolver', @ode15s);

% Get initial state for flow
logger = temp_behavior.hybridSystem.simulate(0, x0, 10, [],'NumCycle', num_steps);

end