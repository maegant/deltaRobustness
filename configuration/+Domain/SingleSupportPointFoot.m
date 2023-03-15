% Single Support 
% 
%       Contacts: Stance Toe, Stance Heel
%       Guard to next domain: swing heel strikes

function domain = SingleSupportPointFoot(domain, stanceLeg, phaseType, behavior_opts)

% Extract state variables
x = domain.States.x;
dx = domain.States.dx;

%% Relative degree 2 outputs -- joint positions (time-based)

%4 outputs -- order based on pinned model
if strcmp(stanceLeg,'Right')
    sl='Right'; nsl = 'Left'; 
    p_nsf = domain.getCartesianPosition(domain.ContactPoints.LeftSole); 
    p_sf  = domain.getCartesianPosition(domain.ContactPoints.RightSole);
else
    sl='Left'; nsl = 'Right';         
    p_nsf = domain.getCartesianPosition(domain.ContactPoints.RightSole); 
    p_sf  = domain.getCartesianPosition(domain.ContactPoints.LeftSole);
end
v_nsf = jacobian(p_nsf,x)*dx;

ya_2    = [x([sl, 'Knee']); x([sl, 'Hip']); x([nsl, 'Hip']), x([nsl, 'Knee'])];
y2_label = { [sl, 'Knee'],    [sl, 'Hip'],    [nsl, 'Hip'],    [nsl, 'Knee']};
    
%% Phase Variable - Time
switch phaseType
    
    case 'TimeBased'
    
    % use time as phase variable if time-based
    t = SymVariable('t');
    p = SymVariable('p',[2,1]);
    tau = (t-p(2))/(p(1)-p(2));
    
    case 'StateBased'
    
    % use linearized hip position as tau if phase-based
    hip_pos = domain.getCartesianPosition(domain.Joints(getJointIndices(domain,'RightHip')));
    phip = hip_pos(1) - p_sf(1);
    deltaphip = linearize(phip, x);
    
    
    %%% define tau(q)
    p = SymVariable('p',[2,1]);
    tau = (deltaphip - p(2))/(p(1)-p(2));
    
    otherwise 
        error("phaseType must be 'TimeBased' or 'StateBased'");
end
    
%% Relative degree 2 output: virtual constraints
y2 = VirtualConstraint(domain,ya_2,'position',...
                    'DesiredType','Bezier',...
                    'PolyDegree',5,...
                    'RelativeDegree',2,...
                    'OutputLabel',{y2_label},...
                    'PhaseType',phaseType,...
                    'PhaseVariable',tau,...
                    'PhaseParams',p,...
                    'Holonomic',true);
domain = addVirtualConstraint(domain,y2);
    
%%  Add holonomic constraints

%%%%%%%%%%%%%%%%%%%%%%%%%% Contacts  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Add Stance Heel Contact    
domain = ContactFrames.PointFootCustom(domain, sl);

%%%%%%%%%%%%%%%%%%%%%%%%% Guard Event  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

if isfield(behavior_opts,'Slope')
    % get guard condition with slope
    slope = behavior_opts.Slope;
    slope_var = SymVariable('slope',[length(slope),1]);
    ground_fun = SymFunction('nsf_slope',p_nsf(3) - (tan(slope_var)*p_nsf(1)),{x},{slope_var});
    h_nsf = UnilateralConstraint(domain, ground_fun, 'nsfslope','x','AuxData',slope);
    
elseif isfield(behavior_opts,'Step')
    % get guard condition with a step of constant height
    step = behavior_opts.Step;
    step_x = behavior_opts.StepX; 
    step_var = SymVariable('step',[length(step),1]);
    step_x_var = SymVariable('stepx',[length(step_x),1]);
    
%     ground_fun = SymFunction('nsf_step',tovector(p_nsf(3)-p_sf(3)-ustep(p_nsf(1)-p_sf(1),step_x_var)*step_var),{x},[step_var,step_x_var]);

%     ground_fun = SymFunction('pnsf_step',tovector((p_nsf(3)-p_sf(3)-step_var)*ustep(p_nsf(1)-p_sf(1),0.1)),{x},step_var);
%     ground_fun = SymFunction('pnsf_step',tovector(p_nsf(3)-p_sf(3)-(ustep(p_nsf(1)-p_sf(1),0.1)*2*step_var)-step_var),{x},step_var);

%     ground_stepup_fun = SymFunction('pnsf_stepup',tovector(((p_nsf(3)-p_sf(3))*(1-ustep(p_nsf(1)-p_sf(1),0.1)))+((p_nsf(3)-p_sf(3)-step_var)*(ustep(p_nsf(1)-p_sf(1),0.1)))),{x},step_var);
%     ground_stepup_fun = SymFunction('pnsf_stepup',tovector((p_nsf(3)-p_sf(3)-step_var)*ustep(p_nsf(1)-p_sf(1),0.1)+(1-ustep(p_nsf(1)-p_sf(1),0.1))),{x},step_var);

    
%     ground_fun = SymFunction('pnsf_step',tovector(((p_nsf(3)-p_sf(3))*ustep(p_nsf(1)-p_sf(1),0))-step_var),{x},step_var); %relies on the stance foot horizontal position starting at 0
%     negvel_fun = SymFunction('vnsf_step',tovector(v_nsf(3)),{x,dx}); %relies on the stance foot horizontal position starting at 0
%     h_nsf = UnilateralConstraint(domain, ground_fun, 'nsfstep',{'x'},'AuxData',[step,step_x]);


    % guard condition for compare_gaits
    ground_fun = SymFunction('nsf_step',tovector((p_nsf(3)-p_sf(3)) - ustep((p_nsf(1)-p_sf(1)),step_x_var)*step_var),{x},[step_var,step_x_var]); %relies on the stance foot horizontal position starting at 0
    h_nsf = UnilateralConstraint(domain,ground_fun, 'nsfstep','x','AuxData',[step,step_x]);
   
end


% add guard condition to domain
domain = addEvent(domain, h_nsf);

% IMPORTANT FOR TIME-BASED:
if strcmp(stanceLeg,'Right')
    domain.PreProcess = @Sim.NewStepPreProcess;
else
    domain.PreProcess = @Sim.MidStepPreProcess;
end
end
