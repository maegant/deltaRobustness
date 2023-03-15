function plotAlgResults(obj, deltastar1,chistar1,deltastar2,chistar2)

chimax = 50;

screenSize = get(0,'ScreenSize');
f(1) = figure(107); clf;
figSize = [600*1 280*0.5]; %half of page width by num rows
f(1).Position = [(screenSize(3)-figSize(1))/2 (screenSize(4)-figSize(2))/2 figSize];

% Make first gait plot
subplot(1,2,1)
scatter(deltastar1*1000,chistar1,100,[0,0,0],'filled'); hold on;
scatter((deltastar1(end)+0.001)*1000,chimax,100,[1,0,0],'x','LineWidth',3);
xlabel('$\delta^*$ (mm)','Interpreter','latex')
ylabel('$\chi^*$','Interpreter','latex')
xlim([0,max((deltastar1(end)+0.001)*1000,(deltastar2(end)+0.001)*1000)]);
ylim([0,chimax]);
xticks([1:max((deltastar1(end)+0.001)*1000,(deltastar2(end)+0.001)*1000)]);
title(sprintf('max$|%s(DP_0(x^*))| = %1.3f$','\lambda',max(abs(eig(obj.gaits(1).DP0)))),'Interpreter','latex');

% Make second plot
subplot(1,2,2)
scatter(deltastar2*1000,chistar2,100,[0,0,0],'filled'); hold on;
scatter((deltastar2(end)+0.001)*1000,chimax,100,[1,0,0],'x','LineWidth',3);
xlabel('$\delta^*$ (mm)','Interpreter','latex')
ylabel('$\chi^*$','Interpreter','latex')
xlim([0,max((deltastar1(end)+0.001)*1000,(deltastar2(end)+0.001)*1000)]);
xticks([1:max((deltastar1(end)+0.001)*1000,(deltastar2(end)+0.001)*1000)]);
ylim([0,chimax]);
title(sprintf('max$|%s(DP_0(x^*))| = %1.3f$','\lambda',max(abs(eig(obj.gaits(2).DP0)))),'Interpreter','latex');

latexify; fontsize(16);


%%% Save figure
f(1).PaperPositionMode = 'auto';
name = fullfile('alg_results.pdf');
print(f(1),name,'-bestfit','-dpdf','-r300');
system(['pdfcrop ',name,' ',name]);


end