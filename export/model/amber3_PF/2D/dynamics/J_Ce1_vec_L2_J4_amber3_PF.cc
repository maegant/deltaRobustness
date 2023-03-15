/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:56 GMT-08:00
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
  double t272;
  double t780;
  double t790;
  double t986;
  double t1018;
  double t1435;
  double t1440;
  double t1448;
  double t1569;
  double t1816;
  double t1885;
  double t1898;
  double t2008;
  double t2012;
  double t2419;
  double t2424;
  double t2525;
  double t2545;
  double t2695;
  double t2782;
  double t2823;
  double t3125;
  double t3174;
  double t3340;
  double t3357;
  double t3362;
  t272 = Cos(var1[2]);
  t780 = Cos(var1[3]);
  t790 = -1.*t272*t780;
  t986 = Sin(var1[2]);
  t1018 = Sin(var1[3]);
  t1435 = t986*t1018;
  t1440 = t790 + t1435;
  t1448 = 0.25592966999999994*var2[2]*t1440;
  t1569 = 0.25592966999999994*var2[3]*t1440;
  t1816 = t1448 + t1569;
  t1885 = var2[3]*t1816;
  t1898 = -1.*t780*t986;
  t2008 = -1.*t272*t1018;
  t2012 = t1898 + t2008;
  t2419 = t780*t986;
  t2424 = t272*t1018;
  t2525 = t2419 + t2424;
  t2545 = 0.25592966999999994*var2[2]*t2525;
  t2695 = 0.25592966999999994*var2[3]*t2525;
  t2782 = t2545 + t2695;
  t2823 = var2[3]*t2782;
  t3125 = -1.*t780;
  t3174 = 1. + t3125;
  t3340 = -0.4999*t3174;
  t3357 = -0.6493*t780;
  t3362 = t3340 + t3357;
  p_output1[0]=t1885;
  p_output1[1]=t1885;
  p_output1[2]=0.25592966999999994*t2012*var2[3];
  p_output1[3]=0.25592966999999994*t2012*var2[2] + 0.5118593399999999*t2012*var2[3];
  p_output1[4]=t2823;
  p_output1[5]=t2823;
  p_output1[6]=t1569;
  p_output1[7]=t1448 + 0.5118593399999999*t1440*var2[3];
  p_output1[8]=0.25592966999999994*(0. - 1.*t3362*t780 - 0.14939999999999998*Power(t780,2))*Power(var2[3],2);
  p_output1[9]=0.5118593399999999*(-1.*t1018*t3362 - 0.14939999999999998*t1018*t780)*var2[3];
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

#include "J_Ce1_vec_L2_J4_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L2_J4_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
