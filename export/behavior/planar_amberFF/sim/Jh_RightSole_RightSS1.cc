/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:20:36 GMT-08:00
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
static void output1(double *p_output1,const double *var1)
{
  double t1662;
  double t1299;
  double t1510;
  double t1720;
  double t2105;
  double t1540;
  double t1735;
  double t1926;
  double t1272;
  double t2108;
  double t2121;
  double t2431;
  double t2814;
  double t2631;
  double t459;
  double t3141;
  double t3155;
  double t3271;
  double t2089;
  double t2706;
  double t2923;
  double t2940;
  double t2963;
  double t3410;
  double t3497;
  double t3505;
  double t3568;
  double t3616;
  double t5309;
  double t5310;
  double t5461;
  double t5562;
  double t5605;
  double t5612;
  double t4959;
  double t5243;
  double t5271;
  double t5274;
  double t5793;
  double t5875;
  double t6078;
  double t6984;
  double t7232;
  double t7248;
  double t7285;
  double t7287;
  double t7291;
  double t7292;
  double t4613;
  double t4890;
  double t4919;
  double t6062;
  double t7252;
  double t7270;
  t1662 = Cos(var1[7]);
  t1299 = Cos(var1[8]);
  t1510 = Sin(var1[7]);
  t1720 = Sin(var1[8]);
  t2105 = Cos(var1[6]);
  t1540 = -1.*t1299*t1510;
  t1735 = -1.*t1662*t1720;
  t1926 = t1540 + t1735;
  t1272 = Sin(var1[6]);
  t2108 = t1662*t1299;
  t2121 = -1.*t1510*t1720;
  t2431 = t2108 + t2121;
  t2814 = Sin(var1[2]);
  t2631 = t2105*t2431;
  t459 = Cos(var1[2]);
  t3141 = t1299*t1510;
  t3155 = t1662*t1720;
  t3271 = t3141 + t3155;
  t2089 = t1272*t1926;
  t2706 = t2089 + t2631;
  t2923 = t2105*t1926;
  t2940 = -1.*t1272*t2431;
  t2963 = t2923 + t2940;
  t3410 = -1.*t1272*t3271;
  t3497 = t3410 + t2631;
  t3505 = t2105*t3271;
  t3568 = t1272*t2431;
  t3616 = t3505 + t3568;
  t5309 = -1.*t1299;
  t5310 = 1. + t5309;
  t5461 = -1.3127*t5310;
  t5562 = -1.3127*t1299;
  t5605 = -0.06*t1720;
  t5612 = t5461 + t5562 + t5605;
  t4959 = -1.*t1662;
  t5243 = 1. + t4959;
  t5271 = -0.9063*t5243;
  t5274 = -0.06*t1299*t1510;
  t5793 = t1662*t5612;
  t5875 = t5271 + t5274 + t5793;
  t6078 = 0.06*t1662*t1299;
  t6984 = 0.9063*t1510;
  t7232 = t1510*t5612;
  t7248 = t6078 + t6984 + t7232;
  t7285 = 0.4999*t1272;
  t7287 = t1272*t5875;
  t7291 = t2105*t7248;
  t7292 = t7285 + t7287 + t7291;
  t4613 = -1.*t2105;
  t4890 = 1. + t4613;
  t4919 = -0.4999*t4890;
  t6062 = t2105*t5875;
  t7252 = -1.*t1272*t7248;
  t7270 = t4919 + t6062 + t7252;
  p_output1[0]=t2814*t2963 + t2706*t459;
  p_output1[1]=t2814*t3497 + t3616*t459;
  p_output1[2]=0;
  p_output1[3]=-1.*t2706*t2814 + t2963*t459;
  p_output1[4]=-1.*t2814*t3616 + t3497*t459;
  p_output1[5]=0;
  p_output1[6]=t3497*t7270 + t3616*t7292;
  p_output1[7]=-1.*t2963*t7270 - 1.*t2706*t7292;
  p_output1[8]=1.;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0.4999*t2431 + t2431*t5875 + t3271*t7248;
  p_output1[19]=0.4999*t3271 - 1.*t1926*t5875 - 1.*t2431*t7248;
  p_output1[20]=1.;
  p_output1[21]=0.9063*t1299 + 0.06*t1299*t1720 + t1299*t5612;
  p_output1[22]=-0.06*Power(t1299,2) + 0.9063*t1720 + t1720*t5612;
  p_output1[23]=1.;
  p_output1[24]=0;
  p_output1[25]=-0.06;
  p_output1[26]=1.;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RightSole_RightSS1.hh"

namespace SymFunction
{

void Jh_RightSole_RightSS1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
