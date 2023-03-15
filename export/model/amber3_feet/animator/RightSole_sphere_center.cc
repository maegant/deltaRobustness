/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:36 GMT-08:00
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
  double t333;
  double t1952;
  double t2366;
  double t2659;
  double t3018;
  double t3252;
  double t3343;
  double t3401;
  double t3436;
  double t3442;
  double t3555;
  double t3573;
  double t3602;
  double t3638;
  double t3666;
  double t3708;
  double t3739;
  double t3772;
  double t3784;
  double t3902;
  double t520;
  double t838;
  double t3172;
  double t3223;
  double t3611;
  double t3636;
  double t4148;
  double t4165;
  double t4167;
  double t4232;
  double t4254;
  double t4256;
  double t4200;
  double t4209;
  t333 = Cos(var1[6]);
  t1952 = Sin(var1[2]);
  t2366 = Cos(var1[2]);
  t2659 = Sin(var1[6]);
  t3018 = Cos(var1[7]);
  t3252 = t333*t1952;
  t3343 = t2366*t2659;
  t3401 = t3252 + t3343;
  t3436 = t2366*t333;
  t3442 = -1.*t1952*t2659;
  t3555 = t3436 + t3442;
  t3573 = Sin(var1[7]);
  t3602 = Cos(var1[8]);
  t3638 = t3018*t3401;
  t3666 = t3555*t3573;
  t3708 = t3638 + t3666;
  t3739 = t3018*t3555;
  t3772 = -1.*t3401*t3573;
  t3784 = t3739 + t3772;
  t3902 = Sin(var1[8]);
  t520 = -1.*t333;
  t838 = 1. + t520;
  t3172 = -1.*t3018;
  t3223 = 1. + t3172;
  t3611 = -1.*t3602;
  t3636 = 1. + t3611;
  t4148 = -1.*t333*t1952;
  t4165 = -1.*t2366*t2659;
  t4167 = t4148 + t4165;
  t4232 = t3018*t4167;
  t4254 = -1.*t3555*t3573;
  t4256 = t4232 + t4254;
  t4200 = t4167*t3573;
  t4209 = t3739 + t4200;
  p_output1[0]=0.4999*t2366*t2659 - 0.9063*t3223*t3401 + 0.9063*t3555*t3573 - 1.3127*t3636*t3708 + 1.3127*t3784*t3902 + 0.06*(t3602*t3784 - 1.*t3708*t3902) - 1.3127*(t3602*t3708 + t3784*t3902) - 0.4999*t1952*t838 + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t1952*t2659 - 0.9063*t3223*t3555 + 0.9063*t3573*t4167 - 1.3127*t3636*t4209 + 1.3127*t3902*t4256 + 0.06*(-1.*t3902*t4209 + t3602*t4256) - 1.3127*(t3602*t4209 + t3902*t4256) - 0.4999*t2366*t838 + var1[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "RightSole_sphere_center.hh"

namespace SymFunction
{

void RightSole_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
