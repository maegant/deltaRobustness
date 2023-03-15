/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:24:19 GMT-08:00
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
  double t45;
  double t69;
  double t78;
  double t91;
  double t99;
  double t198;
  double t236;
  double t448;
  double t461;
  double t556;
  double t295;
  double t305;
  double t368;
  double t372;
  double t378;
  double t380;
  double t565;
  double t575;
  double t624;
  double t638;
  double t710;
  double t775;
  double t946;
  double t963;
  double t1155;
  double t1219;
  double t1342;
  double t1429;
  double t1469;
  double t1470;
  double t1528;
  double t1558;
  double t1605;
  double t1623;
  double t1673;
  double t1675;
  double t1702;
  double t1710;
  double t1714;
  double t1727;
  double t1751;
  double t1764;
  double t1793;
  double t1795;
  double t1826;
  double t1873;
  double t1874;
  double t1904;
  double t1932;
  double t1959;
  double t1963;
  double t2135;
  double t2153;
  double t2154;
  double t2186;
  double t2271;
  double t2275;
  double t2373;
  double t2396;
  double t2398;
  double t2484;
  double t2508;
  double t2539;
  double t2610;
  double t2611;
  double t2624;
  double t2639;
  double t2736;
  double t2858;
  double t2883;
  double t3345;
  double t3371;
  double t3374;
  double t3397;
  double t3423;
  double t3430;
  double t3573;
  double t3615;
  double t3619;
  double t3633;
  double t3687;
  t45 = Cos(var1[3]);
  t69 = Sin(var1[2]);
  t78 = -1.*t45*t69;
  t91 = Cos(var1[2]);
  t99 = Sin(var1[3]);
  t198 = -1.*t91*t99;
  t236 = t78 + t198;
  t448 = t91*t45;
  t461 = -1.*t69*t99;
  t556 = t448 + t461;
  t295 = Power(t236,2);
  t305 = 6.8522*t295;
  t368 = t45*t69;
  t372 = t91*t99;
  t378 = t368 + t372;
  t380 = 6.8522*t236*t378;
  t565 = Power(t556,2);
  t575 = 6.8522*t565;
  t624 = -1.*t91*t45;
  t638 = t69*t99;
  t710 = t624 + t638;
  t775 = 6.8522*t556*t710;
  t946 = t305 + t380 + t575 + t775;
  t963 = -0.5*var2[2]*t946;
  t1155 = -0.5*var2[3]*t946;
  t1219 = t963 + t1155;
  t1342 = var2[0]*t1219;
  t1429 = 6.8522*t236*t556;
  t1469 = 6.8522*t378*t556;
  t1470 = t1429 + t1469;
  t1528 = -0.5*var2[0]*t1470;
  t1558 = 10.2783*t236*t556;
  t1605 = 3.4261*t378*t556;
  t1623 = 10.2783*t236*t710;
  t1673 = 3.4261*t378*t710;
  t1675 = t1558 + t1605 + t1623 + t1673;
  t1702 = -0.5*var2[2]*t1675;
  t1710 = -0.5*var2[3]*t1675;
  t1714 = t1702 + t1710;
  t1727 = var2[0]*t1714;
  t1751 = 3.4261*t295;
  t1764 = 3.4261*t236*t378;
  t1793 = 3.4261*t565;
  t1795 = 3.4261*t556*t710;
  t1826 = t1751 + t1764 + t1793 + t1795;
  t1873 = -0.5*var2[0]*t1826;
  t1874 = -1.*t45;
  t1904 = 1. + t1874;
  t1932 = -0.4999*t1904;
  t1959 = -0.6493*t45;
  t1963 = t1932 + t1959;
  t2135 = t1963*t99;
  t2153 = 0.14939999999999998*t45*t99;
  t2154 = t2135 + t2153;
  t2186 = 3.4261*t236*t2154;
  t2271 = t1963*t45;
  t2275 = Power(t99,2);
  t2373 = -0.14939999999999998*t2275;
  t2396 = t2271 + t2373;
  t2398 = 3.4261*t710*t2396;
  t2484 = -1.*t1963*t99;
  t2508 = -0.14939999999999998*t45*t99;
  t2539 = t2484 + t2508;
  t2610 = 3.4261*t236*t2539;
  t2611 = Power(t45,2);
  t2624 = 0.14939999999999998*t2611;
  t2639 = t2271 + t2624;
  t2736 = 3.4261*t2639*t556;
  t2858 = 0. + t2271 + t2624;
  t2883 = 3.4261*t2858*t556;
  t3345 = 3.4261*t2154*t556;
  t3371 = 3.4261*t236*t2396;
  t3374 = t3345 + t3371;
  t3397 = 3.4261*t2639*t378;
  t3423 = 3.4261*t2539*t556;
  t3430 = t3397 + t3423 + t3345 + t3371;
  t3573 = 0.25592966999999994*var2[2]*t710;
  t3615 = 0.25592966999999994*var2[3]*t710;
  t3619 = t3573 + t3615;
  t3633 = var2[0]*t3619;
  t3687 = 0.25592966999999994*var2[0]*t236;
  p_output1[0]=t1342;
  p_output1[1]=t1342;
  p_output1[2]=-0.5*t1470*var2[2] - 0.5*t1470*var2[3];
  p_output1[3]=t1528;
  p_output1[4]=t1528;
  p_output1[5]=t1727;
  p_output1[6]=t1727;
  p_output1[7]=-0.5*t1826*var2[2] - 0.5*t1826*var2[3];
  p_output1[8]=t1873;
  p_output1[9]=t1873;
  p_output1[10]=var2[0]*(-0.5*(t2186 + t2398)*var2[2] - 0.5*(t2186 + t2398 + t2610 + t2736)*var2[3]);
  p_output1[11]=var2[0]*(-0.5*(t2186 + t2398 + t2610 + t2883)*var2[2] - 0.5*(t2186 + t2398 + 6.8522*t236*t2539 + t2736 + t2883 + 3.4261*t2539*t378 + 3.4261*(0. - 0.14939999999999998*t2611 - 1.*t1963*t45)*t556)*var2[3]);
  p_output1[12]=-0.5*t3374*var2[2] - 0.5*t3430*var2[3];
  p_output1[13]=-0.5*t3374*var2[0];
  p_output1[14]=-0.5*t3430*var2[0];
  p_output1[15]=t3633;
  p_output1[16]=t3633;
  p_output1[17]=0.25592966999999994*t236*var2[2] + 0.25592966999999994*t236*var2[3];
  p_output1[18]=t3687;
  p_output1[19]=t3687;
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

#include "J_Ce1_vec_L2_J1_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L2_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
