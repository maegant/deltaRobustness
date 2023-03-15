function xAll = getDeltaBall(obj,xstar,bound,gait,d)
% Get Perturbations in Principle Directions


xstarPinned = obj.getPinned(xstar);
xAll = repmat(xstarPinned,1,length(xstarPinned)*2);

numStates = length(xstarPinned);
for i = 1:numStates
    xAll(i,i) = xAll(i,i) + bound;
    xAll(i,i+numStates) = xAll(i,i+numStates) - bound;
    
    % Check that nsf_velZ < 0 and that \|x-x^*\| = bound
    xrandFull1 = obj.getFull(gait,xAll(:,i),d);
    if ~(nsf_velZ(xrandFull1(1:end/2),xrandFull1(end/2+1:end)) < 0 && norm(xAll(:,i)-xstarPinned,2)+eps >= bound)
        error('something wrong');
    end
    xrandFull2 = obj.getFull(gait,xAll(:,i+numStates),d);
    if ~(nsf_velZ(xrandFull2(1:end/2),xrandFull2(end/2+1:end)) < 0 && norm(xAll(:,i+numStates)-xstarPinned,2)+eps >= bound)
        error('something wrong');
    end
    
    % Check for minimum step width:
%     if ~abs(nsf_posZ(xRandFull1(1:end/2)) - obj.gaits(gait).nominal.step_length) < 0.01
%         error('step location out of range')
%     end
end

end