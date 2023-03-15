function obj = plotLyapunov(obj,deltas,chis, numsteps)

% Setup Figure
f(1) = figure(111); clf;

% Make sure Lyapunov function is updated
obj.getLyap;

% Find Bound \|x - x^*\| \leq M \alpha^k \|x_0 - x^*\| + \gamma \delta
for i = 1:length(obj.gaits)
    
    % Check Lyapunov Condition
    k1 = obj.gaits(i).lyap.k1;
    k2 = obj.gaits(i).lyap.k2;
    k3 = obj.gaits(i).lyap.k3;
    k = obj.gaits(i).lyap.k;
        
    % extract fixed point
    xstar = obj.gaits(i).nominal.xstar;
    xstarPinned = obj.getPinned(xstar);
    
    %% Plot Lyapunov condition for Random Points in B_{r1}
    clear lhs rhs x
    for n = 1:20
        % Get random point within B_{r2}
        x(:,n) = obj.getRandomPinned(xstar,chis(i)*abs(deltas(i)),i,0);
        
        % Get Poincare return map for random step height
        dRand = unifrnd(-deltas(i),deltas(i),1);
        fprintf('Gait %i, Sample %i, d = %1.3f \n',i,n,dRand);
        Pxd = obj.PoincarePinned(i,x(:,n),dRand,0,0);
        [~, lhs(n), rhs(n)] = obj.checkLyapCond(i,Pxd,x(:,n),xstarPinned);
    end
    
    subplot(2,2,i)
    p1 = plot(lhs(1,:),'Color',[0.7,0.7,0.7],'LineWidth',2); hold on;
    p2 = plot(rhs','--k','LineWidth',2);
    xlim([1,length(lhs)]);
    yrange = [min([lhs;rhs],[],'all'),max([lhs;rhs],[],'all')];
    ybuffer = 0.2*diff(yrange);
    ylim([yrange(1)-ybuffer,yrange(2)+ybuffer]);
    legend([p1,p2],{'$V(P(x,d)) - V(x)$, $d \sim U(-\delta,\delta)$',...
                            '$-k|x-x^*|$'});
    xlabel({'Random Sample $k$',''});
    title([sprintf('Gait %i: Lyapunov Condition for Random',i),' $x \in B_{r_1}(0)$']);
    
    %% Plot ISS Bound
    % Forward Simulate N steps
    clear logger_sim step_heights xm
    x0 = obj.gaits(i).params{1}.x0;
    for n = 1:numsteps
        fprintf('Simulating for Gait %i, Step %i ... \n',i,n);
        step_heights(n) = unifrnd(-deltas(i),deltas(i));
        logger_sim(n) = obj.fsl(i,x0,step_heights(n),1);
        xm(:,n) = [logger_sim(n).flow.states.x(:,end);...
              logger_sim(n).flow.states.dx(:,end)];
        guard = obj.behavior.hybridSystem.Gamma.Edges.Guard{end};
        [~, x0, ~]  = guard.calcDiscreteMap(0, xm(:,n));
    end
    
    % Get x and Pxd
    xVec = xm(:,1:end-1);
    PxVec = xm(:,2:end);
    
    % Translate to Pinned Model
    for n = 1:size(xVec,2)
        xVecP(:,n) = obj.getPinned(xVec(:,n));
        PxVecP(:,n) = obj.getPinned(PxVec(:,n));
    end
    xstarP = obj.getPinned(xstar);
    
    
    % Make Plot
    x0 = xVecP(:,1);
    M = (k2/k1)^(1/2);
    gamma = M*chis(i);
    alpha = (1-(k/k2))^(1/2);
    isslhs = vecnorm(PxVecP-xstarP,2,1);
    issrhs = M*(alpha.^(1:length(isslhs)))*norm(xstarP-xstarP,2) + (gamma*deltas(i));
    subplot(2,2,2+i);
    p1 = plot(isslhs,'Color',[0.7,0.7,0.7],'LineWidth',2); hold on;
    p2 = plot(issrhs,'--k','LineWidth',2); 
    legend([p1,p2],{'$|x_k-x^*|$','$M\alpha^k |x_0-x^*| + \gamma \delta$'})
    xlabel('Step $k$');
    xlim([1,length(isslhs)]);
    yrange = [min([isslhs;issrhs],[],'all'),max([isslhs;issrhs],[],'all')];
    ybuffer = 0.2*diff(yrange);
    ylim([yrange(1)-ybuffer,yrange(2)+ybuffer]);
    title(sprintf('max$|%s(DP_0(x^*))| = %1.3f$','\lambda',max(abs(eig(obj.gaits(i).DP0)))),'Interpreter','latex');
    latexify; fontsize(16);
    
end
    
%%% Save figure
screenSize = get(0,'ScreenSize');
figSize = [600*1 280*1]; %half of page width by num rows
f(1).Position = [(screenSize(3)-figSize(1))/2 (screenSize(4)-figSize(2))/2 figSize];

f(1).PaperPositionMode = 'auto';
name = fullfile('Saved_Figures','lyapunov_results.pdf');
print(f(1),name,'-bestfit','-dpdf','-r300');
system(['pdfcrop ',name,' ',name]);

end
