/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:58 GMT-08:00
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
  double t9;
  double t36;
  double t255;
  double t384;
  double t429;
  double t570;
  double t1016;
  double t1108;
  double t1369;
  double t1601;
  double t1975;
  double t1988;
  double t2315;
  double t3140;
  double t3185;
  double t3234;
  double t3300;
  double t3319;
  double t1039;
  double t1751;
  double t2418;
  double t2470;
  double t2485;
  double t2559;
  double t2579;
  double t2641;
  double t2718;
  double t2719;
  double t2785;
  double t2892;
  double t2916;
  double t2982;
  double t3083;
  double t3133;
  double t3511;
  double t3378;
  double t3447;
  double t3453;
  double t3457;
  double t3566;
  double t3578;
  double t3587;
  double t3591;
  t9 = Cos(var1[3]);
  t36 = Sin(var1[2]);
  t255 = -1.*t9*t36;
  t384 = Cos(var1[2]);
  t429 = Sin(var1[3]);
  t570 = -1.*t384*t429;
  t1016 = t255 + t570;
  t1108 = t384*t9;
  t1369 = -1.*t36*t429;
  t1601 = t1108 + t1369;
  t1975 = t9*t36;
  t1988 = t384*t429;
  t2315 = t1975 + t1988;
  t3140 = -1.*t9;
  t3185 = 1. + t3140;
  t3234 = -0.4999*t3185;
  t3300 = -0.6493*t9;
  t3319 = t3234 + t3300;
  t1039 = -0.25592966999999994*var2[3]*t1016;
  t1751 = 6.8522*t1016*t1601;
  t2418 = 6.8522*t2315*t1601;
  t2470 = t1751 + t2418;
  t2485 = 0.5*var2[0]*t2470;
  t2559 = Power(t1016,2);
  t2579 = 3.4261*t2559;
  t2641 = 3.4261*t1016*t2315;
  t2718 = Power(t1601,2);
  t2719 = 3.4261*t2718;
  t2785 = -1.*t384*t9;
  t2892 = t36*t429;
  t2916 = t2785 + t2892;
  t2982 = 3.4261*t1601*t2916;
  t3083 = t2579 + t2641 + t2719 + t2982;
  t3133 = 0.5*var2[1]*t3083;
  t3511 = t3319*t9;
  t3378 = t3319*t429;
  t3447 = 0.14939999999999998*t9*t429;
  t3453 = t3378 + t3447;
  t3457 = 3.4261*t3453*t1601;
  t3566 = Power(t429,2);
  t3578 = -0.14939999999999998*t3566;
  t3587 = t3511 + t3578;
  t3591 = 3.4261*t1016*t3587;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(t1039 + t2485 + t3133 + 0.5*(t3457 + t3591)*var2[2]);
  p_output1[3]=var2[0]*(t1039 + t2485 + t3133 + 0.5*(t3457 + t3591 + 3.4261*t1601*(-1.*t3319*t429 - 0.14939999999999998*t429*t9) + 3.4261*t2315*(t3511 + 0.14939999999999998*Power(t9,2)))*var2[2]);
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

#include "Ce3_vec_L2_J1_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L2_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
