/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:34 GMT-08:00
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
  double t43;
  double t2244;
  double t2410;
  double t2416;
  double t2514;
  double t2742;
  double t2752;
  double t2869;
  double t2935;
  double t2938;
  double t2950;
  double t2960;
  double t3109;
  double t3172;
  double t3201;
  double t3223;
  double t3260;
  double t3292;
  double t3296;
  double t3299;
  double t1573;
  double t1869;
  double t2580;
  double t2655;
  double t3143;
  double t3161;
  double t3523;
  double t3540;
  double t3546;
  double t3555;
  double t3573;
  double t3602;
  double t3605;
  double t3611;
  t43 = Cos(var1[6]);
  t2244 = Sin(var1[2]);
  t2410 = Cos(var1[2]);
  t2416 = Sin(var1[6]);
  t2514 = Cos(var1[7]);
  t2742 = t43*t2244;
  t2752 = t2410*t2416;
  t2869 = t2742 + t2752;
  t2935 = t2410*t43;
  t2938 = -1.*t2244*t2416;
  t2950 = t2935 + t2938;
  t2960 = Sin(var1[7]);
  t3109 = Cos(var1[8]);
  t3172 = t2514*t2869;
  t3201 = t2950*t2960;
  t3223 = t3172 + t3201;
  t3260 = t2514*t2950;
  t3292 = -1.*t2869*t2960;
  t3296 = t3260 + t3292;
  t3299 = Sin(var1[8]);
  t1573 = -1.*t43;
  t1869 = 1. + t1573;
  t2580 = -1.*t2514;
  t2655 = 1. + t2580;
  t3143 = -1.*t3109;
  t3161 = 1. + t3143;
  t3523 = -1.*t43*t2244;
  t3540 = -1.*t2410*t2416;
  t3546 = t3523 + t3540;
  t3555 = t3546*t2960;
  t3573 = t3260 + t3555;
  t3602 = t2514*t3546;
  t3605 = -1.*t2950*t2960;
  t3611 = t3602 + t3605;
  p_output1[0]=-0.4999*t1869*t2244 + 0.4999*t2410*t2416 - 0.9063*t2655*t2869 + 0.9063*t2950*t2960 - 1.3127*t3161*t3223 + 1.3127*t3296*t3299 - 1.3127*(t3109*t3223 + t3296*t3299) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t1869*t2410 - 0.4999*t2244*t2416 - 0.9063*t2655*t2950 + 0.9063*t2960*t3546 - 1.3127*t3161*t3573 + 1.3127*t3299*t3611 - 1.3127*(t3109*t3573 + t3299*t3611) + var1[1];
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

#include "Joint_RightAnkle_sphere_center.hh"

namespace SymFunction
{

void Joint_RightAnkle_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
