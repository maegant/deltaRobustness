classdef amber3_FF < RobotLinks
    % Class: Amber3 with flat feet

    properties
        
        ContactPoints
        OtherPoints
        
        lf = 0.466725; % distance from pointFoot to Knee
        lt = 0.28507; % distance from base frame to top of Torso

        fs_fun; % Spring forces
        
        % Center of mass position & velocity
        com_fun;
        comV_fun;
        
        % zero dynamics
%         z1_fun; %linearized hip position relative to stance foot
%         z2_fun; % velocity of linearized hip position
        
        % Hip position 
%         hip_pos_fun
        
        %%% spring_conf (how to actuate springy joints)
        
        fric_coef;
        foot_geometry
%         Slope;
        
    end
    
    methods
        function obj = amber3_FF(urdf, varargin)

            base = get_base_dofs('planar');
            
            limits = [base.Limit];% Limits for the base frame 
            
            [limits.lower]    = deal(-0.4, 0.5, -0.1);
            [limits.upper]    = deal( 1.0, 2.0,  0.1);
            [limits.velocity] = deal( 2,  0.5,   1.0);
            
            for i=1:3
                base(i).Limit = limits(i);
            end
            
            obj = obj@RobotLinks(urdf,base);
            x = obj.States.x;
            dx = obj.States.dx;
            obj.com_fun = obj.getComPosition;
            obj.comV_fun = jacobian(obj.getComPosition, x) * dx;
            
            %% define contact frames

            lf = obj.lf; lt = obj.lt;
            
            % define foot geometry
            obj.foot_geometry.width = 0; %assume zero foot width for planar walking
            obj.foot_geometry.length = 0.2;
            
            % Right foot
            r_foot_frame = obj.Links(getLinkIndices(obj, 'RightFoot'));        
            obj.ContactPoints.RightSole = CoordinateFrame(...
                                            'Name','RightSole',...
                                            'Reference',r_foot_frame,...
                                            'Offset',[0, 0, 0],...
                                            'R',[0,0,0]);
            obj.ContactPoints.RightToe = CoordinateFrame(...
                'Name','RightToe',...
                'Reference',r_foot_frame,...
                'Offset',[obj.foot_geometry.length/2,0,0],...
                'R',[0,0,0] ... % z-axis is the normal axis, so no rotation required
                );
            obj.ContactPoints.RightHeel = CoordinateFrame(...
                'Name','RightHeel',...
                'Reference',r_foot_frame,...
                'Offset',[-obj.foot_geometry.length/2,0,0],...
                'R',[0,0,0] ... % z-axis is the normal axis, so no rotation required
                );
            
            % Left footOtherPoints
            l_foot_frame = obj.Links(getLinkIndices(obj, 'LeftFoot'));
            obj.ContactPoints.LeftSole = CoordinateFrame(...
                                            'Name','LeftSole',...
                                            'Reference',l_foot_frame,...
                                            'Offset',[0, 0, 0],...
                                            'R',[0,0,0]);
            obj.ContactPoints.LeftToe = CoordinateFrame(...
                'Name','LeftToe',...
                'Reference',l_foot_frame,...
                'Offset',[obj.foot_geometry.length/2,0,0,],...
                'R',[0,0,0]... % z-axis is the normal axis, so no rotation required
                );
            obj.ContactPoints.LeftHeel = CoordinateFrame(...
                'Name','LeftHeel',...
                'Reference',l_foot_frame,...
                'Offset',[-obj.foot_geometry.length/2,0,0],...
                'R',[0,0,0]... % z-axis is the normal axis, so no rotation required
                );
            
            % Define top of torso for easy animation later
            torso_frame = obj.Joints(getJointIndices(obj, 'BaseRotY'));
            obj.OtherPoints.Torso = CoordinateFrame(...
                'Name','Torso',...
                'Reference',torso_frame,...
                'Offset',[0,0,0],...
                'R',[0,0,0]... % z-axis is the normal axis, so no rotation required
                );
                        
            %% friction cone parameters
            obj.fric_coef.mu = 0.6;     %-translational friction (set to 0.09 for slippery walking)
            % obj.fric_coef.gamma = 25; %-torsional friction
            
            
        end
        
        function [] = exportKinematics(obj,model_export_path)
            
            expr = {};
            
            % Break out states
            x = obj.States.x;
            dx = obj.States.dx;
            pLeftSole = obj.getCartesianPosition(obj.ContactPoints.LeftSole)';
            pRightSole = obj.getCartesianPosition(obj.ContactPoints.RightSole)';
            thetaLeftSole = obj.getEulerAngles(obj.ContactPoints.LeftSole)';
            thetaRightSole = obj.getEulerAngles(obj.ContactPoints.RightSole)';
            
            % Velocity of Floating Base Frame
            expr{end+1} = SymFunction('global_vel',jacobian(x(1:2)-pRightSole([1,3],1),x)*dx,{x,dx});
            expr{end+1} = SymFunction('global_angularvel',jacobian(x(3)-thetaRightSole(2),x)*dx,{x,dx});
            
            % Jacobian of nsf_velZ
