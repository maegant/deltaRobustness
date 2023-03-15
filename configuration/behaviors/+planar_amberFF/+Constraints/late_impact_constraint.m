function late_impact_constraint(nlp, src, tar, bounds, varargin)
% Apply NL constraint on am defined edge

%% joint-position & joint-velocity stitching
plant = nlp.Plant;
plant.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});

%% Customize periodic motions for the last domain
    
% NOT time-continuous for the last edge
removeConstraint(nlp,'tContDomain');

% The relabeling of joint coordiante is no longer valid
removeConstraint(nlp,'xDiscreteMapLeftLateImpactRelabel');
    
end