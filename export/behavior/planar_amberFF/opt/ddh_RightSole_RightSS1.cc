/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:29 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t181;
  double t1923;
  double t3060;
  double t963;
  double t994;
  double t1008;
  double t1690;
  double t2022;
  double t2070;
  double t2902;
  double t3760;
  double t3880;
  double t3918;
  double t4897;
  double t4724;
  double t4780;
  double t4822;
  double t4682;
  double t5038;
  double t4865;
  double t4902;
  double t4952;
  double t4679;
  double t5060;
  double t5076;
  double t5082;
  double t4048;
  double t4205;
  double t4351;
  double t4354;
  double t4390;
  double t4398;
  double t2917;
  double t3164;
  double t3241;
  double t3340;
  double t3381;
  double t3449;
  double t3703;
  double t5028;
  double t5124;
  double t5127;
  double t5528;
  double t5529;
  double t5536;
  double t5498;
  double t5342;
  double t5373;
  double t5386;
  double t5387;
  double t5407;
  double t5435;
  double t5258;
  double t5278;
  double t5290;
  double t5299;
  double t5304;
  double t5336;
  double t5436;
  double t5461;
  double t5462;
  double t5706;
  double t5712;
  double t5721;
  double t5732;
  double t5757;
  double t5772;
  double t5874;
  double t5877;
  double t5882;
  double t5885;
  double t5890;
  double t5901;
  double t5903;
  double t5692;
  double t5693;
  double t5936;
  double t5937;
  double t5779;
  double t5791;
  double t5843;
  double t6001;
  double t6002;
  double t6003;
  double t6005;
  double t6007;
  double t6013;
  double t5891;
  double t5904;
  double t5910;
  double t5912;
  double t5916;
  double t5918;
  double t5919;
  double t5923;
  double t5961;
  double t5655;
  double t5674;
  double t5585;
  double t5602;
  double t5603;
  double t5615;
  double t5634;
  double t5645;
  double t6201;
  double t6247;
  double t6204;
  double t6205;
  double t4020;
  double t5152;
  double t5161;
  double t5253;
  double t5845;
  double t5851;
  double t5853;
  double t5817;
  double t5823;
  double t5831;
  double t541;
  double t2260;
  double t6289;
  double t6295;
  double t6307;
  double t6320;
  double t6071;
  double t6072;
  double t6089;
  double t6091;
  double t6095;
  double t6112;
  double t6327;
  double t6329;
  t181 = Cos(var1[8]);
  t1923 = Sin(var1[8]);
  t3060 = Sin(var1[7]);
  t963 = -1.*t181;
  t994 = 1. + t963;
  t1008 = -1.3127*t994;
  t1690 = -1.3127*t181;
  t2022 = -0.06*t1923;
  t2070 = t1008 + t1690 + t2022;
  t2902 = Cos(var1[7]);
  t3760 = t2902*t181;
  t3880 = -1.*t3060*t1923;
  t3918 = t3760 + t3880;
  t4897 = Cos(var1[6]);
  t4724 = -1.*t181*t3060;
  t4780 = -1.*t2902*t1923;
  t4822 = t4724 + t4780;
  t4682 = Sin(var1[6]);
  t5038 = Cos(var1[2]);
  t4865 = t4682*t4822;
  t4902 = t4897*t3918;
  t4952 = t4865 + t4902;
  t4679 = Sin(var1[2]);
  t5060 = t4897*t4822;
  t5076 = -1.*t4682*t3918;
  t5082 = t5060 + t5076;
  t4048 = -1.*t2902;
  t4205 = 1. + t4048;
  t4351 = -0.9063*t4205;
  t4354 = -0.06*t181*t3060;
  t4390 = t2902*t2070;
  t4398 = t4351 + t4354 + t4390;
  t2917 = 0.06*t2902*t181;
  t3164 = 0.9063*t3060;
  t3241 = t3060*t2070;
  t3340 = t2917 + t3164 + t3241;
  t3381 = t181*t3060;
  t3449 = t2902*t1923;
  t3703 = t3381 + t3449;
  t5028 = -1.*t4679*t4952;
  t5124 = t5038*t5082;
  t5127 = t5028 + t5124;
  t5528 = -1.*t4682*t4822;
  t5529 = -1.*t4897*t3918;
  t5536 = t5528 + t5529;
  t5498 = -1.*t4679*t5082;
  t5342 = -1.*t4682*t3703;
  t5373 = t5342 + t4902;
  t5386 = 0.4999*t4682;
  t5387 = t4682*t4398;
  t5407 = t4897*t3340;
  t5435 = t5386 + t5387 + t5407;
  t5258 = -1.*t4897;
  t5278 = 1. + t5258;
  t5290 = -0.4999*t5278;
  t5299 = t4897*t4398;
  t5304 = -1.*t4682*t3340;
  t5336 = t5290 + t5299 + t5304;
  t5436 = t4897*t3703;
  t5461 = t4682*t3918;
  t5462 = t5436 + t5461;
  t5706 = 0.9063*t2902;
  t5712 = t5706 + t4354 + t4390;
  t5721 = -0.06*t2902*t181;
  t5732 = -0.9063*t3060;
  t5757 = -1.*t3060*t2070;
  t5772 = t5721 + t5732 + t5757;
  t5874 = -1.*t2902*t181;
  t5877 = t3060*t1923;
  t5882 = t5874 + t5877;
  t5885 = t4897*t5882;
  t5890 = t5528 + t5885;
  t5901 = t4682*t5882;
  t5903 = t5060 + t5901;
  t5692 = 0.4999*t4822;
  t5693 = t4398*t4822;
  t5936 = -0.06*t181;
  t5937 = 0. + t5936;
  t5779 = t3340*t3918;
  t5791 = t5435*t4952;
  t5843 = t5336*t5082;
  t6001 = t5937*t3060;
  t6002 = -0.06*t2902*t1923;
  t6003 = t6001 + t6002;
  t6005 = t2902*t5937;
  t6007 = 0.06*t3060*t1923;
  t6013 = t6005 + t6007;
  t5891 = t4679*t5890;
  t5904 = t5038*t5903;
  t5910 = t5891 + t5904;
  t5912 = var2[0]*t5910;
  t5916 = t5038*t5890;
  t5918 = -1.*t4679*t5903;
  t5919 = t5916 + t5918;
  t5923 = var2[1]*t5919;
  t5961 = Power(t181,2);
  t5655 = 0.4999*t4897;
  t5674 = t5655 + t5299 + t5304;
  t5585 = -0.4999*t4682;
  t5602 = -1.*t4682*t4398;
  t5603 = -1.*t4897*t3340;
  t5615 = t5585 + t5602 + t5603;
  t5634 = -1.*t4897*t3703;
  t5645 = t5634 + t5076;
  t6201 = t5038*t5373;
  t6247 = -1.*t4679*t5373;
  t6204 = -1.*t4679*t5462;
  t6205 = t6201 + t6204;
  t4020 = 0.4999*t3918;
  t5152 = t5038*t4952;
  t5161 = t4679*t5082;
  t5253 = t5152 + t5161;
  t5845 = t4897*t5712;
  t5851 = t4682*t5772;
  t5853 = t5845 + t5851;
  t5817 = -1.*t4682*t5712;
  t5823 = t4897*t5772;
  t5831 = t5817 + t5823;
  t541 = 0.9063*t181;
  t2260 = t181*t2070;
  t6289 = -1.*t3340*t4822;
  t6295 = -1.*t4398*t5882;
  t6307 = var2[1]*t5127;
  t6320 = var2[0]*t5253;
  t6071 = -1.*t4682*t6003;
  t6072 = t4897*t6013;
  t6089 = t6071 + t6072;
  t6091 = t4897*t6003;
  t6095 = t4682*t6013;
  t6112 = t6091 + t6095;
  t6327 = -1.*t5336*t5890;
  t6329 = -1.*t5435*t5903;
  p_output1[0]=(t5127*var2[0] + (-1.*t4952*t5038 + t5498)*var2[1])*var2[2] + ((t5124 + t4679*t5536)*var2[0] + (t5498 + t5038*t5536)*var2[1] + (t5373*t5435 + t5373*t5615 + t5336*t5645 + t5462*t5674)*var2[2])*var2[6] + (t5912 + t5923 + (t5791 + t5373*t5831 + t5843 + t5462*t5853)*var2[2] + (t5692 + t5693 + t3703*t5712 + t3918*t5772 + t5779)*var2[6])*var2[7] + (t5912 + t5923 + (t5791 + t5843 + t5373*t6089 + t5462*t6112)*var2[2] + (t5692 + t5693 + t5779 + t3703*t6003 + t3918*t6013)*var2[6] + (-0.9063*t1923 - 0.06*Power(t1923,2) - 1.*t1923*t2070 + t181*t5937 + 0.06*t5961)*var2[7])*var2[8] + t5253*var3[0] + t5127*var3[1] + (t5336*t5373 + t5435*t5462)*var3[2] + (t3340*t3703 + t4020 + t3918*t4398)*var3[6] + (0.06*t181*t1923 + t2260 + t541)*var3[7];
  p_output1[1]=(t6205*var2[0] + (-1.*t5038*t5462 + t6247)*var2[1])*var2[2] + ((t4679*t5645 + t6201)*var2[0] + (t5038*t5645 + t6247)*var2[1] + (-1.*t5082*t5435 - 1.*t5336*t5536 - 1.*t5082*t5615 - 1.*t4952*t5674)*var2[2])*var2[6] + (t6307 + t6320 + (-1.*t5082*t5831 - 1.*t4952*t5853 + t6327 + t6329)*var2[2] + (t4020 - 1.*t3918*t5712 - 1.*t4822*t5772 + t6289 + t6295)*var2[6])*var2[7] + (t6307 + t6320 + (-1.*t5082*t6089 - 1.*t4952*t6112 + t6327 + t6329)*var2[2] + (t4020 - 1.*t3918*t6003 - 1.*t4822*t6013 + t6289 + t6295)*var2[6] + (0.12*t181*t1923 + t2260 + t541 + t1923*t5937)*var2[7])*var2[8] + (t4679*t5373 + t5038*t5462)*var3[0] + t6205*var3[1] + (-1.*t5082*t5336 - 1.*t4952*t5435)*var3[2] + (0.4999*t3703 - 1.*t3340*t3918 - 1.*t4398*t4822)*var3[6] + (0.9063*t1923 + t1923*t2070 - 0.06*t5961)*var3[7] - 0.06*var3[8];
  p_output1[2]=var3[2] + var3[6] + var3[7] + var3[8];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightSole_RightSS1.hh"

namespace RightSS1
{

void ddh_RightSole_RightSS1_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
