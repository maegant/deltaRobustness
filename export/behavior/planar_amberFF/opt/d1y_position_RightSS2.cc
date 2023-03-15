/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:22 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t156;
  double t157;
  double t379;
  double t501;
  double t506;
  double t526;
  double t839;
  double t1128;
  double t1152;
  double t1173;
  double t1376;
  double t1413;
  double t2065;
  double t2066;
  double t2219;
  double t2275;
  double t2284;
  double t2358;
  double t2370;
  double t2493;
  double t2511;
  double t2579;
  double t2581;
  double t2623;
  double t2712;
  double t2713;
  double t2831;
  double t2923;
  double t2963;
  double t2967;
  double t3370;
  double t3373;
  double t3386;
  double t3390;
  double t3402;
  double t3433;
  double t3438;
  double t3456;
  double t3457;
  double t3473;
  double t3478;
  double t3741;
  double t3787;
  double t3819;
  double t3881;
  double t3925;
  double t3938;
  double t3950;
  double t3968;
  double t3971;
  double t4029;
  double t4068;
  double t4737;
  double t4741;
  double t4747;
  double t4758;
  double t4779;
  double t4790;
  double t4805;
  double t4856;
  double t4884;
  double t4893;
  double t4894;
  double t5132;
  double t5155;
  double t5219;
  double t5221;
  double t5226;
  double t5231;
  double t5249;
  double t5251;
  double t5256;
  double t5280;
  double t5295;
  t156 = -1.*var4[1];
  t157 = var4[0] + t156;
  t379 = 1/t157;
  t501 = 0.8128*var1[2];
  t506 = 0.8128*var1[6];
  t526 = 0.4064*var1[7];
  t839 = 0. + t156 + t501 + t506 + t526;
  t1128 = -1.*t379*t839;
  t1152 = 1. + t1128;
  t1173 = Power(t1152,4);
  t1376 = Power(t157,-2);
  t1413 = Power(t1152,3);
  t2065 = Power(t157,-3);
  t2066 = Power(t1152,2);
  t2219 = Power(t839,2);
  t2275 = Power(t157,-4);
  t2284 = Power(t839,3);
  t2358 = Power(t157,-5);
  t2370 = Power(t839,4);
  t2493 = -4.064*var3[0]*t379*t1173;
  t2511 = 4.064*var3[5]*t379*t1173;
  t2579 = -16.256*var3[5]*t1376*t1413*t839;
  t2581 = 16.256*var3[10]*t1376*t1413*t839;
  t2623 = -24.383999999999997*var3[10]*t2065*t2066*t2219;
  t2712 = 24.383999999999997*var3[15]*t2065*t2066*t2219;
  t2713 = -16.256*var3[15]*t2275*t1152*t2284;
  t2831 = 16.256*var3[20]*t2275*t1152*t2284;
  t2923 = -4.064*var3[20]*t2358*t2370;
  t2963 = 4.064*var3[25]*t2358*t2370;
  t2967 = t2493 + t2511 + t2579 + t2581 + t2623 + t2712 + t2713 + t2831 + t2923 + t2963;
  t3370 = -4.064*var3[1]*t379*t1173;
  t3373 = 4.064*var3[6]*t379*t1173;
  t3386 = -16.256*var3[6]*t1376*t1413*t839;
  t3390 = 16.256*var3[11]*t1376*t1413*t839;
  t3402 = -24.383999999999997*var3[11]*t2065*t2066*t2219;
  t3433 = 24.383999999999997*var3[16]*t2065*t2066*t2219;
  t3438 = -16.256*var3[16]*t2275*t1152*t2284;
  t3456 = 16.256*var3[21]*t2275*t1152*t2284;
  t3457 = -4.064*var3[21]*t2358*t2370;
  t3473 = 4.064*var3[26]*t2358*t2370;
  t3478 = t3370 + t3373 + t3386 + t3390 + t3402 + t3433 + t3438 + t3456 + t3457 + t3473;
  t3741 = -4.064*var3[2]*t379*t1173;
  t3787 = 4.064*var3[7]*t379*t1173;
  t3819 = -16.256*var3[7]*t1376*t1413*t839;
  t3881 = 16.256*var3[12]*t1376*t1413*t839;
  t3925 = -24.383999999999997*var3[12]*t2065*t2066*t2219;
  t3938 = 24.383999999999997*var3[17]*t2065*t2066*t2219;
  t3950 = -16.256*var3[17]*t2275*t1152*t2284;
  t3968 = 16.256*var3[22]*t2275*t1152*t2284;
  t3971 = -4.064*var3[22]*t2358*t2370;
  t4029 = 4.064*var3[27]*t2358*t2370;
  t4068 = t3741 + t3787 + t3819 + t3881 + t3925 + t3938 + t3950 + t3968 + t3971 + t4029;
  t4737 = -4.064*var3[3]*t379*t1173;
  t4741 = 4.064*var3[8]*t379*t1173;
  t4747 = -16.256*var3[8]*t1376*t1413*t839;
  t4758 = 16.256*var3[13]*t1376*t1413*t839;
  t4779 = -24.383999999999997*var3[13]*t2065*t2066*t2219;
  t4790 = 24.383999999999997*var3[18]*t2065*t2066*t2219;
  t4805 = -16.256*var3[18]*t2275*t1152*t2284;
  t4856 = 16.256*var3[23]*t2275*t1152*t2284;
  t4884 = -4.064*var3[23]*t2358*t2370;
  t4893 = 4.064*var3[28]*t2358*t2370;
  t4894 = t4737 + t4741 + t4747 + t4758 + t4779 + t4790 + t4805 + t4856 + t4884 + t4893;
  t5132 = -4.064*var3[4]*t379*t1173;
  t5155 = 4.064*var3[9]*t379*t1173;
  t5219 = -16.256*var3[9]*t1376*t1413*t839;
  t5221 = 16.256*var3[14]*t1376*t1413*t839;
  t5226 = -24.383999999999997*var3[14]*t2065*t2066*t2219;
  t5231 = 24.383999999999997*var3[19]*t2065*t2066*t2219;
  t5249 = -16.256*var3[19]*t2275*t1152*t2284;
  t5251 = 16.256*var3[24]*t2275*t1152*t2284;
  t5256 = -4.064*var3[24]*t2358*t2370;
  t5280 = 4.064*var3[29]*t2358*t2370;
  t5295 = t5132 + t5155 + t5219 + t5221 + t5226 + t5231 + t5249 + t5251 + t5256 + t5280;
  p_output1[0]=-1.*t2967*var2[2] + var2[6] - 1.*t2967*var2[6] - 1.*var2[7]*(-2.032*t1173*t379*var3[0] + 2.032*t1173*t379*var3[5] - 8.128*t1376*t1413*t839*var3[5] - 12.191999999999998*t2065*t2066*t2219*var3[10] + 8.128*t1376*t1413*t839*var3[10] + 12.191999999999998*t2065*t2066*t2219*var3[15] - 8.128*t1152*t2275*t2284*var3[15] + 8.128*t1152*t2275*t2284*var3[20] - 2.032*t2358*t2370*var3[20] + 2.032*t2358*t2370*var3[25]);
  p_output1[1]=-1.*t3478*var2[2] - 1.*t3478*var2[6] + var2[7] - 1.*var2[7]*(-2.032*t1173*t379*var3[1] + 2.032*t1173*t379*var3[6] - 8.128*t1376*t1413*t839*var3[6] - 12.191999999999998*t2065*t2066*t2219*var3[11] + 8.128*t1376*t1413*t839*var3[11] + 12.191999999999998*t2065*t2066*t2219*var3[16] - 8.128*t1152*t2275*t2284*var3[16] + 8.128*t1152*t2275*t2284*var3[21] - 2.032*t2358*t2370*var3[21] + 2.032*t2358*t2370*var3[26]);
  p_output1[2]=-1.*t4068*var2[2] + var2[3] - 1.*t4068*var2[6] - 1.*var2[7]*(-2.032*t1173*t379*var3[2] + 2.032*t1173*t379*var3[7] - 8.128*t1376*t1413*t839*var3[7] - 12.191999999999998*t2065*t2066*t2219*var3[12] + 8.128*t1376*t1413*t839*var3[12] + 12.191999999999998*t2065*t2066*t2219*var3[17] - 8.128*t1152*t2275*t2284*var3[17] + 8.128*t1152*t2275*t2284*var3[22] - 2.032*t2358*t2370*var3[22] + 2.032*t2358*t2370*var3[27]);
  p_output1[3]=-1.*t4894*var2[2] + var2[4] - 1.*t4894*var2[6] - 1.*var2[7]*(-2.032*t1173*t379*var3[3] + 2.032*t1173*t379*var3[8] - 8.128*t1376*t1413*t839*var3[8] - 12.191999999999998*t2065*t2066*t2219*var3[13] + 8.128*t1376*t1413*t839*var3[13] + 12.191999999999998*t2065*t2066*t2219*var3[18] - 8.128*t1152*t2275*t2284*var3[18] + 8.128*t1152*t2275*t2284*var3[23] - 2.032*t2358*t2370*var3[23] + 2.032*t2358*t2370*var3[28]);
  p_output1[4]=-1.*t5295*var2[2] + var2[5] - 1.*t5295*var2[6] - 1.*var2[7]*(-2.032*t1173*t379*var3[4] + 2.032*t1173*t379*var3[9] - 8.128*t1376*t1413*t839*var3[9] - 12.191999999999998*t2065*t2066*t2219*var3[14] + 8.128*t1376*t1413*t839*var3[14] + 12.191999999999998*t2065*t2066*t2219*var3[19] - 8.128*t1152*t2275*t2284*var3[19] + 8.128*t1152*t2275*t2284*var3[24] - 2.032*t2358*t2370*var3[24] + 2.032*t2358*t2370*var3[29]);
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "d1y_position_RightSS2.hh"

namespace RightSS2
{

void d1y_position_RightSS2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
