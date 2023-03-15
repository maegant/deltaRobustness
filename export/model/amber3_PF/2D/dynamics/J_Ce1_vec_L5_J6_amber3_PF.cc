/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:31:34 GMT-08:00
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
  double t43;
  double t618;
  double t944;
  double t900;
  double t194;
  double t201;
  double t318;
  double t438;
  double t557;
  double t1284;
  double t800;
  double t1312;
  double t1317;
  double t1357;
  double t1812;
  double t1819;
  double t1833;
  double t1834;
  double t930;
  double t1187;
  double t1193;
  double t2088;
  double t148;
  double t589;
  double t705;
  double t709;
  double t765;
  double t1278;
  double t1860;
  double t1948;
  double t1991;
  double t2210;
  double t2212;
  double t2223;
  double t2237;
  double t2256;
  double t2269;
  double t2300;
  double t2301;
  double t2305;
  double t2339;
  double t2379;
  double t2387;
  double t2389;
  double t2483;
  double t2976;
  double t3027;
  double t3044;
  double t2634;
  double t2639;
  double t2647;
  double t2670;
  double t3063;
  double t3064;
  double t3107;
  double t2441;
  double t2527;
  double t2675;
  double t3321;
  double t3219;
  double t3236;
  double t3264;
  double t3238;
  double t3424;
  double t3750;
  double t3786;
  double t3792;
  double t3816;
  double t3534;
  double t3539;
  double t3580;
  double t3830;
  double t4127;
  double t4131;
  double t4160;
  double t1366;
  double t1386;
  double t4256;
  double t4322;
  double t2013;
  double t2091;
  double t4334;
  double t4350;
  double t4356;
  double t4397;
  double t4623;
  double t4667;
  double t4727;
  double t4517;
  double t4791;
  double t3444;
  double t3490;
  double t3503;
  double t3523;
  double t4783;
  double t4971;
  double t1731;
  double t2105;
  double t2151;
  double t2185;
  double t2581;
  double t2681;
  double t2784;
  double t5632;
  double t5746;
  double t5318;
  double t5321;
  double t5353;
  double t5354;
  double t5850;
  double t5852;
  double t5854;
  double t5864;
  double t5412;
  double t5417;
  double t5442;
  double t5499;
  double t5824;
  double t5826;
  double t5557;
  double t5597;
  double t5623;
  double t5804;
  double t5814;
  double t5882;
  double t6077;
  double t6097;
  double t5929;
  double t6123;
  double t6158;
  double t6242;
  double t6248;
  double t5978;
  double t6010;
  double t6017;
  double t6024;
  double t6027;
  double t6047;
  double t6048;
  double t6114;
  double t6171;
  double t6183;
  double t6276;
  double t6298;
  double t6346;
  double t6370;
  double t6380;
  double t6389;
  double t6422;
  double t6432;
  double t6442;
  double t6450;
  double t6472;
  double t6485;
  double t6495;
  double t6497;
  double t6507;
  double t6539;
  double t6542;
  double t6547;
  double t6941;
  double t6956;
  double t6987;
  double t6723;
  double t6728;
  double t6734;
  double t6758;
  double t6763;
  double t6787;
  double t6803;
  double t6806;
  double t6844;
  double t7164;
  double t7210;
  double t7221;
  double t7245;
  double t7249;
  double t7381;
  double t7383;
  double t7401;
  t43 = Cos(var1[6]);
  t618 = Sin(var1[6]);
  t944 = Cos(var1[5]);
  t900 = Sin(var1[5]);
  t194 = -1.*t43;
  t201 = 1. + t194;
  t318 = -0.9063*t201;
  t438 = -1.078185*t43;
  t557 = t318 + t438;
  t1284 = Cos(var1[2]);
  t800 = Sin(var1[2]);
  t1312 = t944*t43;
  t1317 = -1.*t900*t618;
  t1357 = t1312 + t1317;
  t1812 = 0.4999*t618;
  t1819 = t557*t618;
  t1833 = 0.17188499999999995*t43*t618;
  t1834 = t1812 + t1819 + t1833;
  t930 = -1.*t43*t900;
  t1187 = -1.*t944*t618;
  t1193 = t930 + t1187;
  t2088 = -1.*t800*t1357;
  t148 = 0.4999*t43;
  t589 = t557*t43;
  t705 = Power(t618,2);
  t709 = -0.17188499999999995*t705;
  t765 = t148 + t589 + t709;
  t1278 = -1.*t800*t1193;
  t1860 = t43*t900;
  t1948 = t944*t618;
  t1991 = t1860 + t1948;
  t2210 = t1284*t1193;
  t2212 = t2210 + t2088;
  t2223 = 0.85216*t1834*t2212;
  t2237 = -1.*t944*t43;
  t2256 = t900*t618;
  t2269 = t2237 + t2256;
  t2300 = t1284*t2269;
  t2301 = t1278 + t2300;
  t2305 = 0.85216*t765*t2301;
  t2339 = t2223 + t2305;
  t2379 = Power(t43,2);
  t2387 = 0.17188499999999995*t2379;
  t2389 = t148 + t589 + t2387;
  t2483 = t1284*t1357;
  t2976 = t800*t1991;
  t3027 = t2976 + t2300;
  t3044 = 0.85216*t765*t3027;
  t2634 = -0.4999*t618;
  t2639 = -1.*t557*t618;
  t2647 = -0.17188499999999995*t43*t618;
  t2670 = t2634 + t2639 + t2647;
  t3063 = t800*t2269;
  t3064 = t2210 + t3063;
  t3107 = 0.85216*t1834*t3064;
  t2441 = -1.*t800*t1991;
  t2527 = t2441 + t2483;
  t2675 = 0.85216*t2670*t2212;
  t3321 = 0. + t148 + t589 + t2387;
  t3219 = t800*t1193;
  t3236 = t3219 + t2483;
  t3264 = 0.85216*t2670*t3064;
  t3238 = 0.85216*t2389*t3236;
  t3424 = 0.85216*t3321*t3236;
  t3750 = 0.85216*t1834*t2527;
  t3786 = 0.85216*t765*t2212;
  t3792 = t3750 + t3786;
  t3816 = 0.85216*t1834*t3236;
  t3534 = t1284*t1991;
  t3539 = t800*t1357;
  t3580 = t3534 + t3539;
  t3830 = 0.85216*t765*t3064;
  t4127 = 0.85216*t2670*t3236;
  t4131 = 0.85216*t2389*t3580;
  t4160 = t4127 + t3816 + t4131 + t3830;
  t1366 = -1.*t1284*t1357;
  t1386 = t1278 + t1366;
  t4256 = -1.*t1284*t1193;
  t4322 = 0.85216*t1834*t1386;
  t2013 = -1.*t1284*t1991;
  t2091 = t2013 + t2088;
  t4334 = -1.*t800*t2269;
  t4350 = t4256 + t4334;
  t4356 = 0.85216*t765*t4350;
  t4397 = t4322 + t4356;
  t4623 = 0.85216*t1834*t2301;
  t4667 = t3534 + t4334;
  t4727 = 0.85216*t765*t4667;
  t4517 = 0.85216*t2670*t1386;
  t4791 = 0.85216*t2670*t2301;
  t3444 = -0.4999*t43;
  t3490 = -1.*t557*t43;
  t3503 = -0.17188499999999995*t2379;
  t3523 = 0. + t3444 + t3490 + t3503;
  t4783 = 0.85216*t2389*t2212;
  t4971 = 0.85216*t3321*t2212;
  t1731 = 0.85216*t765*t1386;
  t2105 = 0.85216*t1834*t2091;
  t2151 = t1731 + t2105;
  t2185 = -0.5*var2[2]*t2151;
  t2581 = 0.85216*t2389*t2527;
  t2681 = t2581 + t2675 + t2223 + t2305;
  t2784 = -0.5*var2[6]*t2681;
  t5632 = t944*t557;
  t5746 = 0.17188499999999995*t900*t618;
  t5318 = -0.4999*t900;
  t5321 = -1.*t557*t900;
  t5353 = 0.17188499999999995*t944*t618;
  t5354 = t5318 + t5321 + t5353;
  t5850 = 0.4999*t900;
  t5852 = t557*t900;
  t5854 = -0.17188499999999995*t944*t618;
  t5864 = t5850 + t5852 + t5854;
  t5412 = -0.4999*t944;
  t5417 = -1.*t944*t557;
  t5442 = -0.17188499999999995*t900*t618;
  t5499 = t5412 + t5417 + t5442;
  t5824 = 0.4999*t944;
  t5826 = t5824 + t5632 + t5746;
  t5557 = -1.*t944;
  t5597 = 1. + t5557;
  t5623 = -0.4999*t5597;
  t5804 = t5623 + t5632 + t5746;
  t5814 = -1.*t1991*t5804;
  t5882 = -1.*t5864*t2269;
  t6077 = 0.17188499999999995*t43*t900;
  t6097 = t6077 + t5353;
  t5929 = t1193*t5864;
  t6123 = 0.17188499999999995*t944*t43;
  t6158 = t6123 + t5442;
  t6242 = -0.17188499999999995*t944*t43;
  t6248 = t6242 + t5746;
  t5978 = t5804*t2269;
  t6010 = t5864*t1357;
  t6017 = t5354*t1357;
  t6024 = t1193*t5804;
  t6027 = t1991*t5826;
  t6047 = t6010 + t6017 + t6024 + t6027;
  t6048 = 0.85216*t2670*t6047;
  t6114 = -1.*t6097*t1357;
  t6171 = -1.*t1193*t6158;
  t6183 = -1.*t1193*t5826;
  t6276 = -1.*t1193*t6248;
  t6298 = -1.*t5354*t2269;
  t6346 = -1.*t6097*t2269;
  t6370 = t6114 + t6171 + t5814 + t6183 + t6276 + t5882 + t6298 + t6346;
  t6380 = 0.85216*t1834*t6370;
  t6389 = -1.*t1193*t5864;
  t6422 = -1.*t1193*t5354;
  t6432 = -1.*t1357*t5826;
  t6442 = -1.*t5804*t2269;
  t6450 = t6389 + t6422 + t6432 + t6442;
  t6472 = t1193*t5354;
  t6485 = t1193*t6097;
  t6495 = t6097*t1991;
  t6497 = t1357*t6158;
  t6507 = t1357*t5826;
  t6539 = t1357*t6248;
  t6542 = t5929 + t6472 + t6485 + t6495 + t6497 + t6507 + t6539 + t5978;
  t6547 = 0.85216*t765*t6542;
  t6941 = -1.*t1193*t6097;
  t6956 = -1.*t1357*t6248;
  t6987 = t6389 + t6941 + t6956 + t6442;
  t6723 = -1.*t5864*t1357;
  t6728 = -1.*t1193*t5804;
  t6734 = t6723 + t6728;
  t6758 = t5864*t1991;
  t6763 = t1357*t5804;
  t6787 = t6758 + t6763;
  t6803 = t6097*t1357;
  t6806 = t1991*t6248;
  t6844 = t6010 + t6803 + t6024 + t6806;
  t7164 = 0.85216*t2389*t6734;
  t7210 = 0.85216*t2670*t6787;
  t7221 = 0.85216*t765*t6844;
  t7245 = 0.85216*t1834*t6987;
  t7249 = t7164 + t7210 + t7221 + t7245;
  t7381 = 1.70432*t2389*t1834;
  t7383 = 1.70432*t2670*t765;
  t7401 = t7381 + t7383;
  p_output1[0]=var2[5]*(t2185 + t2784 - 0.5*t2339*var2[5]);
  p_output1[1]=var2[5]*(-0.5*t2339*var2[2] - 0.5*(t3044 + t3107)*var2[5] - 0.5*(t3044 + t3107 + t3238 + t3264)*var2[6]);
  p_output1[2]=var2[5]*(-0.5*(t2223 + t2305 + t2675 + 0.85216*t2527*t3321)*var2[2] - 0.5*(t3044 + t3107 + t3264 + t3424)*var2[5] - 0.5*(t3044 + 1.70432*t2670*t3064 + t3107 + t3238 + t3424 + 0.85216*t3236*t3523 + 0.85216*t2670*t3580)*var2[6]);
  p_output1[3]=-0.5*t3792*var2[5];
  p_output1[4]=-0.5*t3792*var2[2] - 1.*(t3816 + t3830)*var2[5] - 0.5*t4160*var2[6];
  p_output1[5]=-0.5*t4160*var2[5];
  p_output1[6]=var2[5]*(-0.5*(0.85216*t1834*(t1366 + t2976) + 0.85216*(t3539 + t4256)*t765)*var2[2] - 0.5*t4397*var2[5] - 0.5*(0.85216*t2091*t2389 + t4322 + t4356 + t4517)*var2[6]);
  p_output1[7]=var2[5]*(-0.5*t4397*var2[2] - 0.5*(t4623 + t4727)*var2[5] - 0.5*(t4623 + t4727 + t4783 + t4791)*var2[6]);
  p_output1[8]=var2[5]*(-0.5*(0.85216*t2091*t3321 + t4322 + t4356 + t4517)*var2[2] - 0.5*(t4623 + t4727 + t4791 + t4971)*var2[5] - 0.5*(1.70432*t2301*t2670 + 0.85216*t2527*t2670 + 0.85216*t2212*t3523 + t4623 + t4727 + t4783 + t4971)*var2[6]);
  p_output1[9]=-0.5*t2151*var2[5];
  p_output1[10]=t2185 + t2784 - 1.*t2339*var2[5];
  p_output1[11]=-0.5*t2681*var2[5];
  p_output1[12]=var2[5]*(-0.5*(0.85216*t1834*(-1.*t1357*t5354 - 2.*t2269*t5354 - 1.*t1193*t5499 + t5814 - 2.*t1193*t5826 + t5882) + 0.85216*(2.*t1193*t5354 + t1991*t5354 + t1357*t5499 + 2.*t1357*t5826 + t5929 + t5978)*t765)*var2[5] - 0.5*(t6048 + t6380 + 0.85216*t2389*t6450 + t6547)*var2[6]);
  p_output1[13]=var2[5]*(-0.5*(t6048 + t6380 + 0.85216*t3321*t6450 + t6547)*var2[5] - 0.5*(0.85216*t1834*(t5814 + t5882 - 2.*t2269*t6097 + t6114 + t6171 - 2.*t1193*t6248) + 0.85216*t2670*t6734 + 0.85216*t3523*t6787 + 1.70432*t2670*t6844 + 0.85216*t2389*t6987 + 0.85216*t3321*t6987 + 0.85216*(t5929 + t5978 + 2.*t1193*t6097 + 2.*t1357*t6248 + t6495 + t6497)*t765)*var2[6]);
  p_output1[14]=-1.*(0.85216*t1834*t6450 + 0.85216*t6047*t765)*var2[5] - 0.5*t7249*var2[6];
  p_output1[15]=-0.5*t7249*var2[5];
  p_output1[16]=-0.5*(1.70432*t1834*t2670 + 1.70432*Power(t2670,2) + 1.70432*t2389*t3321 + 1.70432*t3523*t765)*var2[5]*var2[6];
  p_output1[17]=-0.5*t7401*var2[6];
  p_output1[18]=-0.5*t7401*var2[5];
  p_output1[19]=0.07323676079999998*t3523*var2[5]*var2[6];
  p_output1[20]=0.07323676079999998*t2670*var2[6];
  p_output1[21]=0.07323676079999998*t2670*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L5_J6_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L5_J6_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
