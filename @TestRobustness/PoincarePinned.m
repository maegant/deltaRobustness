function xkp1_pinned = PoincarePinned(obj,gait,xk,d,rangeFlag,animateFlag)
% Get Poincare Return Map 

% Flag for returning x_{k+1} for entire range d \in [-\delta,\delta]
if nargin < 5
    rangeFlag = 0;
end

xkFull = obj.getFull(gait,xk,d);

% Make sure H

% Use reset map to get post-impact state
guard = obj.behavior.hybridSystem.Gamma.Edges.Guard{end};
[~, x0, ~]  = guard.calcDiscreteMap(0, xkFull);

%%%% Forward Simulate for entire range d \in [-delta,delta]
if rangeFlag
    logger = obj.fsl(gait,x0,-abs(d));
    
    % Get xkp1 states associated with d \in [-delta,delta]
    x = logger.flow.states.x;
    dx = logger.flow.states.dx;
    nsf_all = arrayfun(@(i) nsf_posZ(x(:,i)),1:size(x,2));
    vnsf_all = arrayfun(@(i) nsf_velZ(x(:,i),dx(:,i)),1:size(x,2));
    
    % Find index when h(x) = dmax
    inds = find(nsf_all <= abs(d) & vnsf_all < 0);
    if ~isempty(inds)
        start_ind = inds(1);
        xkp1 = [logger.flow.states.x(:,start_ind:end);logger.flow.states.dx(:,start_ind:end)];
    
        % Check that xkp1 contains states from [-delta,delta]
        nsf_pos = arrayfun(@(i) nsf_posZ(xkp1(1:end/2,i)), 1:size(xkp1,2)); 
        nsf_vel = arrayfun(@(i) nsf_velZ(xkp1(1:end/2,i),xkp1(end/2+1:end,i)), 1:size(xkp1,2)); 
        pos_err = 0.002;
        max_condition = find(abs(nsf_pos - abs(d)) < pos_err & nsf_vel < 0);
        min_condition = find(abs(nsf_pos + abs(d)) < pos_err & nsf_vel < 0);
        if isempty(max_condition) || isempty(min_condition)
            xkp1 = [];
        end
        
    else
        xkp1 = [];
    end
    
%%%% Forward simulate for only a single d
else
    logger = obj.fsl(gait,x0,d);
    xkp1 = [logger.flow.states.x(:,end);logger.flow.states.dx(:,end)];
end

% Translate to pinned model
xkp1_pinned = [];
for i = 1:size(xkp1,2)
    xkp1_pinned(:,i) = obj.getPinned(xkp1(:,i));
end

% Animate if desired
if nargin < 6
    animateFlag = 0;
end
if animateFlag
    Plot.LoadAnimator(obj.behavior, logger);
end

end