function checkState(obj,x)

robot_disp = Plot.LoadDisplay(obj.behavior);
set(robot_disp.axs,'XLim',[-0.5,0.5]);
view(robot_disp.axs,[0,0]);
robot_disp.update(x);

end