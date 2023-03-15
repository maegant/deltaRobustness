function [frame, fric_coef, geometry] = LeftSole(model)

    frame = ToContactFrame(model.ContactPoints.LeftSole, ...
                            'PlanarLineContactWithFriction');
    
    [params,fric_coef] = Params();
    footParams = params.lFoot;
    geometry.la = footParams.width/2;
    geometry.lb = footParams.width/2;
    geometry.La = footParams.lengthToHeel;
    geometry.Lb = footParams.lengthToToe;
end
