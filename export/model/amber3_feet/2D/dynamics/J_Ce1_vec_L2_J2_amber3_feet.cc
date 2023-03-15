/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:24:21 GMT-08:00
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
  double t305;
  double t107;
  double t236;
  double t368;
  double t380;
  double t386;
  double t410;
  double t295;
  double t372;
  double t378;
  double t448;
  double t556;
  double t565;
  double t595;
  double t638;
  double t648;
  double t438;
  double t575;
  double t679;
  double t710;
  double t775;
  double t796;
  double t812;
  double t835;
  double t1219;
  double t1263;
  double t1265;
  double t1306;
  double t1342;
  double t1429;
  double t1469;
  double t1481;
  double t1605;
  double t1623;
  double t1673;
  double t1714;
  double t1727;
  double t1751;
  double t1764;
  double t1779;
  double t1793;
  double t1795;
  double t1835;
  double t1862;
  double t1864;
  double t1912;
  double t2135;
  double t2153;
  double t2154;
  double t2271;
  double t2275;
  double t2373;
  double t2539;
  double t2396;
  double t2448;
  double t2466;
  double t2508;
  double t2611;
  double t2624;
  double t2639;
  double t2766;
  double t2846;
  double t2858;
  double t2935;
  double t2992;
  double t3011;
  double t3055;
  double t2884;
  double t2896;
  double t3248;
  double t3263;
  double t3556;
  double t3573;
  double t3615;
  double t3633;
  double t3657;
  double t3670;
  double t3774;
  double t3778;
  double t3781;
  double t3836;
  double t3882;
  t305 = Cos(var1[2]);
  t107 = Cos(var1[3]);
  t236 = Sin(var1[2]);
  t368 = Sin(var1[3]);
  t380 = t305*t107;
  t386 = -1.*t236*t368;
  t410 = t380 + t386;
  t295 = -1.*t107*t236;
  t372 = -1.*t305*t368;
  t378 = t295 + t372;
  t448 = t107*t236;
  t556 = t305*t368;
  t565 = t448 + t556;
  t595 = -1.*t305*t107;
  t638 = t236*t368;
  t648 = t595 + t638;
  t438 = 10.2783*t378*t410;
  t575 = 3.4261*t565*t410;
  t679 = 10.2783*t378*t648;
  t710 = 3.4261*t565*t648;
  t775 = t438 + t575 + t679 + t710;
  t796 = -0.5*var2[2]*t775;
  t812 = -0.5*var2[3]*t775;
  t835 = t796 + t812;
  t1219 = var2[1]*t835;
  t1263 = Power(t378,2);
  t1265 = 3.4261*t1263;
  t1306 = 3.4261*t378*t565;
  t1342 = Power(t410,2);
  t1429 = 3.4261*t1342;
  t1469 = 3.4261*t410*t648;
  t1481 = t1265 + t1306 + t1429 + t1469;
  t1605 = -0.5*var2[1]*t1481;
  t1623 = 6.8522*t1263;
  t1673 = 6.8522*t378*t565;
  t1714 = 6.8522*t410*t648;
  t1727 = Power(t648,2);
  t1751 = 6.8522*t1727;
  t1764 = t1623 + t1673 + t1714 + t1751;
  t1779 = -0.5*var2[2]*t1764;
  t1793 = -0.5*var2[3]*t1764;
  t1795 = t1779 + t1793;
  t1835 = var2[1]*t1795;
  t1862 = 6.8522*t378*t410;
  t1864 = 6.8522*t378*t648;
  t1912 = t1862 + t1864;
  t2135 = -0.5*var2[1]*t1912;
  t2153 = -1.*t107;
  t2154 = 1. + t2153;
  t2271 = -0.4999*t2154;
  t2275 = -0.6493*t107;
  t2373 = t2271 + t2275;
  t2539 = t2373*t107;
  t2396 = t2373*t368;
  t2448 = 0.14939999999999998*t107*t368;
  t2466 = t2396 + t2448;
  t2508 = 3.4261*t2466*t648;
  t2611 = Power(t368,2);
  t2624 = -0.14939999999999998*t2611;
  t2639 = t2539 + t2624;
  t2766 = 3.4261*t565*t2639;
  t2846 = Power(t107,2);
  t2858 = 0.14939999999999998*t2846;
  t2935 = -1.*t2373*t368;
  t2992 = -0.14939999999999998*t107*t368;
  t3011 = t2935 + t2992;
  t3055 = 3.4261*t3011*t648;
  t2884 = t2539 + t2858;
  t2896 = 3.4261*t2884*t378;
  t3248 = 0. + t2539 + t2858;
  t3263 = 3.4261*t3248*t378;
  t3556 = 3.4261*t378*t2466;
  t3573 = 3.4261*t648*t2639;
  t3615 = t3556 + t3573;
  t3633 = 3.4261*t378*t3011;
  t3657 = 3.4261*t2884*t410;
  t3670 = t3633 + t3556 + t3657 + t3573;
  t3774 = 0.25592966999999994*var2[2]*t565;
  t3778 = 0.25592966999999994*var2[3]*t565;
  t3781 = t3774 + t3778;
  t3836 = var2[1]*t3781;
  t3882 = 0.25592966999999994*var2[1]*t648;
  p_output1[0]=t1219;
  p_output1[1]=t1219;
  p_output1[2]=-0.5*t1481*var2[2] - 0.5*t1481*var2[3];
  p_output1[3]=t1605;
  p_output1[4]=t1605;
  p_output1[5]=t1835;
  p_output1[6]=t1835;
  p_output1[7]=-0.5*t1912*var2[2] - 0.5*t1912*var2[3];
  p_output1[8]=t2135;
  p_output1[9]=t2135;
  p_output1[10]=var2[1]*(-0.5*(t2508 + t2766)*var2[2] - 0.5*(t2508 + t2766 + t2896 + t3055)*var2[3]);
  p_output1[11]=var2[1]*(-0.5*(t2508 + t2766 + t3055 + t3263)*var2[2] - 0.5*(t2508 + t2766 + t2896 + t3263 + 3.4261*(0. - 1.*t107*t2373 - 0.14939999999999998*t2846)*t378 + 3.4261*t3011*t410 + 6.8522*t3011*t648)*var2[3]);
  p_output1[12]=-0.5*t3615*var2[2] - 0.5*t3670*var2[3];
  p_output1[13]=-0.5*t3615*var2[1];
  p_output1[14]=-0.5*t3670*var2[1];
  p_output1[15]=t3836;
  p_output1[16]=t3836;
  p_output1[17]=0.25592966999999994*t648*var2[2] + 0.25592966999999994*t648*var2[3];
  p_output1[18]=t3882;
  p_output1[19]=t3882;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L2_J2_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L2_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
