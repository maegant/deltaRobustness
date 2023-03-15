/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:00 GMT-08:00
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
  double t232;
  double t1601;
  double t2418;
  double t2315;
  double t342;
  double t347;
  double t604;
  double t1541;
  double t1563;
  double t2892;
  double t2916;
  double t2982;
  double t1988;
  double t2272;
  double t2311;
  double t3234;
  double t3300;
  double t3378;
  double t3447;
  double t4418;
  double t4513;
  double t4547;
  double t2356;
  double t2559;
  double t2718;
  double t2719;
  double t3587;
  double t4709;
  double t4711;
  double t4741;
  double t3773;
  double t3855;
  double t3880;
  double t3900;
  double t4026;
  t232 = Cos(var1[3]);
  t1601 = Sin(var1[3]);
  t2418 = Sin(var1[2]);
  t2315 = Cos(var1[2]);
  t342 = -1.*t232;
  t347 = 1. + t342;
  t604 = -0.4999*t347;
  t1541 = -0.6493*t232;
  t1563 = t604 + t1541;
  t2892 = -1.*t232*t2418;
  t2916 = -1.*t2315*t1601;
  t2982 = t2892 + t2916;
  t1988 = t1563*t1601;
  t2272 = 0.14939999999999998*t232*t1601;
  t2311 = t1988 + t2272;
  t3234 = t1563*t232;
  t3300 = Power(t1601,2);
  t3378 = -0.14939999999999998*t3300;
  t3447 = t3234 + t3378;
  t4418 = -1.*t1563*t1601;
  t4513 = -0.14939999999999998*t232*t1601;
  t4547 = t4418 + t4513;
  t2356 = t2315*t232;
  t2559 = -1.*t2418*t1601;
  t2718 = t2356 + t2559;
  t2719 = 3.4261*t2311*t2718;
  t3587 = 3.4261*t2982*t3447;
  t4709 = Power(t232,2);
  t4711 = 0.14939999999999998*t4709;
  t4741 = t3234 + t4711;
  t3773 = 3.4261*t2982*t2311;
  t3855 = -1.*t2315*t232;
  t3880 = t2418*t1601;
  t3900 = t3855 + t3880;
  t4026 = 3.4261*t3900*t3447;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(t2719 + t3587)*var2[0] + 0.5*(t3773 + t4026)*var2[1])*var2[2];
  p_output1[3]=var2[2]*(0.5*(t2719 + t3587 + 3.4261*t2718*t4547 + 3.4261*(t1601*t2315 + t232*t2418)*t4741)*var2[0] + 0.5*(t3773 + t4026 + 3.4261*t2982*t4547 + 3.4261*t2718*t4741)*var2[1] + 0.5*(6.8522*t3447*t4547 + 6.8522*t2311*t4741)*var2[2] - 0.25592966999999994*t4547*var2[3]);
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

#include "Ce3_vec_L2_J3_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L2_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
