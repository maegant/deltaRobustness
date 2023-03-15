/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:25 GMT-08:00
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
  double t1105;
  double t1537;
  double t1911;
  double t1971;
  double t2454;
  double t2526;
  double t2572;
  double t2809;
  double t2880;
  double t3338;
  double t3485;
  double t3684;
  double t3731;
  double t5550;
  double t5663;
  double t5710;
  double t5723;
  double t5865;
  double t5043;
  double t5090;
  double t5179;
  double t3482;
  double t4086;
  double t4207;
  double t4219;
  double t4621;
  double t5026;
  double t5213;
  double t5341;
  double t6063;
  double t6115;
  double t6149;
  double t6313;
  double t6341;
  double t6378;
  double t6420;
  double t6229;
  double t6696;
  double t6715;
  double t6880;
  double t6949;
  double t6978;
  t1105 = Cos(var1[3]);
  t1537 = Sin(var1[2]);
  t1911 = -1.*t1105*t1537;
  t1971 = Cos(var1[2]);
  t2454 = Sin(var1[3]);
  t2526 = -1.*t1971*t2454;
  t2572 = t1911 + t2526;
  t2809 = t1971*t1105;
  t2880 = -1.*t1537*t2454;
  t3338 = t2809 + t2880;
  t3485 = t1105*t1537;
  t3684 = t1971*t2454;
  t3731 = t3485 + t3684;
  t5550 = -1.*t1105;
  t5663 = 1. + t5550;
  t5710 = -0.4999*t5663;
  t5723 = -0.6493*t1105;
  t5865 = t5710 + t5723;
  t5043 = -1.*t1971*t1105;
  t5090 = t1537*t2454;
  t5179 = t5043 + t5090;
  t3482 = 6.8522*t2572*t3338;
  t4086 = Power(t2572,2);
  t4207 = 3.4261*t4086;
  t4219 = 3.4261*t2572*t3731;
  t4621 = Power(t3338,2);
  t5026 = 3.4261*t4621;
  t5213 = 3.4261*t3338*t5179;
  t5341 = t4207 + t4219 + t5026 + t5213;
  t6063 = t5865*t2454;
  t6115 = 0.14939999999999998*t1105*t2454;
  t6149 = t6063 + t6115;
  t6313 = t5865*t1105;
  t6341 = Power(t2454,2);
  t6378 = -0.14939999999999998*t6341;
  t6420 = t6313 + t6378;
  t6229 = 3.4261*t6149*t3338;
  t6696 = 3.4261*t2572*t6420;
  t6715 = t6229 + t6696;
  t6880 = 3.4261*t2572*t6149;
  t6949 = 3.4261*t5179*t6420;
  t6978 = t6880 + t6949;
  p_output1[0]=var2[2]*(-0.5*(t3482 + 6.8522*t3338*t3731)*var2[0] - 0.5*t5341*var2[1] - 0.5*t6715*var2[2] + 0.25592966999999994*t2572*var2[3]);
  p_output1[1]=var2[2]*(-0.5*t5341*var2[0] - 0.5*(t3482 + 6.8522*t2572*t5179)*var2[1] - 0.5*t6978*var2[2] + 0.25592966999999994*t5179*var2[3]);
  p_output1[2]=(-0.5*t6715*var2[0] - 0.5*t6978*var2[1])*var2[2];
  p_output1[3]=(0.25592966999999994*t2572*var2[0] + 0.25592966999999994*t5179*var2[1])*var2[2];
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce2_vec_L2_J3_amber3_PF.hh"

namespace SymFunction
{

void Ce2_vec_L2_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
