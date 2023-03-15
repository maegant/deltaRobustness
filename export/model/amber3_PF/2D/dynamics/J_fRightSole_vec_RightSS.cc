/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:13 GMT-08:00
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
  double t18;
  double t422;
  double t1065;
  double t1136;
  double t1285;
  double t1473;
  double t1506;
  double t1591;
  double t1725;
  double t1811;
  double t1846;
  double t1851;
  double t744;
  double t759;
  double t1362;
  double t1420;
  double t2180;
  double t2264;
  double t2287;
  double t1259;
  double t1619;
  double t1872;
  double t1888;
  double t1965;
  double t2026;
  double t2049;
  double t2143;
  double t2312;
  double t2359;
  double t2365;
  double t2422;
  double t2436;
  double t2445;
  double t3232;
  double t3244;
  double t3246;
  double t2108;
  double t2668;
  double t2679;
  double t2716;
  double t2753;
  double t2780;
  double t2796;
  double t2807;
  double t2812;
  double t2909;
  double t2986;
  double t2992;
  double t3026;
  double t3072;
  double t3100;
  double t3213;
  double t3343;
  double t3370;
  double t3412;
  double t3480;
  double t3498;
  double t3512;
  double t3571;
  double t3682;
  double t3728;
  double t3762;
  double t3766;
  double t3776;
  double t3798;
  double t3823;
  t18 = Cos(var1[2]);
  t422 = Cos(var1[5]);
  t1065 = Sin(var1[2]);
  t1136 = Sin(var1[5]);
  t1285 = Cos(var1[6]);
  t1473 = -1.*t18*t422;
  t1506 = t1065*t1136;
  t1591 = t1473 + t1506;
  t1725 = t422*t1065;
  t1811 = t18*t1136;
  t1846 = t1725 + t1811;
  t1851 = Sin(var1[6]);
  t744 = -1.*t422;
  t759 = 1. + t744;
  t1362 = -1.*t1285;
  t1420 = 1. + t1362;
  t2180 = -1.*t422*t1065;
  t2264 = -1.*t18*t1136;
  t2287 = t2180 + t2264;
  t1259 = 0.4999*t1065*t1136;
  t1619 = -0.9063*t1420*t1591;
  t1872 = 0.9063*t1846*t1851;
  t1888 = t1285*t1591;
  t1965 = t1846*t1851;
  t2026 = t1888 + t1965;
  t2049 = -1.373025*t2026;
  t2143 = -0.4999*t18*t1136;
  t2312 = -0.9063*t1420*t2287;
  t2359 = 0.9063*t1591*t1851;
  t2365 = t1285*t2287;
  t2422 = t1591*t1851;
  t2436 = t2365 + t2422;
  t2445 = -1.373025*t2436;
  t3232 = t18*t422;
  t3244 = -1.*t1065*t1136;
  t3246 = t3232 + t3244;
  t2108 = 0.4999*t759*t1065;
  t2668 = -0.4999*t18*t422;
  t2679 = t2668 + t1259 + t1619 + t1872 + t2049;
  t2716 = var2[1]*t2679;
  t2753 = -0.4999*t422*t1065;
  t2780 = t2753 + t2143 + t2312 + t2359 + t2445;
  t2796 = var2[0]*t2780;
  t2807 = t2716 + t2796;
  t2812 = 0.9063*t1285*t1591;
  t2909 = -0.9063*t2287*t1851;
  t2986 = -1.*t2287*t1851;
  t2992 = t1888 + t2986;
  t3026 = -1.373025*t2992;
  t3072 = t2812 + t2909 + t3026;
  t3100 = var2[1]*t3072;
  t3213 = 0.9063*t1285*t2287;
  t3343 = -0.9063*t3246*t1851;
  t3370 = -1.*t3246*t1851;
  t3412 = t2365 + t3370;
  t3480 = -1.373025*t3412;
  t3498 = t3213 + t3343 + t3480;
  t3512 = var2[0]*t3498;
  t3571 = t3100 + t3512;
  t3682 = -0.4999*t1065*t1136;
  t3728 = -0.9063*t1420*t3246;
  t3762 = 0.9063*t2287*t1851;
  t3766 = t1285*t3246;
  t3776 = t2287*t1851;
  t3798 = t3766 + t3776;
  t3823 = -1.373025*t3798;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=(t2108 + t2143 + t2312 + t2359 + t2445)*var2[0] + (t1259 + t1619 + t1872 + t2049 + 0.4999*t18*t759)*var2[1];
  p_output1[3]=t2807;
  p_output1[4]=t3571;
  p_output1[5]=0. + t3682 + t3728 + t3762 + t3823 - 0.4999*t18*t759;
  p_output1[6]=0. + t2108 + t2143 + t2312 + t2359 + t2445;
  p_output1[7]=t2807;
  p_output1[8]=t2807;
  p_output1[9]=t3571;
  p_output1[10]=0. + t3682 + t3728 + t3762 + t3823 + 0.4999*t18*t422;
  p_output1[11]=0. + t2143 + t2312 + t2359 + t2445 + t2753;
  p_output1[12]=t3571;
  p_output1[13]=t3571;
  p_output1[14]=(-0.9063*t1285*t1846 + t3343 - 1.373025*(-1.*t1285*t1846 + t3370))*var2[0] + (t2909 - 0.9063*t1285*t3246 - 1.373025*(t2986 - 1.*t1285*t3246))*var2[1];
  p_output1[15]=0. - 0.9063*t1846*t1851 + 0.9063*t1285*t3246 - 1.373025*(-1.*t1846*t1851 + t3766);
  p_output1[16]=0. + t3213 + t3343 + t3480;
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

#include "J_fRightSole_vec_RightSS.hh"

namespace RightSS
{

void J_fRightSole_vec_RightSS_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
