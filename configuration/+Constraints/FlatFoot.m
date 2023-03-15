function FlatFoot(bounds, nlp, whichStance)
% constraints for swing foot clearance


    % constraints on swing foot roll and pitch
    domain = nlp.Plant;
    x = domain.States.x;
    
    if strcmp(whichStance,'Right')
        [frame, ~, ~] = ContactFrames.LeftSole(domain);
    else
        [frame, ~, ~] = ContactFrames.RightSole(domain);
    end
    
    orientation = getEulerAngles(domain, frame);
    
    pitch_constr_fun = SymFunction(['nsf_pitch_',domain.Name], orientation(2), x);
    
    % For RABBIT:
    eps = deg2rad(0);
%     zero_orientation = 0;
%     addNodeConstraint(nlp, pitch_constr_fun, {'x'}, floor(nlp.NumNode/2), 0-eps, 0+eps, 'Nonlinear');
    addNodeConstraint(nlp, pitch_constr_fun, {'x'}, 'all', 0-eps, 0+eps, 'Nonlinear');
    addNodeConstraint(nlp, pitch_constr_fun, {'x'}, 'terminal', 0, 0, 'Nonlinear');

end

