function out = ustep(x,trig)
    % Approximates a uniform step function using a sigmoid
    c1 = 50;
%     c1 = 1e3;
    out = 1./(1 + exp(-c1*(x-trig)));
   
end
