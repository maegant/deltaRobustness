/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:04 GMT-08:00
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
  double t3028;
  double t2062;
  double t3339;
  double t3557;
  double t3578;
  double t3622;
  double t3673;
  double t3677;
  double t3856;
  double t3861;
  double t3864;
  double t3990;
  double t4123;
  double t4576;
  double t4586;
  double t5134;
  double t5293;
  double t5297;
  double t5375;
  double t5379;
  double t3095;
  double t7323;
  double t7454;
  double t7480;
  double t7481;
  double t7510;
  double t7542;
  double t7550;
  double t7566;
  double t7574;
  double t7579;
  double t7594;
  double t7601;
  double t7603;
  double t7608;
  double t7614;
  double t7623;
  double t7628;
  double t2176;
  double t2969;
  double t3185;
  double t3204;
  double t3579;
  double t3609;
  double t4138;
  double t4469;
  double t7670;
  double t7671;
  double t7672;
  double t7686;
  double t7687;
  double t7688;
  double t7681;
  double t7682;
  double t7457;
  double t7472;
  double t7588;
  double t7591;
  double t7711;
  double t7712;
  double t7714;
  double t7720;
  double t7721;
  double t7722;
  double t7716;
  double t7717;
  t3028 = Sin(var1[2]);
  t2062 = Cos(var1[3]);
  t3339 = Cos(var1[2]);
  t3557 = Sin(var1[3]);
  t3578 = Cos(var1[4]);
  t3622 = t2062*t3028;
  t3673 = t3339*t3557;
  t3677 = t3622 + t3673;
  t3856 = t3339*t2062;
  t3861 = -1.*t3028*t3557;
  t3864 = t3856 + t3861;
  t3990 = Sin(var1[4]);
  t4123 = Cos(var1[5]);
  t4576 = t3578*t3677;
  t4586 = t3864*t3990;
  t5134 = t4576 + t4586;
  t5293 = t3578*t3864;
  t5297 = -1.*t3677*t3990;
  t5375 = t5293 + t5297;
  t5379 = Sin(var1[5]);
  t3095 = Cos(var1[6]);
  t7323 = Sin(var1[6]);
  t7454 = Cos(var1[7]);
  t7480 = t3095*t3028;
  t7481 = t3339*t7323;
  t7510 = t7480 + t7481;
  t7542 = t3339*t3095;
  t7550 = -1.*t3028*t7323;
  t7566 = t7542 + t7550;
  t7574 = Sin(var1[7]);
  t7579 = Cos(var1[8]);
  t7594 = t7454*t7510;
  t7601 = t7566*t7574;
  t7603 = t7594 + t7601;
  t7608 = t7454*t7566;
  t7614 = -1.*t7510*t7574;
  t7623 = t7608 + t7614;
  t7628 = Sin(var1[8]);
  t2176 = -1.*t2062;
  t2969 = 1. + t2176;
  t3185 = -1.*t3095;
  t3204 = 1. + t3185;
  t3579 = -1.*t3578;
  t3609 = 1. + t3579;
  t4138 = -1.*t4123;
  t4469 = 1. + t4138;
  t7670 = -1.*t2062*t3028;
  t7671 = -1.*t3339*t3557;
  t7672 = t7670 + t7671;
  t7686 = t3578*t7672;
  t7687 = -1.*t3864*t3990;
  t7688 = t7686 + t7687;
  t7681 = t7672*t3990;
  t7682 = t5293 + t7681;
  t7457 = -1.*t7454;
  t7472 = 1. + t7457;
  t7588 = -1.*t7579;
  t7591 = 1. + t7588;
  t7711 = -1.*t3095*t3028;
  t7712 = -1.*t3339*t7323;
  t7714 = t7711 + t7712;
  t7720 = t7454*t7714;
  t7721 = -1.*t7566*t7574;
  t7722 = t7720 + t7721;
  t7716 = t7714*t7574;
  t7717 = t7608 + t7716;
  p_output1[0]=-0.4999*t2969*t3339 + 0.4999*t3204*t3339 - 0.4999*t3028*t3557 - 0.9063*t3609*t3864 + 0.4999*t3028*t7323 + 0.9063*t7472*t7566 + 0.9063*t3990*t7672 - 1.3127*t4469*t7682 + 1.3127*t5379*t7688 + 0.06*(-1.*t5379*t7682 + t4123*t7688) - 1.3127*(t4123*t7682 + t5379*t7688) - 0.9063*t7574*t7714 + 1.3127*t7591*t7717 - 1.3127*t7628*t7722 - 0.06*(-1.*t7628*t7717 + t7579*t7722) + 1.3127*(t7579*t7717 + t7628*t7722) - (1.*var2[0])/(1. + Power(2.71828182845905,-50.*(-0.4999*t2969*t3028 + 0.4999*t3028*t3204 + 0.4999*t3339*t3557 - 0.9063*t3609*t3677 + 0.9063*t3864*t3990 - 1.3127*t4469*t5134 + 1.3127*t5375*t5379 + 0.06*(t4123*t5375 - 1.*t5134*t5379) - 1.3127*(t4123*t5134 + t5375*t5379) - 0.4999*t3339*t7323 + 0.9063*t7472*t7510 - 0.9063*t7566*t7574 + 1.3127*t7591*t7603 - 1.3127*t7623*t7628 - 0.06*(t7579*t7623 - 1.*t7603*t7628) + 1.3127*(t7579*t7603 + t7623*t7628) - 1.*var2[1])));
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
    ( !(mrows == 1 && ncols == 2) && 
      !(mrows == 2 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "nsf_step.hh"

namespace SymFunction
{

void nsf_step_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
