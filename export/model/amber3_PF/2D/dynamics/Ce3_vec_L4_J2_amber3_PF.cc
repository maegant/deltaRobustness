/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:10 GMT-08:00
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
  double t1270;
  double t1720;
  double t73;
  double t2260;
  double t2599;
  double t2860;
  double t2874;
  double t1637;
  double t2378;
  double t2538;
  double t2891;
  double t2990;
  double t2993;
  double t4741;
  double t4746;
  double t4765;
  double t4769;
  double t4795;
  double t2553;
  double t3095;
  double t3105;
  double t3195;
  double t3690;
  double t3872;
  double t3897;
  double t3900;
  double t3942;
  double t3986;
  double t4016;
  double t4042;
  double t4202;
  double t4513;
  double t4526;
  double t4711;
  double t4828;
  double t4832;
  double t4886;
  double t4908;
  double t4926;
  double t4931;
  double t4948;
  double t4951;
  double t4985;
  t1270 = Cos(var1[5]);
  t1720 = Sin(var1[2]);
  t73 = Cos(var1[2]);
  t2260 = Sin(var1[5]);
  t2599 = -1.*t1270*t1720;
  t2860 = -1.*t73*t2260;
  t2874 = t2599 + t2860;
  t1637 = -1.*t73*t1270;
  t2378 = t1720*t2260;
  t2538 = t1637 + t2378;
  t2891 = t73*t1270;
  t2990 = -1.*t1720*t2260;
  t2993 = t2891 + t2990;
  t4741 = -1.*t1270;
  t4746 = 1. + t4741;
  t4765 = -0.4999*t4746;
  t4769 = -0.6493*t1270;
  t4795 = t4765 + t4769;
  t2553 = -0.25592966999999994*var2[5]*t2538;
  t3095 = 6.8522*t2874*t2993;
  t3105 = 6.8522*t2874*t2538;
  t3195 = t3095 + t3105;
  t3690 = 0.5*var2[1]*t3195;
  t3872 = Power(t2874,2);
  t3897 = 3.4261*t3872;
  t3900 = t1270*t1720;
  t3942 = t73*t2260;
  t3986 = t3900 + t3942;
  t4016 = 3.4261*t2874*t3986;
  t4042 = Power(t2993,2);
  t4202 = 3.4261*t4042;
  t4513 = 3.4261*t2993*t2538;
  t4526 = t3897 + t4016 + t4202 + t4513;
  t4711 = 0.5*var2[0]*t4526;
  t4828 = t4795*t2260;
  t4832 = 0.14939999999999998*t1270*t2260;
  t4886 = t4828 + t4832;
  t4908 = 3.4261*t2874*t4886;
  t4926 = t4795*t1270;
  t4931 = Power(t2260,2);
  t4948 = -0.14939999999999998*t4931;
  t4951 = t4926 + t4948;
  t4985 = 3.4261*t2538*t4951;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(t2553 + t3690 + t4711 + 0.5*(t4908 + t4985)*var2[2]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[1]*(t2553 + t3690 + t4711 + 0.5*(3.4261*t2874*(-0.14939999999999998*t1270*t2260 - 1.*t2260*t4795) + t4908 + 3.4261*t2993*(0.14939999999999998*Power(t1270,2) + t4926) + t4985)*var2[2]);
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

#include "Ce3_vec_L4_J2_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L4_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
