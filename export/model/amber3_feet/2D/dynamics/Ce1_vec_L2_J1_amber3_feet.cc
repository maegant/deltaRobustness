/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:23 GMT-08:00
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
  double t967;
  double t223;
  double t493;
  double t968;
  double t1393;
  double t1443;
  double t1995;
  double t757;
  double t1036;
  double t1119;
  double t2004;
  double t2150;
  double t2207;
  double t2250;
  double t2291;
  double t2374;
  double t2514;
  double t2658;
  double t3005;
  double t3025;
  double t3044;
  double t3047;
  double t3182;
  double t3312;
  double t3773;
  double t3775;
  double t4699;
  double t4732;
  double t4752;
  double t4753;
  double t5275;
  double t5630;
  double t5306;
  double t5307;
  double t5460;
  double t5611;
  double t5680;
  double t5740;
  double t5838;
  double t5968;
  t967 = Cos(var1[2]);
  t223 = Cos(var1[3]);
  t493 = Sin(var1[2]);
  t968 = Sin(var1[3]);
  t1393 = t967*t223;
  t1443 = -1.*t493*t968;
  t1995 = t1393 + t1443;
  t757 = -1.*t223*t493;
  t1036 = -1.*t967*t968;
  t1119 = t757 + t1036;
  t2004 = 6.8522*t1119*t1995;
  t2150 = t223*t493;
  t2207 = t967*t968;
  t2250 = t2150 + t2207;
  t2291 = 6.8522*t2250*t1995;
  t2374 = t2004 + t2291;
  t2514 = Power(t1119,2);
  t2658 = 3.4261*t2514;
  t3005 = 3.4261*t1119*t2250;
  t3025 = Power(t1995,2);
  t3044 = 3.4261*t3025;
  t3047 = -1.*t967*t223;
  t3182 = t493*t968;
  t3312 = t3047 + t3182;
  t3773 = 3.4261*t1995*t3312;
  t3775 = t2658 + t3005 + t3044 + t3773;
  t4699 = -1.*t223;
  t4732 = 1. + t4699;
  t4752 = -0.4999*t4732;
  t4753 = -0.6493*t223;
  t5275 = t4752 + t4753;
  t5630 = t5275*t223;
  t5306 = t5275*t968;
  t5307 = 0.14939999999999998*t223*t968;
  t5460 = t5306 + t5307;
  t5611 = 3.4261*t5460*t1995;
  t5680 = Power(t968,2);
  t5740 = -0.14939999999999998*t5680;
  t5838 = t5630 + t5740;
  t5968 = 3.4261*t1119*t5838;
  p_output1[0]=var2[0]*(-0.5*t2374*var2[2] - 0.5*t2374*var2[3]);
  p_output1[1]=var2[0]*(-0.5*t3775*var2[2] - 0.5*t3775*var2[3]);
  p_output1[2]=var2[0]*(-0.5*(t5611 + t5968)*var2[2] - 0.5*(t5611 + 3.4261*t2250*(0.14939999999999998*Power(t223,2) + t5630) + t5968 + 3.4261*t1995*(-0.14939999999999998*t223*t968 - 1.*t5275*t968))*var2[3]);
  p_output1[3]=var2[0]*(0.25592966999999994*t1119*var2[2] + 0.25592966999999994*t1119*var2[3]);
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
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

#include "Ce1_vec_L2_J1_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L2_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
