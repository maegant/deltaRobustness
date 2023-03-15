/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:32 GMT-08:00
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
  double t153;
  double t521;
  double t145;
  double t685;
  double t26;
  double t317;
  double t824;
  double t833;
  double t1024;
  double t1031;
  double t1158;
  double t1246;
  double t1312;
  double t1481;
  double t1482;
  double t1508;
  double t1374;
  double t1375;
  double t1384;
  double t1534;
  double t1366;
  double t1368;
  double t2049;
  double t2119;
  double t2166;
  double t2219;
  double t2230;
  double t2189;
  double t2200;
  double t1948;
  double t2014;
  double t2032;
  double t2038;
  double t2183;
  double t2203;
  double t2242;
  double t2245;
  double t2265;
  double t2275;
  double t2284;
  double t2286;
  double t2326;
  double t2341;
  double t2357;
  double t2507;
  double t2547;
  double t2577;
  double t1700;
  double t1757;
  double t913;
  double t1289;
  double t1472;
  double t1555;
  double t1614;
  double t1702;
  double t1707;
  double t1758;
  double t1762;
  double t1785;
  double t1818;
  double t1832;
  double t2412;
  double t2418;
  double t2420;
  double t2485;
  double t2579;
  double t2581;
  double t2587;
  double t2596;
  double t2623;
  double t2641;
  double t2706;
  double t2713;
  double t2721;
  double t2892;
  double t2923;
  double t2936;
  double t2999;
  double t3064;
  double t2940;
  double t2963;
  double t3390;
  double t3410;
  double t3099;
  double t3192;
  double t2992;
  double t3065;
  double t3067;
  double t3140;
  double t3178;
  double t3236;
  double t3242;
  double t3249;
  double t3267;
  double t3578;
  double t3587;
  double t3588;
  double t1837;
  double t1897;
  double t3831;
  double t3876;
  double t3881;
  double t3919;
  double t3925;
  double t3938;
  double t3950;
  double t3968;
  double t3971;
  double t4013;
  double t4175;
  double t3701;
  double t3706;
  t153 = Cos(var1[3]);
  t521 = Sin(var1[2]);
  t145 = Cos(var1[2]);
  t685 = Sin(var1[3]);
  t26 = Cos(var1[4]);
  t317 = -1.*t145*t153;
  t824 = t521*t685;
  t833 = t317 + t824;
  t1024 = -1.*t153*t521;
  t1031 = -1.*t145*t685;
  t1158 = t1024 + t1031;
  t1246 = Sin(var1[4]);
  t1312 = Cos(var1[5]);
  t1481 = -1.*t26*t1158;
  t1482 = -1.*t833*t1246;
  t1508 = t1481 + t1482;
  t1374 = t26*t833;
  t1375 = -1.*t1158*t1246;
  t1384 = t1374 + t1375;
  t1534 = Sin(var1[5]);
  t1366 = -1.*t1312;
  t1368 = 1. + t1366;
  t2049 = t153*t521;
  t2119 = t145*t685;
  t2166 = t2049 + t2119;
  t2219 = t26*t2166;
  t2230 = t2219 + t1482;
  t2189 = t2166*t1246;
  t2200 = t1374 + t2189;
  t1948 = 0.4999*t521*t685;
  t2014 = -1.*t26;
  t2032 = 1. + t2014;
  t2038 = -0.9063*t2032*t833;
  t2183 = 0.9063*t2166*t1246;
  t2203 = -1.3127*t1368*t2200;
  t2242 = 1.3127*t2230*t1534;
  t2245 = t1312*t2230;
  t2265 = -1.*t2200*t1534;
  t2275 = t2245 + t2265;
  t2284 = 0.06*t2275;
  t2286 = t1312*t2200;
  t2326 = t2230*t1534;
  t2341 = t2286 + t2326;
  t2357 = -1.3127*t2341;
  t2507 = t26*t1158;
  t2547 = t833*t1246;
  t2577 = t2507 + t2547;
  t1700 = -1.*t1384*t1534;
  t1757 = t1312*t1384;
  t913 = 0.9063*t26*t833;
  t1289 = -0.9063*t1158*t1246;
  t1472 = -1.3127*t1368*t1384;
  t1555 = 1.3127*t1508*t1534;
  t1614 = t1312*t1508;
  t1702 = t1614 + t1700;
  t1707 = 0.06*t1702;
  t1758 = t1508*t1534;
  t1762 = t1757 + t1758;
  t1785 = -1.3127*t1762;
  t1818 = t913 + t1289 + t1472 + t1555 + t1707 + t1785;
  t1832 = var2[4]*t1818;
  t2412 = -0.4999*t145*t153;
  t2418 = t2412 + t1948 + t2038 + t2183 + t2203 + t2242 + t2284 + t2357;
  t2420 = var2[3]*t2418;
  t2485 = 1.3127*t1312*t1384;
  t2579 = -1.3127*t2577*t1534;
  t2581 = -1.*t1312*t2577;
  t2587 = t2581 + t1700;
  t2596 = 0.06*t2587;
  t2623 = -1.*t2577*t1534;
  t2641 = t1757 + t2623;
  t2706 = -1.3127*t2641;
  t2713 = t2485 + t2579 + t2596 + t2706;
  t2721 = var2[5]*t2713;
  t2892 = t145*t153;
  t2923 = -1.*t521*t685;
  t2936 = t2892 + t2923;
  t2999 = -1.*t2936*t1246;
  t3064 = t2507 + t2999;
  t2940 = -1.*t26*t2936;
  t2963 = t2940 + t1375;
  t3390 = t2936*t1246;
  t3410 = t1481 + t3390;
  t3099 = -1.*t2963*t1534;
  t3192 = t1312*t2963;
  t2992 = 1.3127*t1312*t2963;
  t3065 = -1.3127*t3064*t1534;
  t3067 = -1.*t1312*t3064;
  t3140 = t3067 + t3099;
  t3178 = 0.06*t3140;
  t3236 = -1.*t3064*t1534;
  t3242 = t3192 + t3236;
  t3249 = -1.3127*t3242;
  t3267 = t2992 + t3065 + t3178 + t3249;
  t3578 = t26*t2936;
  t3587 = t1158*t1246;
  t3588 = t3578 + t3587;
  t1837 = -1.*t153;
  t1897 = 1. + t1837;
  t3831 = -0.4999*t145*t685;
  t3876 = -0.9063*t2032*t1158;
  t3881 = 0.9063*t833*t1246;
  t3919 = -1.3127*t1368*t2577;
  t3925 = 1.3127*t1384*t1534;
  t3938 = t1312*t2577;
  t3950 = t1384*t1534;
  t3968 = t3938 + t3950;
  t3971 = -1.3127*t3968;
  t4013 = 0.06*t2641;
  t4175 = t1312*t3064;
  t3701 = -1.*t1312*t3588;
  t3706 = t3701 + t3236;
  p_output1[0]=t1832 + t2420 + t2721 + (0.4999*t145*t1897 + t1948 + t2038 + t2183 + t2203 + t2242 + t2284 + t2357)*var2[2];
  p_output1[1]=t1832 + t2420 + t2721 + t2418*var2[2];
  p_output1[2]=t1818*var2[2] + t1818*var2[3] + (t1289 - 0.9063*t26*t2936 - 1.3127*t1368*t2963 + 1.3127*t1534*t3410 + 0.06*(t3099 + t1312*t3410) - 1.3127*(t3192 + t1534*t3410))*var2[4] + t3267*var2[5];
  p_output1[3]=t2713*var2[2] + t2713*var2[3] + t3267*var2[4] + (t3065 - 1.3127*t1312*t3588 + 0.06*(t3067 + t1534*t3588) - 1.3127*t3706)*var2[5];
  p_output1[4]=1.;
  p_output1[5]=t3831 + t3876 + t3881 + t3919 + t3925 + t3971 + t4013 + 0.4999*t1897*t521;
  p_output1[6]=t3831 + t3876 + t3881 + t3919 + t3925 + t3971 + t4013 - 0.4999*t153*t521;
  p_output1[7]=0.9063*t1158*t26 - 0.9063*t1246*t2936 + 1.3127*t1534*t2963 - 1.3127*t1368*t3064 + 0.06*t3242 - 1.3127*(t1534*t2963 + t4175);
  p_output1[8]=1.3127*t1312*t3064 - 1.3127*t1534*t3588 + 0.06*t3706 - 1.3127*(-1.*t1534*t3588 + t4175);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_nsf_velZ.hh"

namespace RightSS2
{

void J_nsf_velZ_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
