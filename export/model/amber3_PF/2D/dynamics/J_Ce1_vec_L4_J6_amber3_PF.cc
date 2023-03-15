/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:31:22 GMT-08:00
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
  double t79;
  double t116;
  double t262;
  double t435;
  double t501;
  double t1253;
  double t1470;
  double t1539;
  double t1557;
  double t1583;
  double t1608;
  double t1616;
  double t1622;
  double t1701;
  double t1792;
  double t1881;
  double t1948;
  double t2052;
  double t2105;
  double t2220;
  double t2237;
  double t2307;
  double t2419;
  double t2420;
  double t2441;
  double t2463;
  t79 = Cos(var1[2]);
  t116 = Cos(var1[5]);
  t262 = -1.*t79*t116;
  t435 = Sin(var1[2]);
  t501 = Sin(var1[5]);
  t1253 = t435*t501;
  t1470 = t262 + t1253;
  t1539 = 0.25592966999999994*var2[2]*t1470;
  t1557 = 0.25592966999999994*var2[5]*t1470;
  t1583 = t1539 + t1557;
  t1608 = var2[5]*t1583;
  t1616 = -1.*t116*t435;
  t1622 = -1.*t79*t501;
  t1701 = t1616 + t1622;
  t1792 = t116*t435;
  t1881 = t79*t501;
  t1948 = t1792 + t1881;
  t2052 = 0.25592966999999994*var2[2]*t1948;
  t2105 = 0.25592966999999994*var2[5]*t1948;
  t2220 = t2052 + t2105;
  t2237 = var2[5]*t2220;
  t2307 = -1.*t116;
  t2419 = 1. + t2307;
  t2420 = -0.4999*t2419;
  t2441 = -0.6493*t116;
  t2463 = t2420 + t2441;
  p_output1[0]=t1608;
  p_output1[1]=t1608;
  p_output1[2]=0.25592966999999994*t1701*var2[5];
  p_output1[3]=0.25592966999999994*t1701*var2[2] + 0.5118593399999999*t1701*var2[5];
  p_output1[4]=t2237;
  p_output1[5]=t2237;
  p_output1[6]=t1557;
  p_output1[7]=t1539 + 0.5118593399999999*t1470*var2[5];
  p_output1[8]=0.25592966999999994*(0. - 0.14939999999999998*Power(t116,2) - 1.*t116*t2463)*Power(var2[5],2);
  p_output1[9]=0.5118593399999999*(-0.14939999999999998*t116*t501 - 1.*t2463*t501)*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L4_J6_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L4_J6_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
