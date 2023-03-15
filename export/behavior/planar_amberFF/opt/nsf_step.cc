/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:38 GMT-08:00
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
  double t3819;
  double t2157;
  double t3938;
  double t3950;
  double t4013;
  double t4071;
  double t4076;
  double t4080;
  double t4166;
  double t4179;
  double t4181;
  double t4186;
  double t4319;
  double t4435;
  double t4450;
  double t4537;
  double t4571;
  double t4578;
  double t4583;
  double t4595;
  double t3831;
  double t4758;
  double t4789;
  double t4818;
  double t4819;
  double t4865;
  double t4886;
  double t4910;
  double t4955;
  double t4970;
  double t4995;
  double t5013;
  double t5017;
  double t5044;
  double t5049;
  double t5077;
  double t5084;
  double t5115;
  double t2675;
  double t2862;
  double t3834;
  double t3919;
  double t4029;
  double t4067;
  double t4358;
  double t4393;
  double t5388;
  double t5403;
  double t5429;
  double t5463;
  double t5470;
  double t5484;
  double t5443;
  double t5449;
  double t4805;
  double t4809;
  double t5009;
  double t5011;
  double t5560;
  double t5565;
  double t5571;
  double t5608;
  double t5617;
  double t5637;
  double t5583;
  double t5587;
  t3819 = Sin(var1[2]);
  t2157 = Cos(var1[3]);
  t3938 = Cos(var1[2]);
  t3950 = Sin(var1[3]);
  t4013 = Cos(var1[4]);
  t4071 = t2157*t3819;
  t4076 = t3938*t3950;
  t4080 = t4071 + t4076;
  t4166 = t3938*t2157;
  t4179 = -1.*t3819*t3950;
  t4181 = t4166 + t4179;
  t4186 = Sin(var1[4]);
  t4319 = Cos(var1[5]);
  t4435 = t4013*t4080;
  t4450 = t4181*t4186;
  t4537 = t4435 + t4450;
  t4571 = t4013*t4181;
  t4578 = -1.*t4080*t4186;
  t4583 = t4571 + t4578;
  t4595 = Sin(var1[5]);
  t3831 = Cos(var1[6]);
  t4758 = Sin(var1[6]);
  t4789 = Cos(var1[7]);
  t4818 = t3831*t3819;
  t4819 = t3938*t4758;
  t4865 = t4818 + t4819;
  t4886 = t3938*t3831;
  t4910 = -1.*t3819*t4758;
  t4955 = t4886 + t4910;
  t4970 = Sin(var1[7]);
  t4995 = Cos(var1[8]);
  t5013 = t4789*t4865;
  t5017 = t4955*t4970;
  t5044 = t5013 + t5017;
  t5049 = t4789*t4955;
  t5077 = -1.*t4865*t4970;
  t5084 = t5049 + t5077;
  t5115 = Sin(var1[8]);
  t2675 = -1.*t2157;
  t2862 = 1. + t2675;
  t3834 = -1.*t3831;
  t3919 = 1. + t3834;
  t4029 = -1.*t4013;
  t4067 = 1. + t4029;
  t4358 = -1.*t4319;
  t4393 = 1. + t4358;
  t5388 = -1.*t2157*t3819;
  t5403 = -1.*t3938*t3950;
  t5429 = t5388 + t5403;
  t5463 = t4013*t5429;
  t5470 = -1.*t4181*t4186;
  t5484 = t5463 + t5470;
  t5443 = t5429*t4186;
  t5449 = t4571 + t5443;
  t4805 = -1.*t4789;
  t4809 = 1. + t4805;
  t5009 = -1.*t4995;
  t5011 = 1. + t5009;
  t5560 = -1.*t3831*t3819;
  t5565 = -1.*t3938*t4758;
  t5571 = t5560 + t5565;
  t5608 = t4789*t5571;
  t5617 = -1.*t4955*t4970;
  t5637 = t5608 + t5617;
  t5583 = t5571*t4970;
  t5587 = t5049 + t5583;
  p_output1[0]=-0.4999*t2862*t3938 + 0.4999*t3919*t3938 - 0.4999*t3819*t3950 - 0.9063*t4067*t4181 + 0.4999*t3819*t4758 + 0.9063*t4809*t4955 + 0.9063*t4186*t5429 - 1.3127*t4393*t5449 + 1.3127*t4595*t5484 + 0.06*(-1.*t4595*t5449 + t4319*t5484) - 1.3127*(t4319*t5449 + t4595*t5484) - 0.9063*t4970*t5571 + 1.3127*t5011*t5587 - 1.3127*t5115*t5637 - 0.06*(-1.*t5115*t5587 + t4995*t5637) + 1.3127*(t4995*t5587 + t5115*t5637) - (1.*var2[0])/(1. + Power(2.71828182845905,-50.*(-0.4999*t2862*t3819 + 0.4999*t3819*t3919 + 0.4999*t3938*t3950 - 0.9063*t4067*t4080 + 0.9063*t4181*t4186 - 1.3127*t4393*t4537 + 1.3127*t4583*t4595 + 0.06*(t4319*t4583 - 1.*t4537*t4595) - 1.3127*(t4319*t4537 + t4583*t4595) - 0.4999*t3938*t4758 + 0.9063*t4809*t4865 - 0.9063*t4955*t4970 + 1.3127*t5011*t5044 - 1.3127*t5084*t5115 - 0.06*(t4995*t5084 - 1.*t5044*t5115) + 1.3127*(t4995*t5044 + t5084*t5115) - 1.*var2[1])));
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

namespace RightSS2
{

void nsf_step_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
