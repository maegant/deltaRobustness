/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:24:22 GMT-08:00
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
  double t34;
  double t301;
  double t202;
  double t70;
  double t380;
  double t410;
  double t438;
  double t448;
  double t556;
  double t94;
  double t302;
  double t378;
  double t565;
  double t575;
  double t638;
  double t648;
  double t835;
  double t679;
  double t710;
  double t814;
  double t940;
  double t1219;
  double t1263;
  double t1265;
  double t1429;
  double t1469;
  double t1523;
  double t1527;
  double t1558;
  double t1623;
  double t1714;
  double t1727;
  double t1751;
  double t1673;
  double t1795;
  double t1937;
  double t1959;
  double t2275;
  double t2396;
  double t2448;
  double t2712;
  double t2713;
  double t2834;
  double t2845;
  double t2846;
  double t3011;
  double t3073;
  double t3248;
  double t2466;
  double t2502;
  double t2539;
  double t3237;
  double t3397;
  double t1306;
  double t1835;
  double t1862;
  double t3778;
  double t3781;
  double t3836;
  t34 = Cos(var1[3]);
  t301 = Sin(var1[3]);
  t202 = Cos(var1[2]);
  t70 = Sin(var1[2]);
  t380 = -1.*t34;
  t410 = 1. + t380;
  t438 = -0.4999*t410;
  t448 = -0.6493*t34;
  t556 = t438 + t448;
  t94 = -1.*t34*t70;
  t302 = -1.*t202*t301;
  t378 = t94 + t302;
  t565 = t556*t301;
  t575 = 0.14939999999999998*t34*t301;
  t638 = t565 + t575;
  t648 = 3.4261*t378*t638;
  t835 = t556*t34;
  t679 = -1.*t202*t34;
  t710 = t70*t301;
  t814 = t679 + t710;
  t940 = Power(t301,2);
  t1219 = -0.14939999999999998*t940;
  t1263 = t835 + t1219;
  t1265 = 3.4261*t814*t1263;
  t1429 = -1.*t556*t301;
  t1469 = -0.14939999999999998*t34*t301;
  t1523 = t1429 + t1469;
  t1527 = 3.4261*t378*t1523;
  t1558 = Power(t34,2);
  t1623 = 0.14939999999999998*t1558;
  t1714 = t202*t34;
  t1727 = -1.*t70*t301;
  t1751 = t1714 + t1727;
  t1673 = t835 + t1623;
  t1795 = 3.4261*t1673*t1751;
  t1937 = 0. + t835 + t1623;
  t1959 = 3.4261*t1937*t1751;
  t2275 = t34*t70;
  t2396 = t202*t301;
  t2448 = t2275 + t2396;
  t2712 = 3.4261*t638*t1751;
  t2713 = 3.4261*t378*t1263;
  t2834 = 3.4261*t1673*t2448;
  t2845 = 3.4261*t1523*t1751;
  t2846 = t2834 + t2845 + t2712 + t2713;
  t3011 = 3.4261*t638*t814;
  t3073 = 3.4261*t2448*t1263;
  t3248 = 3.4261*t1523*t814;
  t2466 = -1.*t556*t34;
  t2502 = -0.14939999999999998*t1558;
  t2539 = 0. + t2466 + t2502;
  t3237 = 3.4261*t1673*t378;
  t3397 = 3.4261*t1937*t378;
  t1306 = t648 + t1265;
  t1835 = t1527 + t648 + t1795 + t1265;
  t1862 = -0.5*var2[3]*t1835;
  t3778 = 6.8522*t1673*t638;
  t3781 = 6.8522*t1523*t1263;
  t3836 = t3778 + t3781;
  p_output1[0]=var2[2]*(t1862 - 0.5*t1306*var2[2]);
  p_output1[1]=var2[2]*(-0.5*(t1265 + t1527 + t1959 + t648)*var2[2] - 0.5*(t1265 + t1795 + t1959 + 3.4261*t1523*t2448 + 3.4261*t1751*t2539 + 6.8522*t1523*t378 + t648)*var2[3]);
  p_output1[2]=-1.*(t2712 + t2713)*var2[2] - 0.5*t2846*var2[3];
  p_output1[3]=-0.5*t2846*var2[2];
  p_output1[4]=var2[2]*(-0.5*(t3011 + t3073)*var2[2] - 0.5*(t3011 + t3073 + t3237 + t3248)*var2[3]);
  p_output1[5]=var2[2]*(-0.5*(t3011 + t3073 + t3248 + t3397)*var2[2] - 0.5*(t2845 + t3011 + t3073 + t3237 + t3397 + 3.4261*t2539*t378 + 6.8522*t1523*t814)*var2[3]);
  p_output1[6]=t1862 - 1.*t1306*var2[2];
  p_output1[7]=-0.5*t1835*var2[2];
  p_output1[8]=-0.5*(6.8522*Power(t1523,2) + 6.8522*t1673*t1937 + 6.8522*t1263*t2539 + 6.8522*t1523*t638)*var2[2]*var2[3];
  p_output1[9]=-0.5*t3836*var2[3];
  p_output1[10]=-0.5*t3836*var2[2];
  p_output1[11]=0.25592966999999994*t2539*var2[2]*var2[3];
  p_output1[12]=0.25592966999999994*t1523*var2[3];
  p_output1[13]=0.25592966999999994*t1523*var2[2];
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L2_J3_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L2_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
