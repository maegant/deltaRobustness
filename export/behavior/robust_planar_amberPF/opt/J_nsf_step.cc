/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:52 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t871;
  double t21;
  double t2060;
  double t2638;
  double t2782;
  double t2854;
  double t2925;
  double t2960;
  double t3077;
  double t3078;
  double t3138;
  double t3205;
  double t977;
  double t3379;
  double t3429;
  double t3597;
  double t3606;
  double t3607;
  double t3664;
  double t3684;
  double t3697;
  double t3712;
  double t367;
  double t834;
  double t1660;
  double t1664;
  double t2798;
  double t2849;
  double t3857;
  double t3866;
  double t3900;
  double t3912;
  double t3914;
  double t3916;
  double t3442;
  double t3465;
  double t4017;
  double t4031;
  double t4053;
  double t4083;
  double t4092;
  double t4100;
  double t3778;
  double t3801;
  double t3803;
  double t3842;
  double t3906;
  double t3927;
  double t3942;
  double t3956;
  double t3970;
  double t3975;
  double t3999;
  double t4073;
  double t4116;
  double t4119;
  double t4146;
  double t4153;
  double t4184;
  double t4187;
  double t4191;
  double t4196;
  double t2669;
  double t3012;
  double t3208;
  double t3262;
  double t3295;
  double t3328;
  double t3336;
  double t4200;
  double t4220;
  double t4228;
  double t4289;
  double t4296;
  double t4306;
  double t4315;
  double t4343;
  double t4346;
  double t3395;
  double t3661;
  double t3713;
  double t3721;
  double t3737;
  double t3747;
  double t3754;
  double t4347;
  double t4349;
  double t4357;
  double t4365;
  double t4384;
  double t4387;
  double t4407;
  t871 = Sin(var1[2]);
  t21 = Cos(var1[3]);
  t2060 = Cos(var1[2]);
  t2638 = Sin(var1[3]);
  t2782 = Cos(var1[4]);
  t2854 = -1.*t21*t871;
  t2925 = -1.*t2060*t2638;
  t2960 = t2854 + t2925;
  t3077 = -1.*t2060*t21;
  t3078 = t871*t2638;
  t3138 = t3077 + t3078;
  t3205 = Sin(var1[4]);
  t977 = Cos(var1[5]);
  t3379 = Sin(var1[5]);
  t3429 = Cos(var1[6]);
  t3597 = -1.*t977*t871;
  t3606 = -1.*t2060*t3379;
  t3607 = t3597 + t3606;
  t3664 = -1.*t2060*t977;
  t3684 = t871*t3379;
  t3697 = t3664 + t3684;
  t3712 = Sin(var1[6]);
  t367 = -1.*t21;
  t834 = 1. + t367;
  t1660 = -1.*t977;
  t1664 = 1. + t1660;
  t2798 = -1.*t2782;
  t2849 = 1. + t2798;
  t3857 = t21*t871;
  t3866 = t2060*t2638;
  t3900 = t3857 + t3866;
  t3912 = t2060*t21;
  t3914 = -1.*t871*t2638;
  t3916 = t3912 + t3914;
  t3442 = -1.*t3429;
  t3465 = 1. + t3442;
  t4017 = t977*t871;
  t4031 = t2060*t3379;
  t4053 = t4017 + t4031;
  t4083 = t2060*t977;
  t4092 = -1.*t871*t3379;
  t4100 = t4083 + t4092;
  t3778 = -1.*var2[1];
  t3801 = -0.4999*t834*t871;
  t3803 = 0.4999*t1664*t871;
  t3842 = 0.4999*t2060*t2638;
  t3906 = -0.9063*t2849*t3900;
  t3927 = 0.9063*t3916*t3205;
  t3942 = t2782*t3900;
  t3956 = t3916*t3205;
  t3970 = t3942 + t3956;
  t3975 = -1.373025*t3970;
  t3999 = -0.4999*t2060*t3379;
  t4073 = 0.9063*t3465*t4053;
  t4116 = -0.9063*t4100*t3712;
  t4119 = t3429*t4053;
  t4146 = t4100*t3712;
  t4153 = t4119 + t4146;
  t4184 = 1.373025*t4153;
  t4187 = t3778 + t3801 + t3803 + t3842 + t3906 + t3927 + t3975 + t3999 + t4073 + t4116 + t4184;
  t4191 = -50.*t4187;
  t4196 = Power(2.71828182845905,t4191);
  t2669 = -0.4999*t2060*t2638;
  t3012 = -0.9063*t2849*t2960;
  t3208 = 0.9063*t3138*t3205;
  t3262 = t2782*t2960;
  t3295 = t3138*t3205;
  t3328 = t3262 + t3295;
  t3336 = -1.373025*t3328;
  t4200 = 1. + t4196;
  t4220 = Power(t4200,-2);
  t4228 = -0.4999*t871*t2638;
  t4289 = -0.9063*t2849*t3916;
  t4296 = 0.9063*t2960*t3205;
  t4306 = t2782*t3916;
  t4315 = t2960*t3205;
  t4343 = t4306 + t4315;
  t4346 = -1.373025*t4343;
  t3395 = 0.4999*t2060*t3379;
  t3661 = 0.9063*t3465*t3607;
  t3713 = -0.9063*t3697*t3712;
  t3721 = t3429*t3607;
  t3737 = t3697*t3712;
  t3747 = t3721 + t3737;
  t3754 = 1.373025*t3747;
  t4347 = 0.4999*t871*t3379;
  t4349 = 0.9063*t3465*t4100;
  t4357 = -0.9063*t3607*t3712;
  t4365 = t3429*t4100;
  t4384 = t3607*t3712;
  t4387 = t4365 + t4384;
  t4407 = 1.373025*t4387;
  p_output1[0]=t2669 + t3012 + t3208 + t3336 + t3395 + t3661 + t3713 + t3754 - 0.4999*t1664*t871 + 0.4999*t834*t871 - 50.*t4196*t4220*(0.4999*t1664*t2060 + t4228 + t4289 + t4296 + t4346 + t4347 + t4349 + t4357 + t4407 - 0.4999*t2060*t834)*var2[0];
  p_output1[1]=t2669 + t3012 + t3208 + t3336 - 0.4999*t21*t871 - 50.*t4196*t4220*(0.4999*t2060*t21 + t4228 + t4289 + t4296 + t4346)*var2[0];
  p_output1[2]=0.9063*t2782*t2960 - 0.9063*t3205*t3916 - 1.373025*(t3262 - 1.*t3205*t3916) - 50.*t4196*t4220*(-0.9063*t3205*t3900 + 0.9063*t2782*t3916 - 1.373025*(-1.*t3205*t3900 + t4306))*var2[0];
  p_output1[3]=t3395 + t3661 + t3713 + t3754 + 0.4999*t871*t977 - 50.*t4196*t4220*(t4347 + t4349 + t4357 + t4407 - 0.4999*t2060*t977)*var2[0];
  p_output1[4]=-0.9063*t3429*t3607 + 0.9063*t3712*t4100 + 1.373025*(t3721 - 1.*t3712*t4100) - 50.*t4196*t4220*(0.9063*t3712*t4053 - 0.9063*t3429*t4100 + 1.373025*(-1.*t3712*t4053 + t4365))*var2[0];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
    ( !(mrows == 1 && ncols == 2) && 
      !(mrows == 2 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_nsf_step.hh"

namespace RightSS
{

void J_nsf_step_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
