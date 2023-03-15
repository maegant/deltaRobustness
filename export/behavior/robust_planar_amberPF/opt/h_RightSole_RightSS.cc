/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:26 GMT-08:00
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
  double t90;
  double t340;
  double t672;
  double t801;
  double t1229;
  double t1280;
  double t1463;
  double t1487;
  double t1735;
  double t1854;
  double t1913;
  double t1921;
  double t121;
  double t149;
  double t1259;
  double t1277;
  double t2617;
  double t2618;
  double t2667;
  t90 = Cos(var1[5]);
  t340 = Sin(var1[2]);
  t672 = Cos(var1[2]);
  t801 = Sin(var1[5]);
  t1229 = Cos(var1[6]);
  t1280 = t90*t340;
  t1463 = t672*t801;
  t1487 = t1280 + t1463;
  t1735 = t672*t90;
  t1854 = -1.*t340*t801;
  t1913 = t1735 + t1854;
  t1921 = Sin(var1[6]);
  t121 = -1.*t90;
  t149 = 1. + t121;
  t1259 = -1.*t1229;
  t1277 = 1. + t1259;
  t2617 = -1.*t90*t340;
  t2618 = -1.*t672*t801;
  t2667 = t2617 + t2618;
  p_output1[0]=-0.9063*t1277*t1487 + 0.9063*t1913*t1921 - 1.373025*(t1229*t1487 + t1913*t1921) - 0.4999*t149*t340 + 0.4999*t672*t801 + var1[0] - 1.*var2[0];
  p_output1[1]=-0.9063*t1277*t1913 + 0.9063*t1921*t2667 - 1.373025*(t1229*t1913 + t1921*t2667) - 0.4999*t149*t672 - 0.4999*t340*t801 + var1[1] - 1.*var2[1];
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

namespace RightSS
{

void h_RightSole_RightSS_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
