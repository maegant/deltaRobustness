function obj = plotLyapunovBall(obj, deltas, chis, numSamples)

% Setup Figure
f(1) = figure(110); clf;

% Make sure Lyapunov condition is updated
obj.getLyap;

% Forward simulate N samples in B_r2 and plot lyapunov gradiant
for i = 1:length(obj.gaits)
    
    xstar = obj.gaits(i).nominal.xstar;
    xstarPinned = obj.getPinned(xstar);
    
    % Get loggers for N random initial conditions
    clear lhs rhs x dVec
    for n = 1:numSamples
        
        fprintf('Simulating for Gait %i, Step %i ... \n',i,n);
        x(:,n) = obj.getRandomPinned(xstar,chis(i)*abs(deltas(i)), i, 0);
            
        % Get Poincare return map for a single delta
        dVec(n) = unifrnd(-deltas(i),deltas(i),1);
        Pxd = obj.PoincarePinned(i,x(:,n),dVec(n),0,0);
        [~, templhs, temprhs] = obj.checkLyapCond(i,Pxd,x(:,n),xstarPinned);
        if isempty(templhs)
            lhs(n) = 1000;
            rhs(n) = 0;
        else
            lhs(n) = templhs; rhs(n) = temprhs;
        end
    end
    
    % Plot showing \|x-x^*\| compared to d
    subplot(1,2,i)
    p1 = scatter(dVec*1000,lhs,50,[0.7,0.7,0.7],'filled'); hold on;
    p2 = scatter(dVec*1000,rhs,50,[0,0,0],'filled'); 
    xlabel('$d \in [-\delta,\delta]$ (mm)');
    title(sprintf('Gait %i',i));
    latexify; fontsize(16);
    
end
    
%%% Save figure
screenSize = get(0,'ScreenSize');
figSize = [600*1 280*0.5]; %half of page width by num rows
f(1).Position = [(screenSize(3)-figSize(1))/2 (screenSize(4)-figSize(2))/2 figSize];

f(1).PaperPositionMode = 'auto';
name = fullfile('Saved_Figures','lyapunovcondition.pdf');
print(f(1),name,'-bestfit','-dpdf','-r300');
system(['pdfcrop ',name,' ',name]);

end
