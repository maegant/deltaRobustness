/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:20:51 GMT-08:00
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
  double t2638;
  double t1479;
  double t1498;
  double t2682;
  double t3205;
  double t2182;
  double t2916;
  double t2984;
  double t1338;
  double t3254;
  double t3292;
  double t3506;
  double t3946;
  double t3776;
  double t784;
  double t4402;
  double t4511;
  double t4558;
  double t3128;
  double t3780;
  double t4036;
  double t4100;
  double t4105;
  double t4601;
  double t4916;
  double t4983;
  double t4991;
  double t5116;
  double t7381;
  double t7389;
  double t7393;
  double t7414;
  double t7415;
  double t7418;
  double t7330;
  double t7342;
  double t7350;
  double t7355;
  double t7420;
  double t7425;
  double t7431;
  double t7454;
  double t7457;
  double t7467;
  double t7475;
  double t7478;
  double t7480;
  double t7481;
  double t7487;
  double t7509;
  double t7323;
  double t7428;
  double t7468;
  double t7470;
  t2638 = Cos(var1[7]);
  t1479 = Cos(var1[8]);
  t1498 = Sin(var1[7]);
  t2682 = Sin(var1[8]);
  t3205 = Cos(var1[6]);
  t2182 = -1.*t1479*t1498;
  t2916 = -1.*t2638*t2682;
  t2984 = t2182 + t2916;
  t1338 = Sin(var1[6]);
  t3254 = t2638*t1479;
  t3292 = -1.*t1498*t2682;
  t3506 = t3254 + t3292;
  t3946 = Sin(var1[2]);
  t3776 = t3205*t3506;
  t784 = Cos(var1[2]);
  t4402 = t1479*t1498;
  t4511 = t2638*t2682;
  t4558 = t4402 + t4511;
  t3128 = t1338*t2984;
  t3780 = t3128 + t3776;
  t4036 = t3205*t2984;
  t4100 = -1.*t1338*t3506;
  t4105 = t4036 + t4100;
  t4601 = -1.*t1338*t4558;
  t4916 = t4601 + t3776;
  t4983 = t3205*t4558;
  t4991 = t1338*t3506;
  t5116 = t4983 + t4991;
  t7381 = -1.*t1479;
  t7389 = 1. + t7381;
  t7393 = -1.3127*t7389;
  t7414 = -1.3127*t1479;
  t7415 = -0.06*t2682;
  t7418 = t7393 + t7414 + t7415;
  t7330 = -1.*t2638;
  t7342 = 1. + t7330;
  t7350 = -0.9063*t7342;
  t7355 = -0.06*t1479*t1498;
  t7420 = t2638*t7418;
  t7425 = t7350 + t7355 + t7420;
  t7431 = 0.06*t2638*t1479;
  t7454 = 0.9063*t1498;
  t7457 = t1498*t7418;
  t7467 = t7431 + t7454 + t7457;
  t7475 = -1.*t3205;
  t7478 = 1. + t7475;
  t7480 = -0.4999*t7478;
  t7481 = t3205*t7425;
  t7487 = -1.*t1338*t7467;
  t7509 = t7480 + t7481 + t7487;
  t7323 = 0.4999*t1338;
  t7428 = t1338*t7425;
  t7468 = t3205*t7467;
  t7470 = t7323 + t7428 + t7468;
  p_output1[0]=(t3946*t4105 + t3780*t784)*var2[0] + (t3946*t4916 + t5116*t784)*var2[1];
  p_output1[1]=(-1.*t3780*t3946 + t4105*t784)*var2[0] + (-1.*t3946*t5116 + t4916*t784)*var2[1];
  p_output1[2]=(t5116*t7470 + t4916*t7509)*var2[0] + (-1.*t3780*t7470 - 1.*t4105*t7509)*var2[1] + var2[2];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(0.4999*t3506 + t3506*t7425 + t4558*t7467)*var2[0] + (0.4999*t4558 - 1.*t2984*t7425 - 1.*t3506*t7467)*var2[1] + var2[2];
  p_output1[7]=(0.9063*t1479 + 0.06*t1479*t2682 + t1479*t7418)*var2[0] + (-0.06*Power(t1479,2) + 0.9063*t2682 + t2682*t7418)*var2[1] + var2[2];
  p_output1[8]=-0.06*var2[1] + var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "fRightSole_vec_RightSS1.hh"

namespace SymFunction
{

void fRightSole_vec_RightSS1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
