function guard = EarlyImpact(tar, stanceFoot, isRelabel, behavior_opts)
    
    % choose proper type
    event_name = 'nsfstepearly';

    % set impact
    if strcmp(stanceFoot,'Right')
        
        if isRelabel
            guard = MultiImpact('LeftEarlyImpactRelabel',tar,event_name);
        else
            guard = MultiImpact('LeftEarlyImpact',tar,event_name);
        end
        
    elseif strcmp(stanceFoot,'Left')
        
        if isRelabel
            guard = MultiImpact('RightEarlyImpactRelabel',tar,event_name);
        else
            guard = MultiImpact('RightEarlyImpact',tar,event_name);
        end
        
    else
        error('something is wrong');
    end
    
    % Relabeling Matrix
    if isRelabel
       if tar.numState == 7
            guard.R = guard.R(:,[1:3,6:7,4:5]);
        else
            guard.R = guard.R(:,[1:3,7:9,4:6]);
       end
    end
    
    guard.addImpactConstraint(struct2array(tar.HolonomicConstraints));
    
    % The guard should not be a rigid impact...
%     constr = fields(guard.ImpactConstraints);
%     guard.removeImpactConstraint(constr);
%     guard.configure();
    

end