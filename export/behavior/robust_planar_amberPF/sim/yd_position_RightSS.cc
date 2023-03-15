/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:07 GMT-08:00
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
  double t1036;
  double t1197;
  double t1290;
  double t1314;
  double t2150;
  double t3087;
  double t3756;
  double t3793;
  double t4524;
  double t4629;
  double t4913;
  double t6462;
  double t6677;
  double t6886;
  double t6971;
  double t7101;
  double t7109;
  double t7163;
  double t7426;
  double t7489;
  double t7512;
  t1036 = -1.*var3[1];
  t1197 = var3[0] + t1036;
  t1290 = 1/t1197;
  t1314 = 0.8731249999999999*var1[2];
  t2150 = 0.8731249999999999*var1[5];
  t3087 = 0.46672499999999995*var1[6];
  t3756 = t1036 + t1314 + t2150 + t3087;
  t3793 = -1.*t1290*t3756;
  t4524 = 1. + t3793;
  t4629 = Power(t4524,5);
  t4913 = Power(t4524,4);
  t6462 = Power(t1197,-2);
  t6677 = Power(t4524,3);
  t6886 = Power(t3756,2);
  t6971 = Power(t1197,-3);
  t7101 = Power(t4524,2);
  t7109 = Power(t3756,3);
  t7163 = Power(t1197,-4);
  t7426 = Power(t3756,4);
  t7489 = Power(t1197,-5);
  t7512 = Power(t3756,5);
  p_output1[0]=t4629*var2[0] + 5.*t1290*t3756*t4913*var2[4] + 10.*t6462*t6677*t6886*var2[8] + 10.*t6971*t7101*t7109*var2[12] + 5.*t4524*t7163*t7426*var2[16] + t7489*t7512*var2[20];
  p_output1[1]=t4629*var2[1] + 5.*t1290*t3756*t4913*var2[5] + 10.*t6462*t6677*t6886*var2[9] + 10.*t6971*t7101*t7109*var2[13] + 5.*t4524*t7163*t7426*var2[17] + t7489*t7512*var2[21];
  p_output1[2]=t4629*var2[2] + 5.*t1290*t3756*t4913*var2[6] + 10.*t6462*t6677*t6886*var2[10] + 10.*t6971*t7101*t7109*var2[14] + 5.*t4524*t7163*t7426*var2[18] + t7489*t7512*var2[22];
  p_output1[3]=t4629*var2[3] + 5.*t1290*t3756*t4913*var2[7] + 10.*t6462*t6677*t6886*var2[11] + 10.*t6971*t7101*t7109*var2[15] + 5.*t4524*t7163*t7426*var2[19] + t7489*t7512*var2[23];
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "yd_position_RightSS.hh"

namespace SymFunction
{

void yd_position_RightSS_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
