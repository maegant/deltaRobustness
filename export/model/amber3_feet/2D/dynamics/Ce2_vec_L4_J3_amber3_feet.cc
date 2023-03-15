/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:30 GMT-08:00
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
  double t908;
  double t325;
  double t358;
  double t958;
  double t1749;
  double t539;
  double t1216;
  double t1232;
  double t304;
  double t1813;
  double t1939;
  double t1943;
  double t2362;
  double t2120;
  double t297;
  double t3444;
  double t3480;
  double t3488;
  double t2864;
  double t2996;
  double t3098;
  double t3142;
  double t3331;
  double t3347;
  double t1636;
  double t2217;
  double t2289;
  double t2382;
  double t2402;
  double t2523;
  double t2585;
  double t2590;
  double t3489;
  double t3504;
  double t3508;
  double t3523;
  double t3533;
  double t3572;
  double t3590;
  double t3594;
  double t4057;
  double t4065;
  double t4070;
  double t4187;
  double t4232;
  double t4294;
  double t3825;
  double t3829;
  double t3925;
  double t3982;
  double t5255;
  double t5267;
  double t5281;
  double t5405;
  double t5411;
  double t5412;
  double t5938;
  double t5944;
  double t5975;
  double t5997;
  double t6001;
  double t6013;
  double t5817;
  double t5826;
  double t5857;
  double t5907;
  double t5564;
  double t5663;
  double t5666;
  double t2667;
  double t3348;
  double t3401;
  double t3443;
  double t5513;
  double t5514;
  double t5550;
  double t3597;
  double t3598;
  double t3599;
  double t3604;
  double t3610;
  double t4009;
  double t4052;
  double t4302;
  double t4350;
  double t4416;
  double t4486;
  double t4522;
  double t4621;
  double t5509;
  double t5511;
  double t5554;
  double t5667;
  double t5721;
  double t5803;
  double t5806;
  double t5932;
  double t6041;
  double t6064;
  double t6160;
  double t6185;
  double t6241;
  double t6140;
  double t6309;
  double t6334;
  double t7499;
  double t7678;
  double t7938;
  double t6945;
  double t6946;
  double t6964;
  double t4397;
  double t4628;
  double t4971;
  double t6575;
  double t6688;
  double t6796;
  double t3596;
  double t3612;
  double t3806;
  t908 = Cos(var1[4]);
  t325 = Cos(var1[5]);
  t358 = Sin(var1[4]);
  t958 = Sin(var1[5]);
  t1749 = Cos(var1[3]);
  t539 = t325*t358;
  t1216 = t908*t958;
  t1232 = t539 + t1216;
  t304 = Sin(var1[3]);
  t1813 = t908*t325;
  t1939 = -1.*t358*t958;
  t1943 = t1813 + t1939;
  t2362 = Sin(var1[2]);
  t2120 = t1749*t1943;
  t297 = Cos(var1[2]);
  t3444 = -1.*t325*t358;
  t3480 = -1.*t908*t958;
  t3488 = t3444 + t3480;
  t2864 = -1.*t325;
  t2996 = 1. + t2864;
  t3098 = -1.3127*t2996;
  t3142 = -1.3127*t325;
  t3331 = -0.06*t958;
  t3347 = t3098 + t3142 + t3331;
  t1636 = -1.*t304*t1232;
  t2217 = t1636 + t2120;
  t2289 = t297*t2217;
  t2382 = t1749*t1232;
  t2402 = t304*t1943;
  t2523 = t2382 + t2402;
  t2585 = -1.*t2362*t2523;
  t2590 = t2289 + t2585;
  t3489 = t304*t3488;
  t3504 = t3489 + t2120;
  t3508 = -1.*t2362*t3504;
  t3523 = t1749*t3488;
  t3533 = -1.*t304*t1943;
  t3572 = t3523 + t3533;
  t3590 = t297*t3572;
  t3594 = t3508 + t3590;
  t4057 = -1.*t908;
  t4065 = 1. + t4057;
  t4070 = -0.9063*t4065;
  t4187 = -0.06*t325*t358;
  t4232 = t908*t3347;
  t4294 = t4070 + t4187 + t4232;
  t3825 = 0.06*t908*t325;
  t3829 = 0.9063*t358;
  t3925 = t358*t3347;
  t3982 = t3825 + t3829 + t3925;
  t5255 = t297*t3504;
  t5267 = t2362*t3572;
  t5281 = t5255 + t5267;
  t5405 = t2362*t2217;
  t5411 = t297*t2523;
  t5412 = t5405 + t5411;
  t5938 = -1.*t1749;
  t5944 = 1. + t5938;
  t5975 = -0.4999*t5944;
  t5997 = t1749*t4294;
  t6001 = -1.*t304*t3982;
  t6013 = t5975 + t5997 + t6001;
  t5817 = 0.4999*t304;
  t5826 = t304*t4294;
  t5857 = t1749*t3982;
  t5907 = t5817 + t5826 + t5857;
  t5564 = -1.*t2362*t2217;
  t5663 = -1.*t297*t2523;
  t5666 = t5564 + t5663;
  t2667 = 0.9063*t325;
  t3348 = t325*t3347;
  t3401 = 0.06*t325*t958;
  t3443 = t2667 + t3348 + t3401;
  t5513 = -1.*t297*t3504;
  t5514 = -1.*t2362*t3572;
  t5550 = t5513 + t5514;
  t3597 = Power(t325,2);
  t3598 = -0.06*t3597;
  t3599 = 0.9063*t958;
  t3604 = t3347*t958;
  t3610 = t3598 + t3599 + t3604;
  t4009 = t3982*t1232;
  t4052 = 0.4999*t1943;
  t4302 = t4294*t1943;
  t4350 = t4009 + t4052 + t4302;
  t4416 = -1.*t4294*t3488;
  t4486 = 0.4999*t1232;
  t4522 = -1.*t3982*t1943;
  t4621 = t4416 + t4486 + t4522;
  t5509 = Power(t3594,2);
  t5511 = 1.142857*t5509;
  t5554 = 1.142857*t5550*t5281;
  t5667 = 1.142857*t5666*t5412;
  t5721 = Power(t2590,2);
  t5803 = 1.142857*t5721;
  t5806 = t5511 + t5554 + t5667 + t5803;
  t5932 = -1.*t5907*t3504;
  t6041 = -1.*t6013*t3572;
  t6064 = t5932 + t6041;
  t6160 = t6013*t2217;
  t6185 = t5907*t2523;
  t6241 = t6160 + t6185;
  t6140 = 1.142857*t6064*t2590;
  t6309 = 1.142857*t3594*t6241;
  t6334 = t6140 + t6309;
  t7499 = 1.142857*t6064*t5666;
  t7678 = 1.142857*t5550*t6241;
  t7938 = t7499 + t7678;
  t6945 = 1.142857*t4350*t5550;
  t6946 = 1.142857*t4621*t5666;
  t6964 = t6945 + t6946;
  t4397 = 1.142857*t4350*t3594;
  t4628 = 1.142857*t4621*t2590;
  t4971 = t4397 + t4628;
  t6575 = 1.142857*t3443*t5550;
  t6688 = 1.142857*t3610*t5666;
  t6796 = t6575 + t6688;
  t3596 = 1.142857*t3443*t3594;
  t3612 = 1.142857*t3610*t2590;
  t3806 = t3596 + t3612;
  p_output1[0]=var2[2]*(-0.5*(2.285714*t3594*t5281 + 2.285714*t2590*t5412)*var2[0] - 0.5*t5806*var2[1] - 0.5*t6334*var2[2] - 0.5*t4971*var2[3] - 0.5*t3806*var2[4] + 0.03428571*t2590*var2[5]);
  p_output1[1]=var2[2]*(-0.5*t5806*var2[0] - 0.5*(2.285714*t3594*t5550 + 2.285714*t2590*t5666)*var2[1] - 0.5*t7938*var2[2] - 0.5*t6964*var2[3] - 0.5*t6796*var2[4] + 0.03428571*t5666*var2[5]);
  p_output1[2]=(-0.5*t6334*var2[0] - 0.5*t7938*var2[1])*var2[2];
  p_output1[3]=(-0.5*t4971*var2[0] - 0.5*t6964*var2[1])*var2[2];
  p_output1[4]=(-0.5*t3806*var2[0] - 0.5*t6796*var2[1])*var2[2];
  p_output1[5]=(0.03428571*t2590*var2[0] + 0.03428571*t5666*var2[1])*var2[2];
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

#include "Ce2_vec_L4_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L4_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
