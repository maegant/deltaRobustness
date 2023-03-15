function obj = getBound(obj)
% Heuristically compute ISS bound from simulated_logger

if ~isfield(obj.gaits(1),'simulated_random')
    warning('Simulating Random Steps for delta = 0.01, for 50 steps');
    obj.TestRandom(0.01,50);
end

% Setup Figure
f(2) = figure(101); clf;

% Find Bound \|x - x^*\| \leq M \alpha^k \|x_0 - x^*\| + \gamma \delta
for i = 1:length(obj.gaits)
    
    % Get Pre-Impact States
    xImps = arrayfun(@(j) [obj.gaits(i).simulated_random.logger(j).flow.states.x(:,end);...
                           obj.gaits(i).simulated_random.logger(j).flow.states.dx(:,end)], ...
                           1:length(obj.gaits(i).simulated_random.logger),...
                           'UniformOutput',false);
    xImps = cell2mat(xImps);
    
    for j = 1:size(xImps,2)
        xImpsP(:,j) = obj.getPinned(xImps(:,j));
    end
    
    % Get LHS of Bound
    xstarP = obj.getPinned(obj.gaits(i).nominal.xstar);
    lhs = vecnorm(xImpsP-xstarP,2,1);
    
    % Get RHS of Bound
    x0 = obj.getPinned(obj.gaits(i).params{1}.x0);
    
    obj.getLyap;
    M = (obj.gaits(i).lyap.k2/obj.gaits(i).lyap.k1)^(1/2); 
%     M = 1;
    alpha =  (1-(obj.gaits(i).lyap.k3/obj.gaits(i).lyap.k1))^(1/2); %%% CHECK CHECK
    delta = abs(obj.gaits(i).simulated_random.delta);
    
    gamma = max(lhs)/(delta+eps);
    obj.gaits(i).simulated_random.gamma = gamma;
    rhs = M*(alpha.^(1:length(lhs)))*norm(x0-xstarP,2) + (gamma*delta);
    
    % Store ISS Values
    obj.gaits(i).iss.M = M;
    obj.gaits(i).iss.alpha = alpha;
    obj.gaits(i).iss.gamma = gamma;
    obj.gaits(i).iss.delta = delta;
    
    % Plot Bound
    figure(f(2))
    subplot(1,2,i);
    p1 = plot(1:length(lhs),lhs,'color',[0.8,0.8,0.8],'LineWidth',1.5); hold on; 
    if gamma < 1000
    p2 = plot(1:length(lhs),rhs,'color',[0.2,0.2,0.2],'LineWidth',2); 
    end
    
    max_eigen = max(abs(eigs(obj.gaits(i).DP0)));
    title(sprintf('$%s{max}|%s(DP_0(x^*))| = %0.3f$','\textrm','\lambda',max_eigen),'Interpreter','latex')
    if length(lhs) > 1
        xlim([1,length(lhs)]);
    end
%     ylim([0,max(rhs)+(0.4*max(rhs)-min(lhs))])
    ylim([0,4])
    xlabel('$k$','Interpreter','latex');
    ylabel('$\|x_k -x^*\|$','Interpreter','latex');
%     legend([p1,p2],{'$\|x_k - x^*\|$','$M\alpha^k\|x_0 - x^*\| + \gamma \delta$'})

    
end

latexify; fontsize(16);

screenSize = get(0,'ScreenSize');
figSize = [600 280*0.5]; %half of page width by num rows
f(2).Position = [(screenSize(3)-figSize(1))/2 (screenSize(4)-figSize(2))/2 figSize];
    
%%% Save figure
f(2).PaperPositionMode = 'auto';
name = fullfile('Saved_Figures','motivation_bound_figure.pdf');
print(f(2),name,'-bestfit','-dpdf','-r300');
system(['pdfcrop ',name,' ',name]);

end
