function MakeGIFSteps(conGUI,logger,folder)

delay_time = 1/15; %the delay time in seconds between frames

np = length(logger);

t = [];
q = [];
for i=1:np
    if i == 1
        t = [t, logger(i).flow.t]; %#ok<*AGROW>
        q = [q, logger(i).flow.states.x];
    else
        
        % Reset time to be continuous
        t_offset = t(end)-logger(i).flow.t(1);
        t = [t, logger(i).flow.t+t_offset]; %#ok<*AGROW>
        
        % Reset stance foot position to be continuous
        qtemp = logger(i).flow.states.x;
        sf_offset = p_nsf_rSS(q(:,end))-p_sf_rSS(qtemp(:,1));
        qtemp(1,:) = qtemp(1,:)+sf_offset(1);
        qtemp(2,:) = qtemp(2,:)+sf_offset(3);
        q = [q, qtemp];
                
    end
end

% get correct resolution for animation:
des_t = 0:delay_time:t(end);
diff_t = abs(repmat(t,length(des_t),1)-des_t');
[~,des_inds] = min(diff_t,[],2);


if ~isfolder(folder)
    mkdir(folder)
end

gif(fullfile(folder,'animation.gif'),'DelayTime',delay_time,'overwrite',true);
for i = des_inds'
    conGUI.anim.Draw(t(i),q(:,i))
    gif
end


%     plotGaitTiles(conGUI.anim,logger,folder);

end