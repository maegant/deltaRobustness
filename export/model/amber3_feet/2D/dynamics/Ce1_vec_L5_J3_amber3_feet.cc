/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:44 GMT-08:00
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
  double t1185;
  double t1667;
  double t2194;
  double t1910;
  double t1186;
  double t1294;
  double t1295;
  double t1360;
  double t1387;
  double t2361;
  double t1986;
  double t2197;
  double t2235;
  double t1674;
  double t1717;
  double t1846;
  double t2240;
  double t2336;
  double t2339;
  double t2358;
  double t2411;
  double t2513;
  double t2559;
  double t2623;
  double t3156;
  double t3288;
  double t3495;
  double t3648;
  double t2822;
  double t2832;
  double t2888;
  double t3652;
  double t3663;
  double t3786;
  double t3822;
  t1185 = Cos(var1[6]);
  t1667 = Sin(var1[6]);
  t2194 = Sin(var1[2]);
  t1910 = Cos(var1[2]);
  t1186 = -1.*t1185;
  t1294 = 1. + t1186;
  t1295 = -0.4999*t1294;
  t1360 = -0.6493*t1185;
  t1387 = t1295 + t1360;
  t2361 = t1387*t1185;
  t1986 = t1910*t1185;
  t2197 = -1.*t2194*t1667;
  t2235 = t1986 + t2197;
  t1674 = t1387*t1667;
  t1717 = 0.14939999999999998*t1185*t1667;
  t1846 = t1674 + t1717;
  t2240 = 3.4261*t1846*t2235;
  t2336 = -1.*t1185*t2194;
  t2339 = -1.*t1910*t1667;
  t2358 = t2336 + t2339;
  t2411 = Power(t1667,2);
  t2513 = -0.14939999999999998*t2411;
  t2559 = t2361 + t2513;
  t2623 = 3.4261*t2358*t2559;
  t3156 = -1.*t1387*t1667;
  t3288 = -0.14939999999999998*t1185*t1667;
  t3495 = t3156 + t3288;
  t3648 = 3.4261*t2358*t1846;
  t2822 = Power(t1185,2);
  t2832 = 0.14939999999999998*t2822;
  t2888 = t2361 + t2832;
  t3652 = -1.*t1910*t1185;
  t3663 = t2194*t1667;
  t3786 = t3652 + t3663;
  t3822 = 3.4261*t3786*t2559;
  p_output1[0]=var2[2]*(-0.5*(t2240 + t2623)*var2[2] - 0.5*(t2240 + t2623 + 3.4261*(t1667*t1910 + t1185*t2194)*t2888 + 3.4261*t2235*t3495)*var2[6]);
  p_output1[1]=var2[2]*(-0.5*(t3648 + t3822)*var2[2] - 0.5*(3.4261*t2235*t2888 + 3.4261*t2358*t3495 + t3648 + t3822)*var2[6]);
  p_output1[2]=-0.5*(6.8522*t1846*t2888 + 6.8522*t2559*t3495)*var2[2]*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0.25592966999999994*t3495*var2[2]*var2[6];
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

#include "Ce1_vec_L5_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L5_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
