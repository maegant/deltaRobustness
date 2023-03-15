/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:48 GMT-08:00
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
static void output1(double *p_output1,const double *var1)
{
  double t130;
  double t313;
  double t601;
  double t609;
  double t773;
  double t850;
  double t890;
  double t899;
  double t953;
  double t1014;
  double t1040;
  double t1066;
  double t1209;
  double t1440;
  double t1441;
  double t1456;
  double t1399;
  double t1402;
  double t1404;
  double t1465;
  double t439;
  double t1860;
  double t1928;
  double t2024;
  double t2026;
  double t2099;
  double t2120;
  double t2124;
  double t2126;
  double t2168;
  double t2256;
  double t2363;
  double t2372;
  double t2378;
  double t2329;
  double t2332;
  double t2335;
  double t2389;
  double t659;
  double t821;
  double t831;
  double t921;
  double t1089;
  double t1257;
  double t1372;
  double t1427;
  double t1511;
  double t1624;
  double t1633;
  double t1680;
  double t1685;
  double t1742;
  double t1766;
  double t1799;
  double t1807;
  double t2652;
  double t2661;
  double t2662;
  double t2726;
  double t2783;
  double t2686;
  double t2688;
  double t3013;
  double t3017;
  double t3048;
  double t2859;
  double t2881;
  double t1903;
  double t1942;
  double t1985;
  double t2104;
  double t2178;
  double t2262;
  double t2290;
  double t2362;
  double t2405;
  double t2406;
  double t2431;
  double t2465;
  double t2476;
  double t2490;
  double t2491;
  double t2519;
  double t2533;
  double t3308;
  double t3312;
  double t3322;
  double t3334;
  double t3366;
  double t3325;
  double t3326;
  double t3643;
  double t3673;
  double t3675;
  double t3527;
  double t3580;
  t130 = Cos(var1[2]);
  t313 = Cos(var1[3]);
  t601 = Sin(var1[2]);
  t609 = Sin(var1[3]);
  t773 = Cos(var1[4]);
  t850 = t130*t313;
  t890 = -1.*t601*t609;
  t899 = t850 + t890;
  t953 = -1.*t313*t601;
  t1014 = -1.*t130*t609;
  t1040 = t953 + t1014;
  t1066 = Sin(var1[4]);
  t1209 = Cos(var1[5]);
  t1440 = t773*t1040;
  t1441 = -1.*t899*t1066;
  t1456 = t1440 + t1441;
  t1399 = t773*t899;
  t1402 = t1040*t1066;
  t1404 = t1399 + t1402;
  t1465 = Sin(var1[5]);
  t439 = Cos(var1[6]);
  t1860 = Sin(var1[6]);
  t1928 = Cos(var1[7]);
  t2024 = t130*t439;
  t2026 = -1.*t601*t1860;
  t2099 = t2024 + t2026;
  t2120 = -1.*t439*t601;
  t2124 = -1.*t130*t1860;
  t2126 = t2120 + t2124;
  t2168 = Sin(var1[7]);
  t2256 = Cos(var1[8]);
  t2363 = t1928*t2126;
  t2372 = -1.*t2099*t2168;
  t2378 = t2363 + t2372;
  t2329 = t1928*t2099;
  t2332 = t2126*t2168;
  t2335 = t2329 + t2332;
  t2389 = Sin(var1[8]);
  t659 = -0.4999*t601*t609;
  t821 = -1.*t773;
  t831 = 1. + t821;
  t921 = -0.9063*t831*t899;
  t1089 = 0.9063*t1040*t1066;
  t1257 = -1.*t1209;
  t1372 = 1. + t1257;
  t1427 = -1.3127*t1372*t1404;
  t1511 = 1.3127*t1456*t1465;
  t1624 = t1209*t1456;
  t1633 = -1.*t1404*t1465;
  t1680 = t1624 + t1633;
  t1685 = 0.06*t1680;
  t1742 = t1209*t1404;
  t1766 = t1456*t1465;
  t1799 = t1742 + t1766;
  t1807 = -1.3127*t1799;
  t2652 = t313*t601;
  t2661 = t130*t609;
  t2662 = t2652 + t2661;
  t2726 = -1.*t773*t2662;
  t2783 = t2726 + t1441;
  t2686 = -1.*t2662*t1066;
  t2688 = t1399 + t2686;
  t3013 = t773*t2662;
  t3017 = t899*t1066;
  t3048 = t3013 + t3017;
  t2859 = -1.*t2688*t1465;
  t2881 = t1209*t2688;
  t1903 = 0.4999*t601*t1860;
  t1942 = -1.*t1928;
  t1985 = 1. + t1942;
  t2104 = 0.9063*t1985*t2099;
  t2178 = -0.9063*t2126*t2168;
  t2262 = -1.*t2256;
  t2290 = 1. + t2262;
  t2362 = 1.3127*t2290*t2335;
  t2405 = -1.3127*t2378*t2389;
  t2406 = t2256*t2378;
  t2431 = -1.*t2335*t2389;
  t2465 = t2406 + t2431;
  t2476 = -0.06*t2465;
  t2490 = t2256*t2335;
  t2491 = t2378*t2389;
  t2519 = t2490 + t2491;
  t2533 = 1.3127*t2519;
  t3308 = t439*t601;
  t3312 = t130*t1860;
  t3322 = t3308 + t3312;
  t3334 = -1.*t1928*t3322;
  t3366 = t3334 + t2372;
  t3325 = -1.*t3322*t2168;
  t3326 = t2329 + t3325;
  t3643 = t1928*t3322;
  t3673 = t2099*t2168;
  t3675 = t3643 + t3673;
  t3527 = -1.*t3326*t2389;
  t3580 = t2256*t3326;
  p_output1[0]=t1089 + t1427 + t1511 + t1685 + t1807 + t1903 + t2104 + t2178 + t2362 + t2405 + t2476 + t2533 - 0.4999*t130*(1. - 1.*t313) + 0.4999*t130*(1. - 1.*t439) + t659 + t921;
  p_output1[1]=t1089 + t1427 + t1511 + t1685 + t1807 + 0.4999*t130*t313 + t659 + t921;
  p_output1[2]=-0.9063*t1066*t2662 - 1.3127*t1372*t2688 + 1.3127*t1465*t2783 + 0.06*(t1209*t2783 + t2859) - 1.3127*(t1465*t2783 + t2881) + 0.9063*t773*t899;
  p_output1[3]=1.3127*t1209*t2688 - 1.3127*t1465*t3048 + 0.06*(t2859 - 1.*t1209*t3048) - 1.3127*(t2881 - 1.*t1465*t3048);
  p_output1[4]=t1903 + t2104 + t2178 + t2362 + t2405 + t2476 + t2533 - 0.4999*t130*t439;
  p_output1[5]=-0.9063*t1928*t2099 + 0.9063*t2168*t3322 + 1.3127*t2290*t3326 - 1.3127*t2389*t3366 - 0.06*(t2256*t3366 + t3527) + 1.3127*(t2389*t3366 + t3580);
  p_output1[6]=-1.3127*t2256*t3326 + 1.3127*t2389*t3675 - 0.06*(t3527 - 1.*t2256*t3675) + 1.3127*(t3580 - 1.*t2389*t3675);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_nsf_posX.hh"

namespace RightSS1
{

void J_nsf_posX_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
