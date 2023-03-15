function domain = RightSS(model,phaseType, behavior_opts)
% Define dynamics & control for all domains.
% model: a robotLinks model
% _________________________________________________________________________

domain = copy(model);
domain.setName('RightSS');

domain = Domain.SingleSupportPointFoot(domain, 'Right', phaseType, behavior_opts);

end