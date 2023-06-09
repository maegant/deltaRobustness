classdef CustomAnimator < handle
    % An abstract animator class
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

    properties(Access = private)
        tmr timer
    end
    
    properties (GetAccess = protected, SetAccess = immutable)
        fig
        axs
    end
    
    properties (Access = public)
        currentTime double
        speed double
        updateWorldPosition logical
    end
    
    properties (Access = public)
        isLooping logical
        pov Animator.AnimatorPointOfView
        
        startTime double
        endTime double
    end
    
    properties (GetAccess = public, SetAccess = immutable)
        TimerDelta double
    end
    
    properties (Dependent, Access = public)
        isPlaying logical
    end
    
    properties (Access = private)
        x_all;
        t_all;
        
        text;
        z1;
        ground;
    end
    
    properties (Access = public)
        display
    end
    
    methods
        function obj = CustomAnimator(display, t, x, varargin)
            %             if exist('f', 'var')
            %                 obj.fig = f;
            %                 obj.axs = axes(obj.fig);
            %             else
            %                 obj.fig = figure();
            %                 obj.axs = axes(obj.fig);
            %             end
            obj.display = display;
            obj.fig = display.fig;
            obj.axs = display.axs;
            
            
            obj.t_all = t;
            obj.x_all = x;
            
            obj.startTime = t(1);
            obj.currentTime = obj.startTime;
            obj.endTime = t(end);
            
            
            
            % setup timer
            obj.speed = 1;
            
            obj.TimerDelta = round(1/30,3);
            obj.pov = Animator.AnimatorPointOfView.Free;
            
            obj.tmr = timer;
            obj.tmr.Period = obj.TimerDelta;
            obj.tmr.ExecutionMode = 'fixedRate';
            obj.tmr.TimerFcn = @(~, ~) obj.Animate();
            
            % Define Terrain
            if isempty(varargin)
                [terrain.Tx, terrain.Ty] = meshgrid(-10:1:10, -10:1:10);
                terrain.Tz = 0.*terrain.Tx;
            else
                terrain = varargin{1};
            end
            obj.ground = surf(terrain.Tx,terrain.Ty,terrain.Tz,'FaceColor',[0.5 0.8 0.5]); hold on;
        end
        
        function playing = get.isPlaying(obj)
            playing = strcmp(obj.tmr.Running, 'on');
        end
        
        function set.isPlaying(obj, play)
            if ~obj.isPlaying && play
                start(obj.tmr);
                notify(obj, 'playStateChanged');
            elseif obj.isPlaying && ~play
                stop(obj.tmr);
                notify(obj, 'playStateChanged');
            end
        end
        
        function set.currentTime(obj, time)
            obj.currentTime = time;
            
            if obj.currentTime > obj.endTime %#ok<*MCSUP>
                obj.currentTime = obj.endTime;
            elseif obj.currentTime < obj.startTime
                obj.currentTime = obj.startTime;
            end
        end
    end
    
    methods (Sealed)
        function Animate(obj, Freeze)
            if ~exist('Freeze', 'var')
                Freeze = false;
            end
            
            if obj.currentTime >= obj.endTime
                obj.currentTime = obj.endTime;
                x = GetData(obj, obj.currentTime);
                
                notify(obj, 'newTimeStep', Animator.TimeStepData(obj.currentTime, x));
                
                obj.Draw(obj.currentTime, x);
                obj.HandleAxis(obj.currentTime, x);
                
                notify(obj, 'reachedEnd', Animator.TimeStepData(obj.currentTime, x));
                
                if obj.isLooping
                    if ~Freeze
                        obj.currentTime = obj.startTime;
                    end
                else
                    obj.isPlaying = false;
                end
            else
                x = GetData(obj, obj.currentTime);
                
                notify(obj, 'newTimeStep', Animator.TimeStepData(obj.currentTime, x));
                
                obj.Draw(obj.currentTime, x);
                obj.HandleAxis(obj.currentTime, x);
                
                if ~Freeze
                    obj.currentTime = obj.currentTime + obj.TimerDelta*obj.speed;
                end
            end
        end
    end
    
    methods
        function HandleAxis(obj, t, x)
            [center, radius, yaw] = GetCenter(obj, t, x);
            if length(radius) == 1
                axis(obj.axs, [center(1)-radius, center(1)+radius, center(2)-radius, center(2)+radius,center(3)-radius/3, center(3)+radius]);
            else
                axis(obj.axs, radius);
            end
            
            hAngle = 0;
            vAngle = 0;
            
            switch(obj.pov)
                case Animator.AnimatorPointOfView.North
                    hAngle = hAngle + 0;
                case Animator.AnimatorPointOfView.South
                    hAngle = hAngle + 180;
                case Animator.AnimatorPointOfView.East
                    hAngle = hAngle - 90;
                case Animator.AnimatorPointOfView.West
                    hAngle = hAngle + 90;
                case Animator.AnimatorPointOfView.Front
                    hAngle = hAngle + yaw;
                case Animator.AnimatorPointOfView.Back
                    hAngle = hAngle + 180 + yaw;
                case Animator.AnimatorPointOfView.Left
                    hAngle = hAngle - 90 + yaw;
                case Animator.AnimatorPointOfView.Right
                    hAngle = hAngle + 90 + yaw;
                case Animator.AnimatorPointOfView.TopSouthEast
                    hAngle = hAngle + 225;
                    vAngle = vAngle + 45;
                case Animator.AnimatorPointOfView.TopFrontLeft
                    hAngle = hAngle + 225 + yaw;
                    vAngle = vAngle + 45;
            end
            
            if obj.pov ~= Animator.AnimatorPointOfView.Free
                view(obj.axs, hAngle, vAngle);
            end
        end
        
        function Draw(obj, t, x)
                        
            obj.display.update(x);
            
            
            [center, radius, ~] = GetCenter(obj, t, x);
            delete(obj.text);
