/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:24:37 GMT-08:00
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
  double t13;
  double t396;
  double t701;
  double t667;
  double t66;
  double t77;
  double t110;
  double t155;
  double t185;
  double t1081;
  double t629;
  double t1106;
  double t1159;
  double t1319;
  double t1357;
  double t1397;
  double t1410;
  double t1444;
  double t690;
  double t716;
  double t746;
  double t1497;
  double t25;
  double t356;
  double t490;
  double t503;
  double t607;
  double t1066;
  double t1474;
  double t1476;
  double t1477;
  double t1712;
  double t1714;
  double t1718;
  double t1790;
  double t1791;
  double t1806;
  double t1865;
  double t1911;
  double t1921;
  double t1935;
  double t2017;
  double t2097;
  double t2123;
  double t2214;
  double t2530;
  double t2564;
  double t2585;
  double t2288;
  double t2383;
  double t2384;
  double t2441;
  double t2677;
  double t2685;
  double t2690;
  double t2182;
  double t2271;
  double t2448;
  double t2895;
  double t2745;
  double t2746;
  double t2798;
  double t2774;
  double t2975;
  double t3438;
  double t3440;
  double t3447;
  double t3481;
  double t3180;
  double t3277;
  double t3295;
  double t3483;
  double t3538;
  double t3675;
  double t3679;
  double t1333;
  double t1340;
  double t3703;
  double t3791;
  double t1495;
  double t1558;
  double t3826;
  double t3830;
  double t3882;
  double t3884;
  double t4059;
  double t4068;
  double t4073;
  double t4007;
  double t4103;
  double t3018;
  double t3033;
  double t3048;
  double t3079;
  double t4088;
  double t4406;
  double t1353;
  double t1623;
  double t1631;
  double t1705;
  double t2275;
  double t2462;
  double t2472;
  double t5239;
  double t5264;
  double t4728;
  double t4772;
  double t4830;
  double t4835;
  double t5380;
  double t5402;
  double t5410;
  double t5438;
  double t4951;
  double t4966;
  double t5002;
  double t5047;
  double t5332;
  double t5362;
  double t5171;
  double t5196;
  double t5212;
  double t5293;
  double t5312;
  double t5492;
  double t5867;
  double t5884;
  double t5524;
  double t5893;
  double t5895;
  double t5935;
  double t5941;
  double t5611;
  double t5662;
  double t5781;
  double t5797;
  double t5812;
  double t5852;
  double t5862;
  double t5888;
  double t5903;
  double t5911;
  double t5947;
  double t5958;
  double t5959;
  double t6016;
  double t6042;
  double t6056;
  double t6070;
  double t6072;
  double t6080;
  double t6086;
  double t6099;
  double t6103;
  double t6108;
  double t6109;
  double t6117;
  double t6119;
  double t6123;
  double t6127;
  double t6289;
  double t6290;
  double t6299;
  double t6179;
  double t6189;
  double t6197;
  double t6208;
  double t6210;
  double t6229;
  double t6246;
  double t6254;
  double t6258;
  double t6495;
  double t6572;
  double t6608;
  double t6613;
  double t6620;
  double t6790;
  double t6791;
  double t6830;
  t13 = Cos(var1[4]);
  t396 = Sin(var1[4]);
  t701 = Cos(var1[3]);
  t667 = Sin(var1[3]);
  t66 = -1.*t13;
  t77 = 1. + t66;
  t110 = -0.9063*t77;
  t155 = -1.0567*t13;
  t185 = t110 + t155;
  t1081 = Cos(var1[2]);
  t629 = Sin(var1[2]);
  t1106 = t701*t13;
  t1159 = -1.*t667*t396;
  t1319 = t1106 + t1159;
  t1357 = 0.4999*t396;
  t1397 = t185*t396;
  t1410 = 0.15039999999999998*t13*t396;
  t1444 = t1357 + t1397 + t1410;
  t690 = -1.*t13*t667;
  t716 = -1.*t701*t396;
  t746 = t690 + t716;
  t1497 = -1.*t629*t1319;
  t25 = 0.4999*t13;
  t356 = t185*t13;
  t490 = Power(t396,2);
  t503 = -0.15039999999999998*t490;
  t607 = t25 + t356 + t503;
  t1066 = -1.*t629*t746;
  t1474 = t13*t667;
  t1476 = t701*t396;
  t1477 = t1474 + t1476;
  t1712 = t1081*t746;
  t1714 = t1712 + t1497;
  t1718 = 3.5899*t1444*t1714;
  t1790 = -1.*t701*t13;
  t1791 = t667*t396;
  t1806 = t1790 + t1791;
  t1865 = t1081*t1806;
  t1911 = t1066 + t1865;
  t1921 = 3.5899*t607*t1911;
  t1935 = t1718 + t1921;
  t2017 = Power(t13,2);
  t2097 = 0.15039999999999998*t2017;
  t2123 = t25 + t356 + t2097;
  t2214 = t1081*t1319;
  t2530 = t629*t1477;
  t2564 = t2530 + t1865;
  t2585 = 3.5899*t607*t2564;
  t2288 = -0.4999*t396;
  t2383 = -1.*t185*t396;
  t2384 = -0.15039999999999998*t13*t396;
  t2441 = t2288 + t2383 + t2384;
  t2677 = t629*t1806;
  t2685 = t1712 + t2677;
  t2690 = 3.5899*t1444*t2685;
  t2182 = -1.*t629*t1477;
  t2271 = t2182 + t2214;
  t2448 = 3.5899*t2441*t1714;
  t2895 = 0. + t25 + t356 + t2097;
  t2745 = t629*t746;
  t2746 = t2745 + t2214;
  t2798 = 3.5899*t2441*t2685;
  t2774 = 3.5899*t2123*t2746;
  t2975 = 3.5899*t2895*t2746;
  t3438 = 3.5899*t1444*t2271;
  t3440 = 3.5899*t607*t1714;
  t3447 = t3438 + t3440;
  t3481 = 3.5899*t1444*t2746;
  t3180 = t1081*t1477;
  t3277 = t629*t1319;
  t3295 = t3180 + t3277;
  t3483 = 3.5899*t607*t2685;
  t3538 = 3.5899*t2441*t2746;
  t3675 = 3.5899*t2123*t3295;
  t3679 = t3538 + t3481 + t3675 + t3483;
  t1333 = -1.*t1081*t1319;
  t1340 = t1066 + t1333;
  t3703 = -1.*t1081*t746;
  t3791 = 3.5899*t1444*t1340;
  t1495 = -1.*t1081*t1477;
  t1558 = t1495 + t1497;
  t3826 = -1.*t629*t1806;
  t3830 = t3703 + t3826;
  t3882 = 3.5899*t607*t3830;
  t3884 = t3791 + t3882;
  t4059 = 3.5899*t1444*t1911;
  t4068 = t3180 + t3826;
  t4073 = 3.5899*t607*t4068;
  t4007 = 3.5899*t2441*t1340;
  t4103 = 3.5899*t2441*t1911;
  t3018 = -0.4999*t13;
  t3033 = -1.*t185*t13;
  t3048 = -0.15039999999999998*t2017;
  t3079 = 0. + t3018 + t3033 + t3048;
  t4088 = 3.5899*t2123*t1714;
  t4406 = 3.5899*t2895*t1714;
  t1353 = 3.5899*t607*t1340;
  t1623 = 3.5899*t1444*t1558;
  t1631 = t1353 + t1623;
  t1705 = -0.5*var2[2]*t1631;
  t2275 = 3.5899*t2123*t2271;
  t2462 = t2275 + t2448 + t1718 + t1921;
  t2472 = -0.5*var2[4]*t2462;
  t5239 = t701*t185;
  t5264 = 0.15039999999999998*t667*t396;
  t4728 = -0.4999*t667;
  t4772 = -1.*t185*t667;
  t4830 = 0.15039999999999998*t701*t396;
  t4835 = t4728 + t4772 + t4830;
  t5380 = 0.4999*t667;
  t5402 = t185*t667;
  t5410 = -0.15039999999999998*t701*t396;
  t5438 = t5380 + t5402 + t5410;
  t4951 = -0.4999*t701;
  t4966 = -1.*t701*t185;
  t5002 = -0.15039999999999998*t667*t396;
  t5047 = t4951 + t4966 + t5002;
  t5332 = 0.4999*t701;
  t5362 = t5332 + t5239 + t5264;
  t5171 = -1.*t701;
  t5196 = 1. + t5171;
  t5212 = -0.4999*t5196;
  t5293 = t5212 + t5239 + t5264;
  t5312 = -1.*t1477*t5293;
  t5492 = -1.*t5438*t1806;
  t5867 = 0.15039999999999998*t13*t667;
  t5884 = t5867 + t4830;
  t5524 = t746*t5438;
  t5893 = 0.15039999999999998*t701*t13;
  t5895 = t5893 + t5002;
  t5935 = -0.15039999999999998*t701*t13;
  t5941 = t5935 + t5264;
  t5611 = t5293*t1806;
  t5662 = t5438*t1319;
  t5781 = t4835*t1319;
  t5797 = t746*t5293;
  t5812 = t1477*t5362;
  t5852 = t5662 + t5781 + t5797 + t5812;
  t5862 = 3.5899*t2441*t5852;
  t5888 = -1.*t5884*t1319;
  t5903 = -1.*t746*t5895;
  t5911 = -1.*t746*t5362;
  t5947 = -1.*t746*t5941;
  t5958 = -1.*t4835*t1806;
  t5959 = -1.*t5884*t1806;
  t6016 = t5888 + t5903 + t5312 + t5911 + t5947 + t5492 + t5958 + t5959;
  t6042 = 3.5899*t1444*t6016;
  t6056 = -1.*t746*t5438;
  t6070 = -1.*t746*t4835;
  t6072 = -1.*t1319*t5362;
  t6080 = -1.*t5293*t1806;
  t6086 = t6056 + t6070 + t6072 + t6080;
  t6099 = t746*t4835;
  t6103 = t746*t5884;
  t6108 = t5884*t1477;
  t6109 = t1319*t5895;
  t6117 = t1319*t5362;
  t6119 = t1319*t5941;
  t6123 = t5524 + t6099 + t6103 + t6108 + t6109 + t6117 + t6119 + t5611;
  t6127 = 3.5899*t607*t6123;
  t6289 = -1.*t746*t5884;
  t6290 = -1.*t1319*t5941;
  t6299 = t6056 + t6289 + t6290 + t6080;
  t6179 = -1.*t5438*t1319;
  t6189 = -1.*t746*t5293;
  t6197 = t6179 + t6189;
  t6208 = t5438*t1477;
  t6210 = t1319*t5293;
  t6229 = t6208 + t6210;
  t6246 = t5884*t1319;
  t6254 = t1477*t5941;
  t6258 = t5662 + t6246 + t5797 + t6254;
  t6495 = 3.5899*t2123*t6197;
  t6572 = 3.5899*t2441*t6229;
  t6608 = 3.5899*t607*t6258;
  t6613 = 3.5899*t1444*t6299;
  t6620 = t6495 + t6572 + t6608 + t6613;
  t6790 = 7.1798*t2123*t1444;
  t6791 = 7.1798*t2441*t607;
  t6830 = t6790 + t6791;
  p_output1[0]=var2[3]*(t1705 + t2472 - 0.5*t1935*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t1935*var2[2] - 0.5*(t2585 + t2690)*var2[3] - 0.5*(t2585 + t2690 + t2774 + t2798)*var2[4]);
  p_output1[2]=var2[3]*(-0.5*(t1718 + t1921 + t2448 + 3.5899*t2271*t2895)*var2[2] - 0.5*(t2585 + t2690 + t2798 + t2975)*var2[3] - 0.5*(t2585 + 7.1798*t2441*t2685 + t2690 + t2774 + t2975 + 3.5899*t2746*t3079 + 3.5899*t2441*t3295)*var2[4]);
  p_output1[3]=-0.5*t3447*var2[3];
  p_output1[4]=-0.5*t3447*var2[2] - 1.*(t3481 + t3483)*var2[3] - 0.5*t3679*var2[4];
  p_output1[5]=-0.5*t3679*var2[3];
  p_output1[6]=var2[3]*(-0.5*(3.5899*t1444*(t1333 + t2530) + 3.5899*(t3277 + t3703)*t607)*var2[2] - 0.5*t3884*var2[3] - 0.5*(3.5899*t1558*t2123 + t3791 + t3882 + t4007)*var2[4]);
  p_output1[7]=var2[3]*(-0.5*t3884*var2[2] - 0.5*(t4059 + t4073)*var2[3] - 0.5*(t4059 + t4073 + t4088 + t4103)*var2[4]);
  p_output1[8]=var2[3]*(-0.5*(3.5899*t1558*t2895 + t3791 + t3882 + t4007)*var2[2] - 0.5*(t4059 + t4073 + t4103 + t4406)*var2[3] - 0.5*(7.1798*t1911*t2441 + 3.5899*t2271*t2441 + 3.5899*t1714*t3079 + t4059 + t4073 + t4088 + t4406)*var2[4]);
  p_output1[9]=-0.5*t1631*var2[3];
  p_output1[10]=t1705 + t2472 - 1.*t1935*var2[3];
  p_output1[11]=-0.5*t2462*var2[3];
  p_output1[12]=var2[3]*(-0.5*(3.5899*t607*(t1477*t4835 + t1319*t5047 + 2.*t1319*t5362 + t5524 + t5611 + 2.*t4835*t746) + 3.5899*t1444*(-1.*t1319*t4835 - 2.*t1806*t4835 + t5312 + t5492 - 1.*t5047*t746 - 2.*t5362*t746))*var2[3] - 0.5*(t5862 + t6042 + 3.5899*t2123*t6086 + t6127)*var2[4]);
  p_output1[13]=var2[3]*(-0.5*(t5862 + t6042 + 3.5899*t2895*t6086 + t6127)*var2[3] - 0.5*(3.5899*t2441*t6197 + 3.5899*t3079*t6229 + 7.1798*t2441*t6258 + 3.5899*t2123*t6299 + 3.5899*t2895*t6299 + 3.5899*t607*(t5524 + t5611 + 2.*t1319*t5941 + t6108 + t6109 + 2.*t5884*t746) + 3.5899*t1444*(t5312 + t5492 - 2.*t1806*t5884 + t5888 + t5903 - 2.*t5941*t746))*var2[4]);
  p_output1[14]=-1.*(3.5899*t5852*t607 + 3.5899*t1444*t6086)*var2[3] - 0.5*t6620*var2[4];
  p_output1[15]=-0.5*t6620*var2[3];
  p_output1[16]=-0.5*(7.1798*t1444*t2441 + 7.1798*Power(t2441,2) + 7.1798*t2123*t2895 + 7.1798*t3079*t607)*var2[3]*var2[4];
  p_output1[17]=-0.5*t6830*var2[4];
  p_output1[18]=-0.5*t6830*var2[3];
  p_output1[19]=0.26996047999999995*t3079*var2[3]*var2[4];
  p_output1[20]=0.26996047999999995*t2441*var2[4];
  p_output1[21]=0.26996047999999995*t2441*var2[3];
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
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

#include "J_Ce1_vec_L3_J4_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L3_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
