function domain = RightSS2(model,phaseType, behavior_opts)
% Define dynamics & control for all domains.
% model: a robotLinks model
% _________________________________________________________________________

domain = copy(model);
domain.setName('RightSS2');

domain = Domain.SingleSupportFF_MI(domain, 'Right', phaseType, behavior_opts,'late');

end