/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:35:04 GMT-08:00
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
  double t3921;
  double t3697;
  double t3737;
  double t3927;
  double t3295;
  double t3866;
  double t3942;
  double t3956;
  double t3968;
  double t3970;
  double t3975;
  double t3999;
  double t4018;
  double t4031;
  double t4073;
  double t4220;
  double t4236;
  double t4296;
  double t4304;
  double t4315;
  double t4440;
  double t4441;
  double t4451;
  double t4455;
  double t4457;
  double t4484;
  double t4862;
  double t4887;
  double t4890;
  double t4910;
  double t4961;
  double t4963;
  double t4982;
  double t4992;
  double t5000;
  double t5002;
  double t775;
  double t1082;
  double t4680;
  double t4682;
  double t4703;
  double t4119;
  double t4146;
  double t4376;
  double t4387;
  double t4407;
  double t4420;
  double t4738;
  double t4742;
  double t4153;
  double t4344;
  double t4346;
  double t4347;
  double t4349;
  double t4618;
  double t4628;
  double t4760;
  double t4765;
  double t4710;
  double t4746;
  double t4750;
  double t4859;
  double t4860;
  double t4952;
  double t5004;
  double t5013;
  double t5024;
  double t5038;
  double t5043;
  double t5021;
  double t5054;
  double t5063;
  double t5201;
  double t5207;
  double t5211;
  double t5105;
  double t5106;
  double t5109;
  double t4357;
  double t4495;
  double t4512;
  double t5295;
  double t5296;
  double t5306;
  double t5360;
  double t5367;
  double t5280;
  double t5285;
  t3921 = Cos(var2[5]);
  t3697 = Cos(var2[6]);
  t3737 = Sin(var2[5]);
  t3927 = Sin(var2[6]);
  t3295 = Sin(var2[2]);
  t3866 = -1.*t3697*t3737;
  t3942 = -1.*t3921*t3927;
  t3956 = t3866 + t3942;
  t3968 = t3295*t3956;
  t3970 = Cos(var2[2]);
  t3975 = t3921*t3697;
  t3999 = -1.*t3737*t3927;
  t4018 = t3975 + t3999;
  t4031 = t3970*t4018;
  t4073 = t3968 + t4031;
  t4220 = -1.*t3697;
  t4236 = 1. + t4220;
  t4296 = -0.9063*t4236;
  t4304 = -1.078185*t3697;
  t4315 = t4296 + t4304;
  t4440 = t3697*t3737;
  t4441 = t3921*t3927;
  t4451 = t4440 + t4441;
  t4455 = t3970*t4451;
  t4457 = t3295*t4018;
  t4484 = t4455 + t4457;
  t4862 = 0.4999*t3737;
  t4887 = t4315*t3737;
  t4890 = -0.17188499999999995*t3921*t3927;
  t4910 = t4862 + t4887 + t4890;
  t4961 = -1.*t3921;
  t4963 = 1. + t4961;
  t4982 = -0.4999*t4963;
  t4992 = t3921*t4315;
  t5000 = 0.17188499999999995*t3737*t3927;
  t5002 = t4982 + t4992 + t5000;
  t775 = -1.*var1[4];
  t1082 = var3[6] + t775;
  t4680 = t3970*t3956;
  t4682 = -1.*t3295*t4018;
  t4703 = t4680 + t4682;
  t4119 = -1.*var1[3];
  t4146 = var3[5] + t4119;
  t4376 = 0.4999*t3927;
  t4387 = t4315*t3927;
  t4407 = 0.17188499999999995*t3697*t3927;
  t4420 = t4376 + t4387 + t4407;
  t4738 = -1.*t3295*t4451;
  t4742 = t4738 + t4031;
  t4153 = 0.4999*t3697;
  t4344 = t4315*t3697;
  t4346 = Power(t3927,2);
  t4347 = -0.17188499999999995*t4346;
  t4349 = t4153 + t4344 + t4347;
  t4618 = -1.*var1[1];
  t4628 = var3[1] + t4618;
  t4760 = -1.*var1[0];
  t4765 = var3[0] + t4760;
  t4710 = 0.85216*t4073*t4703;
  t4746 = 0.85216*t4742*t4484;
  t4750 = t4710 + t4746;
  t4859 = -1.*var1[2];
  t4860 = var3[2] + t4859;
  t4952 = -1.*t4910*t4018;
  t5004 = -1.*t3956*t5002;
  t5013 = t4952 + t5004;
  t5024 = t4910*t4451;
  t5038 = t4018*t5002;
  t5043 = t5024 + t5038;
  t5021 = 0.85216*t4484*t5013;
  t5054 = 0.85216*t4073*t5043;
  t5063 = t5021 + t5054;
  t5201 = 0.85216*t4742*t5013;
  t5207 = 0.85216*t4703*t5043;
  t5211 = t5201 + t5207;
  t5105 = 0.85216*t4420*t4742;
  t5106 = 0.85216*t4349*t4703;
  t5109 = t5105 + t5106;
  t4357 = 0.85216*t4349*t4073;
  t4495 = 0.85216*t4420*t4484;
  t4512 = t4357 + t4495;
  t5295 = 0.85216*t4420*t5013;
  t5296 = 0.85216*t4349*t5043;
  t5306 = 0.019286 + t5295 + t5296;
  t5360 = -0.14647352159999996*t4349;
  t5367 = 0.019286 + t5360;
  t5280 = -0.14647352159999996*t5043;
  t5285 = 0.019286 + t5280;
  p_output1[0]=-0.14647352159999996*t1082*t4073 + t4146*t4512 + t4628*t4750 + (0.85216*Power(t4073,2) + 0.85216*Power(t4484,2))*t4765 + t4860*t5063;
  p_output1[1]=-0.14647352159999996*t1082*t4703 + t4628*(0.85216*Power(t4703,2) + 0.85216*Power(t4742,2)) + t4750*t4765 + t4146*t5109 + t4860*t5211;
  p_output1[2]=t4860*(0.019286 + 0.85216*Power(t5013,2) + 0.85216*Power(t5043,2)) + t4765*t5063 + t4628*t5211 + t1082*t5285 + t4146*t5306;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t4146*(0.019286 + 0.85216*Power(t4349,2) + 0.85216*Power(t4420,2)) + t4512*t4765 + t4628*t5109 + t4860*t5306 + t1082*t5367;
  p_output1[6]=0.04446260126021599*t1082 - 0.14647352159999996*t4628*t4703 - 0.14647352159999996*t4073*t4765 + t4860*t5285 + t4146*t5367;
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

#include "dxDiscreteMap5_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void dxDiscreteMap5_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
