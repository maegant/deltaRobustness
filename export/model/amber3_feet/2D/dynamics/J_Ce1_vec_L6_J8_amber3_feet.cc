/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:25:24 GMT-08:00
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
  double t281;
  double t83;
  double t124;
  double t286;
  double t14;
  double t192;
  double t312;
  double t526;
  double t603;
  double t744;
  double t1192;
  double t1230;
  double t1292;
  double t1297;
  double t1299;
  double t1483;
  double t1506;
  double t1510;
  double t1540;
  double t1544;
  double t1472;
  double t1547;
  double t1580;
  double t1586;
  double t1588;
  double t961;
  double t964;
  double t1007;
  double t1594;
  double t1630;
  double t1772;
  double t1909;
  double t1983;
  double t2118;
  double t2230;
  double t2256;
  double t2389;
  double t2410;
  double t2322;
  double t2483;
  double t2494;
  double t2505;
  double t2530;
  double t1105;
  double t1124;
  double t1411;
  double t1132;
  double t1399;
  double t2554;
  double t2571;
  double t2588;
  double t2644;
  double t2648;
  double t2739;
  double t2782;
  double t2785;
  double t2806;
  double t3034;
  double t3041;
  double t2553;
  double t2671;
  double t2674;
  double t2699;
  double t2701;
  double t3187;
  double t3188;
  double t2901;
  double t2979;
  double t3053;
  double t3077;
  double t3095;
  double t3102;
  double t3109;
  double t3127;
  double t3185;
  double t3220;
  double t3236;
  double t3254;
  double t3262;
  double t3285;
  double t3287;
  double t3294;
  double t3306;
  double t3349;
  double t3353;
  double t3570;
  double t3582;
  double t3592;
  double t3612;
  double t3629;
  t281 = Cos(var1[6]);
  t83 = Cos(var1[7]);
  t124 = Sin(var1[6]);
  t286 = Sin(var1[7]);
  t14 = Sin(var1[2]);
  t192 = -1.*t83*t124;
  t312 = -1.*t281*t286;
  t526 = t192 + t312;
  t603 = -1.*t14*t526;
  t744 = Cos(var1[2]);
  t1192 = -1.*t281*t83;
  t1230 = t124*t286;
  t1292 = t1192 + t1230;
  t1297 = t744*t1292;
  t1299 = t603 + t1297;
  t1483 = t83*t124;
  t1506 = t281*t286;
  t1510 = t1483 + t1506;
  t1540 = t14*t1510;
  t1544 = t1540 + t1297;
  t1472 = 0.26996047999999995*var2[2]*t1299;
  t1547 = 0.26996047999999995*var2[6]*t1544;
  t1580 = 0.26996047999999995*var2[7]*t1544;
  t1586 = t1472 + t1547 + t1580;
  t1588 = var2[7]*t1586;
  t961 = t281*t83;
  t964 = -1.*t124*t286;
  t1007 = t961 + t964;
  t1594 = t744*t526;
  t1630 = -1.*t14*t1007;
  t1772 = t1594 + t1630;
  t1909 = t14*t1292;
  t1983 = t1594 + t1909;
  t2118 = -1.*t744*t526;
  t2230 = -1.*t14*t1292;
  t2256 = t2118 + t2230;
  t2389 = t744*t1510;
  t2410 = t2389 + t2230;
  t2322 = 0.26996047999999995*var2[2]*t2256;
  t2483 = 0.26996047999999995*var2[6]*t2410;
  t2494 = 0.26996047999999995*var2[7]*t2410;
  t2505 = t2322 + t2483 + t2494;
  t2530 = var2[7]*t2505;
  t1105 = -1.*t744*t1007;
  t1124 = t603 + t1105;
  t1411 = 0.26996047999999995*var2[7]*t1299;
  t1132 = 0.26996047999999995*var2[2]*t1124;
  t1399 = 0.26996047999999995*var2[6]*t1299;
  t2554 = -1.*t83;
  t2571 = 1. + t2554;
  t2588 = -0.9063*t2571;
  t2644 = -1.0567*t83;
  t2648 = t2588 + t2644;
  t2739 = -0.4999*t124;
  t2782 = -1.*t2648*t124;
  t2785 = 0.15039999999999998*t281*t286;
  t2806 = t2739 + t2782 + t2785;
  t3034 = t281*t2648;
  t3041 = 0.15039999999999998*t124*t286;
  t2553 = 0.4999*t124;
  t2671 = t2648*t124;
  t2674 = -0.15039999999999998*t281*t286;
  t2699 = t2553 + t2671 + t2674;
  t2701 = t526*t2699;
  t3187 = 0.15039999999999998*t83*t124;
  t3188 = t3187 + t2785;
  t2901 = -0.15039999999999998*t124*t286;
  t2979 = 0.4999*t281;
  t3053 = t2979 + t3034 + t3041;
  t3077 = -1.*t281;
  t3095 = 1. + t3077;
  t3102 = -0.4999*t3095;
  t3109 = t3102 + t3034 + t3041;
  t3127 = t3109*t1292;
  t3185 = t526*t2806;
  t3220 = t526*t3188;
  t3236 = t3188*t1510;
  t3254 = 0.15039999999999998*t281*t83;
  t3262 = t3254 + t2901;
  t3285 = t1007*t3262;
  t3287 = t1007*t3053;
  t3294 = -0.15039999999999998*t281*t83;
  t3306 = t3294 + t3041;
  t3349 = t1007*t3306;
  t3353 = t2701 + t3185 + t3220 + t3236 + t3285 + t3287 + t3349 + t3127;
  t3570 = t2699*t1007;
  t3582 = t2806*t1007;
  t3592 = t526*t3109;
  t3612 = t1510*t3053;
  t3629 = t3570 + t3582 + t3592 + t3612;
  p_output1[0]=(t1132 + t1399 + t1411)*var2[7];
  p_output1[1]=t1588;
  p_output1[2]=t1588;
  p_output1[3]=0.26996047999999995*t1772*var2[7];
  p_output1[4]=0.26996047999999995*t1983*var2[7];
  p_output1[5]=0.26996047999999995*t1772*var2[2] + 0.26996047999999995*t1983*var2[6] + 0.5399209599999999*t1983*var2[7];
  p_output1[6]=var2[7]*(0.26996047999999995*(t1007*t14 + t2118)*var2[2] + 0.26996047999999995*t2256*var2[6] + 0.26996047999999995*t2256*var2[7]);
  p_output1[7]=t2530;
  p_output1[8]=t2530;
  p_output1[9]=0.26996047999999995*t1124*var2[7];
  p_output1[10]=t1411;
  p_output1[11]=t1132 + t1399 + 0.5399209599999999*t1299*var2[7];
  p_output1[12]=var2[7]*(0.26996047999999995*(t2701 + t1510*t2806 + t1007*(-0.4999*t281 - 1.*t2648*t281 + t2901) + 2.*t1007*t3053 + t3127 + 2.*t2806*t526)*var2[6] + 0.26996047999999995*t3353*var2[7]);
  p_output1[13]=var2[7]*(0.26996047999999995*t3353*var2[6] + 0.26996047999999995*(t2701 + t3127 + t3236 + t3285 + 2.*t1007*t3306 + 2.*t3188*t526)*var2[7]);
  p_output1[14]=0.26996047999999995*t3629*var2[7];
  p_output1[15]=0.26996047999999995*t3629*var2[6] + 0.5399209599999999*(t1007*t3188 + t1510*t3306 + t3570 + t3592)*var2[7];
  p_output1[16]=0.26996047999999995*(0. - 0.4999*t83 - 1.*t2648*t83 - 0.15039999999999998*Power(t83,2))*Power(var2[7],2);
  p_output1[17]=0.5399209599999999*(-0.4999*t286 - 1.*t2648*t286 - 0.15039999999999998*t286*t83)*var2[7];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L6_J8_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L6_J8_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
