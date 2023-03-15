function x = getFull(obj,gait,xPinned,d)

if length(xPinned) == 11
pitchoffset = obj.footpitch(gait);
x = zeros(18,1);
x(4:5) = xPinned(1:2);
x(7:9) = xPinned(3:5);
x(13:18) = xPinned(6:11);

% put stance foot on ground
sf_pitch = euler_sf_rSS(x(1:end/2));
x(3) = x(3) - sf_pitch(2) + pitchoffset;
sf_offset = p_sf_rSS(x(1:end/2));
x(1) = -sf_offset(1);
x(2) = -sf_offset(3);

% If upsidedown, flip:
if x(2) < 0
    x(3) = x(3) + pi;
    sf_offset = p_sf_rSS(x(1:end/2));
    x(1) = -sf_offset(1);
    x(2) = -sf_offset(3);
end

%flat swing foot
sf_offset = euler_nsf_rSS(x(1:end/2));
x(6) = x(6) - sf_offset(2) + pitchoffset;

% Solve for velocities using exported jacobian of floating base frame
% relative to stance foot
x(12) = global_angularvel(x(1:end/2),x(end/2+1:end));
body_vel = global_vel(x(1:end/2),x(end/2+1:end));
x(10) = body_vel(1);
x(11) = body_vel(2);

elseif length(xPinned) == 9
    
x = zeros(14,1);
x(4:7) = xPinned(1:4);
x(10:14) = xPinned(5:9);

% Set torso angle such that swing foot is on the guard (h(x) = d)
nsf_offset = p_nsf_rSS(x(1:end/2))-p_sf_rSS(x(1:end/2));
pitch_offset = atan(nsf_offset(3)/nsf_offset(1));
pitch_desired = atan(d/nsf_offset(1));
x(3) = x(3) + (pitch_offset-pitch_desired);

% zero stance foot
x = obj.zeroStanceFoot(x);

% Get global coordinate velocities
body_vel = global_vel(x(1:end/2),x(end/2+1:end));
x(8) = body_vel(1);
x(9) = body_vel(2);

end

end