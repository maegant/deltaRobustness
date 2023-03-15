function obj = plotPortraits(obj)

if ~isfield(obj.gaits(1),'simulated_random')
    error('Need to first run obj.TestRandom')
end

% Setup Figure
f(1) = figure(106); clf;

if length(obj.gaits(1).nominal.xstar) == 14
    xInds = [4,5,6,7];
else
    xInds = [4,5,7,8];
end

% Plot portraits for gait 1
alpha = 0.7;
greys = [0.3,0.3,0.3,alpha; 0.5,0.5,0.5,alpha; 0.7,0.7,0.7,alpha; 0.9,0.9,0.9,alpha];
greys2 = [0.3,0.3,0.3; 0.5,0.5,0.5; 0.7,0.7,0.7; 0.9,0.9,0.9]-0.2;
% greys2 = repmat(0,4,3);

for i = 1:2
    subplot(1,2,i);
    
    % plot phase portraits from logger data
    % Optional: Plot orbits using shaded region to capture variance
%     clear normx normdx
%     for n = 1:length(obj.gaits(i).simulated_random.logger)
%         for k = 1:4
%             % store normalized periodic orbit in order to get variance
%             % later
%             curx = obj.gaits(i).simulated_random.logger(n).flow.states.x(xInds(k),:);
%             curdx = obj.gaits(i).simulated_random.logger(n).flow.states.dx(xInds(k),:);
%             t = obj.gaits(i).simulated_random.logger(n).flow.t;
%             tau = (t-t(1))/(t(end)-t(1));
%             normTau = linspace(0,1,100);
%             normx{k}(n,:) = interp1(tau,curx,normTau);
%             normdx{k}(n,:) = interp1(tau,curdx,normTau);
%         end
%     end
%     % Plot 1-sigma variance tubes
%     for k = 1:4
%         varx = std(normx{k});
%         vardx = std(normdx{k});
%         meanx = mean(normx{k});
%         meandx = mean(normdx{k});
%         fill([meanx+varx,fliplr(meanx-varx)],[meandx+vardx,meandx-vardx],'blue'); hold on;%'FaceColor',greys(k,:))
%     end
    
    % Otherwise: Plot each orbit separately 
    orbits_x = cell(1,4); orbits_dx = cell(1,4);
    for n = 1:length(obj.gaits(i).simulated_random.logger)
        for k = 1:4
            % concatenate orbits for size of plot later
            orbits_x{k} = cat(2,orbits_x{k},obj.gaits(i).simulated_random.logger(n).flow.states.x(xInds(k),:));
            orbits_dx{k} = cat(2,orbits_dx{k},obj.gaits(i).simulated_random.logger(n).flow.states.dx(xInds(k),:));
            
        end
    end
    % plot all orbits
    for k = 1:4
    plot(orbits_x{k},orbits_dx{k},'-','color',greys(k,:)); hold on
    end
            
            % plot discrete jump
%             if n < length(obj.gaits(i).simulated_random.logger)
%                 plot([obj.gaits(i).simulated_random.logger(n).flow.states.x(xInds(k),end),obj.gaits(i).simulated_random.logger(n+1).flow.states.x(xInds(k),1)],...
%                     [obj.gaits(i).simulated_random.logger(n).flow.states.dx(xInds(k),end),obj.gaits(i).simulated_random.logger(n+1).flow.states.dx(xInds(k),1)],...
%                     '--','color',greys(k,:));
%             end
    
    % plot nominal
    for k = 1:4 
        % plot continuous step
        plot(obj.gaits(i).nominal.logger(1).flow.states.x(xInds(k),:),...
            obj.gaits(i).nominal.logger(1).flow.states.dx(xInds(k),:),'-','color',greys2(k,:),'LineWidth',1.5); hold on
        
        % plot discrete jump
        plot([obj.gaits(i).nominal.logger(1).flow.states.x(xInds(k),end),obj.gaits(i).nominal.logger(1).flow.states.x(xInds(k),1)],...
            [obj.gaits(i).nominal.logger(1).flow.states.dx(xInds(k),end),obj.gaits(i).nominal.logger(1).flow.states.dx(xInds(k),1)],...
            '--','color',greys2(k,:),'LineWidth',1.5);
        title(sprintf('max$|%s(DP_0(x^*))| = %1.3f$','\lambda',max(abs(eig(obj.gaits(i).DP0)))),'Interpreter','latex');
    end
    
end

%%% Formatting
subplot(1,2,1);
xlabel('$\theta$(rad)');
ylabel('$\dot{\theta}$(rad/s)','Interpreter','latex');
% xlim([-1,1.5]);
% ylim([-2.3,3.3]);

subplot(1,2,2);
xlabel('$\theta$(rad)');
ylabel('$\dot{\theta}$(rad/s)','Interpreter','latex');
% xlim([-1,1.5]);
% ylim([-2.3,3.3]);

latexify; fontsize(16);

screenSize = get(0,'ScreenSize');
figSize = [600 280*0.6]; %half of page width by num rows
f(1).Position = [(screenSize(3)-figSize(1))/2 (screenSize(4)-figSize(2))/2 figSize];

name = fullfile('Saved_Figures','motivation_figure.png');
print(f(1),name,'-dpng','-r300');

f(1).PaperPositionMode = 'auto';
f(1).Renderer = 'Painters';
name = fullfile('Saved_Figures','motivation_figure.pdf');
print(f(1),name,'-bestfit','-dpdf','-r300');
system(['pdfcrop ',name,' ',name]);


