classdef behavior < handle
% Description: 
%    - model: AMBER_PF 
%    - state-based walking
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
            obj.name = 'planar_amberPF';
            obj.isSymmetric = isSymmetric;
            
            % Load the namespace domains/edges
            import([obj.name, '.Vertices.*']); 
                        
            %%% Load in the model
            urdf_file = fullfile('urdf','amber3_PF.urdf');
            % urdf = ros_resolve_local_url(strcat('package://amber_opt/robots/',robotName,'.urdf'));
            obj.robotModel = feval('amber3_PF', urdf_file, behavior_opts);
            obj.robotModel.configureDynamics('DelayCoriolisSet', delay_coriolis,'OmitCoriolisSet',omit_coriolis);
            
            obj.phaseType = phaseType;
            
            %%% when some joint is actuated by springs
            % if strcmp(spring_conf, 'spring')
            %     obj.robotModel.appendDriftVector(obj.robotModel.fs_fun);
            % end
                                              
            %%% Load the controller
            controller  = IOFeedback('IO'); 
%             controller = ISSCLF('ISSCLF');
%             controller = CLFQP('CLFQP');
            
            %%% initialize the hybrid system
            obj.hybridSystem = HybridSystem(obj.name);
            
            % load in behavior options
            obj.options = behavior_opts;
            
            %% define hybrid systems
            
            if isSymmetric
                % --------------------------------------------------
                %  vertex1: RightStance                            |
                %  ->edge1: LeftImpactRelabel                      |
                % --------------------------------------------------
                obj.vertices.RightSS  = RightSS(obj.robotModel,phaseType,behavior_opts);
                obj.edges.e1     = Edges.Impact(obj.vertices.RightSS, 'Right', true,behavior_opts);
                
                obj.hybridSystem = addVertex(obj.hybridSystem , 'RightSS', ...
                                             'Domain', obj.vertices.RightSS, ...
                                             'Control', controller);
                
                obj.hybridSystem = addEdge(obj.hybridSystem , 'RightSS', 'RightSS');
                obj.hybridSystem = setEdgeProperties(obj.hybridSystem , ...
                                                     'RightSS', 'RightSS', ...
                                                     'Guard', obj.edges.e1);
                
            else
                error('Left and right are the same for 2D robot, symmetry is sufficient.');
                
            end
            
        end
    end
    
end
