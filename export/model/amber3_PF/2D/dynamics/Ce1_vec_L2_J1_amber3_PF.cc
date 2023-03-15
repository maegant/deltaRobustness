/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:28:49 GMT-08:00
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
  double t95;
  double t5;
  double t12;
  double t106;
  double t1038;
  double t1450;
  double t1580;
  double t39;
  double t725;
  double t874;
  double t2200;
  double t2218;
  double t2265;
  double t2297;
  double t2318;
  double t2383;
  double t3199;
  double t3260;
  double t3299;
  double t3530;
  double t3701;
  double t3818;
  double t3949;
  double t4078;
  double t4091;
  double t4151;
  double t5612;
  double t5907;
  double t5909;
  double t5936;
  double t6067;
  double t6567;
  double t6082;
  double t6288;
  double t6328;
  double t6509;
  double t6630;
  double t6663;
  double t6665;
  double t6679;
  t95 = Cos(var1[2]);
  t5 = Cos(var1[3]);
  t12 = Sin(var1[2]);
  t106 = Sin(var1[3]);
  t1038 = t95*t5;
  t1450 = -1.*t12*t106;
  t1580 = t1038 + t1450;
  t39 = -1.*t5*t12;
  t725 = -1.*t95*t106;
  t874 = t39 + t725;
  t2200 = 6.8522*t874*t1580;
  t2218 = t5*t12;
  t2265 = t95*t106;
  t2297 = t2218 + t2265;
  t2318 = 6.8522*t2297*t1580;
  t2383 = t2200 + t2318;
  t3199 = Power(t874,2);
  t3260 = 3.4261*t3199;
  t3299 = 3.4261*t874*t2297;
  t3530 = Power(t1580,2);
  t3701 = 3.4261*t3530;
  t3818 = -1.*t95*t5;
  t3949 = t12*t106;
  t4078 = t3818 + t3949;
  t4091 = 3.4261*t1580*t4078;
  t4151 = t3260 + t3299 + t3701 + t4091;
  t5612 = -1.*t5;
  t5907 = 1. + t5612;
  t5909 = -0.4999*t5907;
  t5936 = -0.6493*t5;
  t6067 = t5909 + t5936;
  t6567 = t6067*t5;
  t6082 = t6067*t106;
  t6288 = 0.14939999999999998*t5*t106;
  t6328 = t6082 + t6288;
  t6509 = 3.4261*t6328*t1580;
  t6630 = Power(t106,2);
  t6663 = -0.14939999999999998*t6630;
  t6665 = t6567 + t6663;
  t6679 = 3.4261*t874*t6665;
  p_output1[0]=var2[0]*(-0.5*t2383*var2[2] - 0.5*t2383*var2[3]);
  p_output1[1]=var2[0]*(-0.5*t4151*var2[2] - 0.5*t4151*var2[3]);
  p_output1[2]=var2[0]*(-0.5*(t6509 + t6679)*var2[2] - 0.5*(3.4261*t1580*(-0.14939999999999998*t106*t5 - 1.*t106*t6067) + t6509 + 3.4261*t2297*(0.14939999999999998*Power(t5,2) + t6567) + t6679)*var2[3]);
  p_output1[3]=var2[0]*(0.25592966999999994*t874*var2[2] + 0.25592966999999994*t874*var2[3]);
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

#include "Ce1_vec_L2_J1_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L2_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
