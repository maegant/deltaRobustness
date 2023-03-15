/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:50 GMT-08:00
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
  double t1615;
  double t1754;
  double t941;
  double t1933;
  double t876;
  double t1617;
  double t1994;
  double t2060;
  double t2182;
  double t2272;
  double t2302;
  double t2351;
  double t2509;
  double t2798;
  double t2818;
  double t2849;
  double t2677;
  double t2740;
  double t2757;
  double t2779;
  double t2854;
  double t2887;
  double t2894;
  double t2900;
  double t2147;
  double t2412;
  double t2597;
  double t2638;
  double t2639;
  double t2659;
  double t2669;
  double t3012;
  double t3077;
  double t3078;
  double t3151;
  double t3154;
  double t3159;
  double t2671;
  double t2674;
  double t3429;
  double t3442;
  double t3465;
  double t3468;
  double t3597;
  double t3606;
  double t3607;
  t1615 = Cos(var1[3]);
  t1754 = Sin(var1[2]);
  t941 = Cos(var1[2]);
  t1933 = Sin(var1[3]);
  t876 = Cos(var1[4]);
  t1617 = -1.*t941*t1615;
  t1994 = t1754*t1933;
  t2060 = t1617 + t1994;
  t2182 = -1.*t1615*t1754;
  t2272 = -1.*t941*t1933;
  t2302 = t2182 + t2272;
  t2351 = Sin(var1[4]);
  t2509 = t876*t2060;
  t2798 = t1615*t1754;
  t2818 = t941*t1933;
  t2849 = t2798 + t2818;
  t2677 = 0.4999*t1754*t1933;
  t2740 = -1.*t876;
  t2757 = 1. + t2740;
  t2779 = -0.9063*t2757*t2060;
  t2854 = 0.9063*t2849*t2351;
  t2887 = t2849*t2351;
  t2894 = t2509 + t2887;
  t2900 = -1.373025*t2894;
  t2147 = 0.9063*t876*t2060;
  t2412 = -0.9063*t2302*t2351;
  t2597 = -1.*t2302*t2351;
  t2638 = t2509 + t2597;
  t2639 = -1.373025*t2638;
  t2659 = t2147 + t2412 + t2639;
  t2669 = var2[4]*t2659;
  t3012 = -0.4999*t941*t1615;
  t3077 = t3012 + t2677 + t2779 + t2854 + t2900;
  t3078 = var2[3]*t3077;
  t3151 = t941*t1615;
  t3154 = -1.*t1754*t1933;
  t3159 = t3151 + t3154;
  t2671 = -1.*t1615;
  t2674 = 1. + t2671;
  t3429 = -0.4999*t941*t1933;
  t3442 = -0.9063*t2757*t2302;
  t3465 = 0.9063*t2060*t2351;
  t3468 = t876*t2302;
  t3597 = t2060*t2351;
  t3606 = t3468 + t3597;
  t3607 = -1.373025*t3606;
  p_output1[0]=t2669 + t3078 + (t2677 + t2779 + t2854 + t2900 + 0.4999*t2674*t941)*var2[2];
  p_output1[1]=t2669 + t3078 + t3077*var2[2];
  p_output1[2]=t2659*var2[2] + t2659*var2[3] + (t2412 - 0.9063*t3159*t876 - 1.373025*(t2597 - 1.*t3159*t876))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=0.4999*t1754*t2674 + t3429 + t3442 + t3465 + t3607;
  p_output1[5]=-0.4999*t1615*t1754 + t3429 + t3442 + t3465 + t3607;
  p_output1[6]=-0.9063*t2351*t3159 - 1.373025*(-1.*t2351*t3159 + t3468) + 0.9063*t2302*t876;
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

#include "J_nsf_velZ.hh"

namespace RightSS
{

void J_nsf_velZ_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