%             nsf_velz = jacobian(pLeftSole,x)*dx;
            
            % Get base position relative to stance foot
            expr{end+1} = SymFunction('z_rSS', x(1:2,1)-pRightSole([1,3],1), {x});
            expr{end+1} = SymFunction('z_lSS', x(1:2,1)-pLeftSole([1,3],1), {x});
            
            % Define zero dynamics
            hip_pos = obj.getCartesianPosition(obj.Joints(getJointIndices(obj,'RightHip')));
            p_sf = obj.getCartesianPosition(obj.ContactPoints.RightSole);
            phip = linearize(hip_pos(1) - p_sf(1),x);
            phipz = hip_pos(3) - p_sf(3);
            z1_fun = phip;
            z2_fun = phipz;
            z1_dot_fun = jacobian(z1_fun,x)*dx;     
            z2_dot_fun = jacobian(z2_fun,x)*dx;           
            expr{end+1} = SymFunction('z1_func', z1_fun, {x});
            expr{end+1} = SymFunction('z1dot_func', z1_dot_fun, {x,dx});
            expr{end+1} = SymFunction('z2_func', z2_fun, {x});
            expr{end+1} = SymFunction('z2dot_func', z2_dot_fun, {x,dx});
            
            % Get left and right foot positions
            expr{end+1} = SymFunction('p_sf_rSS', pRightSole, {x});
            expr{end+1} = SymFunction('p_nsf_rSS', pLeftSole, {x});
            expr{end+1} = SymFunction('p_sf_lSS', pLeftSole, {x});
            expr{end+1} = SymFunction('p_nsf_lSS', pRightSole, {x});
            
            expr{end+1} = SymFunction('euler_sf_rSS', thetaRightSole, {x});
            expr{end+1} = SymFunction('euler_nsf_rSS', thetaLeftSole, {x});
            expr{end+1} = SymFunction('euler_sf_lSS', thetaLeftSole, {x});
            expr{end+1} = SymFunction('euler_nsf_lSS', thetaRightSole, {x});
            
            
            
            
            % Compute positions of all joints
            for i = 1:length(obj.Joints)
                position = obj.Joints(i).computeCartesianPosition;
                expr{end+1} = SymFunction(['p_', obj.Joints(i).Name],position,{x});
            end
            
            % Compute positions of contact points
            cp_fields = fields(obj.ContactPoints);
            for i = 1:length(cp_fields)
                position = obj.ContactPoints.(cp_fields{i}).computeCartesianPosition;
                expr{end+1} = SymFunction(['p_', obj.ContactPoints.(cp_fields{i}).Name],position,{x});
            end
            
            % Compute positions of other points
            op_fields = fields(obj.OtherPoints);
            for i = 1:length(op_fields)
                position = obj.OtherPoints.(op_fields{i}).computeCartesianPosition;
                expr{end+1} = SymFunction(['p_', obj.OtherPoints.(op_fields{i}).Name],position,{x});
            end
            
            % Export the files
            varagin = {};
            for i = 1:length(expr)
                export(expr{i}, model_export_path,varagin{:});
            end
            
        end
    end
end