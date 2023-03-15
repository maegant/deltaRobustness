/*
 * Automatically Generated from Mathematica.
 * Wed 15 Feb 2023 18:27:22 GMT-08:00
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
  double t166;
  double t968;
  double t1986;
  double t2232;
  double t2680;
  double t2881;
  double t2887;
  double t2969;
  double t3001;
  double t3042;
  double t3063;
  double t3076;
  double t1272;
  double t1882;
  double t2814;
  double t2877;
  double t3446;
  double t3451;
  double t3464;
  double t2588;
  double t2990;
  double t3080;
  double t3091;
  double t3115;
  double t3135;
  double t3261;
  double t3442;
  double t3473;
  double t3500;
  double t3543;
  double t3566;
  double t3619;
  double t3655;
  double t4212;
  double t4239;
  double t4250;
  double t3377;
  double t3696;
  double t3817;
  double t3909;
  double t3935;
  double t3949;
  double t3958;
  double t3963;
  double t3981;
  double t4030;
  double t4106;
  double t4114;
  double t4143;
  double t4180;
  double t4192;
  double t4200;
  double t4263;
  double t4309;
  double t4328;
  double t4342;
  double t4353;
  double t4373;
  double t4382;
  double t4410;
  double t4432;
  double t4467;
  double t4484;
  double t4487;
  double t4518;
  double t4539;
  t166 = Cos(var1[2]);
  t968 = Cos(var1[5]);
  t1986 = Sin(var1[2]);
  t2232 = Sin(var1[5]);
  t2680 = Cos(var1[6]);
  t2881 = -1.*t166*t968;
  t2887 = t1986*t2232;
  t2969 = t2881 + t2887;
  t3001 = t968*t1986;
  t3042 = t166*t2232;
  t3063 = t3001 + t3042;
  t3076 = Sin(var1[6]);
  t1272 = -1.*t968;
  t1882 = 1. + t1272;
  t2814 = -1.*t2680;
  t2877 = 1. + t2814;
  t3446 = -1.*t968*t1986;
  t3451 = -1.*t166*t2232;
  t3464 = t3446 + t3451;
  t2588 = 0.4999*t1986*t2232;
  t2990 = -0.9063*t2877*t2969;
  t3080 = 0.9063*t3063*t3076;
  t3091 = t2680*t2969;
  t3115 = t3063*t3076;
  t3135 = t3091 + t3115;
  t3261 = -1.373025*t3135;
  t3442 = -0.4999*t166*t2232;
  t3473 = -0.9063*t2877*t3464;
  t3500 = 0.9063*t2969*t3076;
  t3543 = t2680*t3464;
  t3566 = t2969*t3076;
  t3619 = t3543 + t3566;
  t3655 = -1.373025*t3619;
  t4212 = t166*t968;
  t4239 = -1.*t1986*t2232;
  t4250 = t4212 + t4239;
  t3377 = 0.4999*t1882*t1986;
  t3696 = -0.4999*t166*t968;
  t3817 = t3696 + t2588 + t2990 + t3080 + t3261;
  t3909 = var2[1]*t3817;
  t3935 = -0.4999*t968*t1986;
  t3949 = t3935 + t3442 + t3473 + t3500 + t3655;
  t3958 = var2[0]*t3949;
  t3963 = t3909 + t3958;
  t3981 = 0.9063*t2680*t2969;
  t4030 = -0.9063*t3464*t3076;
  t4106 = -1.*t3464*t3076;
  t4114 = t3091 + t4106;
  t4143 = -1.373025*t4114;
  t4180 = t3981 + t4030 + t4143;
  t4192 = var2[1]*t4180;
  t4200 = 0.9063*t2680*t3464;
  t4263 = -0.9063*t4250*t3076;
  t4309 = -1.*t4250*t3076;
  t4328 = t3543 + t4309;
  t4342 = -1.373025*t4328;
  t4353 = t4200 + t4263 + t4342;
  t4373 = var2[0]*t4353;
  t4382 = t4192 + t4373;
  t4410 = -0.4999*t1986*t2232;
  t4432 = -0.9063*t2877*t4250;
  t4467 = 0.9063*t3464*t3076;
  t4484 = t2680*t4250;
  t4487 = t3464*t3076;
  t4518 = t4484 + t4487;
  t4539 = -1.373025*t4518;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=(t3377 + t3442 + t3473 + t3500 + t3655)*var2[0] + (0.4999*t166*t1882 + t2588 + t2990 + t3080 + t3261)*var2[1];
  p_output1[3]=t3963;
  p_output1[4]=t4382;
  p_output1[5]=0. - 0.4999*t166*t1882 + t4410 + t4432 + t4467 + t4539;
  p_output1[6]=0. + t3377 + t3442 + t3473 + t3500 + t3655;
  p_output1[7]=t3963;
  p_output1[8]=t3963;
  p_output1[9]=t4382;
  p_output1[10]=0. + t4410 + t4432 + t4467 + t4539 + 0.4999*t166*t968;
  p_output1[11]=0. + t3442 + t3473 + t3500 + t3655 + t3935;
  p_output1[12]=t4382;
  p_output1[13]=t4382;
  p_output1[14]=(-0.9063*t2680*t3063 + t4263 - 1.373025*(-1.*t2680*t3063 + t4309))*var2[0] + (t4030 - 0.9063*t2680*t4250 - 1.373025*(t4106 - 1.*t2680*t4250))*var2[1];
  p_output1[15]=0. - 0.9063*t3063*t3076 + 0.9063*t2680*t4250 - 1.373025*(-1.*t3063*t3076 + t4484);
  p_output1[16]=0. + t4200 + t4263 + t4342;
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
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightSole_vec_RightSS3.hh"

namespace RightSS3
{

void J_fRightSole_vec_RightSS3_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
