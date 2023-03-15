function mid_impact_constraint(nlp, src, tar, bounds, varargin)
% Apply NL constraint on am defined edge

plant = nlp.Plant;
plant.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});

% Enforce nlp parameter continuity (shared polynomials)
Opt.enforceImpactContinuity(nlp, src, tar);
    
end