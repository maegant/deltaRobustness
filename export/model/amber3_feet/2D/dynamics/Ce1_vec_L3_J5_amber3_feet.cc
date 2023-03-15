/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:33 GMT-08:00
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
  double t1162;
  double t405;
  double t973;
  double t1227;
  double t205;
  double t1161;
  double t1232;
  double t1284;
  double t1320;
  double t1321;
  double t2059;
  double t2060;
  double t2078;
  double t2164;
  double t2261;
  double t1324;
  double t1373;
  double t1707;
  double t2714;
  double t3939;
  double t3991;
  double t4419;
  double t4429;
  double t4443;
  double t4631;
  double t4635;
  double t6162;
  double t6223;
  double t4412;
  double t4651;
  double t4654;
  double t4762;
  double t5056;
  double t5493;
  double t5838;
  double t5949;
  double t6069;
  double t6562;
  double t7011;
  double t7766;
  double t7777;
  double t7783;
  t1162 = Cos(var1[3]);
  t405 = Cos(var1[4]);
  t973 = Sin(var1[3]);
  t1227 = Sin(var1[4]);
  t205 = Cos(var1[2]);
  t1161 = -1.*t405*t973;
  t1232 = -1.*t1162*t1227;
  t1284 = t1161 + t1232;
  t1320 = t205*t1284;
  t1321 = Sin(var1[2]);
  t2059 = -1.*t1162*t405;
  t2060 = t973*t1227;
  t2078 = t2059 + t2060;
  t2164 = t1321*t2078;
  t2261 = t1320 + t2164;
  t1324 = t1162*t405;
  t1373 = -1.*t973*t1227;
  t1707 = t1324 + t1373;
  t2714 = -1.*t1321*t1284;
  t3939 = t205*t2078;
  t3991 = t2714 + t3939;
  t4419 = -1.*t405;
  t4429 = 1. + t4419;
  t4443 = -0.9063*t4429;
  t4631 = -1.0567*t405;
  t4635 = t4443 + t4631;
  t6162 = t1162*t4635;
  t6223 = 0.15039999999999998*t973*t1227;
  t4412 = 0.4999*t973;
  t4651 = t4635*t973;
  t4654 = -0.15039999999999998*t1162*t1227;
  t4762 = t4412 + t4651 + t4654;
  t5056 = t4762*t1707;
  t5493 = 0.15039999999999998*t1162*t1227;
  t5838 = -1.*t1162;
  t5949 = 1. + t5838;
  t6069 = -0.4999*t5949;
  t6562 = t6069 + t6162 + t6223;
  t7011 = t1284*t6562;
  t7766 = t405*t973;
  t7777 = t1162*t1227;
  t7783 = t7766 + t7777;
  p_output1[0]=var2[4]*(0.26996047999999995*(t1320 - 1.*t1321*t1707)*var2[2] + 0.26996047999999995*t2261*var2[3] + 0.26996047999999995*t2261*var2[4]);
  p_output1[1]=var2[4]*(0.26996047999999995*(-1.*t1707*t205 + t2714)*var2[2] + 0.26996047999999995*t3991*var2[3] + 0.26996047999999995*t3991*var2[4]);
  p_output1[2]=var2[4]*(0.26996047999999995*(t5056 + t7011 + (0.4999*t1162 + t6162 + t6223)*t7783 + t1707*(t5493 - 0.4999*t973 - 1.*t4635*t973))*var2[3] + 0.26996047999999995*(t5056 + t7011 + (-0.15039999999999998*t1162*t405 + t6223)*t7783 + t1707*(t5493 + 0.15039999999999998*t405*t973))*var2[4]);
  p_output1[3]=0.26996047999999995*(-0.4999*t1227 - 0.15039999999999998*t1227*t405 - 1.*t1227*t4635)*Power(var2[4],2);
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

#include "Ce1_vec_L3_J5_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L3_J5_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
