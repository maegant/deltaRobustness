/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:29:18 GMT-08:00
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
  double t307;
  double t224;
  double t254;
  double t361;
  double t1126;
  double t255;
  double t380;
  double t427;
  double t85;
  double t1187;
  double t1205;
  double t1291;
  double t660;
  double t1708;
  double t1836;
  double t1855;
  double t1856;
  double t1902;
  double t1913;
  double t1950;
  double t1959;
  double t2031;
  double t2069;
  double t2087;
  double t2093;
  double t1549;
  double t1553;
  double t2129;
  double t2145;
  double t2150;
  double t2190;
  double t2191;
  double t2195;
  double t2323;
  double t2412;
  double t2456;
  double t2477;
  double t2486;
  double t2684;
  double t2701;
  double t2711;
  double t2746;
  double t2942;
  double t2943;
  double t2201;
  double t2214;
  double t2217;
  double t2242;
  double t2254;
  double t2266;
  double t2278;
  double t2487;
  double t2595;
  double t2598;
  double t2640;
  double t3149;
  double t3171;
  double t2870;
  double t2931;
  double t2977;
  double t3004;
  double t3007;
  double t3011;
  double t3050;
  double t3073;
  double t3489;
  double t3496;
  double t3501;
  double t3537;
  double t3587;
  double t3425;
  double t3445;
  double t3146;
  double t3235;
  double t3236;
  double t3237;
  double t3248;
  double t3249;
  double t3269;
  double t3270;
  double t3285;
  double t3306;
  double t3363;
  double t3373;
  double t3388;
  double t3408;
  double t3455;
  double t3465;
  double t4055;
  double t4065;
  double t4079;
  double t4099;
  double t4018;
  double t4042;
  double t4046;
  double t3661;
  double t3691;
  t307 = Cos(var1[6]);
  t224 = Cos(var1[7]);
  t254 = Sin(var1[6]);
  t361 = Sin(var1[7]);
  t1126 = Cos(var1[2]);
  t255 = -1.*t224*t254;
  t380 = -1.*t307*t361;
  t427 = t255 + t380;
  t85 = Sin(var1[2]);
  t1187 = t307*t224;
  t1205 = -1.*t254*t361;
  t1291 = t1187 + t1205;
  t660 = -1.*t85*t427;
  t1708 = -1.*t1126*t427;
  t1836 = -1.*t307*t224;
  t1855 = t254*t361;
  t1856 = t1836 + t1855;
  t1902 = t1126*t1856;
  t1913 = t660 + t1902;
  t1950 = -0.26996047999999995*var2[0]*t1913;
  t1959 = -1.*t85*t1856;
  t2031 = t1708 + t1959;
  t2069 = -0.26996047999999995*var2[1]*t2031;
  t2087 = t1950 + t2069;
  t2093 = var2[7]*t2087;
  t1549 = -1.*t1126*t1291;
  t1553 = t660 + t1549;
  t2129 = t1126*t427;
  t2145 = -1.*t85*t1291;
  t2150 = t2129 + t2145;
  t2190 = t224*t254;
  t2191 = t307*t361;
  t2195 = t2190 + t2191;
  t2323 = -1.*t224;
  t2412 = 1. + t2323;
  t2456 = -0.9063*t2412;
  t2477 = -1.0567*t224;
  t2486 = t2456 + t2477;
  t2684 = -0.4999*t254;
  t2701 = -1.*t2486*t254;
  t2711 = 0.15039999999999998*t307*t361;
  t2746 = t2684 + t2701 + t2711;
  t2942 = t307*t2486;
  t2943 = 0.15039999999999998*t254*t361;
  t2201 = t85*t2195;
  t2214 = t2201 + t1902;
  t2217 = -0.26996047999999995*var2[0]*t2214;
  t2242 = t1126*t2195;
  t2254 = t2242 + t1959;
  t2266 = -0.26996047999999995*var2[1]*t2254;
  t2278 = 0.4999*t254;
  t2487 = t2486*t254;
  t2595 = -0.15039999999999998*t307*t361;
  t2598 = t2278 + t2487 + t2595;
  t2640 = t427*t2598;
  t3149 = 0.15039999999999998*t224*t254;
  t3171 = t3149 + t2711;
  t2870 = -0.15039999999999998*t254*t361;
  t2931 = 0.4999*t307;
  t2977 = t2931 + t2942 + t2943;
  t3004 = -1.*t307;
  t3007 = 1. + t3004;
  t3011 = -0.4999*t3007;
  t3050 = t3011 + t2942 + t2943;
  t3073 = t3050*t1856;
  t3489 = t2598*t1291;
  t3496 = t2746*t1291;
  t3501 = t427*t3050;
  t3537 = t2195*t2977;
  t3587 = t3489 + t3496 + t3501 + t3537;
  t3425 = t85*t1856;
  t3445 = t2129 + t3425;
  t3146 = t427*t2746;
  t3235 = t427*t3171;
  t3236 = t3171*t2195;
  t3237 = 0.15039999999999998*t307*t224;
  t3248 = t3237 + t2870;
  t3249 = t1291*t3248;
  t3269 = t1291*t2977;
  t3270 = -0.15039999999999998*t307*t224;
  t3285 = t3270 + t2943;
  t3306 = t1291*t3285;
  t3363 = t2640 + t3146 + t3235 + t3236 + t3249 + t3269 + t3306 + t3073;
  t3373 = -0.26996047999999995*var2[2]*t3363;
  t3388 = t2217 + t2266 + t3373;
  t3408 = var2[7]*t3388;
  t3455 = -0.26996047999999995*var2[7]*t3445;
  t3465 = -0.26996047999999995*var2[7]*t1913;
  t4055 = -0.4999*t361;
  t4065 = -1.*t2486*t361;
  t4079 = -0.15039999999999998*t224*t361;
  t4099 = t4055 + t4065 + t4079;
  t4018 = t3171*t1291;
  t4042 = t2195*t3285;
  t4046 = t3489 + t4018 + t3501 + t4042;
  t3661 = -0.26996047999999995*var2[1]*t1913;
  t3691 = -0.26996047999999995*var2[0]*t3445;
  p_output1[0]=(-0.26996047999999995*t1553*var2[0] - 0.26996047999999995*(t1708 + t1291*t85)*var2[1])*var2[7];
  p_output1[1]=t2093;
  p_output1[2]=t2093;
  p_output1[3]=-0.26996047999999995*t2150*var2[7];
  p_output1[4]=-0.26996047999999995*t1553*var2[7];
  p_output1[5]=-0.26996047999999995*t2150*var2[0] - 0.26996047999999995*t1553*var2[1];
  p_output1[6]=t2093;
  p_output1[7]=(t2217 + t2266 - 0.26996047999999995*(t2640 + t2195*t2746 + 2.*t1291*t2977 + t1291*(t2870 - 0.4999*t307 - 1.*t2486*t307) + t3073 + 2.*t2746*t427)*var2[2])*var2[7];
  p_output1[8]=t3408;
  p_output1[9]=t3455;
  p_output1[10]=t3465;
  p_output1[11]=-0.26996047999999995*t3587*var2[7];
  p_output1[12]=t3661 + t3691 - 0.26996047999999995*t3587*var2[2];
  p_output1[13]=t2093;
  p_output1[14]=t3408;
  p_output1[15]=(t2217 + t2266 - 0.26996047999999995*(t2640 + t3073 + t3236 + t3249 + 2.*t1291*t3285 + 2.*t3171*t427)*var2[2] - 0.26996047999999995*(0. - 0.4999*t224 - 0.15039999999999998*Power(t224,2) - 1.*t224*t2486)*var2[6])*var2[7];
  p_output1[16]=t3455;
  p_output1[17]=t3465;
  p_output1[18]=-0.26996047999999995*t4046*var2[7];
  p_output1[19]=-0.26996047999999995*t4099*var2[7];
  p_output1[20]=t3661 + t3691 - 0.26996047999999995*t4046*var2[2] - 0.26996047999999995*t4099*var2[6];
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

#include "J_Ce3_vec_L6_J8_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L6_J8_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
