          %% Function: applyCost
%
% Description: Applies a desired cost function to continous domains of the
%   provided nlp. "CostType" should be a cell array of text strings
%   corresponding to the desired cost seen in the switch statement below.
%
% _________________________________________________________________________

function [ nlp ] = applyCost( behavior, nlp, CostType, weight, vars )

% Common variables
q = behavior.robotModel.States.x;
dq = behavior.robotModel.States.dx;
ddq = behavior.robotModel.States.ddx;


vhip = dq('BasePosX');
mg   = 9.81 * sum([behavior.robotModel.Links(:).Mass]); 
% Assign cost to each vertex
vertices = fields(behavior.vertices);
for i = 1:numel(vertices)
    phaseName = behavior.vertices.(vertices{i}).Name;
    phaseIndex = nlp.getPhaseIndex(phaseName);
    phase = nlp.Phase(phaseIndex);
    domain = phase.Plant;
    
    u  = domain.Inputs.Control.u;
    Be = domain.Gmap.Control.u;
%     p  = domain.Params.pposition;
%     a = SymVariable(tomatrix(domain.Params.aposition(:))); %a  = domain.Params.aposition;
    
    if contains(lower(domain.Name),'right')
        p_sf = domain.getCartesianPosition(domain.ContactPoints.RightSole);
        p_nsf = domain.getCartesianPosition(domain.ContactPoints.LeftSole);
    else
        p_sf = domain.getCartesianPosition(domain.ContactPoints.LeftSole);
        p_nsf = domain.getCartesianPosition(domain.ContactPoints.RightSole);
    end
    
    switch CostType{i}
        case 'TorqueSquare'
            u2 = weight.*tovector(norm(u).^2);
            u2_fun = SymFunction(['torque_', phase.Name], u2, {u});
            addRunningCost(nlp.Phase(phaseIndex), u2_fun, {'u'});          
            
        case 'mCOT'
            cot     = sqrt(sum((tovector(u)*(Be'*dq)).^2)).^2 / (mg * vhip);
            cot_fun = SymFunction(['cot_' phase.Name], cot, {u, dq});
%             addRunningCost(nlp.Phase(phaseIndex), cot_fun, {'u', 'dx'});
            addNodeCost(nlp.Phase(phaseIndex), cot_fun, {'u', 'dx'},'all');

        case 'impact'
            delta = 0.05;
            a = 100; % stepness of sigmoid (to approximate max function)
            if isfield(behavior.options,'Slope')
                slope = behavior.options.Slope;
                nsf_height = p_nsf(3) - (tan(slope)*p_nsf(1));
                soft_max = tovector((-nsf_height+delta)/(1+exp(a*(-delta+nsf_height))));
                impact_cost_fun = SymFunction(['impact_cost_',domain.Name],soft_max,{q});
            else
                error('not implemented yet');
            end
            addRunningCost(nlp.Phase(phaseIndex), impact_cost_fun, {'x'});                         
            
        case 'BaseMovement'
            if nargin < 5
                vars = [0;0];
            end
            
            if strcmp(behavior.robotModel.Joints(6).Name, 'BaseRotZ')
                qbIndices = 1:6;
                auxdata = [vars; zeros(4,1)];
            else
                qbIndices = 1:3;
                auxdata = [vars;0];
            end
            
            vd = SymVariable('vd',[length(auxdata),1]);
            
            baseMov = weight.* tovector(sum((vd - dq(qbIndices)).^2));
            baseMovFun = SymFunction(['BaseMovement_', phase.Name], baseMov, {dq}, {vd});
            addRunningCost(nlp.Phase(phaseIndex), baseMovFun, {'dx'}, {auxdata});
            
        case 'robustness'
          
            for n = phase.NumNode
                nlpFunc = NlpFunction('Name','robustNLP',...
                    'Dimension',1, ...
                    'SymFunc',[],...
                    'Funcs',struct('Jac','computeJSaltationOpt','JacStruct','computeJSaltationOptStruct','Hess','','HessStruct','','Func','computeSaltationWrap'),...
                    'DepVariables',[phase.OptVarTable.x(n);phase.OptVarTable.dx(n)]);
                addCost(nlp.Phase(phaseIndex),'maxeigSaltFunc',n, nlpFunc)
            end
            
        case 'none'
            u2_fun = SymFunction(['nocost_', phase.Name], 0, {u});
            addRunningCost(nlp.Phase(phaseIndex), u2_fun, {'u'});        
end

end