/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:59 GMT-08:00
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
  double t1016;
  double t1297;
  double t849;
  double t1365;
  double t1751;
  double t1975;
  double t1988;
  double t1108;
  double t1563;
  double t1601;
  double t2311;
  double t2312;
  double t2315;
  double t3566;
  double t3578;
  double t3587;
  double t3649;
  double t3737;
  double t1649;
  double t2418;
  double t2559;
  double t2579;
  double t2641;
  double t2718;
  double t2719;
  double t2892;
  double t2916;
  double t2982;
  double t3234;
  double t3300;
  double t3378;
  double t3447;
  double t3453;
  double t3511;
  double t3773;
  double t3880;
  double t3900;
  double t3959;
  double t4026;
  double t4190;
  double t4202;
  double t4210;
  double t4399;
  t1016 = Cos(var1[3]);
  t1297 = Sin(var1[2]);
  t849 = Cos(var1[2]);
  t1365 = Sin(var1[3]);
  t1751 = -1.*t1016*t1297;
  t1975 = -1.*t849*t1365;
  t1988 = t1751 + t1975;
  t1108 = -1.*t849*t1016;
  t1563 = t1297*t1365;
  t1601 = t1108 + t1563;
  t2311 = t849*t1016;
  t2312 = -1.*t1297*t1365;
  t2315 = t2311 + t2312;
  t3566 = -1.*t1016;
  t3578 = 1. + t3566;
  t3587 = -0.4999*t3578;
  t3649 = -0.6493*t1016;
  t3737 = t3587 + t3649;
  t1649 = -0.25592966999999994*var2[3]*t1601;
  t2418 = 6.8522*t1988*t2315;
  t2559 = 6.8522*t1988*t1601;
  t2579 = t2418 + t2559;
  t2641 = 0.5*var2[1]*t2579;
  t2718 = Power(t1988,2);
  t2719 = 3.4261*t2718;
  t2892 = t1016*t1297;
  t2916 = t849*t1365;
  t2982 = t2892 + t2916;
  t3234 = 3.4261*t1988*t2982;
  t3300 = Power(t2315,2);
  t3378 = 3.4261*t3300;
  t3447 = 3.4261*t2315*t1601;
  t3453 = t2719 + t3234 + t3378 + t3447;
  t3511 = 0.5*var2[0]*t3453;
  t3773 = t3737*t1365;
  t3880 = 0.14939999999999998*t1016*t1365;
  t3900 = t3773 + t3880;
  t3959 = 3.4261*t1988*t3900;
  t4026 = t3737*t1016;
  t4190 = Power(t1365,2);
  t4202 = -0.14939999999999998*t4190;
  t4210 = t4026 + t4202;
  t4399 = 3.4261*t1601*t4210;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(t1649 + t2641 + t3511 + 0.5*(t3959 + t4399)*var2[2]);
  p_output1[3]=var2[1]*(t1649 + t2641 + t3511 + 0.5*(3.4261*t1988*(-0.14939999999999998*t1016*t1365 - 1.*t1365*t3737) + t3959 + 3.4261*t2315*(0.14939999999999998*Power(t1016,2) + t4026) + t4399)*var2[2]);
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

#include "Ce3_vec_L2_J2_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L2_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
