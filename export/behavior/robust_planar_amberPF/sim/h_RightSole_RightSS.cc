/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:02 GMT-08:00
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
  double t764;
  double t1951;
  double t3231;
  double t3662;
  double t4259;
  double t6104;
  double t6301;
  double t6462;
  double t6693;
  double t6699;
  double t6797;
  double t6883;
  double t927;
  double t1325;
  double t4988;
  double t5199;
  double t7355;
  double t7386;
  double t7423;
  t764 = Cos(var1[5]);
  t1951 = Sin(var1[2]);
  t3231 = Cos(var1[2]);
  t3662 = Sin(var1[5]);
  t4259 = Cos(var1[6]);
  t6104 = t764*t1951;
  t6301 = t3231*t3662;
  t6462 = t6104 + t6301;
  t6693 = t3231*t764;
  t6699 = -1.*t1951*t3662;
  t6797 = t6693 + t6699;
  t6883 = Sin(var1[6]);
  t927 = -1.*t764;
  t1325 = 1. + t927;
  t4988 = -1.*t4259;
  t5199 = 1. + t4988;
  t7355 = -1.*t764*t1951;
  t7386 = -1.*t3231*t3662;
  t7423 = t7355 + t7386;
  p_output1[0]=-0.4999*t1325*t1951 + 0.4999*t3231*t3662 - 0.9063*t5199*t6462 + 0.9063*t6797*t6883 - 1.373025*(t4259*t6462 + t6797*t6883) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.4999*t1325*t3231 - 0.4999*t1951*t3662 - 0.9063*t5199*t6797 + 0.9063*t6883*t7423 - 1.373025*(t4259*t6797 + t6883*t7423) + var1[1] - 1.*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RightSole_RightSS.hh"

namespace SymFunction
{

void h_RightSole_RightSS_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
