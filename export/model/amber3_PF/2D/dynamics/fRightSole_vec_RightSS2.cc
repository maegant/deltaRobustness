/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 09:34:50 GMT-08:00
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
  double t328;
  double t1524;
  double t2355;
  double t2497;
  double t2584;
  double t2859;
  double t2879;
  double t2887;
  double t3004;
  double t3081;
  double t3095;
  double t3122;
  double t2079;
  double t2115;
  double t2757;
  double t2841;
  double t3599;
  double t3634;
  double t3681;
  double t2565;
  double t2979;
  double t3237;
  double t3272;
  double t3278;
  double t3356;
  double t3389;
  double t3465;
  double t3521;
  double t3719;
  double t3784;
  double t3831;
  double t3877;
  double t3881;
  double t4179;
  double t4203;
  double t4223;
  t328 = Cos(var1[2]);
  t1524 = Cos(var1[5]);
  t2355 = Sin(var1[2]);
  t2497 = Sin(var1[5]);
  t2584 = Cos(var1[6]);
  t2859 = t328*t1524;
  t2879 = -1.*t2355*t2497;
  t2887 = t2859 + t2879;
  t3004 = -1.*t1524*t2355;
  t3081 = -1.*t328*t2497;
  t3095 = t3004 + t3081;
  t3122 = Sin(var1[6]);
  t2079 = -1.*t1524;
  t2115 = 1. + t2079;
  t2757 = -1.*t2584;
  t2841 = 1. + t2757;
  t3599 = -1.*t328*t1524;
  t3634 = t2355*t2497;
  t3681 = t3599 + t3634;
  t2565 = -0.4999*t2355*t2497;
  t2979 = -0.9063*t2841*t2887;
  t3237 = 0.9063*t3095*t3122;
  t3272 = t2584*t2887;
  t3278 = t3095*t3122;
  t3356 = t3272 + t3278;
  t3389 = -1.373025*t3356;
  t3465 = -0.4999*t328*t2497;
  t3521 = -0.9063*t2841*t3095;
  t3719 = 0.9063*t3681*t3122;
  t3784 = t2584*t3095;
  t3831 = t3681*t3122;
  t3877 = t3784 + t3831;
  t3881 = -1.373025*t3877;
  t4179 = t1524*t2355;
  t4203 = t328*t2497;
  t4223 = t4179 + t4203;
  p_output1[0]=var2[0];
  p_output1[1]=var2[1];
  p_output1[2]=(0. + t2565 + t2979 + t3237 - 0.4999*t2115*t328 + t3389)*var2[0] + (0. + 0.4999*t2115*t2355 + t3465 + t3521 + t3719 + t3881)*var2[1];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(0. + t2565 + t2979 + t3237 + 0.4999*t1524*t328 + t3389)*var2[0] + (0. - 0.4999*t1524*t2355 + t3465 + t3521 + t3719 + t3881)*var2[1];
  p_output1[6]=(0. + 0.9063*t2584*t2887 - 0.9063*t3122*t4223 - 1.373025*(t3272 - 1.*t3122*t4223))*var2[0] + (0. + 0.9063*t2584*t3095 - 0.9063*t2887*t3122 - 1.373025*(-1.*t2887*t3122 + t3784))*var2[1];
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRightSole_vec_RightSS2.hh"

namespace RightSS2
{

void fRightSole_vec_RightSS2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