%             obj.text = text(x(1)-0.5,center(2),1.8,['t = ',sprintf('%.2f',t)]); %#ok<CPROPLC>
%             obj.text.FontSize = 14;
%             obj.text.FontWeight = 'Bold';
%             obj.text.Color = [0,0,0];
            %             set(obj.text);
            
            % Add Zero Dynamics
            delete(obj.z1);
%             obj.z1 = text(x(1)+0.25,0,x(2)-0.2,['z = [',sprintf('%.2f',z1_func(x)),',',sprintf('%.2f',z2_func(x)),']']); %#ok<CPROPLC>
            obj.z1 = text(x(1)+0.1,0,x(2)-0.2,['$z_1 = $',sprintf('%.2f',z1_func(x))],'Interpreter','latex'); %#ok<CPROPLC>
            obj.z1.FontSize = 36;
            obj.z1.FontWeight = 'Bold';
            obj.z1.Color = [0,0,0];
            
            
            radius = 1;
            axis(obj.axs, [x(1)-0.5, x(1)+1.5, center(2)-radius, center(2)+radius,-0.2, 2]);
            set(obj.fig, 'Color', 'None');
            set(obj.axs,'XColor',[1 1 1]); 
            set(obj.axs,'YColor',[1 1 1]); 
            set(obj.axs,'ZColor',[1 1 1]); 
            latexify; fontsize(16);
            
            drawnow;
        end
        
        function [center, radius, yaw] = GetCenter(obj, t, x)            
            center = [0,0,0];
            radius = 1;
            yaw = 0;
        end
        
        function x = GetData(obj, t)
            t_start = obj.t_all(1);
            t_end = obj.t_all(end);
            delta_t = t_end - t_start;
            
            
            
            if t < t_start || t > t_end
                val = floor((t - t_start) / delta_t);
                t = t - val * delta_t;
            end
            
            if t < t_start
                t = t_start;
            elseif t > t_end
                t = t_end;
            end
            
            n = length(obj.t_all);
            x = obj.x_all(:, 1); % Default
            
            a = 1;
            b = n;
            
            while (a <= b)
                c = floor((a + b) / 2);
                
                if t < obj.t_all(c)
                    x = obj.x_all(:, c);
                    b = c - 1;
                elseif t > obj.t_all(c)
                    a = c + 1;
                else
                    x = obj.x_all(:, c);
                    break;
                end
            end
            
            
        end
    end
    
    events
        newTimeStep
        playStateChanged
        reachedEnd
    end
    
end
