/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:29:16 GMT-08:00
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
  double t49;
  double t1030;
  double t1464;
  double t1409;
  double t209;
  double t283;
  double t361;
  double t380;
  double t516;
  double t1544;
  double t1400;
  double t1549;
  double t1550;
  double t1560;
  double t1759;
  double t1784;
  double t1808;
  double t1811;
  double t1836;
  double t1855;
  double t1925;
  double t1561;
  double t85;
  double t660;
  double t1126;
  double t1205;
  double t1291;
  double t1429;
  double t1481;
  double t1523;
  double t1936;
  double t1543;
  double t1631;
  double t2147;
  double t2236;
  double t2242;
  double t2249;
  double t2195;
  double t2201;
  double t2217;
  double t2254;
  double t2266;
  double t2323;
  double t2831;
  double t2838;
  double t2870;
  double t2872;
  double t2412;
  double t2640;
  double t2684;
  double t2701;
  double t1932;
  double t1950;
  double t2468;
  double t2477;
  double t2486;
  double t2704;
  double t2746;
  double t2782;
  double t1708;
  double t1959;
  double t1961;
  double t3074;
  double t3095;
  double t3097;
  double t2360;
  double t2362;
  double t2557;
  double t2593;
  double t2595;
  double t2598;
  double t2087;
  double t3661;
  double t3691;
  double t3388;
  double t3405;
  double t3408;
  double t3421;
  double t3904;
  double t3906;
  double t3910;
  double t3954;
  double t3465;
  double t3466;
  double t3496;
  double t3566;
  double t3757;
  double t3764;
  double t3610;
  double t3617;
  double t3628;
  double t3716;
  double t3188;
  double t3235;
  double t3236;
  double t3239;
  double t3270;
  double t3284;
  double t3285;
  double t3306;
  double t3341;
  double t3734;
  double t3967;
  double t4340;
  double t4347;
  double t4035;
  double t4391;
  double t4395;
  double t4468;
  double t4475;
  double t4057;
  double t4191;
  double t4226;
  double t4246;
  double t4250;
  double t4259;
  double t4296;
  double t4297;
  double t4551;
  double t4571;
  double t4592;
  double t4614;
  double t4631;
  double t4923;
  double t4944;
  double t5037;
  double t5087;
  double t5090;
  double t5095;
  double t2909;
  double t2943;
  double t5237;
  double t4164;
  double t4239;
  double t4300;
  double t4384;
  double t4425;
  double t4443;
  double t4477;
  double t4488;
  double t4496;
  double t4512;
  double t4538;
  double t4699;
  double t4714;
  double t4725;
  double t4744;
  double t4759;
  double t4813;
  double t4834;
  double t4864;
  double t5444;
  double t5446;
  double t5465;
  double t5468;
  double t5389;
  double t4153;
  double t5400;
  double t4237;
  double t2150;
  double t5805;
  double t5809;
  double t5810;
  double t5592;
  double t5240;
  double t5244;
  double t5628;
  double t5635;
  double t5649;
  double t5653;
  double t5675;
  double t5677;
  double t5696;
  double t5700;
  double t5704;
  double t5888;
  double t5891;
  double t5892;
  double t5903;
  double t5904;
  double t5905;
  double t5907;
  double t5908;
  t49 = Cos(var1[7]);
  t1030 = Sin(var1[7]);
  t1464 = Cos(var1[6]);
  t1409 = Sin(var1[6]);
  t209 = -1.*t49;
  t283 = 1. + t209;
  t361 = -0.9063*t283;
  t380 = -1.0567*t49;
  t516 = t361 + t380;
  t1544 = Cos(var1[2]);
  t1400 = Sin(var1[2]);
  t1549 = t1464*t49;
  t1550 = -1.*t1409*t1030;
  t1560 = t1549 + t1550;
  t1759 = 0.4999*t1030;
  t1784 = t516*t1030;
  t1808 = 0.15039999999999998*t49*t1030;
  t1811 = t1759 + t1784 + t1808;
  t1836 = t49*t1409;
  t1855 = t1464*t1030;
  t1925 = t1836 + t1855;
  t1561 = -1.*t1544*t1560;
  t85 = 0.4999*t49;
  t660 = t516*t49;
  t1126 = Power(t1030,2);
  t1205 = -0.15039999999999998*t1126;
  t1291 = t85 + t660 + t1205;
  t1429 = -1.*t49*t1409;
  t1481 = -1.*t1464*t1030;
  t1523 = t1429 + t1481;
  t1936 = -1.*t1400*t1560;
  t1543 = -1.*t1400*t1523;
  t1631 = t1543 + t1561;
  t2147 = -1.*t1544*t1523;
  t2236 = -1.*t1464*t49;
  t2242 = t1409*t1030;
  t2249 = t2236 + t2242;
  t2195 = t1544*t1523;
  t2201 = t2195 + t1936;
  t2217 = 3.5899*t1811*t2201;
  t2254 = t1544*t2249;
  t2266 = t1543 + t2254;
  t2323 = 3.5899*t1291*t2266;
  t2831 = -0.4999*t1030;
  t2838 = -1.*t516*t1030;
  t2870 = -0.15039999999999998*t49*t1030;
  t2872 = t2831 + t2838 + t2870;
  t2412 = 3.5899*t1811*t1631;
  t2640 = Power(t49,2);
  t2684 = 0.15039999999999998*t2640;
  t2701 = 0. + t85 + t660 + t2684;
  t1932 = -1.*t1544*t1925;
  t1950 = t1932 + t1936;
  t2468 = -1.*t1400*t2249;
  t2477 = t2147 + t2468;
  t2486 = 3.5899*t1291*t2477;
  t2704 = -1.*t1400*t1925;
  t2746 = t1544*t1560;
  t2782 = t2704 + t2746;
  t1708 = 3.5899*t1291*t1631;
  t1959 = 3.5899*t1811*t1950;
  t1961 = t1708 + t1959;
  t3074 = 3.5899*t1811*t2782;
  t3095 = 3.5899*t1291*t2201;
  t3097 = t3074 + t3095;
  t2360 = t2217 + t2323;
  t2362 = 0.5*var2[0]*t2360;
  t2557 = t2412 + t2486;
  t2593 = 0.5*var2[1]*t2557;
  t2595 = t2362 + t2593;
  t2598 = var2[6]*t2595;
  t2087 = t1400*t1925;
  t3661 = t1464*t516;
  t3691 = 0.15039999999999998*t1409*t1030;
  t3388 = -0.4999*t1409;
  t3405 = -1.*t516*t1409;
  t3408 = 0.15039999999999998*t1464*t1030;
  t3421 = t3388 + t3405 + t3408;
  t3904 = 0.4999*t1409;
  t3906 = t516*t1409;
  t3910 = -0.15039999999999998*t1464*t1030;
  t3954 = t3904 + t3906 + t3910;
  t3465 = -0.4999*t1464;
  t3466 = -1.*t1464*t516;
  t3496 = -0.15039999999999998*t1409*t1030;
  t3566 = t3465 + t3466 + t3496;
  t3757 = 0.4999*t1464;
  t3764 = t3757 + t3661 + t3691;
  t3610 = -1.*t1464;
  t3617 = 1. + t3610;
  t3628 = -0.4999*t3617;
  t3716 = t3628 + t3661 + t3691;
  t3188 = 3.5899*t1811*t2266;
  t3235 = t1544*t1925;
  t3236 = t3235 + t2468;
  t3239 = 3.5899*t1291*t3236;
  t3270 = t2087 + t2254;
  t3284 = 3.5899*t1291*t3270;
  t3285 = t1400*t2249;
  t3306 = t2195 + t3285;
  t3341 = 3.5899*t1811*t3306;
  t3734 = -1.*t1925*t3716;
  t3967 = -1.*t3954*t2249;
  t4340 = 0.15039999999999998*t49*t1409;
  t4347 = t4340 + t3408;
  t4035 = t1523*t3954;
  t4391 = 0.15039999999999998*t1464*t49;
  t4395 = t4391 + t3496;
  t4468 = -0.15039999999999998*t1464*t49;
  t4475 = t4468 + t3691;
  t4057 = t3716*t2249;
  t4191 = t1400*t1523;
  t4226 = t4191 + t2746;
  t4246 = t3954*t1560;
  t4250 = t3421*t1560;
  t4259 = t1523*t3716;
  t4296 = t1925*t3764;
  t4297 = t4246 + t4250 + t4259 + t4296;
  t4551 = -1.*t1523*t3954;
  t4571 = -1.*t1523*t3421;
  t4592 = -1.*t1560*t3764;
  t4614 = -1.*t3716*t2249;
  t4631 = t4551 + t4571 + t4592 + t4614;
  t4923 = 3.5899*t1811*t4226;
  t4944 = 3.5899*t1291*t3306;
  t5037 = t4923 + t4944;
  t5087 = 3.5899*t1291*t4297;
  t5090 = 3.5899*t1811*t4631;
  t5095 = t5087 + t5090;
  t2909 = 3.5899*t2872*t2201;
  t2943 = 3.5899*t2872*t1631;
  t5237 = t85 + t660 + t2684;
  t4164 = 3.5899*t2872*t2266;
  t4239 = 3.5899*t2872*t3306;
  t4300 = 3.5899*t2872*t4297;
  t4384 = -1.*t4347*t1560;
  t4425 = -1.*t1523*t4395;
  t4443 = -1.*t1523*t3764;
  t4477 = -1.*t1523*t4475;
  t4488 = -1.*t3421*t2249;
  t4496 = -1.*t4347*t2249;
  t4512 = t4384 + t4425 + t3734 + t4443 + t4477 + t3967 + t4488 + t4496;
  t4538 = 3.5899*t1811*t4512;
  t4699 = t1523*t3421;
  t4714 = t1523*t4347;
  t4725 = t4347*t1925;
  t4744 = t1560*t4395;
  t4759 = t1560*t3764;
  t4813 = t1560*t4475;
  t4834 = t4035 + t4699 + t4714 + t4725 + t4744 + t4759 + t4813 + t4057;
  t4864 = 3.5899*t1291*t4834;
  t5444 = -0.4999*t49;
  t5446 = -1.*t516*t49;
  t5465 = -0.15039999999999998*t2640;
  t5468 = 0. + t5444 + t5446 + t5465;
  t5389 = 3.5899*t5237*t2201;
  t4153 = 3.5899*t2701*t2201;
  t5400 = 3.5899*t5237*t4226;
  t4237 = 3.5899*t2701*t4226;
  t2150 = t1400*t1560;
  t5805 = -1.*t1523*t4347;
  t5809 = -1.*t1560*t4475;
  t5810 = t4551 + t5805 + t5809 + t4614;
  t5592 = t3235 + t2150;
  t5240 = 3.5899*t5237*t2782;
  t5244 = t5240 + t2909 + t2217 + t2323;
  t5628 = -1.*t3954*t1560;
  t5635 = -1.*t1523*t3716;
  t5649 = t5628 + t5635;
  t5653 = t3954*t1925;
  t5675 = t1560*t3716;
  t5677 = t5653 + t5675;
  t5696 = t4347*t1560;
  t5700 = t1925*t4475;
  t5704 = t4246 + t5696 + t4259 + t5700;
  t5888 = 3.5899*t2872*t4226;
  t5891 = 3.5899*t5237*t5592;
  t5892 = t5888 + t4923 + t5891 + t4944;
  t5903 = 3.5899*t5237*t5649;
  t5904 = 3.5899*t2872*t5677;
  t5905 = 3.5899*t1291*t5704;
  t5907 = 3.5899*t1811*t5810;
  t5908 = t5903 + t5904 + t5905 + t5907;
  p_output1[0]=(0.5*t1961*var2[0] + 0.5*(3.5899*t1811*(t1561 + t2087) + 3.5899*t1291*(t2147 + t2150))*var2[1])*var2[6];
  p_output1[1]=t2598;
  p_output1[2]=(0.5*(t2217 + t2323 + 3.5899*t2701*t2782 + t2909)*var2[0] + 0.5*(t2412 + t2486 + 3.5899*t1950*t2701 + t2943)*var2[1])*var2[6];
  p_output1[3]=0.5*t3097*var2[6];
  p_output1[4]=0.5*t1961*var2[6];
  p_output1[5]=0.5*t3097*var2[0] + 0.5*t1961*var2[1];
  p_output1[6]=t2598;
  p_output1[7]=(0.5*(t3284 + t3341)*var2[0] + 0.5*(t3188 + t3239)*var2[1] + 0.5*(3.5899*t1811*(-1.*t1560*t3421 - 2.*t2249*t3421 - 1.*t1523*t3566 + t3734 - 2.*t1523*t3764 + t3967) + 3.5899*t1291*(2.*t1523*t3421 + t1925*t3421 + t1560*t3566 + 2.*t1560*t3764 + t4035 + t4057))*var2[2])*var2[6];
  p_output1[8]=(0.5*(t3284 + t3341 + t4237 + t4239)*var2[0] + 0.5*(t3188 + t3239 + t4153 + t4164)*var2[1] + 0.5*(t4300 + t4538 + 3.5899*t2701*t4631 + t4864)*var2[2])*var2[6];
  p_output1[9]=0.5*t5037*var2[6];
  p_output1[10]=0.5*t2360*var2[6];
  p_output1[11]=0.5*t5095*var2[6];
  p_output1[12]=0.5*t5037*var2[0] + 0.5*t2360*var2[1] + 0.5*t5095*var2[2];
  p_output1[13]=(0.5*t5244*var2[0] + 0.5*(t2412 + t2486 + t2943 + 3.5899*t1950*t5237)*var2[1])*var2[6];
  p_output1[14]=(0.5*(t3284 + t3341 + t4239 + t5400)*var2[0] + 0.5*(t3188 + t3239 + t4164 + t5389)*var2[1] + 0.5*(t4300 + t4538 + t4864 + 3.5899*t4631*t5237)*var2[2])*var2[6];
  p_output1[15]=var2[6]*(0.5*(t3284 + 7.1798*t2872*t3306 + t3341 + t4237 + t5400 + 3.5899*t4226*t5468 + 3.5899*t2872*t5592)*var2[0] + 0.5*(7.1798*t2266*t2872 + 3.5899*t2782*t2872 + t3188 + t3239 + t4153 + t5389 + 3.5899*t2201*t5468)*var2[1] + 0.5*(3.5899*t1811*(t3734 + t3967 - 2.*t2249*t4347 + t4384 + t4425 - 2.*t1523*t4475) + 3.5899*t1291*(t4035 + t4057 + 2.*t1523*t4347 + 2.*t1560*t4475 + t4725 + t4744) + 3.5899*t2872*t5649 + 3.5899*t5468*t5677 + 7.1798*t2872*t5704 + 3.5899*t2701*t5810 + 3.5899*t5237*t5810)*var2[2] + 0.5*(7.1798*t1811*t2872 + 7.1798*Power(t2872,2) + 7.1798*t2701*t5237 + 7.1798*t1291*t5468)*var2[6] - 0.26996047999999995*t5468*var2[7]);
  p_output1[16]=0.5*t5892*var2[6];
  p_output1[17]=0.5*t5244*var2[6];
  p_output1[18]=0.5*t5908*var2[6];
  p_output1[19]=0.5*t5892*var2[0] + 0.5*t5244*var2[1] + 0.5*t5908*var2[2] + (7.1798*t1291*t2872 + 7.1798*t1811*t5237)*var2[6] - 0.26996047999999995*t2872*var2[7];
  p_output1[20]=-0.26996047999999995*t2872*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L6_J7_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L6_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
