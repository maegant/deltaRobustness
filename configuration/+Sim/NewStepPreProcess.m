function params = NewStepPreProcess(sys, t, x, controller, params) %#ok<INUSL>
    
    y = struct2array(sys.VirtualConstraints);
    
    for i=1:numel(y)
        if strcmp(y(i).PhaseType,'TimeBased')
            params.(y(i).PhaseParamName) = t + params.(y(i).PhaseParamName);
        elseif strcmp(y(i).PhaseType, 'StateBased') && i == numel(y)
%             nx = length(x)/2;
%             tau = calcPhaseVariable(y(end), t, x(1:nx), x(nx+1:end), params.(y(i).PhaseParamName));
%             if tau{1} < 0
%                 delta = tau{1}*(params.(y(i).PhaseParamName)(1) - params.(y(i).PhaseParamName)(2)) ...
%                     +  params.(y(i).PhaseParamName)(2);
%                 params.(y(i).PhaseParamName)(2) =  delta;
%             end
        end  
    end
    if strcmp(y(i).PhaseType,'TimeBased')
        controller.Param.time_start = t;
    else
%         controller.Param.time_start = delta;
    end
    
    % For blending controller
    for i=1:numel(y) %for each rel degree output
        y_i = y(i);
        offset_param = y_i.OffsetParamName;
        if y_i.hasOffset
            offset = params.(offset_param);
            y_a{i} = calcActual(y_i, x(1:end/2), x(end/2+1:end), offset);
        else
            y_a{i} = calcActual(y_i, x(1:end/2), x(end/2+1:end));
        end
        y_init{i} = calcDesired(y_i, t, x(1:end/2), x(end/2+1:end), params.(y_i.OutputParamName), params.(y_i.PhaseParamName));
        tau_init{i} = calcPhaseVariable(y(end), t, x(1:end/2), x(end/2+1:end), params.(y(i).PhaseParamName));
    end
    controller.Param.yinit = y_init;
    controller.Param.tauinit = tau_init;
    
end