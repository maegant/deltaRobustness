classdef behavior < handle
% Description: 
%    - model: planar_FF 
%    - state-based flat-foot walking
% _________________________________________________________________________

    properties
        name;           % Name of this behavior
        isSymmetric;    % Flag true = symmetric behavior
        robotModel;     % The robot model associated
        vertices;       % Continuous domains
        edges;          % Discrete domains
        hybridSystem;   % Hybrid system for this behavior
        constraints;    % Optimization constraints
        phaseType;
        options;
    end
    
    methods
        function obj = init(obj, isSymmetric, phaseType, delay_coriolis, omit_coriolis, behavior_opts)
            % Assign name
            obj.name = 'planar_amberFF';
            obj.isSymmetric = isSymmetric;
            
            % Load the namespace domains/edges
            import([obj.name, '.Vertices.*']); 
                        
            %%% Load in the model
            urdf_file = fullfile('urdf','amber3_FF.urdf');
            obj.robotModel = feval('amber3_FF', urdf_file);
            obj.robotModel.configureDynamics('DelayCoriolisSet', delay_coriolis,'OmitCoriolisSet',omit_coriolis);
            
            obj.phaseType = phaseType;
            
            %%% when some joint is actuated by springs
            % if strcmp(spring_conf, 'spring')
            %     obj.robotModel.appendDriftVector(obj.robotModel.fs_fun);
            % end
                                              
            %%% Load the controller
            controller  = IOFeedback('IO'); %Feedback linearizing controller
            
            %%% initialize the hybrid system
            obj.hybridSystem = HybridSystem(obj.name);
                       
            % load in behavior options
            obj.options = behavior_opts;
            %% define hybrid systems
            
            if isSymmetric && behavior_opts.dmax == 0
                % --------------------------------------------------
                %  vertex1: RightStance                            |
                %  ->edge1: LeftImpactRelabel                      |
                % --------------------------------------------------
                obj.vertices.RightSS1       = RightSS1(obj.robotModel,phaseType,behavior_opts);
                obj.edges.LeftImpactRelabel = Edges.Impact(obj.vertices.RightSS1, 'Right', true,behavior_opts);
                
                obj.hybridSystem = addVertex(obj.hybridSystem , 'RightSS1', ...
                                             'Domain', obj.vertices.RightSS1, ...
                                             'Control', controller);
                
                obj.hybridSystem = addEdge(obj.hybridSystem , 'RightSS1', 'RightSS1');
                obj.hybridSystem = setEdgeProperties(obj.hybridSystem , ...
                                                     'RightSS1', 'RightSS1', ...
                                                     'Guard', obj.edges.LeftImpactRelabel);
                
            elseif isSymmetric
                 % --------------------------------------------------
                %  vertex1: RightStance1                           |
                %  ->edge1: LeftImpactRelabel                      |
                %  vertex2: RightStance2                           |
                %  ->edge1: LeftLateImpactRelabel                  |
                % --------------------------------------------------
                
                % Define domains
                obj.vertices.RightSS1       = RightSS1(obj.robotModel,phaseType,behavior_opts);
                obj.vertices.RightSS2       = RightSS2(obj.robotModel,phaseType,behavior_opts);
                
                % Define edges
                obj.edges.LeftImpactRelabel     = Edges.MidImpact(obj.vertices.RightSS2, 'Right', true,behavior_opts);
                obj.edges.LeftLateImpactRelabel = Edges.LateImpact(obj.vertices.RightSS1, 'Right', true,behavior_opts);
                
                % Add vertices to hybrid system
                obj.hybridSystem = addVertex(obj.hybridSystem , 'RightSS1', ...
                                             'Domain', obj.vertices.RightSS1, ...
                                             'Control', controller);
                obj.hybridSystem = addVertex(obj.hybridSystem , 'RightSS2', ...
                                             'Domain', obj.vertices.RightSS2, ...
                                             'Control', controller);
                

                % Add edges to hybrid system    
                srcs = {'RightSS1','RightSS2'};
                tars = {'RightSS2','RightSS1'};
                obj.hybridSystem = addEdge(obj.hybridSystem, srcs, tars);
                obj.hybridSystem = setEdgeProperties(obj.hybridSystem, srcs, tars, ...
                                  'Guard', {obj.edges.LeftImpactRelabel,...
                                            obj.edges.LeftLateImpactRelabel});
                
            else
                error('Left and right are the same for 2D robot, symmetry is sufficient.');
                
            end
            
        end
        
        function obj = update(obj, behavior_opts)
            import([obj.name, '.Vertices.*']); 
            controller  = IOFeedback('IO'); %Feedback linearizing controller
            obj.vertices.RightSS1        = RightSS1(obj.robotModel,obj.phaseType,behavior_opts);
            obj.hybridSystem = setVertexProperties(obj.hybridSystem, 'RightSS1', ...
                                             'Domain', obj.vertices.RightSS1, ...
                                             'Control', controller);
        end
        
        
    end
    
end
