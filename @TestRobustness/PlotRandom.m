function obj = PlotRandom(obj, num_steps_to_plot)
%% Load Animation of Walking
for i = 1:length(obj.gaits)
        
    % Get Logger from Object
    logger_sim = obj.gaits(i).simulated_random.logger;
    step_heights = obj.gaits(i).simulated_random.step_heights;
    
    % Get Step Locations from Logger
    plot_steps = min(num_steps_to_plot,length(logger_sim));
    
    % Load Animator
    conGUI = LoadAnimatorSteps(obj,i, logger_sim(1:plot_steps), step_heights(1:plot_steps));

    % Make Gif of Animator
    gifname = sprintf('gait%i',i);
    giffolder = fullfile('Saved_Figures','gifs',gifname);
    obj.MakeGIFSteps(conGUI,logger_sim(1:plot_steps),giffolder);
end

end