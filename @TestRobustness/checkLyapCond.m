function [check, lhs, rhs] = checkLyapCond(obj,gait,Pxd,x,xstar)

% Get P from discrete-time lyapunov equation ((DP0)*P*(DP0)' - P + I)
obj.getLyap;
P = obj.gaits(gait).lyap.P;
Q = obj.gaits(gait).lyap.Q;
k1 = obj.gaits(gait).lyap.k1;
k2 = obj.gaits(gait).lyap.k2;
k3 = obj.gaits(gait).lyap.k3;
k = obj.gaits(gait).lyap.k;

% Need to check that \lambda_min(P)\|x-x^*\|^2 \leq V(x) \leq
% \lambda_max(P)\|x-x^*\|^2
xnorm = norm(x-xstar,2);
if V(x-xstar,P)+1e-4 < k1*(xnorm^2)
    error('Condition violated:  V(x) >= k1\|x\|^2')
elseif V(x-xstar,P)-1e-4 > k2*(xnorm^2)
    error('Condition violated: V(x) <= k2\|x\|^2')
end

% Need to check that \|x-x^*\| = \delta
% fprintf('Norm(x-x^*,2) = %4.4f \n',xnorm);

% check that \|x-x^*\| = \chi\delta
if size(Pxd,2) > 1
    lhs = -Inf;
    for i = 1:size(Pxd,2)
        temp = V(Pxd(:,i)-xstar,P) - V(x-xstar,P);
        lhs = max(temp,lhs);
    end
else
    lhs = V(Pxd-xstar,P) - V(x-xstar,P);
end

% subtract numerical precision error of simulation from lhs
lhs = lhs-1e-6;
rhs = -k*xnorm^2;
check = lhs <= rhs;


%%%% FOR DEBUGGING PURPOSES
if ~check
%     [Pxd-xstar,x-xstar]
%     xfull = obj.getFull(gait,x,0);
%     obj.checkState(xfull(1:end/2));
%     fprintf('failed, visualize state');
    
    
%     [obj.getFull(gait,Pxd,0),xfull,obj.getFull(gait,xstar,0)]
    
%     guard = obj.behavior.hybridSystem.Gamma.Edges.Guard{end};
%     [~,x0,~] = guard.calcDiscreteMap(0,obj.getFull(gait,xstar,0));
%     logger = obj.fsl(gait,x0,0);
%     Plot.LoadAnimator(obj.behavior,logger);
        
end

end

%%
function ret = V(x,P)

ret = x'*P*x;

end
