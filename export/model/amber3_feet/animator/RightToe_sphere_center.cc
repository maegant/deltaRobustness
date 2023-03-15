/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:38 GMT-08:00
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
  double t698;
  double t1882;
  double t2250;
  double t2621;
  double t3556;
  double t3900;
  double t3924;
  double t4084;
  double t4185;
  double t4189;
  double t4220;
  double t4232;
  double t4312;
  double t4399;
  double t4426;
  double t4430;
  double t4509;
  double t4538;
  double t4542;
  double t4576;
  double t802;
  double t1323;
  double t3594;
  double t3638;
  double t4346;
  double t4387;
  double t4798;
  double t4803;
  double t4804;
  double t4840;
  double t4852;
  double t4858;
  double t4811;
  double t4813;
  t698 = Cos(var1[6]);
  t1882 = Sin(var1[2]);
  t2250 = Cos(var1[2]);
  t2621 = Sin(var1[6]);
  t3556 = Cos(var1[7]);
  t3900 = t698*t1882;
  t3924 = t2250*t2621;
  t4084 = t3900 + t3924;
  t4185 = t2250*t698;
  t4189 = -1.*t1882*t2621;
  t4220 = t4185 + t4189;
  t4232 = Sin(var1[7]);
  t4312 = Cos(var1[8]);
  t4399 = t3556*t4084;
  t4426 = t4220*t4232;
  t4430 = t4399 + t4426;
  t4509 = t3556*t4220;
  t4538 = -1.*t4084*t4232;
  t4542 = t4509 + t4538;
  t4576 = Sin(var1[8]);
  t802 = -1.*t698;
  t1323 = 1. + t802;
  t3594 = -1.*t3556;
  t3638 = 1. + t3594;
  t4346 = -1.*t4312;
  t4387 = 1. + t4346;
  t4798 = -1.*t698*t1882;
  t4803 = -1.*t2250*t2621;
  t4804 = t4798 + t4803;
  t4840 = t3556*t4804;
  t4852 = -1.*t4220*t4232;
  t4858 = t4840 + t4852;
  t4811 = t4804*t4232;
  t4813 = t4509 + t4811;
  p_output1[0]=-0.4999*t1323*t1882 + 0.4999*t2250*t2621 - 0.9063*t3638*t4084 + 0.9063*t4220*t4232 - 1.3127*t4387*t4430 + 1.3127*t4542*t4576 + 0.16*(t4312*t4542 - 1.*t4430*t4576) - 1.3127*(t4312*t4430 + t4542*t4576) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t1323*t2250 - 0.4999*t1882*t2621 - 0.9063*t3638*t4220 + 0.9063*t4232*t4804 - 1.3127*t4387*t4813 + 1.3127*t4576*t4858 + 0.16*(-1.*t4576*t4813 + t4312*t4858) - 1.3127*(t4312*t4813 + t4576*t4858) + var1[1];
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

#include "RightToe_sphere_center.hh"

namespace SymFunction
{

void RightToe_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
