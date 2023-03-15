/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:31 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t1061;
  double t720;
  double t732;
  double t1196;
  double t508;
  double t1058;
  double t1478;
  double t1757;
  double t2308;
  double t2347;
  double t2464;
  double t2896;
  double t3232;
  double t3873;
  double t3877;
  double t3883;
  double t3776;
  double t3795;
  double t3846;
  double t3855;
  double t3890;
  double t3891;
  double t3916;
  double t3927;
  double t4073;
  double t4075;
  double t4134;
  double t4139;
  double t4141;
  double t4143;
  double t4167;
  double t3627;
  double t3633;
  double t4223;
  double t4291;
  double t4307;
  double t4220;
  double t4221;
  double t4309;
  double t4315;
  double t4343;
  double t4357;
  double t4196;
  double t4375;
  double t4377;
  double t4407;
  double t2122;
  double t3011;
  double t3307;
  double t3327;
  double t3345;
  double t3480;
  double t3488;
  double t4017;
  double t4029;
  double t4031;
  double t4053;
  double t4074;
  double t4083;
  double t4085;
  double t4114;
  double t4121;
  double t4171;
  double t4183;
  double t4184;
  double t4187;
  double t4455;
  double t4457;
  double t4484;
  double t3668;
  double t3935;
  double t4767;
  double t4785;
  double t4634;
  double t4666;
  double t4669;
  double t4670;
  double t4671;
  double t4866;
  double t4870;
  double t4890;
  double t4893;
  double t4936;
  double t4999;
  double t5021;
  double t4200;
  double t4362;
  double t5153;
  double t5181;
  double t5246;
  double t5248;
  double t5256;
  double t5257;
  double t5261;
  double t5296;
  double t5297;
  double t5306;
  double t5352;
  double t5381;
  double t5403;
  double t5440;
  double t5442;
  double t5455;
  double t5456;
  double t5135;
  double t5144;
  double t5145;
  double t5163;
  double t5195;
  double t5197;
  double t5207;
  double t5226;
  double t5266;
  double t5280;
  double t5285;
  double t5289;
  double t5483;
  double t5486;
  double t5493;
  double t5656;
  double t5723;
  t1061 = Cos(var1[2]);
  t720 = Cos(var1[5]);
  t732 = Sin(var1[2]);
  t1196 = Sin(var1[5]);
  t508 = Cos(var1[6]);
  t1058 = -1.*t720*t732;
  t1478 = -1.*t1061*t1196;
  t1757 = t1058 + t1478;
  t2308 = t1061*t720;
  t2347 = -1.*t732*t1196;
  t2464 = t2308 + t2347;
  t2896 = Sin(var1[6]);
  t3232 = t508*t1757;
  t3873 = -1.*t1061*t720;
  t3877 = t732*t1196;
  t3883 = t3873 + t3877;
  t3776 = -0.4999*t1061*t1196;
  t3795 = -1.*t508;
  t3846 = 1. + t3795;
  t3855 = -0.9063*t3846*t1757;
  t3890 = 0.9063*t3883*t2896;
  t3891 = t3883*t2896;
  t3916 = t3232 + t3891;
  t3927 = -1.373025*t3916;
  t4073 = -0.9063*t1757*t2896;
  t4075 = -1.*t1757*t2896;
  t4134 = 0.9063*t508*t3883;
  t4139 = t508*t3883;
  t4141 = t4139 + t4075;
  t4143 = -1.373025*t4141;
  t4167 = t4134 + t4073 + t4143;
  t3627 = -1.*t720;
  t3633 = 1. + t3627;
  t4223 = t720*t732;
  t4291 = t1061*t1196;
  t4307 = t4223 + t4291;
  t4220 = 0.4999*t732*t1196;
  t4221 = -0.9063*t3846*t3883;
  t4309 = 0.9063*t4307*t2896;
  t4315 = t4307*t2896;
  t4343 = t4139 + t4315;
  t4357 = -1.373025*t4343;
  t4196 = var2[6]*t4167;
  t4375 = -0.4999*t1061*t720;
  t4377 = t4375 + t4220 + t4221 + t4309 + t4357;
  t4407 = var2[5]*t4377;
  t2122 = 0.9063*t508*t1757;
  t3011 = -0.9063*t2464*t2896;
  t3307 = -1.*t2464*t2896;
  t3327 = t3232 + t3307;
  t3345 = -1.373025*t3327;
  t3480 = t2122 + t3011 + t3345;
  t3488 = var3[6]*t3480;
  t4017 = -0.4999*t720*t732;
  t4029 = t4017 + t3776 + t3855 + t3890 + t3927;
  t4031 = var3[5]*t4029;
  t4053 = -0.9063*t508*t2464;
  t4074 = -1.*t508*t2464;
  t4083 = t4074 + t4075;
  t4085 = -1.373025*t4083;
  t4114 = t4053 + t4073 + t4085;
  t4121 = var2[6]*t4114;
  t4171 = var2[2]*t4167;
  t4183 = var2[5]*t4167;
  t4184 = t4121 + t4171 + t4183;
  t4187 = var2[6]*t4184;
  t4455 = var2[2]*t4377;
  t4457 = t4196 + t4455 + t4407;
  t4484 = var2[5]*t4457;
  t3668 = 0.4999*t3633*t732;
  t3935 = t3668 + t3776 + t3855 + t3890 + t3927;
  t4767 = 2.*var2[6]*t3480;
  t4785 = 2.*var2[5]*t4029;
  t4634 = -0.9063*t508*t4307;
  t4666 = -1.*t508*t4307;
  t4669 = t4666 + t3307;
  t4670 = -1.373025*t4669;
  t4671 = t4634 + t3011 + t4670;
  t4866 = -0.4999*t732*t1196;
  t4870 = -0.9063*t3846*t2464;
  t4890 = 0.9063*t1757*t2896;
  t4893 = t508*t2464;
  t4936 = t1757*t2896;
  t4999 = t4893 + t4936;
  t5021 = -1.373025*t4999;
  t4200 = 0.4999*t1061*t3633;
  t4362 = t4200 + t4220 + t4221 + t4309 + t4357;
  t5153 = -0.9063*t3883*t2896;
  t5181 = -1.*t3883*t2896;
  t5246 = 0.9063*t508*t4307;
  t5248 = t508*t4307;
  t5256 = t5248 + t5181;
  t5257 = -1.373025*t5256;
  t5261 = t5246 + t5153 + t5257;
  t5296 = 0.4999*t1061*t1196;
  t5297 = -0.9063*t3846*t4307;
  t5306 = 0.9063*t2464*t2896;
  t5352 = t2464*t2896;
  t5381 = t5248 + t5352;
  t5403 = -1.373025*t5381;
  t5440 = 0.4999*t720*t732;
  t5442 = t5440 + t5296 + t5297 + t5306 + t5403;
  t5455 = var2[5]*t5442;
  t5456 = var2[6]*t5261;
  t5135 = var3[6]*t4167;
  t5144 = var3[5]*t4377;
  t5145 = -0.9063*t508*t1757;
  t5163 = -1.*t508*t1757;
  t5195 = t5163 + t5181;
  t5197 = -1.373025*t5195;
  t5207 = t5145 + t5153 + t5197;
  t5226 = var2[6]*t5207;
  t5266 = var2[2]*t5261;
  t5280 = var2[5]*t5261;
  t5285 = t5226 + t5266 + t5280;
  t5289 = var2[6]*t5285;
  t5483 = var2[2]*t5442;
  t5486 = t5483 + t5455 + t5456;
  t5493 = var2[5]*t5486;
  t5656 = 2.*var2[6]*t4167;
  t5723 = 2.*var2[5]*t4377;
  p_output1[0]=t3488 + t4031 + t4187 + t4484 + var2[2]*(t4196 + t4407 + t4362*var2[2]) + t3935*var3[2];
  p_output1[1]=t3488 + t4031 + t4187 + t4484 + t4457*var2[2] + t4029*var3[2];
  p_output1[2]=t4184*var2[2] + t4184*var2[5] + var2[6]*(t4114*var2[2] + t4114*var2[5] + (t4053 + t4309 - 1.373025*(t4074 + t4315))*var2[6]) + t3480*var3[2] + t3480*var3[5] + t4671*var3[6];
  p_output1[3]=t4767 + t4785 + 2.*t3935*var2[2];
  p_output1[4]=t4767 + t4785 + 2.*t4029*var2[2];
  p_output1[5]=2.*t3480*var2[2] + 2.*t3480*var2[5] + 2.*t4671*var2[6];
  p_output1[6]=1.;
  p_output1[7]=0. - 0.4999*t1061*t3633 + t4866 + t4870 + t4890 + t5021;
  p_output1[8]=0. + t4866 + t4870 + t4890 + t5021 + 0.4999*t1061*t720;
  p_output1[9]=0. - 0.9063*t2896*t4307 - 1.373025*(-1.*t2896*t4307 + t4893) + 0.9063*t2464*t508;
  p_output1[10]=t5135 + t5144 + t5289 + t5493 + var2[2]*(t5455 + t5456 + (t5296 + t5297 + t5306 + t5403 - 0.4999*t3633*t732)*var2[2]) + t4362*var3[2];
  p_output1[11]=t5135 + t5144 + t5289 + t5493 + t5486*var2[2] + t4377*var3[2];
  p_output1[12]=t5285*var2[2] + t5285*var2[5] + var2[6]*(t5207*var2[2] + t5207*var2[5] + (t5145 + t5306 - 1.373025*(t5163 + t5352))*var2[6]) + t4167*var3[2] + t4167*var3[5] + t4114*var3[6];
  p_output1[13]=t5656 + t5723 + 2.*t4362*var2[2];
  p_output1[14]=t5656 + t5723 + 2.*t4377*var2[2];
  p_output1[15]=2.*t4167*var2[2] + 2.*t4167*var2[5] + 2.*t4114*var2[6];
  p_output1[16]=1.;
  p_output1[17]=0. + t3668 + t3776 + t3855 + t3890 + t3927;
  p_output1[18]=0. + t3776 + t3855 + t3890 + t3927 + t4017;
  p_output1[19]=0. + t2122 + t3011 + t3345;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightSole_RightSS.hh"

namespace RightSS
{

void J_ddh_RightSole_RightSS_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
