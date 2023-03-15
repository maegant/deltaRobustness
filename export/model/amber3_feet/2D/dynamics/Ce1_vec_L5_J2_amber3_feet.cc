/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:43 GMT-08:00
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
  double t6;
  double t7;
  double t19;
  double t1072;
  double t1148;
  double t1187;
  double t1294;
  double t1986;
  double t2021;
  double t2194;
  double t1295;
  double t1360;
  double t1667;
  double t1674;
  double t1717;
  double t1910;
  double t2235;
  double t2240;
  double t2380;
  double t2411;
  double t2513;
  double t2559;
  double t2582;
  double t2832;
  double t2888;
  double t2905;
  double t3340;
  double t3350;
  double t3495;
  double t3576;
  double t3630;
  double t3638;
  double t3648;
  double t3652;
  double t3659;
  double t3786;
  double t3822;
  double t3857;
  double t3944;
  double t3945;
  t6 = Cos(var1[6]);
  t7 = Sin(var1[2]);
  t19 = -1.*t6*t7;
  t1072 = Cos(var1[2]);
  t1148 = Sin(var1[6]);
  t1187 = -1.*t1072*t1148;
  t1294 = t19 + t1187;
  t1986 = t1072*t6;
  t2021 = -1.*t7*t1148;
  t2194 = t1986 + t2021;
  t1295 = Power(t1294,2);
  t1360 = 3.4261*t1295;
  t1667 = t6*t7;
  t1674 = t1072*t1148;
  t1717 = t1667 + t1674;
  t1910 = 3.4261*t1294*t1717;
  t2235 = Power(t2194,2);
  t2240 = 3.4261*t2235;
  t2380 = -1.*t1072*t6;
  t2411 = t7*t1148;
  t2513 = t2380 + t2411;
  t2559 = 3.4261*t2194*t2513;
  t2582 = t1360 + t1910 + t2240 + t2559;
  t2832 = 6.8522*t1294*t2194;
  t2888 = 6.8522*t1294*t2513;
  t2905 = t2832 + t2888;
  t3340 = -1.*t6;
  t3350 = 1. + t3340;
  t3495 = -0.4999*t3350;
  t3576 = -0.6493*t6;
  t3630 = t3495 + t3576;
  t3638 = t3630*t1148;
  t3648 = 0.14939999999999998*t6*t1148;
  t3652 = t3638 + t3648;
  t3659 = 3.4261*t1294*t3652;
  t3786 = t3630*t6;
  t3822 = Power(t1148,2);
  t3857 = -0.14939999999999998*t3822;
  t3944 = t3786 + t3857;
  t3945 = 3.4261*t2513*t3944;
  p_output1[0]=var2[1]*(-0.5*t2582*var2[2] - 0.5*t2582*var2[6]);
  p_output1[1]=var2[1]*(-0.5*t2905*var2[2] - 0.5*t2905*var2[6]);
  p_output1[2]=var2[1]*(-0.5*(t3659 + t3945)*var2[2] - 0.5*(t3659 + t3945 + 3.4261*t1294*(-1.*t1148*t3630 - 0.14939999999999998*t1148*t6) + 3.4261*t2194*(t3786 + 0.14939999999999998*Power(t6,2)))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[1]*(0.25592966999999994*t2513*var2[2] + 0.25592966999999994*t2513*var2[6]);
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

#include "Ce1_vec_L5_J2_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L5_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
