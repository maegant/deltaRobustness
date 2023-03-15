function domain = RightSS(model,phaseType,behavior_opts)
% Define dynamics & control for all domains.
% model: a robotLinks model
% _________________________________________________________________________

domain = copy(model);
domain.setName('RightSS1');

domain = Domain.SingleSupport(domain, 'Right', phaseType,behavior_opts);

end