function obj = getLyap(obj)

if ~isfield(obj.gaits(1),'DP0')
    obj.compute_DP0;
end

for i = 1:length(obj.gaits)
% Compute P using discrete time Lyapunov Equation
A = obj.gaits(i).DP0;
Q = 1*eye(size(A));
P = dlyap(A',Q);

% Need to check that P = P' > 0
if ~issymmetric(P) || ~all(eigs(P) > 0)
    error('something wrong with P, check DP0 calculation')
end

obj.gaits(i).lyap.P = P;
obj.gaits(i).lyap.Q = Q;
obj.gaits(i).lyap.k1 = min(eigs(P));
obj.gaits(i).lyap.k2 = max(eigs(P));
obj.gaits(i).lyap.k3 = min(eigs(Q));
obj.gaits(i).lyap.k = 1e-10;

% Need to check that k3 < k1
if obj.gaits(i).lyap.k3 < obj.gaits(i).lyap.k1
%     fprintf('k3 < k1')
else
    error('k3 is not < k1')
end

end

end
