classdef JointSphere < Animator.Sphere
    % Sphere depicting joints and axis of rotation for
    % Animator.Display
    % 
    % @author omar @date 2017-06-01
    % 
    % Copyright (c) 2017, UMICH Biped Lab
    % All right reserved.
    %
    % Redistribution and use in source and binary forms, with or without
    % modification, are permitted only in compliance with the BSD 3-Clause 
    % license, see
    % http://www.opensource.org/licenses/BSD-3-Clause
    
    properties (SetAccess = private, GetAccess = protected)
        line
    end
    
    properties (Access = public)
        length
    end
    
    properties (GetAccess = public, SetAccess = private)
        func_axis
    end
    
    methods
        function obj = JointSphere(ax, model, jointFrame, name, varargin)
            
            p = inputParser;
            addParameter(p, 'UseExported', false);
            addParameter(p, 'ExportPath', '');
            addParameter(p, 'SkipExporting', false);
            addParameter(p, 'Color', 'r');
            addParameter(p, 'Size',0.02);
            addParameter(p, 'Alpha',1);
            parse(p, varargin{:});
            
            obj = obj@Animator.Sphere(ax, model, jointFrame, name, varargin{:},'Size',p.Results.Size,'Alpha',p.Results.Alpha);
            obj.length = 0.15;
            obj.radius = p.Results.Size;
            
            if p.Results.UseExported
                if p.Results.SkipExporting == false
                    H = obj.frame.computeForwardKinematics();
                    ax_world = H*[obj.frame.Axis.'; 0];
                    ax_world = ax_world(1:3);
                    expr = ax_world;
                    symFunc = SymFunction([obj.name, '_axis'], expr, {model.States.x});
                    symFunc.export(p.Results.ExportPath);
                end

                obj.func_axis = str2func([obj.name, '_axis']);
            else
                H = obj.frame.computeForwardKinematics();
                ax_world = H*[obj.frame.Axis.'; 0];
                ax_world = ax_world(1:3);
                expr = ax_world;
                
                obj.func_axis = @(x) double(subs(expr, obj.model.States.x, x));
            end
            
            x0 = zeros(length(obj.model.States.x), 1);
            ax_world = obj.func_axis(x0);
            
            position = obj.func_center(x0);
            p1 = ax_world.*obj.length/2 + position;
            p2 = -ax_world.*obj.length/2 + position;
            obj.line = plot3(obj.ax, [p1(1), p2(1)], [p1(2), p2(2)], [p1(3), p2(3)], 'g');
            
            obj.surface.FaceColor = p.Results.Color;
            obj.surface.FaceAlpha = p.Results.Alpha;
        end
        
        function obj = update(obj, x)
            update@Animator.Sphere(obj, x);
            ax_world = obj.func_axis(x);
            
            position = obj.func_center(x);
            p1 = ax_world.*obj.length/2 + position;
            p2 = -ax_world.*obj.length/2 + position;
            obj.line.XData = [p1(1), p2(1)];
            obj.line.YData = [p1(2), p2(2)];
            obj.line.ZData = [p1(3), p2(3)];
        end
        
        function obj = delete(obj)
            delete(obj.line);
            
            delete@Animator.Sphere(obj);
        end
    end
end
