/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:26 GMT-08:00
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
  double t14;
  double t1918;
  double t3199;
  double t1053;
  double t1073;
  double t1094;
  double t1316;
  double t1980;
  double t2022;
  double t2810;
  double t3760;
  double t3837;
  double t3856;
  double t5039;
  double t4997;
  double t5007;
  double t5014;
  double t4977;
  double t5078;
  double t5038;
  double t5060;
  double t5074;
  double t4921;
  double t5082;
  double t5101;
  double t5104;
  double t4219;
  double t4274;
  double t4426;
  double t4432;
  double t4724;
  double t4756;
  double t3164;
  double t3304;
  double t3323;
  double t3368;
  double t3377;
  double t3406;
  double t3415;
  double t5254;
  double t5258;
  double t5261;
  double t5263;
  double t5167;
  double t5169;
  double t5171;
  double t5184;
  double t5189;
  double t5209;
  double t5212;
  double t5247;
  double t5278;
  double t5286;
  double t5287;
  t14 = Cos(var1[8]);
  t1918 = Sin(var1[8]);
  t3199 = Sin(var1[7]);
  t1053 = -1.*t14;
  t1073 = 1. + t1053;
  t1094 = -1.3127*t1073;
  t1316 = -1.3127*t14;
  t1980 = -0.06*t1918;
  t2022 = t1094 + t1316 + t1980;
  t2810 = Cos(var1[7]);
  t3760 = t2810*t14;
  t3837 = -1.*t3199*t1918;
  t3856 = t3760 + t3837;
  t5039 = Cos(var1[6]);
  t4997 = -1.*t14*t3199;
  t5007 = -1.*t2810*t1918;
  t5014 = t4997 + t5007;
  t4977 = Sin(var1[6]);
  t5078 = Cos(var1[2]);
  t5038 = t4977*t5014;
  t5060 = t5039*t3856;
  t5074 = t5038 + t5060;
  t4921 = Sin(var1[2]);
  t5082 = t5039*t5014;
  t5101 = -1.*t4977*t3856;
  t5104 = t5082 + t5101;
  t4219 = -1.*t2810;
  t4274 = 1. + t4219;
  t4426 = -0.9063*t4274;
  t4432 = -0.06*t14*t3199;
  t4724 = t2810*t2022;
  t4756 = t4426 + t4432 + t4724;
  t3164 = 0.06*t2810*t14;
  t3304 = 0.9063*t3199;
  t3323 = t3199*t2022;
  t3368 = t3164 + t3304 + t3323;
  t3377 = t14*t3199;
  t3406 = t2810*t1918;
  t3415 = t3377 + t3406;
  t5254 = 0.4999*t4977;
  t5258 = t4977*t4756;
  t5261 = t5039*t3368;
  t5263 = t5254 + t5258 + t5261;
  t5167 = -1.*t5039;
  t5169 = 1. + t5167;
  t5171 = -0.4999*t5169;
  t5184 = t5039*t4756;
  t5189 = -1.*t4977*t3368;
  t5209 = t5171 + t5184 + t5189;
  t5212 = -1.*t4977*t3415;
  t5247 = t5212 + t5060;
  t5278 = t5039*t3415;
  t5286 = t4977*t3856;
  t5287 = t5278 + t5286;
  p_output1[0]=(t5074*t5078 + t4921*t5104)*var2[0] + (-1.*t4921*t5074 + t5078*t5104)*var2[1] + (t5209*t5247 + t5263*t5287)*var2[2] + (t3368*t3415 + 0.4999*t3856 + t3856*t4756)*var2[6] + (0.9063*t14 + 0.06*t14*t1918 + t14*t2022)*var2[7];
  p_output1[1]=(t4921*t5247 + t5078*t5287)*var2[0] + (t5078*t5247 - 1.*t4921*t5287)*var2[1] + (-1.*t5104*t5209 - 1.*t5074*t5263)*var2[2] + (0.4999*t3415 - 1.*t3368*t3856 - 1.*t4756*t5014)*var2[6] + (-0.06*Power(t14,2) + 0.9063*t1918 + t1918*t2022)*var2[7] - 0.06*var2[8];
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

#include "dh_RightSole_RightSS1.hh"

namespace RightSS1
{

void dh_RightSole_RightSS1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
