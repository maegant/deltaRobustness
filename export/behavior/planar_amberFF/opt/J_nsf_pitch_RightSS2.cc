/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:37 GMT-08:00
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
  double t2326;
  double t2275;
  double t2286;
  double t2341;
  double t531;
  double t2427;
  double t2470;
  double t2485;
  double t2323;
  double t2357;
  double t2390;
  double t2528;
  double t480;
  double t2418;
  double t2982;
  double t2984;
  double t3032;
  double t2907;
  double t3140;
  double t3185;
  double t3192;
  double t3049;
  double t3070;
  double t3300;
  double t3319;
  double t3390;
  double t3083;
  double t3234;
  double t3258;
  double t3410;
  double t3445;
  double t3447;
  double t3451;
  double t2559;
  double t2579;
  double t2641;
  double t2718;
  double t2753;
  double t2892;
  double t2916;
  double t2925;
  double t3438;
  double t3453;
  double t3456;
  double t3457;
  double t3488;
  double t3511;
  double t3566;
  double t3578;
  double t3587;
  double t3591;
  double t3649;
  double t3680;
  double t3737;
  double t3744;
  double t3773;
  double t3787;
  double t3881;
  t2326 = Cos(var1[2]);
  t2275 = Cos(var1[3]);
  t2286 = Sin(var1[2]);
  t2341 = Sin(var1[3]);
  t531 = Cos(var1[4]);
  t2427 = -1.*t2326*t2275;
  t2470 = t2286*t2341;
  t2485 = t2427 + t2470;
  t2323 = -1.*t2275*t2286;
  t2357 = -1.*t2326*t2341;
  t2390 = t2323 + t2357;
  t2528 = Sin(var1[4]);
  t480 = Cos(var1[5]);
  t2418 = t531*t2390;
  t2982 = t2326*t2275;
  t2984 = -1.*t2286*t2341;
  t3032 = t2982 + t2984;
  t2907 = Sin(var1[5]);
  t3140 = t531*t3032;
  t3185 = t2390*t2528;
  t3192 = t3140 + t3185;
  t3049 = -1.*t3032*t2528;
  t3070 = t2418 + t3049;
  t3300 = t480*t3192;
  t3319 = t3070*t2907;
  t3390 = t3300 + t3319;
  t3083 = t480*t3070;
  t3234 = -1.*t3192*t2907;
  t3258 = t3083 + t3234;
  t3410 = Power(t3390,2);
  t3445 = Power(t3258,2);
  t3447 = t3445 + t3410;
  t3451 = 1/t3447;
  t2559 = t2485*t2528;
  t2579 = t2418 + t2559;
  t2641 = t480*t2579;
  t2718 = t531*t2485;
  t2753 = -1.*t2390*t2528;
  t2892 = t2718 + t2753;
  t2916 = t2892*t2907;
  t2925 = t2641 + t2916;
  t3438 = 1/Sqrt(t3410);
  t3453 = t2925*t3258*t3390*t3438*t3451;
  t3456 = Power(t3410,-1.5);
  t3457 = t2925*t3258*t3410*t3456;
  t3488 = -1.*t2925*t3258*t3438;
  t3511 = t480*t2892;
  t3566 = -1.*t2579*t2907;
  t3578 = t3511 + t3566;
  t3587 = -1.*t3390*t3438*t3578;
  t3591 = t3457 + t3488 + t3587;
  t3649 = t3390*t3451*t3591;
  t3680 = t3453 + t3649;
  t3737 = -1.*t531*t3032;
  t3744 = t3737 + t2753;
  t3773 = t3744*t2907;
  t3787 = t3083 + t3773;
  t3881 = -1.*t3070*t2907;
  p_output1[0]=t3680;
  p_output1[1]=t3680;
  p_output1[2]=t3258*t3390*t3438*t3451*t3787 + t3390*t3451*(-1.*t3258*t3438*t3787 + t3258*t3410*t3456*t3787 - 1.*t3390*t3438*(t3881 + t3744*t480));
  p_output1[3]=t3390*t3438*t3445*t3451 + t3390*t3451*(-1.*t3438*t3445 + t3410*t3445*t3456 - 1.*t3390*t3438*(t3881 - 1.*t3192*t480));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_nsf_pitch_RightSS2.hh"

namespace RightSS2
{

void J_nsf_pitch_RightSS2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
