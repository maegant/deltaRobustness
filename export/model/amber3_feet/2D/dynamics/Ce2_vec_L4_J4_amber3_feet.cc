/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:31 GMT-08:00
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
  double t1813;
  double t413;
  double t539;
  double t1990;
  double t2157;
  double t1216;
  double t2052;
  double t2053;
  double t300;
  double t2160;
  double t2161;
  double t2179;
  double t2590;
  double t259;
  double t3596;
  double t3597;
  double t3598;
  double t2667;
  double t3347;
  double t3348;
  double t3363;
  double t3401;
  double t3443;
  double t3489;
  double t2120;
  double t2289;
  double t2382;
  double t2402;
  double t2643;
  double t2683;
  double t3016;
  double t3098;
  double t3599;
  double t3604;
  double t3610;
  double t3612;
  double t3662;
  double t3823;
  double t3825;
  double t3829;
  double t4808;
  double t4845;
  double t4877;
  double t5242;
  double t5255;
  double t5267;
  double t4486;
  double t4605;
  double t4621;
  double t4623;
  double t5477;
  double t5480;
  double t5501;
  double t5509;
  double t5511;
  double t5537;
  double t5550;
  double t5554;
  double t5574;
  double t5576;
  double t5604;
  double t6688;
  double t6797;
  double t6945;
  double t6946;
  double t7010;
  double t7093;
  double t6476;
  double t6487;
  double t6566;
  double t6574;
  double t7947;
  double t7957;
  double t8074;
  double t8076;
  double t7499;
  double t7678;
  double t5975;
  double t5997;
  double t6064;
  double t3331;
  double t3523;
  double t3590;
  double t3594;
  double t5809;
  double t5817;
  double t5826;
  double t4009;
  double t4052;
  double t4070;
  double t4187;
  double t4232;
  double t4628;
  double t4706;
  double t5281;
  double t5300;
  double t5325;
  double t5400;
  double t5404;
  double t5405;
  double t5721;
  double t5759;
  double t6160;
  double t6185;
  double t5803;
  double t5857;
  double t6140;
  double t6241;
  double t6309;
  double t6575;
  double t7119;
  double t7304;
  double t7430;
  double t7807;
  double t8082;
  double t8136;
  double t8139;
  double t8187;
  double t8228;
  double t8235;
  double t8250;
  double t8251;
  double t8252;
  double t8255;
  double t8267;
  double t8334;
  double t8341;
  double t8343;
  double t8346;
  double t8348;
  double t7327;
  double t8147;
  double t8237;
  double t8268;
  double t8272;
  double t8301;
  double t8302;
  double t8312;
  double t5324;
  double t5411;
  double t5412;
  double t8375;
  double t8376;
  double t8377;
  double t8283;
  double t8291;
  double t8293;
  double t3925;
  double t4302;
  double t4350;
  double t8365;
  double t8367;
  double t8368;
  t1813 = Cos(var1[4]);
  t413 = Cos(var1[5]);
  t539 = Sin(var1[4]);
  t1990 = Sin(var1[5]);
  t2157 = Cos(var1[3]);
  t1216 = t413*t539;
  t2052 = t1813*t1990;
  t2053 = t1216 + t2052;
  t300 = Sin(var1[3]);
  t2160 = t1813*t413;
  t2161 = -1.*t539*t1990;
  t2179 = t2160 + t2161;
  t2590 = Sin(var1[2]);
  t259 = Cos(var1[2]);
  t3596 = -1.*t413*t539;
  t3597 = -1.*t1813*t1990;
  t3598 = t3596 + t3597;
  t2667 = -1.*t300*t2179;
  t3347 = -1.*t413;
  t3348 = 1. + t3347;
  t3363 = -1.3127*t3348;
  t3401 = -1.3127*t413;
  t3443 = -0.06*t1990;
  t3489 = t3363 + t3401 + t3443;
  t2120 = -1.*t300*t2053;
  t2289 = t2157*t2179;
  t2382 = t2120 + t2289;
  t2402 = t259*t2382;
  t2643 = -1.*t2157*t2053;
  t2683 = t2643 + t2667;
  t3016 = t2590*t2683;
  t3098 = t2402 + t3016;
  t3599 = -1.*t300*t3598;
  t3604 = -1.*t2157*t2179;
  t3610 = t3599 + t3604;
  t3612 = t2590*t3610;
  t3662 = t2157*t3598;
  t3823 = t3662 + t2667;
  t3825 = t259*t3823;
  t3829 = t3612 + t3825;
  t4808 = -1.*t1813;
  t4845 = 1. + t4808;
  t4877 = -0.9063*t4845;
  t5242 = -0.06*t413*t539;
  t5255 = t1813*t3489;
  t5267 = t4877 + t5242 + t5255;
  t4486 = 0.06*t1813*t413;
  t4605 = 0.9063*t539;
  t4621 = t539*t3489;
  t4623 = t4486 + t4605 + t4621;
  t5477 = t300*t3598;
  t5480 = t5477 + t2289;
  t5501 = t259*t5480;
  t5509 = t2590*t3823;
  t5511 = t5501 + t5509;
  t5537 = t2590*t2382;
  t5550 = t2157*t2053;
  t5554 = t300*t2179;
  t5574 = t5550 + t5554;
  t5576 = t259*t5574;
  t5604 = t5537 + t5576;
  t6688 = -1.*t2157;
  t6797 = 1. + t6688;
  t6945 = -0.4999*t6797;
  t6946 = t2157*t5267;
  t7010 = -1.*t300*t4623;
  t7093 = t6945 + t6946 + t7010;
  t6476 = 0.4999*t300;
  t6487 = t300*t5267;
  t6566 = t2157*t4623;
  t6574 = t6476 + t6487 + t6566;
  t7947 = -0.4999*t300;
  t7957 = -1.*t300*t5267;
  t8074 = -1.*t2157*t4623;
  t8076 = t7947 + t7957 + t8074;
  t7499 = 0.4999*t2157;
  t7678 = t7499 + t6946 + t7010;
  t5975 = -1.*t2590*t2382;
  t5997 = t259*t2683;
  t6064 = t5975 + t5997;
  t3331 = 0.9063*t413;
  t3523 = t413*t3489;
  t3590 = 0.06*t413*t1990;
  t3594 = t3331 + t3523 + t3590;
  t5809 = t259*t3610;
  t5817 = -1.*t2590*t3823;
  t5826 = t5809 + t5817;
  t4009 = Power(t413,2);
  t4052 = -0.06*t4009;
  t4070 = 0.9063*t1990;
  t4187 = t3489*t1990;
  t4232 = t4052 + t4070 + t4187;
  t4628 = t4623*t2053;
  t4706 = 0.4999*t2179;
  t5281 = t5267*t2179;
  t5300 = t4628 + t4706 + t5281;
  t5325 = -1.*t5267*t3598;
  t5400 = 0.4999*t2053;
  t5404 = -1.*t4623*t2179;
  t5405 = t5325 + t5400 + t5404;
  t5721 = -1.*t2590*t5480;
  t5759 = t5721 + t3825;
  t6160 = -1.*t2590*t5574;
  t6185 = t2402 + t6160;
  t5803 = 1.142857*t3829*t5759;
  t5857 = 1.142857*t5826*t5511;
  t6140 = 1.142857*t6064*t5604;
  t6241 = 1.142857*t3098*t6185;
  t6309 = t5803 + t5857 + t6140 + t6241;
  t6575 = -1.*t6574*t5480;
  t7119 = -1.*t7093*t3823;
  t7304 = t6575 + t7119;
  t7430 = -1.*t7093*t3610;
  t7807 = -1.*t7678*t5480;
  t8082 = -1.*t8076*t3823;
  t8136 = -1.*t6574*t3823;
  t8139 = t7430 + t7807 + t8082 + t8136;
  t8187 = t7093*t2382;
  t8228 = t6574*t5574;
  t8235 = t8187 + t8228;
  t8250 = t8076*t2382;
  t8251 = t6574*t2382;
  t8252 = t7093*t2683;
  t8255 = t7678*t5574;
  t8267 = t8250 + t8251 + t8252 + t8255;
  t8334 = 1.142857*t7304*t6064;
  t8341 = 1.142857*t8139*t6185;
  t8343 = 1.142857*t5826*t8235;
  t8346 = 1.142857*t5759*t8267;
  t8348 = t8334 + t8341 + t8343 + t8346;
  t7327 = 1.142857*t7304*t3098;
  t8147 = 1.142857*t8139*t5604;
  t8237 = 1.142857*t3829*t8235;
  t8268 = 1.142857*t5511*t8267;
  t8272 = t7327 + t8147 + t8237 + t8268;
  t8301 = 1.142857*t5300*t5826;
  t8302 = 1.142857*t5405*t6064;
  t8312 = t8301 + t8302;
  t5324 = 1.142857*t5300*t3829;
  t5411 = 1.142857*t5405*t3098;
  t5412 = t5324 + t5411;
  t8375 = 1.142857*t5405*t8139;
  t8376 = 1.142857*t5300*t8267;
  t8377 = t8375 + t8376;
  t8283 = 1.142857*t3594*t5826;
  t8291 = 1.142857*t4232*t6064;
  t8293 = t8283 + t8291;
  t3925 = 1.142857*t3594*t3829;
  t4302 = 1.142857*t4232*t3098;
  t4350 = t3925 + t4302;
  t8365 = 1.142857*t4232*t8139;
  t8367 = 1.142857*t3594*t8267;
  t8368 = t8365 + t8367;
  p_output1[0]=var2[3]*(-0.5*(2.285714*t3829*t5511 + 2.285714*t3098*t5604)*var2[0] - 0.5*t6309*var2[1] - 0.5*t8272*var2[2] - 0.5*t5412*var2[3] - 0.5*t4350*var2[4] + 0.03428571*t3098*var2[5]);
  p_output1[1]=var2[3]*(-0.5*t6309*var2[0] - 0.5*(2.285714*t5759*t5826 + 2.285714*t6064*t6185)*var2[1] - 0.5*t8348*var2[2] - 0.5*t8312*var2[3] - 0.5*t8293*var2[4] + 0.03428571*t6064*var2[5]);
  p_output1[2]=var2[3]*(-0.5*t8272*var2[0] - 0.5*t8348*var2[1] - 0.5*(2.285714*t7304*t8139 + 2.285714*t8235*t8267)*var2[2] - 0.5*t8377*var2[3] - 0.5*t8368*var2[4] + 0.03428571*t8139*var2[5]);
  p_output1[3]=(-0.5*t5412*var2[0] - 0.5*t8312*var2[1] - 0.5*t8377*var2[2])*var2[3];
  p_output1[4]=(-0.5*t4350*var2[0] - 0.5*t8293*var2[1] - 0.5*t8368*var2[2])*var2[3];
  p_output1[5]=(0.03428571*t3098*var2[0] + 0.03428571*t6064*var2[1] + 0.03428571*t8139*var2[2])*var2[3];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
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

#include "Ce2_vec_L4_J4_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L4_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
