function domain = RightSS1(model,phaseType, behavior_opts)
% Define dynamics & control for all domains.
% model: a robotLinks model
% _________________________________________________________________________

domain = copy(model);
domain.setName('RightSS1');

domain = Domain.SingleSupportFF_MI(domain, 'Right', phaseType, behavior_opts,'zero');

end