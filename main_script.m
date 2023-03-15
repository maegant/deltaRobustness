%% Load Tools
frost_path = 'frost-multiimpact/';

% initialize frost
addpath(genpath(frost_path));
frost_addpath; % not needed since not synthesizing gaits

% add necessary folders to your search path:
addpath(genpath('tools'));
addpath('urdf','control'); %add urdf and control folders
rmpath(fullfile(frost_path,'matlab','control')); %remove standard controller folder from FROST

%% Load Two Pre-Generated Gaits
behavior_name = 'planar_amberFF';
gaits = {'2023-03-01T16-09_','2023-03-01T16-04_'}; % flat foot constraint
                
obj = TestRobustness(behavior_name,gaits);

%% Forward Simulate for Random Step Heights
delta = 0.015;
num_steps = 500;
obj.TestRandom(delta,num_steps);

% Simulate Walking from Random Step Heights
steps_to_plot = 20;
obj.PlotRandom(steps_to_plot);

% Plot phase portraits
obj.plotPortraits;

% Plot fitted ISS bound from TestRandom logger
obj.getBound;

%% Algorithmic Optimization for Gait 1 (with sampling)
gait = 1;
deltad = 0.001; deltachi = 1;
[deltastar1, chistar1] = obj.RunAlgorithm(gait,deltad,deltachi);

%% Algorithmic Optimization for Gait 2 (with sampling)
gait = 2;
deltad = 0.001; deltachi = 1;
[deltastar2, chistar2] = obj.RunAlgorithm(gait,deltad,deltachi);

%% Make Plots from Optimization
obj.plotAlgResults(deltastar1,chistar1,deltastar2,chistar2)

%% Plot ISS bound obtained from Lyapunov function (assuming the condition was satisfied)
num_random_steps = 100;
deltas = [0.006,0.006];
chis = [34,34];
obj.plotLyapunov(deltas,chis, num_random_steps);

%% Check if Lyapunov condition is satisfied for certain delta ball
num_samples = 100;
obj.plotLyapunovBall([0.006,0.006],[34,34],num_samples);
