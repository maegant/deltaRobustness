/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:10 GMT-08:00
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
  double t144;
  double t666;
  double t2287;
  double t230;
  double t310;
  double t455;
  double t557;
  double t986;
  double t1292;
  double t2246;
  double t3215;
  double t3317;
  double t3353;
  double t4753;
  double t4607;
  double t4634;
  double t4657;
  double t4508;
  double t4844;
  double t4715;
  double t4790;
  double t4820;
  double t4423;
  double t4853;
  double t4891;
  double t4925;
  double t3470;
  double t3655;
  double t3687;
  double t3979;
  double t4016;
  double t4102;
  double t2263;
  double t2288;
  double t2302;
  double t2616;
  double t2985;
  double t2994;
  double t2996;
  double t5208;
  double t5214;
  double t5223;
  double t5242;
  double t5146;
  double t5149;
  double t5154;
  double t5164;
  double t5165;
  double t5186;
  double t5194;
  double t5195;
  double t5280;
  double t5289;
  double t5291;
  t144 = Cos(var1[8]);
  t666 = Sin(var1[8]);
  t2287 = Sin(var1[7]);
  t230 = -1.*t144;
  t310 = 1. + t230;
  t455 = -1.3127*t310;
  t557 = -1.3127*t144;
  t986 = -0.06*t666;
  t1292 = t455 + t557 + t986;
  t2246 = Cos(var1[7]);
  t3215 = t2246*t144;
  t3317 = -1.*t2287*t666;
  t3353 = t3215 + t3317;
  t4753 = Cos(var1[6]);
  t4607 = -1.*t144*t2287;
  t4634 = -1.*t2246*t666;
  t4657 = t4607 + t4634;
  t4508 = Sin(var1[6]);
  t4844 = Cos(var1[2]);
  t4715 = t4508*t4657;
  t4790 = t4753*t3353;
  t4820 = t4715 + t4790;
  t4423 = Sin(var1[2]);
  t4853 = t4753*t4657;
  t4891 = -1.*t4508*t3353;
  t4925 = t4853 + t4891;
  t3470 = -1.*t2246;
  t3655 = 1. + t3470;
  t3687 = -0.9063*t3655;
  t3979 = -0.06*t144*t2287;
  t4016 = t2246*t1292;
  t4102 = t3687 + t3979 + t4016;
  t2263 = 0.06*t2246*t144;
  t2288 = 0.9063*t2287;
  t2302 = t2287*t1292;
  t2616 = t2263 + t2288 + t2302;
  t2985 = t144*t2287;
  t2994 = t2246*t666;
  t2996 = t2985 + t2994;
  t5208 = 0.4999*t4508;
  t5214 = t4508*t4102;
  t5223 = t4753*t2616;
  t5242 = t5208 + t5214 + t5223;
  t5146 = -1.*t4753;
  t5149 = 1. + t5146;
  t5154 = -0.4999*t5149;
  t5164 = t4753*t4102;
  t5165 = -1.*t4508*t2616;
  t5186 = t5154 + t5164 + t5165;
  t5194 = -1.*t4508*t2996;
  t5195 = t5194 + t4790;
  t5280 = t4753*t2996;
  t5289 = t4508*t3353;
  t5291 = t5280 + t5289;
  p_output1[0]=(t4820*t4844 + t4423*t4925)*var2[0] + (-1.*t4423*t4820 + t4844*t4925)*var2[1] + (t5186*t5195 + t5242*t5291)*var2[2] + (t2616*t2996 + 0.4999*t3353 + t3353*t4102)*var2[6] + (0.9063*t144 + t1292*t144 + 0.06*t144*t666)*var2[7];
  p_output1[1]=(t4423*t5195 + t4844*t5291)*var2[0] + (t4844*t5195 - 1.*t4423*t5291)*var2[1] + (-1.*t4925*t5186 - 1.*t4820*t5242)*var2[2] + (0.4999*t2996 - 1.*t2616*t3353 - 1.*t4102*t4657)*var2[6] + (-0.06*Power(t144,2) + 0.9063*t666 + t1292*t666)*var2[7] - 0.06*var2[8];
  p_output1[2]=var2[2] + var2[6] + var2[7] + var2[8];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightSole_RightSS2.hh"

namespace RightSS2
{

void dh_RightSole_RightSS2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
