function [frame, fric_coef, geometry] = RightSole(model)
    
    frame = ToContactFrame(model.ContactPoints.RightSole, ...
                            'PlanarLineContactWithFriction');
    
    [params,fric_coef] = Params();
    footParams = params.rFoot;
    geometry.la = footParams.width/2;
    geometry.lb = footParams.width/2;
    geometry.La = footParams.lengthToHeel;
    geometry.Lb = footParams.lengthToToe;
end
