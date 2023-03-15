/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:45 GMT-08:00
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
  double t372;
  double t466;
  double t660;
  double t725;
  double t905;
  double t1024;
  double t1039;
  double t1115;
  double t1172;
  double t1175;
  double t1185;
  double t1188;
  double t850;
  double t988;
  double t1015;
  double t1150;
  double t1308;
  double t1333;
  double t1336;
  double t1397;
  double t1524;
  double t1633;
  double t1637;
  double t1688;
  t372 = Cos(var1[2]);
  t466 = Cos(var1[3]);
  t660 = Sin(var1[2]);
  t725 = Sin(var1[3]);
  t905 = Cos(var1[4]);
  t1024 = t372*t466;
  t1039 = -1.*t660*t725;
  t1115 = t1024 + t1039;
  t1172 = -1.*t466*t660;
  t1175 = -1.*t372*t725;
  t1185 = t1172 + t1175;
  t1188 = Sin(var1[4]);
  t850 = -0.4999*t660*t725;
  t988 = -1.*t905;
  t1015 = 1. + t988;
  t1150 = -0.9063*t1015*t1115;
  t1308 = 0.9063*t1185*t1188;
  t1333 = t905*t1115;
  t1336 = t1185*t1188;
  t1397 = t1333 + t1336;
  t1524 = -1.373025*t1397;
  t1633 = t466*t660;
  t1637 = t372*t725;
  t1688 = t1633 + t1637;
  p_output1[0]=var2[0] + (t1150 + t1308 + t1524 - 0.4999*t372*(1. - 1.*t466) + t850)*var2[2] + (t1150 + t1308 + t1524 + 0.4999*t372*t466 + t850)*var2[3] + (-0.9063*t1188*t1688 - 1.373025*(t1333 - 1.*t1188*t1688) + 0.9063*t1115*t905)*var2[4];
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "nsf_velX.hh"

namespace RightSS
{

void nsf_velX_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
