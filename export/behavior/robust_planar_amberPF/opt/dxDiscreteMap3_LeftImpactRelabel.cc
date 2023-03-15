/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:35:03 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t3012;
  double t2222;
  double t2382;
  double t3046;
  double t1583;
  double t2669;
  double t3078;
  double t3138;
  double t3208;
  double t3295;
  double t3328;
  double t3336;
  double t3607;
  double t3661;
  double t3684;
  double t3801;
  double t3857;
  double t3866;
  double t3906;
  double t3912;
  double t4031;
  double t4073;
  double t4083;
  double t4116;
  double t4119;
  double t4146;
  double t4484;
  double t4495;
  double t4512;
  double t4536;
  double t4558;
  double t4594;
  double t4617;
  double t4618;
  double t4628;
  double t4632;
  double t716;
  double t1082;
  double t4228;
  double t4289;
  double t4296;
  double t3713;
  double t3737;
  double t3970;
  double t3975;
  double t3999;
  double t4017;
  double t4343;
  double t4346;
  double t3747;
  double t3921;
  double t3927;
  double t3942;
  double t3956;
  double t4221;
  double t4223;
  double t4384;
  double t4387;
  double t4315;
  double t4347;
  double t4349;
  double t4456;
  double t4457;
  double t4557;
  double t4633;
  double t4680;
  double t4703;
  double t4710;
  double t4738;
  double t4682;
  double t4742;
  double t4746;
  double t4890;
  double t4910;
  double t4952;
  double t4765;
  double t4808;
  double t4818;
  double t3968;
  double t4153;
  double t4184;
  double t5002;
  double t5004;
  double t5013;
  double t5106;
  double t5109;
  double t4982;
  double t4992;
  t3012 = Cos(var2[3]);
  t2222 = Cos(var2[4]);
  t2382 = Sin(var2[3]);
  t3046 = Sin(var2[4]);
  t1583 = Sin(var2[2]);
  t2669 = -1.*t2222*t2382;
  t3078 = -1.*t3012*t3046;
  t3138 = t2669 + t3078;
  t3208 = t1583*t3138;
  t3295 = Cos(var2[2]);
  t3328 = t3012*t2222;
  t3336 = -1.*t2382*t3046;
  t3607 = t3328 + t3336;
  t3661 = t3295*t3607;
  t3684 = t3208 + t3661;
  t3801 = -1.*t2222;
  t3857 = 1. + t3801;
  t3866 = -0.9063*t3857;
  t3906 = -1.078185*t2222;
  t3912 = t3866 + t3906;
  t4031 = t2222*t2382;
  t4073 = t3012*t3046;
  t4083 = t4031 + t4073;
  t4116 = t3295*t4083;
  t4119 = t1583*t3607;
  t4146 = t4116 + t4119;
  t4484 = 0.4999*t2382;
  t4495 = t3912*t2382;
  t4512 = -0.17188499999999995*t3012*t3046;
  t4536 = t4484 + t4495 + t4512;
  t4558 = -1.*t3012;
  t4594 = 1. + t4558;
  t4617 = -0.4999*t4594;
  t4618 = t3012*t3912;
  t4628 = 0.17188499999999995*t2382*t3046;
  t4632 = t4617 + t4618 + t4628;
  t716 = -1.*var1[6];
  t1082 = var3[4] + t716;
  t4228 = t3295*t3138;
  t4289 = -1.*t1583*t3607;
  t4296 = t4228 + t4289;
  t3713 = -1.*var1[5];
  t3737 = var3[3] + t3713;
  t3970 = 0.4999*t3046;
  t3975 = t3912*t3046;
  t3999 = 0.17188499999999995*t2222*t3046;
  t4017 = t3970 + t3975 + t3999;
  t4343 = -1.*t1583*t4083;
  t4346 = t4343 + t3661;
  t3747 = 0.4999*t2222;
  t3921 = t3912*t2222;
  t3927 = Power(t3046,2);
  t3942 = -0.17188499999999995*t3927;
  t3956 = t3747 + t3921 + t3942;
  t4221 = -1.*var1[1];
  t4223 = var3[1] + t4221;
  t4384 = -1.*var1[0];
  t4387 = var3[0] + t4384;
  t4315 = 0.85216*t3684*t4296;
  t4347 = 0.85216*t4346*t4146;
  t4349 = t4315 + t4347;
  t4456 = -1.*var1[2];
  t4457 = var3[2] + t4456;
  t4557 = -1.*t4536*t3607;
  t4633 = -1.*t3138*t4632;
  t4680 = t4557 + t4633;
  t4703 = t4536*t4083;
  t4710 = t3607*t4632;
  t4738 = t4703 + t4710;
  t4682 = 0.85216*t4146*t4680;
  t4742 = 0.85216*t3684*t4738;
  t4746 = t4682 + t4742;
  t4890 = 0.85216*t4346*t4680;
  t4910 = 0.85216*t4296*t4738;
  t4952 = t4890 + t4910;
  t4765 = 0.85216*t4017*t4346;
  t4808 = 0.85216*t3956*t4296;
  t4818 = t4765 + t4808;
  t3968 = 0.85216*t3956*t3684;
  t4153 = 0.85216*t4017*t4146;
  t4184 = t3968 + t4153;
  t5002 = 0.85216*t4017*t4680;
  t5004 = 0.85216*t3956*t4738;
  t5013 = 0.019286 + t5002 + t5004;
  t5106 = -0.14647352159999996*t3956;
  t5109 = 0.019286 + t5106;
  t4982 = -0.14647352159999996*t4738;
  t4992 = 0.019286 + t4982;
  p_output1[0]=-0.14647352159999996*t1082*t3684 + t3737*t4184 + t4223*t4349 + (0.85216*Power(t3684,2) + 0.85216*Power(t4146,2))*t4387 + t4457*t4746;
  p_output1[1]=-0.14647352159999996*t1082*t4296 + t4223*(0.85216*Power(t4296,2) + 0.85216*Power(t4346,2)) + t4349*t4387 + t3737*t4818 + t4457*t4952;
  p_output1[2]=t4457*(0.019286 + 0.85216*Power(t4680,2) + 0.85216*Power(t4738,2)) + t4387*t4746 + t4223*t4952 + t1082*t4992 + t3737*t5013;
  p_output1[3]=t3737*(0.019286 + 0.85216*Power(t3956,2) + 0.85216*Power(t4017,2)) + t4184*t4387 + t4223*t4818 + t4457*t5013 + t1082*t5109;
  p_output1[4]=0.04446260126021599*t1082 - 0.14647352159999996*t4223*t4296 - 0.14647352159999996*t3684*t4387 + t4457*t4992 + t3737*t5109;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMap3_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void dxDiscreteMap3_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
