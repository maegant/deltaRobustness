/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:32 GMT-08:00
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
  double t636;
  double t320;
  double t2594;
  double t2465;
  double t735;
  double t880;
  double t1227;
  double t1373;
  double t2041;
  double t3811;
  double t2440;
  double t3812;
  double t3855;
  double t3870;
  double t405;
  double t2059;
  double t2060;
  double t2342;
  double t4743;
  double t4753;
  double t4852;
  double t3939;
  double t4228;
  double t4396;
  double t4412;
  double t4631;
  double t4635;
  double t5056;
  double t5838;
  double t5949;
  double t6008;
  double t2579;
  double t2773;
  double t2787;
  double t6054;
  double t6069;
  double t6129;
  double t6162;
  double t6562;
  double t6632;
  double t5117;
  double t5407;
  double t7893;
  double t7813;
  double t7814;
  double t7820;
  double t3484;
  double t3991;
  double t7777;
  double t7782;
  double t7783;
  double t7802;
  double t7919;
  double t7923;
  double t7925;
  double t7926;
  double t7968;
  double t7969;
  double t7948;
  double t7949;
  double t7951;
  double t7952;
  double t7958;
  double t7959;
  double t7961;
  double t7962;
  double t7972;
  double t7976;
  double t7965;
  double t7966;
  double t7967;
  double t7970;
  double t7954;
  double t7971;
  double t7982;
  double t8000;
  double t8001;
  double t8003;
  double t8004;
  double t7985;
  t636 = Cos(var1[4]);
  t320 = Sin(var1[4]);
  t2594 = Cos(var1[3]);
  t2465 = Sin(var1[3]);
  t735 = -1.*t636;
  t880 = 1. + t735;
  t1227 = -0.9063*t880;
  t1373 = -1.0567*t636;
  t2041 = t1227 + t1373;
  t3811 = Cos(var1[2]);
  t2440 = Sin(var1[2]);
  t3812 = t2594*t636;
  t3855 = -1.*t2465*t320;
  t3870 = t3812 + t3855;
  t405 = 0.4999*t320;
  t2059 = t2041*t320;
  t2060 = 0.15039999999999998*t636*t320;
  t2342 = t405 + t2059 + t2060;
  t4743 = -1.*t636*t2465;
  t4753 = -1.*t2594*t320;
  t4852 = t4743 + t4753;
  t3939 = t3811*t3870;
  t4228 = 0.4999*t636;
  t4396 = t2041*t636;
  t4412 = Power(t320,2);
  t4631 = -0.15039999999999998*t4412;
  t4635 = t4228 + t4396 + t4631;
  t5056 = t3811*t4852;
  t5838 = t2440*t4852;
  t5949 = t5838 + t3939;
  t6008 = 3.5899*t2342*t5949;
  t2579 = t636*t2465;
  t2773 = t2594*t320;
  t2787 = t2579 + t2773;
  t6054 = -1.*t2594*t636;
  t6069 = t2465*t320;
  t6129 = t6054 + t6069;
  t6162 = t2440*t6129;
  t6562 = t5056 + t6162;
  t6632 = 3.5899*t4635*t6562;
  t5117 = -1.*t2440*t3870;
  t5407 = t5056 + t5117;
  t7893 = -1.*t2440*t4852;
  t7813 = Power(t636,2);
  t7814 = 0.15039999999999998*t7813;
  t7820 = t4228 + t4396 + t7814;
  t3484 = -1.*t2440*t2787;
  t3991 = t3484 + t3939;
  t7777 = -0.4999*t320;
  t7782 = -1.*t2041*t320;
  t7783 = -0.15039999999999998*t636*t320;
  t7802 = t7777 + t7782 + t7783;
  t7919 = 3.5899*t2342*t5407;
  t7923 = t3811*t6129;
  t7925 = t7893 + t7923;
  t7926 = 3.5899*t4635*t7925;
  t7968 = t2594*t2041;
  t7969 = 0.15039999999999998*t2465*t320;
  t7948 = 0.4999*t2465;
  t7949 = t2041*t2465;
  t7951 = -0.15039999999999998*t2594*t320;
  t7952 = t7948 + t7949 + t7951;
  t7958 = -0.4999*t2465;
  t7959 = -1.*t2041*t2465;
  t7961 = 0.15039999999999998*t2594*t320;
  t7962 = t7958 + t7959 + t7961;
  t7972 = 0.4999*t2594;
  t7976 = t7972 + t7968 + t7969;
  t7965 = -1.*t2594;
  t7966 = 1. + t7965;
  t7967 = -0.4999*t7966;
  t7970 = t7967 + t7968 + t7969;
  t7954 = t7952*t3870;
  t7971 = t4852*t7970;
  t7982 = -1.*t4852*t7952;
  t8000 = 0.15039999999999998*t636*t2465;
  t8001 = t8000 + t7961;
  t8003 = -0.15039999999999998*t2594*t636;
  t8004 = t8003 + t7969;
  t7985 = -1.*t7970*t6129;
  p_output1[0]=var2[3]*(-0.5*(3.5899*t2342*t3991 + 3.5899*t4635*t5407)*var2[2] - 0.5*(t6008 + t6632)*var2[3] - 0.5*(t6008 + t6632 + 3.5899*t5949*t7802 + 3.5899*(t2787*t3811 + t2440*t3870)*t7820)*var2[4]);
  p_output1[1]=var2[3]*(-0.5*(3.5899*t2342*(-1.*t2787*t3811 + t5117) + 3.5899*t4635*(-1.*t3811*t3870 + t7893))*var2[2] - 0.5*(t7919 + t7926)*var2[3] - 0.5*(3.5899*t5407*t7802 + 3.5899*t3991*t7820 + t7919 + t7926)*var2[4]);
  p_output1[2]=var2[3]*(-0.5*(3.5899*t4635*(t7954 + t3870*t7962 + t7971 + t2787*t7976) + 3.5899*t2342*(-1.*t4852*t7962 - 1.*t3870*t7976 + t7982 + t7985))*var2[3] - 0.5*(3.5899*t7802*(t2787*t7952 + t3870*t7970) + 3.5899*t7820*(-1.*t3870*t7952 - 1.*t4852*t7970) + 3.5899*t4635*(t7954 + t7971 + t3870*t8001 + t2787*t8004) + 3.5899*t2342*(t7982 + t7985 - 1.*t4852*t8001 - 1.*t3870*t8004))*var2[4]);
  p_output1[3]=-0.5*(7.1798*t4635*t7802 + 7.1798*t2342*t7820)*var2[3]*var2[4];
  p_output1[4]=0.26996047999999995*t7802*var2[3]*var2[4];
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

#include "Ce1_vec_L3_J4_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L3_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
