/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:50 GMT-08:00
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
  double t31;
  double t112;
  double t365;
  double t405;
  double t471;
  double t659;
  double t736;
  double t746;
  double t910;
  double t921;
  double t1040;
  double t1089;
  double t1319;
  double t1456;
  double t1511;
  double t1624;
  double t1402;
  double t1427;
  double t1440;
  double t1680;
  double t458;
  double t509;
  double t622;
  double t850;
  double t1123;
  double t1370;
  double t1399;
  double t1453;
  double t1685;
  double t1742;
  double t1766;
  double t1799;
  double t1807;
  double t1893;
  double t1903;
  double t1904;
  double t1911;
  double t2362;
  double t2363;
  double t2378;
  double t2490;
  double t2491;
  double t2406;
  double t2465;
  double t2783;
  double t2797;
  double t2853;
  double t2539;
  double t2603;
  t31 = Cos(var1[2]);
  t112 = Cos(var1[3]);
  t365 = Sin(var1[2]);
  t405 = Sin(var1[3]);
  t471 = Cos(var1[4]);
  t659 = t31*t112;
  t736 = -1.*t365*t405;
  t746 = t659 + t736;
  t910 = -1.*t112*t365;
  t921 = -1.*t31*t405;
  t1040 = t910 + t921;
  t1089 = Sin(var1[4]);
  t1319 = Cos(var1[5]);
  t1456 = t471*t1040;
  t1511 = -1.*t746*t1089;
  t1624 = t1456 + t1511;
  t1402 = t471*t746;
  t1427 = t1040*t1089;
  t1440 = t1402 + t1427;
  t1680 = Sin(var1[5]);
  t458 = -0.4999*t365*t405;
  t509 = -1.*t471;
  t622 = 1. + t509;
  t850 = -0.9063*t622*t746;
  t1123 = 0.9063*t1040*t1089;
  t1370 = -1.*t1319;
  t1399 = 1. + t1370;
  t1453 = -1.3127*t1399*t1440;
  t1685 = 1.3127*t1624*t1680;
  t1742 = t1319*t1624;
  t1766 = -1.*t1440*t1680;
  t1799 = t1742 + t1766;
  t1807 = 0.06*t1799;
  t1893 = t1319*t1440;
  t1903 = t1624*t1680;
  t1904 = t1893 + t1903;
  t1911 = -1.3127*t1904;
  t2362 = t112*t365;
  t2363 = t31*t405;
  t2378 = t2362 + t2363;
  t2490 = -1.*t471*t2378;
  t2491 = t2490 + t1511;
  t2406 = -1.*t2378*t1089;
  t2465 = t1402 + t2406;
  t2783 = t471*t2378;
  t2797 = t746*t1089;
  t2853 = t2783 + t2797;
  t2539 = -1.*t2465*t1680;
  t2603 = t1319*t2465;
  p_output1[0]=var2[0] + (t1123 + t1453 + t1685 + t1807 + t1911 - 0.4999*(1. - 1.*t112)*t31 + t458 + t850)*var2[2] + (t1123 + t1453 + t1685 + t1807 + t1911 + 0.4999*t112*t31 + t458 + t850)*var2[3] + (-0.9063*t1089*t2378 - 1.3127*t1399*t2465 + 1.3127*t1680*t2491 + 0.06*(t1319*t2491 + t2539) - 1.3127*(t1680*t2491 + t2603) + 0.9063*t471*t746)*var2[4] + (1.3127*t1319*t2465 - 1.3127*t1680*t2853 + 0.06*(t2539 - 1.*t1319*t2853) - 1.3127*(t2603 - 1.*t1680*t2853))*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "nsf_velX.hh"

namespace RightSS1
{

void nsf_velX_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
