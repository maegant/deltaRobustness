/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:20:51 GMT-08:00
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
  double t145;
  double t326;
  double t484;
  double t930;
  double t1925;
  double t2525;
  double t2679;
  double t2925;
  double t2988;
  double t3128;
  double t3254;
  double t3349;
  double t3852;
  double t4138;
  double t4180;
  double t4402;
  double t4648;
  double t4938;
  double t4983;
  double t4991;
  double t317;
  double t321;
  double t1936;
  double t2497;
  double t4036;
  double t4118;
  double t7296;
  double t7306;
  double t7323;
  double t7415;
  double t7418;
  double t7420;
  double t7355;
  double t7393;
  double t5499;
  double t5562;
  double t5764;
  t145 = Cos(var1[6]);
  t326 = Sin(var1[2]);
  t484 = Cos(var1[2]);
  t930 = Sin(var1[6]);
  t1925 = Cos(var1[7]);
  t2525 = t145*t326;
  t2679 = t484*t930;
  t2925 = t2525 + t2679;
  t2988 = t484*t145;
  t3128 = -1.*t326*t930;
  t3254 = t2988 + t3128;
  t3349 = Sin(var1[7]);
  t3852 = Cos(var1[8]);
  t4138 = t1925*t2925;
  t4180 = t3254*t3349;
  t4402 = t4138 + t4180;
  t4648 = t1925*t3254;
  t4938 = -1.*t2925*t3349;
  t4983 = t4648 + t4938;
  t4991 = Sin(var1[8]);
  t317 = -1.*t145;
  t321 = 1. + t317;
  t1936 = -1.*t1925;
  t2497 = 1. + t1936;
  t4036 = -1.*t3852;
  t4118 = 1. + t4036;
  t7296 = -1.*t145*t326;
  t7306 = -1.*t484*t930;
  t7323 = t7296 + t7306;
  t7415 = t1925*t7323;
  t7418 = -1.*t3254*t3349;
  t7420 = t7415 + t7418;
  t7355 = t7323*t3349;
  t7393 = t4648 + t7355;
  t5499 = t3852*t4983;
  t5562 = -1.*t4402*t4991;
  t5764 = t5499 + t5562;
  p_output1[0]=-0.9063*t2497*t2925 - 0.4999*t321*t326 + 0.9063*t3254*t3349 - 1.3127*t4118*t4402 + 1.3127*t4983*t4991 - 1.3127*(t3852*t4402 + t4983*t4991) + 0.06*t5764 + 0.4999*t484*t930 + var1[0] - 1.*var2[0];
  p_output1[1]=-0.9063*t2497*t3254 - 0.4999*t321*t484 + 0.9063*t3349*t7323 - 1.3127*t4118*t7393 + 1.3127*t4991*t7420 + 0.06*(-1.*t4991*t7393 + t3852*t7420) - 1.3127*(t3852*t7393 + t4991*t7420) - 0.4999*t326*t930 + var1[1] - 1.*var2[1];
  p_output1[2]=ArcTan(Sqrt(0. + Power(t5764,2)),t4991*t7393 - 1.*t3852*t7420) - 1.*var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RightSole_RightSS2.hh"

namespace SymFunction
{

void h_RightSole_RightSS2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
