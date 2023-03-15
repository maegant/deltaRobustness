/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:29:09 GMT-08:00
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
  double t827;
  double t150;
  double t217;
  double t983;
  double t1291;
  double t1292;
  double t1353;
  double t1426;
  double t1436;
  double t1464;
  double t1481;
  double t1514;
  double t1275;
  double t1605;
  double t1622;
  double t1678;
  double t3;
  double t1409;
  double t1550;
  double t1560;
  double t1575;
  double t380;
  double t1126;
  double t1142;
  double t1698;
  double t1699;
  double t1708;
  double t1759;
  double t1784;
  double t1794;
  double t1826;
  double t1591;
  double t1799;
  double t1808;
  double t1855;
  double t1925;
  double t1932;
  double t1373;
  double t2190;
  double t2191;
  double t1813;
  double t2217;
  double t2227;
  double t2236;
  double t2237;
  double t2266;
  double t2274;
  double t2369;
  double t2412;
  double t2473;
  double t1836;
  double t2201;
  double t2242;
  double t2249;
  double t2323;
  double t2360;
  double t2098;
  double t1227;
  double t1400;
  double t2734;
  double t2755;
  double t2756;
  double t2770;
  double t2782;
  double t2195;
  double t2477;
  double t2595;
  double t2640;
  double t2642;
  double t2684;
  double t2704;
  double t2943;
  double t2949;
  double t2986;
  double t3002;
  double t2831;
  double t2977;
  double t3004;
  double t3007;
  double t2845;
  double t2870;
  double t2872;
  double t3053;
  double t3057;
  double t3074;
  double t1811;
  double t1936;
  double t1951;
  double t3270;
  double t3284;
  double t3303;
  double t2362;
  double t2793;
  double t2803;
  double t2812;
  double t2838;
  double t2909;
  double t2920;
  double t2921;
  double t2931;
  double t2942;
  double t3466;
  double t3495;
  double t3496;
  double t3500;
  double t3445;
  double t3464;
  double t3465;
  double t3566;
  double t3579;
  double t3610;
  double t3617;
  double t1961;
  double t4050;
  double t4055;
  double t2129;
  double t3835;
  double t3844;
  double t3854;
  double t3870;
  double t3885;
  double t3888;
  double t3890;
  double t4143;
  double t4148;
  double t4079;
  double t3661;
  double t3691;
  double t3716;
  double t3757;
  double t4512;
  double t4525;
  double t3906;
  double t3910;
  double t3954;
  double t3967;
  double t3973;
  double t4477;
  double t4488;
  double t4496;
  double t4538;
  double t4551;
  double t4571;
  double t4592;
  double t4042;
  double t4046;
  double t4057;
  double t4099;
  double t4733;
  double t4740;
  double t4747;
  double t4783;
  double t4788;
  double t4789;
  double t4813;
  double t4191;
  double t4237;
  double t4239;
  double t5396;
  double t5400;
  double t5406;
  double t5409;
  double t5410;
  double t5426;
  double t5427;
  double t5434;
  double t3050;
  double t3105;
  double t3116;
  double t3121;
  double t3149;
  double t3171;
  double t3184;
  double t3186;
  double t3239;
  double t3269;
  double t4614;
  double t4631;
  double t4661;
  double t4699;
  double t4714;
  double t4725;
  double t4834;
  double t4864;
  double t4872;
  double t4918;
  double t5037;
  double t5081;
  double t5087;
  double t5090;
  double t5095;
  double t5108;
  double t5143;
  double t5190;
  double t5202;
  double t5214;
  double t5216;
  double t5237;
  double t5240;
  double t5244;
  double t5273;
  double t5276;
  double t5283;
  double t5300;
  double t5314;
  double t5334;
  double t5337;
  double t5385;
  double t5511;
  double t4885;
  double t5564;
  double t5571;
  double t5586;
  double t5663;
  double t5667;
  double t5675;
  double t5909;
  double t5921;
  double t5924;
  double t5959;
  double t5971;
  double t5979;
  double t5990;
  double t5991;
  t827 = Cos(var1[6]);
  t150 = Cos(var1[7]);
  t217 = Sin(var1[6]);
  t983 = Sin(var1[7]);
  t1291 = t827*t150;
  t1292 = -1.*t217*t983;
  t1353 = t1291 + t1292;
  t1426 = -1.*t150;
  t1436 = 1. + t1426;
  t1464 = -0.9063*t1436;
  t1481 = -1.0567*t150;
  t1514 = t1464 + t1481;
  t1275 = Sin(var1[2]);
  t1605 = -1.*t150*t217;
  t1622 = -1.*t827*t983;
  t1678 = t1605 + t1622;
  t3 = Cos(var1[2]);
  t1409 = 0.4999*t217;
  t1550 = t1514*t217;
  t1560 = -0.15039999999999998*t827*t983;
  t1575 = t1409 + t1550 + t1560;
  t380 = t150*t217;
  t1126 = t827*t983;
  t1142 = t380 + t1126;
  t1698 = -1.*t827;
  t1699 = 1. + t1698;
  t1708 = -0.4999*t1699;
  t1759 = t827*t1514;
  t1784 = 0.15039999999999998*t217*t983;
  t1794 = t1708 + t1759 + t1784;
  t1826 = -1.*t3*t1353;
  t1591 = -1.*t1575*t1353;
  t1799 = -1.*t1678*t1794;
  t1808 = t1591 + t1799;
  t1855 = t1575*t1142;
  t1925 = t1353*t1794;
  t1932 = t1855 + t1925;
  t1373 = -1.*t1275*t1353;
  t2190 = t3*t1678;
  t2191 = t2190 + t1373;
  t1813 = -1.*t1275*t1678;
  t2217 = -0.4999*t217;
  t2227 = -1.*t1514*t217;
  t2236 = 0.15039999999999998*t827*t983;
  t2237 = t2217 + t2227 + t2236;
  t2266 = 0.4999*t827;
  t2274 = t2266 + t1759 + t1784;
  t2369 = -1.*t827*t150;
  t2412 = t217*t983;
  t2473 = t2369 + t2412;
  t1836 = t1813 + t1826;
  t2201 = t1575*t1353;
  t2242 = t2237*t1353;
  t2249 = t1678*t1794;
  t2323 = t1142*t2274;
  t2360 = t2201 + t2242 + t2249 + t2323;
  t2098 = -1.*t3*t1678;
  t1227 = -1.*t3*t1142;
  t1400 = t1227 + t1373;
  t2734 = -1.*t1678*t1575;
  t2755 = -1.*t1678*t2237;
  t2756 = -1.*t1353*t2274;
  t2770 = -1.*t1794*t2473;
  t2782 = t2734 + t2755 + t2756 + t2770;
  t2195 = 3.5899*t2191*t1808;
  t2477 = t3*t2473;
  t2595 = t1813 + t2477;
  t2640 = 3.5899*t1932*t2595;
  t2642 = -1.*t1275*t1142;
  t2684 = t3*t1353;
  t2704 = t2642 + t2684;
  t2943 = 0.15039999999999998*t150*t217;
  t2949 = t2943 + t2236;
  t2986 = -0.15039999999999998*t827*t150;
  t3002 = t2986 + t1784;
  t2831 = 3.5899*t1836*t1808;
  t2977 = t2949*t1353;
  t3004 = t1142*t3002;
  t3007 = t2201 + t2977 + t2249 + t3004;
  t2845 = -1.*t1275*t2473;
  t2870 = t2098 + t2845;
  t2872 = 3.5899*t1932*t2870;
  t3053 = -1.*t1678*t2949;
  t3057 = -1.*t1353*t3002;
  t3074 = t2734 + t3053 + t3057 + t2770;
  t1811 = 3.5899*t1400*t1808;
  t1936 = 3.5899*t1836*t1932;
  t1951 = t1811 + t1936;
  t3270 = 3.5899*t2704*t1808;
  t3284 = 3.5899*t2191*t1932;
  t3303 = t3270 + t3284;
  t2362 = 3.5899*t2191*t2360;
  t2793 = 3.5899*t2704*t2782;
  t2803 = t2195 + t2362 + t2640 + t2793;
  t2812 = 0.5*var2[0]*t2803;
  t2838 = 3.5899*t1836*t2360;
  t2909 = 3.5899*t1400*t2782;
  t2920 = t2831 + t2838 + t2872 + t2909;
  t2921 = 0.5*var2[1]*t2920;
  t2931 = t2812 + t2921;
  t2942 = var2[2]*t2931;
  t3466 = -0.4999*t827;
  t3495 = -1.*t827*t1514;
  t3496 = -0.15039999999999998*t217*t983;
  t3500 = t3466 + t3495 + t3496;
  t3445 = t1678*t1575;
  t3464 = 2.*t1678*t2237;
  t3465 = t2237*t1142;
  t3566 = t1353*t3500;
  t3579 = 2.*t1353*t2274;
  t3610 = t1794*t2473;
  t3617 = t3445 + t3464 + t3465 + t3566 + t3579 + t3610;
  t1961 = t1275*t1142;
  t4050 = t1275*t2473;
  t4055 = t2190 + t4050;
  t2129 = t1275*t1353;
  t3835 = -1.*t2237*t1353;
  t3844 = -1.*t1678*t3500;
  t3854 = -1.*t1142*t1794;
  t3870 = -2.*t1678*t2274;
  t3885 = -1.*t1575*t2473;
  t3888 = -2.*t2237*t2473;
  t3890 = t3835 + t3844 + t3854 + t3870 + t3885 + t3888;
  t4143 = t1275*t1678;
  t4148 = t4143 + t2684;
  t4079 = t3*t1142;
  t3661 = 0.4999*t983;
  t3691 = t1514*t983;
  t3716 = 0.15039999999999998*t150*t983;
  t3757 = t3661 + t3691 + t3716;
  t4512 = 0.15039999999999998*t827*t150;
  t4525 = t4512 + t3496;
  t3906 = 0.4999*t150;
  t3910 = t1514*t150;
  t3954 = Power(t983,2);
  t3967 = -0.15039999999999998*t3954;
  t3973 = t3906 + t3910 + t3967;
  t4477 = t1678*t2237;
  t4488 = t1678*t2949;
  t4496 = t2949*t1142;
  t4538 = t1353*t4525;
  t4551 = t1353*t2274;
  t4571 = t1353*t3002;
  t4592 = t3445 + t4477 + t4488 + t4496 + t4538 + t4551 + t4571 + t3610;
  t4042 = t1961 + t2477;
  t4046 = 3.5899*t1932*t4042;
  t4057 = 3.5899*t1808*t4055;
  t4099 = t4079 + t2129;
  t4733 = -1.*t2949*t1353;
  t4740 = -1.*t1678*t4525;
  t4747 = -1.*t1678*t2274;
  t4783 = -1.*t1678*t3002;
  t4788 = -1.*t2237*t2473;
  t4789 = -1.*t2949*t2473;
  t4813 = t4733 + t4740 + t3854 + t4747 + t4783 + t3885 + t4788 + t4789;
  t4191 = 3.5899*t1808*t2595;
  t4237 = t4079 + t2845;
  t4239 = 3.5899*t1932*t4237;
  t5396 = 3.5899*t4148*t1808;
  t5400 = 3.5899*t4148*t2360;
  t5406 = 3.5899*t1932*t4055;
  t5409 = 3.5899*t4099*t2782;
  t5410 = t5396 + t5400 + t5406 + t5409;
  t5426 = 3.5899*t3973*t2360;
  t5427 = 3.5899*t3757*t2782;
  t5434 = t5426 + t5427;
  t3050 = 3.5899*t2191*t3007;
  t3105 = 3.5899*t2704*t3074;
  t3116 = t2195 + t3050 + t2640 + t3105;
  t3121 = 0.5*var2[0]*t3116;
  t3149 = 3.5899*t1836*t3007;
  t3171 = 3.5899*t1400*t3074;
  t3184 = t2831 + t3149 + t2872 + t3171;
  t3186 = 0.5*var2[1]*t3184;
  t3239 = t3121 + t3186;
  t3269 = var2[2]*t3239;
  t4614 = -0.26996047999999995*var2[7]*t4592;
  t4631 = -0.4999*t983;
  t4661 = -1.*t1514*t983;
  t4699 = -0.15039999999999998*t150*t983;
  t4714 = t4631 + t4661 + t4699;
  t4725 = 3.5899*t4714*t2360;
  t4834 = 3.5899*t3757*t4813;
  t4864 = Power(t150,2);
  t4872 = 0.15039999999999998*t4864;
  t4918 = 3.5899*t3973*t4592;
  t5037 = 3.5899*t2360*t4055;
  t5081 = 3.5899*t3007*t4055;
  t5087 = 3.5899*t4099*t4813;
  t5090 = 3.5899*t4148*t2782;
  t5095 = 3.5899*t4148*t3074;
  t5108 = 3.5899*t4148*t4592;
  t5143 = t4046 + t4057 + t5037 + t5081 + t5087 + t5090 + t5095 + t5108;
  t5190 = 0.5*var2[0]*t5143;
  t5202 = 3.5899*t2360*t2595;
  t5214 = 3.5899*t3007*t2595;
  t5216 = 3.5899*t2704*t4813;
  t5237 = 3.5899*t2191*t2782;
  t5240 = 3.5899*t2191*t3074;
  t5244 = 3.5899*t2191*t4592;
  t5273 = t4191 + t5202 + t5214 + t4239 + t5216 + t5237 + t5240 + t5244;
  t5276 = 0.5*var2[1]*t5273;
  t5283 = 7.1798*t2360*t3007;
  t5300 = 7.1798*t1808*t4813;
  t5314 = 7.1798*t2782*t3074;
  t5334 = 7.1798*t1932*t4592;
  t5337 = t5283 + t5300 + t5314 + t5334;
  t5385 = 0.5*var2[2]*t5337;
  t5511 = t3906 + t3910 + t4872;
  t4885 = 0. + t3906 + t3910 + t4872;
  t5564 = 2.*t1678*t2949;
  t5571 = 2.*t1353*t3002;
  t5586 = t3445 + t5564 + t4496 + t4538 + t5571 + t3610;
  t5663 = -2.*t1678*t3002;
  t5667 = -2.*t2949*t2473;
  t5675 = t4733 + t4740 + t3854 + t5663 + t3885 + t5667;
  t5909 = 3.5899*t4148*t3007;
  t5921 = 3.5899*t4099*t3074;
  t5924 = t5396 + t5909 + t5406 + t5921;
  t5959 = 3.5899*t5511*t1808;
  t5971 = 3.5899*t4714*t1932;
  t5979 = 3.5899*t3973*t3007;
  t5990 = 3.5899*t3757*t3074;
  t5991 = t5959 + t5971 + t5979 + t5990;
  p_output1[0]=(0.5*t1951*var2[0] + 0.5*(3.5899*t1808*(t1826 + t1961) + 3.5899*t1932*(t2098 + t2129))*var2[1])*var2[2];
  p_output1[1]=t2942;
  p_output1[2]=t3269;
  p_output1[3]=0.5*t3303*var2[2];
  p_output1[4]=0.5*t1951*var2[2];
  p_output1[5]=0.5*t3303*var2[0] + 0.5*t1951*var2[1];
  p_output1[6]=t2942;
  p_output1[7]=var2[2]*(0.5*(t4046 + 7.1798*t2360*t4055 + t4057 + 3.5899*t3890*t4099 + 7.1798*t2782*t4148 + 3.5899*t3617*t4148)*var2[0] + 0.5*(7.1798*t2360*t2595 + 7.1798*t2191*t2782 + 3.5899*t2191*t3617 + 3.5899*t2704*t3890 + t4191 + t4239)*var2[1] + 0.5*(7.1798*Power(t2360,2) + 7.1798*Power(t2782,2) + 7.1798*t1932*t3617 + 7.1798*t1808*t3890)*var2[2] + 0.5*(3.5899*t3757*t3890 + 3.5899*t3617*t3973)*var2[6] - 0.26996047999999995*t3617*var2[7]);
  p_output1[8]=var2[2]*(t4614 + t5190 + t5276 + t5385 + 0.5*(t4725 + t4834 + 3.5899*t2782*t4885 + t4918)*var2[6]);
  p_output1[9]=0.5*t5410*var2[2];
  p_output1[10]=0.5*t2803*var2[2];
  p_output1[11]=0.5*t5410*var2[0] + 0.5*t2803*var2[1] + (7.1798*t1932*t2360 + 7.1798*t1808*t2782)*var2[2] + 0.5*t5434*var2[6] - 0.26996047999999995*t2360*var2[7];
  p_output1[12]=0.5*t5434*var2[2];
  p_output1[13]=-0.26996047999999995*t2360*var2[2];
  p_output1[14]=t3269;
  p_output1[15]=var2[2]*(t4614 + t5190 + t5276 + t5385 + 0.5*(t4725 + t4834 + t4918 + 3.5899*t2782*t5511)*var2[6]);
  p_output1[16]=var2[2]*(0.5*(t4046 + 7.1798*t3007*t4055 + t4057 + 7.1798*t3074*t4148 + 3.5899*t4148*t5586 + 3.5899*t4099*t5675)*var2[0] + 0.5*(7.1798*t2595*t3007 + 7.1798*t2191*t3074 + t4191 + t4239 + 3.5899*t2191*t5586 + 3.5899*t2704*t5675)*var2[1] + 0.5*(7.1798*Power(t3007,2) + 7.1798*Power(t3074,2) + 7.1798*t1932*t5586 + 7.1798*t1808*t5675)*var2[2] + 0.5*(3.5899*t1808*t4714 + 7.1798*t3007*t4714 + 3.5899*t1932*(0. - 0.4999*t150 - 1.*t150*t1514 - 0.15039999999999998*t4864) + 3.5899*t3074*t4885 + 3.5899*t3074*t5511 + 3.5899*t3973*t5586 + 3.5899*t3757*t5675)*var2[6] - 0.26996047999999995*t5586*var2[7]);
  p_output1[17]=0.5*t5924*var2[2];
  p_output1[18]=0.5*t3116*var2[2];
  p_output1[19]=0.5*t5924*var2[0] + 0.5*t3116*var2[1] + (7.1798*t1932*t3007 + 7.1798*t1808*t3074)*var2[2] + 0.5*t5991*var2[6] - 0.26996047999999995*t3007*var2[7];
  p_output1[20]=0.5*t5991*var2[2];
  p_output1[21]=-0.26996047999999995*t3007*var2[2];
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

#include "J_Ce3_vec_L6_J3_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L6_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
