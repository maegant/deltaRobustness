/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:26 GMT-08:00
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
  double t341;
  double t185;
  double t223;
  double t343;
  double t729;
  double t322;
  double t488;
  double t571;
  double t146;
  double t906;
  double t934;
  double t967;
  double t696;
  double t1106;
  double t1315;
  double t1451;
  double t1488;
  double t1589;
  double t1634;
  double t1835;
  double t1840;
  double t1875;
  double t1882;
  double t1889;
  double t1898;
  double t1013;
  double t1040;
  double t1910;
  double t1914;
  double t1955;
  double t2077;
  double t2078;
  double t2097;
  double t2144;
  double t2154;
  double t2204;
  double t2206;
  double t2255;
  double t2309;
  double t2324;
  double t2336;
  double t2346;
  double t2494;
  double t2526;
  double t2102;
  double t2105;
  double t2107;
  double t2124;
  double t2130;
  double t2141;
  double t2142;
  double t2265;
  double t2300;
  double t2303;
  double t2307;
  double t2868;
  double t2873;
  double t2424;
  double t2474;
  double t2531;
  double t2579;
  double t2581;
  double t2583;
  double t2609;
  double t2702;
  double t3338;
  double t3347;
  double t3374;
  double t3385;
  double t3395;
  double t3245;
  double t3256;
  double t2860;
  double t2879;
  double t2889;
  double t2993;
  double t3027;
  double t3044;
  double t3047;
  double t3051;
  double t3142;
  double t3171;
  double t3173;
  double t3175;
  double t3192;
  double t3230;
  double t3266;
  double t3280;
  double t3789;
  double t3792;
  double t3794;
  double t3796;
  double t3752;
  double t3769;
  double t3773;
  double t3458;
  double t3478;
  t341 = Cos(var1[3]);
  t185 = Cos(var1[4]);
  t223 = Sin(var1[3]);
  t343 = Sin(var1[4]);
  t729 = Cos(var1[2]);
  t322 = -1.*t185*t223;
  t488 = -1.*t341*t343;
  t571 = t322 + t488;
  t146 = Sin(var1[2]);
  t906 = t341*t185;
  t934 = -1.*t223*t343;
  t967 = t906 + t934;
  t696 = -1.*t146*t571;
  t1106 = -1.*t729*t571;
  t1315 = -1.*t341*t185;
  t1451 = t223*t343;
  t1488 = t1315 + t1451;
  t1589 = t729*t1488;
  t1634 = t696 + t1589;
  t1835 = -0.26996047999999995*var2[0]*t1634;
  t1840 = -1.*t146*t1488;
  t1875 = t1106 + t1840;
  t1882 = -0.26996047999999995*var2[1]*t1875;
  t1889 = t1835 + t1882;
  t1898 = var2[4]*t1889;
  t1013 = -1.*t729*t967;
  t1040 = t696 + t1013;
  t1910 = t729*t571;
  t1914 = -1.*t146*t967;
  t1955 = t1910 + t1914;
  t2077 = t185*t223;
  t2078 = t341*t343;
  t2097 = t2077 + t2078;
  t2144 = -1.*t185;
  t2154 = 1. + t2144;
  t2204 = -0.9063*t2154;
  t2206 = -1.0567*t185;
  t2255 = t2204 + t2206;
  t2309 = -0.4999*t223;
  t2324 = -1.*t2255*t223;
  t2336 = 0.15039999999999998*t341*t343;
  t2346 = t2309 + t2324 + t2336;
  t2494 = t341*t2255;
  t2526 = 0.15039999999999998*t223*t343;
  t2102 = t146*t2097;
  t2105 = t2102 + t1589;
  t2107 = -0.26996047999999995*var2[0]*t2105;
  t2124 = t729*t2097;
  t2130 = t2124 + t1840;
  t2141 = -0.26996047999999995*var2[1]*t2130;
  t2142 = 0.4999*t223;
  t2265 = t2255*t223;
  t2300 = -0.15039999999999998*t341*t343;
  t2303 = t2142 + t2265 + t2300;
  t2307 = t571*t2303;
  t2868 = 0.15039999999999998*t185*t223;
  t2873 = t2868 + t2336;
  t2424 = -0.15039999999999998*t223*t343;
  t2474 = 0.4999*t341;
  t2531 = t2474 + t2494 + t2526;
  t2579 = -1.*t341;
  t2581 = 1. + t2579;
  t2583 = -0.4999*t2581;
  t2609 = t2583 + t2494 + t2526;
  t2702 = t2609*t1488;
  t3338 = t2303*t967;
  t3347 = t2346*t967;
  t3374 = t571*t2609;
  t3385 = t2097*t2531;
  t3395 = t3338 + t3347 + t3374 + t3385;
  t3245 = t146*t1488;
  t3256 = t1910 + t3245;
  t2860 = t571*t2346;
  t2879 = t571*t2873;
  t2889 = t2873*t2097;
  t2993 = 0.15039999999999998*t341*t185;
  t3027 = t2993 + t2424;
  t3044 = t967*t3027;
  t3047 = t967*t2531;
  t3051 = -0.15039999999999998*t341*t185;
  t3142 = t3051 + t2526;
  t3171 = t967*t3142;
  t3173 = t2307 + t2860 + t2879 + t2889 + t3044 + t3047 + t3171 + t2702;
  t3175 = -0.26996047999999995*var2[2]*t3173;
  t3192 = t2107 + t2141 + t3175;
  t3230 = var2[4]*t3192;
  t3266 = -0.26996047999999995*var2[4]*t3256;
  t3280 = -0.26996047999999995*var2[4]*t1634;
  t3789 = -0.4999*t343;
  t3792 = -1.*t2255*t343;
  t3794 = -0.15039999999999998*t185*t343;
  t3796 = t3789 + t3792 + t3794;
  t3752 = t2873*t967;
  t3769 = t2097*t3142;
  t3773 = t3338 + t3752 + t3374 + t3769;
  t3458 = -0.26996047999999995*var2[1]*t1634;
  t3478 = -0.26996047999999995*var2[0]*t3256;
  p_output1[0]=(-0.26996047999999995*t1040*var2[0] - 0.26996047999999995*(t1106 + t146*t967)*var2[1])*var2[4];
  p_output1[1]=t1898;
  p_output1[2]=t1898;
  p_output1[3]=-0.26996047999999995*t1955*var2[4];
  p_output1[4]=-0.26996047999999995*t1040*var2[4];
  p_output1[5]=-0.26996047999999995*t1955*var2[0] - 0.26996047999999995*t1040*var2[1];
  p_output1[6]=t1898;
  p_output1[7]=(t2107 + t2141 - 0.26996047999999995*(t2307 + t2097*t2346 + t2702 + 2.*t2346*t571 + 2.*t2531*t967 + (t2424 - 0.4999*t341 - 1.*t2255*t341)*t967)*var2[2])*var2[4];
  p_output1[8]=t3230;
  p_output1[9]=t3266;
  p_output1[10]=t3280;
  p_output1[11]=-0.26996047999999995*t3395*var2[4];
  p_output1[12]=t3458 + t3478 - 0.26996047999999995*t3395*var2[2];
  p_output1[13]=t1898;
  p_output1[14]=t3230;
  p_output1[15]=(t2107 + t2141 - 0.26996047999999995*(t2307 + t2702 + t2889 + t3044 + 2.*t2873*t571 + 2.*t3142*t967)*var2[2] - 0.26996047999999995*(0. - 0.4999*t185 - 0.15039999999999998*Power(t185,2) - 1.*t185*t2255)*var2[3])*var2[4];
  p_output1[16]=t3266;
  p_output1[17]=t3280;
  p_output1[18]=-0.26996047999999995*t3773*var2[4];
  p_output1[19]=-0.26996047999999995*t3796*var2[4];
  p_output1[20]=t3458 + t3478 - 0.26996047999999995*t3773*var2[2] - 0.26996047999999995*t3796*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L3_J5_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L3_J5_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
