/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:20 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t253;
  double t379;
  double t472;
  double t501;
  double t506;
  double t526;
  double t623;
  double t637;
  double t744;
  double t791;
  double t852;
  double t1146;
  double t1148;
  double t1179;
  double t1229;
  double t1326;
  double t1487;
  double t1686;
  double t1715;
  double t1722;
  double t1729;
  t253 = -1.*var3[1];
  t379 = var3[0] + t253;
  t472 = 1/t379;
  t501 = 0.8128*var1[2];
  t506 = 0.8128*var1[6];
  t526 = 0.4064*var1[7];
  t623 = 0. + t253 + t501 + t506 + t526;
  t637 = -1.*t472*t623;
  t744 = 1. + t637;
  t791 = Power(t744,5);
  t852 = Power(t744,4);
  t1146 = Power(t379,-2);
  t1148 = Power(t744,3);
  t1179 = Power(t623,2);
  t1229 = Power(t379,-3);
  t1326 = Power(t744,2);
  t1487 = Power(t623,3);
  t1686 = Power(t379,-4);
  t1715 = Power(t623,4);
  t1722 = Power(t379,-5);
  t1729 = Power(t623,5);
  p_output1[0]=var1[6] - 1.*t791*var2[0] - 5.*t472*t623*t852*var2[5] - 10.*t1146*t1148*t1179*var2[10] - 10.*t1229*t1326*t1487*var2[15] - 5.*t1686*t1715*t744*var2[20] - 1.*t1722*t1729*var2[25];
  p_output1[1]=var1[7] - 1.*t791*var2[1] - 5.*t472*t623*t852*var2[6] - 10.*t1146*t1148*t1179*var2[11] - 10.*t1229*t1326*t1487*var2[16] - 5.*t1686*t1715*t744*var2[21] - 1.*t1722*t1729*var2[26];
  p_output1[2]=var1[3] - 1.*t791*var2[2] - 5.*t472*t623*t852*var2[7] - 10.*t1146*t1148*t1179*var2[12] - 10.*t1229*t1326*t1487*var2[17] - 5.*t1686*t1715*t744*var2[22] - 1.*t1722*t1729*var2[27];
  p_output1[3]=var1[4] - 1.*t791*var2[3] - 5.*t472*t623*t852*var2[8] - 10.*t1146*t1148*t1179*var2[13] - 10.*t1229*t1326*t1487*var2[18] - 5.*t1686*t1715*t744*var2[23] - 1.*t1722*t1729*var2[28];
  p_output1[4]=var1[5] - 1.*t791*var2[4] - 5.*t472*t623*t852*var2[9] - 10.*t1146*t1148*t1179*var2[14] - 10.*t1229*t1326*t1487*var2[19] - 5.*t1686*t1715*t744*var2[24] - 1.*t1722*t1729*var2[29];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "y_position_RightSS2.hh"

namespace RightSS2
{

void y_position_RightSS2_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
