/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:25 GMT-08:00
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
  double t408;
  double t234;
  double t332;
  double t445;
  double t734;
  double t61;
  double t888;
  double t987;
  double t1008;
  double t1300;
  double t1369;
  double t1384;
  double t1389;
  double t1507;
  double t348;
  double t619;
  double t620;
  double t664;
  double t1022;
  double t1081;
  double t1828;
  double t1673;
  double t1690;
  double t1694;
  double t1703;
  double t1830;
  double t2393;
  double t2121;
  double t2131;
  double t2457;
  double t2482;
  double t2234;
  double t2261;
  double t2283;
  double t2392;
  double t2437;
  double t2844;
  double t2851;
  double t2859;
  double t2881;
  double t2989;
  double t3006;
  double t3009;
  double t3032;
  double t3037;
  double t3039;
  double t1263;
  double t1582;
  double t1598;
  double t1657;
  double t1897;
  double t1928;
  double t1934;
  double t1949;
  double t2000;
  double t3211;
  double t3222;
  double t3236;
  double t3254;
  double t3277;
  double t2688;
  double t2720;
  double t2768;
  double t2776;
  double t3334;
  double t3347;
  double t2973;
  double t3040;
  double t3043;
  double t3075;
  double t3077;
  double t3088;
  double t3558;
  double t3570;
  double t3585;
  double t3594;
  double t3678;
  double t3686;
  double t3278;
  double t3280;
  double t3282;
  double t3303;
  double t3311;
  double t3352;
  double t3370;
  double t3373;
  double t3375;
  double t3386;
  double t3398;
  double t3402;
  double t3433;
  double t3437;
  double t3459;
  double t3461;
  double t3467;
  double t3475;
  double t3505;
  double t3525;
  double t3550;
  double t3638;
  double t3768;
  double t3774;
  double t4405;
  double t4411;
  double t4436;
  double t4458;
  double t3796;
  double t4702;
  double t4706;
  double t4772;
  double t4778;
  double t4786;
  double t4808;
  double t4834;
  double t5045;
  double t5086;
  double t5095;
  double t4884;
  double t4892;
  double t4900;
  double t3291;
  double t3293;
  double t3602;
  double t3729;
  double t3763;
  double t3766;
  double t3781;
  double t3790;
  double t3825;
  double t3934;
  double t3985;
  double t3989;
  double t4043;
  double t4129;
  double t5195;
  double t5632;
  double t5664;
  double t5712;
  double t5727;
  double t5202;
  double t4324;
  double t4328;
  double t4330;
  double t4154;
  double t4162;
  double t4219;
  double t4229;
  double t5218;
  double t5233;
  double t5295;
  double t5311;
  double t5323;
  double t5326;
  double t5333;
  double t5361;
  double t5393;
  double t5411;
  double t5413;
  double t5420;
  double t5447;
  double t5457;
  double t5470;
  double t5535;
  double t5546;
  double t5574;
  double t5579;
  double t4419;
  double t4464;
  double t4470;
  double t5587;
  double t5743;
  double t5808;
  double t4552;
  double t4554;
  double t4597;
  double t5862;
  double t6096;
  double t6123;
  double t5898;
  double t6478;
  double t6491;
  double t6492;
  double t6493;
  double t6499;
  double t6629;
  double t6658;
  double t6668;
  double t6671;
  double t6673;
  double t6567;
  double t6572;
  double t6574;
  double t4294;
  double t4486;
  double t4634;
  double t4644;
  double t4647;
  double t6700;
  double t5964;
  double t6018;
  double t6020;
  double t6052;
  double t6127;
  double t6151;
  double t6178;
  double t6250;
  double t6253;
  double t6254;
  double t6258;
  double t6259;
  double t6264;
  double t6300;
  double t6325;
  double t6351;
  double t6352;
  double t6357;
  double t6381;
  double t6414;
  double t6423;
  double t6429;
  double t6441;
  double t6721;
  double t5952;
  double t6503;
  double t6531;
  double t6594;
  double t6602;
  double t6609;
  double t7015;
  double t7035;
  double t7038;
  double t6966;
  double t6979;
  double t6994;
  double t6695;
  t408 = Cos(var1[3]);
  t234 = Cos(var1[4]);
  t332 = Sin(var1[3]);
  t445 = Sin(var1[4]);
  t734 = Sin(var1[2]);
  t61 = Cos(var1[2]);
  t888 = t408*t234;
  t987 = -1.*t332*t445;
  t1008 = t888 + t987;
  t1300 = -1.*t234;
  t1369 = 1. + t1300;
  t1384 = -0.9063*t1369;
  t1389 = -1.078185*t234;
  t1507 = t1384 + t1389;
  t348 = -1.*t234*t332;
  t619 = -1.*t408*t445;
  t620 = t348 + t619;
  t664 = -1.*t61*t620;
  t1022 = t734*t1008;
  t1081 = t664 + t1022;
  t1828 = -1.*t61*t1008;
  t1673 = t234*t332;
  t1690 = t408*t445;
  t1694 = t1673 + t1690;
  t1703 = t734*t1694;
  t1830 = t1703 + t1828;
  t2393 = -1.*t734*t1008;
  t2121 = -1.*t734*t620;
  t2131 = t2121 + t1828;
  t2457 = t61*t620;
  t2482 = t2457 + t2393;
  t2234 = -1.*t734*t1694;
  t2261 = t61*t1008;
  t2283 = t2234 + t2261;
  t2392 = -1.*t61*t1694;
  t2437 = t2392 + t2393;
  t2844 = 0.4999*t332;
  t2851 = t1507*t332;
  t2859 = -0.17188499999999995*t408*t445;
  t2881 = t2844 + t2851 + t2859;
  t2989 = -1.*t408;
  t3006 = 1. + t2989;
  t3009 = -0.4999*t3006;
  t3032 = t408*t1507;
  t3037 = 0.17188499999999995*t332*t445;
  t3039 = t3009 + t3032 + t3037;
  t1263 = 0.4999*t445;
  t1582 = t1507*t445;
  t1598 = 0.17188499999999995*t234*t445;
  t1657 = t1263 + t1582 + t1598;
  t1897 = 0.4999*t234;
  t1928 = t1507*t234;
  t1934 = Power(t445,2);
  t1949 = -0.17188499999999995*t1934;
  t2000 = t1897 + t1928 + t1949;
  t3211 = -1.*t408*t234;
  t3222 = t332*t445;
  t3236 = t3211 + t3222;
  t3254 = -1.*t734*t3236;
  t3277 = t664 + t3254;
  t2688 = t734*t620;
  t2720 = t2688 + t2261;
  t2768 = t61*t1694;
  t2776 = t2768 + t1022;
  t3334 = t61*t3236;
  t3347 = t2121 + t3334;
  t2973 = -1.*t2881*t1008;
  t3040 = -1.*t620*t3039;
  t3043 = t2973 + t3040;
  t3075 = t2881*t1694;
  t3077 = t1008*t3039;
  t3088 = t3075 + t3077;
  t3558 = -0.4999*t332;
  t3570 = -1.*t1507*t332;
  t3585 = 0.17188499999999995*t408*t445;
  t3594 = t3558 + t3570 + t3585;
  t3678 = 0.4999*t408;
  t3686 = t3678 + t3032 + t3037;
  t3278 = -0.07323676079999998*var2[4]*t3277;
  t3280 = 0.85216*t1657*t2131;
  t3282 = 0.85216*t2000*t3277;
  t3303 = 1.70432*t2131*t2283;
  t3311 = 1.70432*t2482*t2437;
  t3352 = 1.70432*t2131*t3347;
  t3370 = 1.70432*t2482*t3277;
  t3373 = t3303 + t3311 + t3352 + t3370;
  t3375 = 0.5*var2[1]*t3373;
  t3386 = 1.70432*t2283*t2482;
  t3398 = 0.85216*t2720*t2437;
  t3402 = 0.85216*t2131*t2776;
  t3433 = 1.70432*t2482*t3347;
  t3437 = 0.85216*t2720*t3277;
  t3459 = t734*t3236;
  t3461 = t2457 + t3459;
  t3467 = 0.85216*t2131*t3461;
  t3475 = t3386 + t3398 + t3402 + t3433 + t3437 + t3467;
  t3505 = 0.5*var2[0]*t3475;
  t3525 = 0.85216*t2131*t3043;
  t3550 = t2881*t1008;
  t3638 = t620*t3039;
  t3768 = 0.85216*t3088*t3277;
  t3774 = -1.*t620*t2881;
  t4405 = 0.17188499999999995*t234*t332;
  t4411 = t4405 + t3585;
  t4436 = -0.17188499999999995*t408*t234;
  t4458 = t4436 + t3037;
  t3796 = -1.*t3039*t3236;
  t4702 = 0.85216*t2131*t2720;
  t4706 = Power(t2283,2);
  t4772 = 0.85216*t4706;
  t4778 = Power(t2482,2);
  t4786 = 0.85216*t4778;
  t4808 = 0.85216*t2437*t2776;
  t4834 = t4702 + t4772 + t4786 + t4808;
  t5045 = 0.85216*t2437*t3043;
  t5086 = 0.85216*t2131*t3088;
  t5095 = t5045 + t5086;
  t4884 = 0.85216*t2000*t2131;
  t4892 = 0.85216*t1657*t2437;
  t4900 = t4884 + t4892;
  t3291 = t3280 + t3282;
  t3293 = 0.5*var2[3]*t3291;
  t3602 = t3594*t1008;
  t3729 = t1694*t3686;
  t3763 = t3550 + t3602 + t3638 + t3729;
  t3766 = 0.85216*t2131*t3763;
  t3781 = -1.*t620*t3594;
  t3790 = -1.*t1008*t3686;
  t3825 = t3774 + t3781 + t3790 + t3796;
  t3934 = 0.85216*t2437*t3825;
  t3985 = t3525 + t3766 + t3768 + t3934;
  t3989 = 0.5*var2[2]*t3985;
  t4043 = t3278 + t3293 + t3375 + t3505 + t3989;
  t4129 = var2[1]*t4043;
  t5195 = t2768 + t3254;
  t5632 = -0.4999*t408;
  t5664 = -1.*t408*t1507;
  t5712 = -0.17188499999999995*t332*t445;
  t5727 = t5632 + t5664 + t5712;
  t5202 = -0.07323676079999998*var2[4]*t5195;
  t4324 = Power(t234,2);
  t4328 = 0.17188499999999995*t4324;
  t4330 = 0. + t1897 + t1928 + t4328;
  t4154 = -0.4999*t445;
  t4162 = -1.*t1507*t445;
  t4219 = -0.17188499999999995*t234*t445;
  t4229 = t4154 + t4162 + t4219;
  t5218 = 0.85216*t1657*t3347;
  t5233 = 0.85216*t2000*t5195;
  t5295 = 1.70432*t4778;
  t5311 = 1.70432*t2283*t3347;
  t5323 = Power(t3347,2);
  t5326 = 1.70432*t5323;
  t5333 = 1.70432*t2482*t5195;
  t5361 = t5295 + t5311 + t5326 + t5333;
  t5393 = 0.5*var2[1]*t5361;
  t5411 = 1.70432*t2720*t2482;
  t5413 = 0.85216*t2776*t3347;
  t5420 = t1703 + t3334;
  t5447 = 0.85216*t2482*t5420;
  t5457 = 0.85216*t2720*t5195;
  t5470 = 0.85216*t2283*t3461;
  t5535 = 1.70432*t3347*t3461;
  t5546 = t5411 + t5413 + t5447 + t5457 + t5470 + t5535;
  t5574 = 0.5*var2[0]*t5546;
  t5579 = 0.85216*t3043*t3347;
  t4419 = t4411*t1008;
  t4464 = t1694*t4458;
  t4470 = t3550 + t4419 + t3638 + t4464;
  t5587 = 0.85216*t3088*t5195;
  t5743 = -1.*t1694*t3039;
  t5808 = -1.*t2881*t3236;
  t4552 = -1.*t620*t4411;
  t4554 = -1.*t1008*t4458;
  t4597 = t3774 + t4552 + t4554 + t3796;
  t5862 = t620*t2881;
  t6096 = 0.17188499999999995*t408*t234;
  t6123 = t6096 + t5712;
  t5898 = t3039*t3236;
  t6478 = 0.85216*t2720*t2283;
  t6491 = 0.85216*t2482*t2776;
  t6492 = 0.85216*t2720*t3347;
  t6493 = 0.85216*t2482*t3461;
  t6499 = t6478 + t6491 + t6492 + t6493;
  t6629 = 0.85216*t2482*t3043;
  t6658 = 0.85216*t2482*t3763;
  t6668 = 0.85216*t3088*t3347;
  t6671 = 0.85216*t2283*t3825;
  t6673 = t6629 + t6658 + t6668 + t6671;
  t6567 = 0.85216*t1657*t2482;
  t6572 = 0.85216*t2000*t3347;
  t6574 = t6567 + t6572;
  t4294 = 0.85216*t4229*t2131;
  t4486 = 0.85216*t2131*t4470;
  t4634 = 0.85216*t2437*t4597;
  t4644 = t3525 + t4486 + t3768 + t4634;
  t4647 = 0.5*var2[2]*t4644;
  t6700 = t1897 + t1928 + t4328;
  t5964 = 0.85216*t4229*t3347;
  t6018 = 0.85216*t3763*t3347;
  t6020 = 0.85216*t4470*t3347;
  t6052 = -1.*t4411*t1008;
  t6127 = -1.*t620*t6123;
  t6151 = -1.*t620*t3686;
  t6178 = -1.*t620*t4458;
  t6250 = -1.*t3594*t3236;
  t6253 = -1.*t4411*t3236;
  t6254 = t6052 + t6127 + t5743 + t6151 + t6178 + t5808 + t6250 + t6253;
  t6258 = 0.85216*t2283*t6254;
  t6259 = 0.85216*t2482*t3825;
  t6264 = 0.85216*t2482*t4597;
  t6300 = t620*t3594;
  t6325 = t620*t4411;
  t6351 = t4411*t1694;
  t6352 = t1008*t6123;
  t6357 = t1008*t3686;
  t6381 = t1008*t4458;
  t6414 = t5862 + t6300 + t6325 + t6351 + t6352 + t6357 + t6381 + t5898;
  t6423 = 0.85216*t2482*t6414;
  t6429 = t5579 + t6018 + t6020 + t5587 + t6258 + t6259 + t6264 + t6423;
  t6441 = 0.5*var2[2]*t6429;
  t6721 = 0.85216*t6700*t2482;
  t5952 = 0.85216*t4330*t2482;
  t6503 = 0.5*var2[1]*t6499;
  t6531 = -0.07323676079999998*var2[4]*t3347;
  t6594 = t3386 + t3433;
  t6602 = var2[1]*t6594;
  t6609 = 0.5*var2[0]*t6499;
  t7015 = 0.85216*t2482*t4470;
  t7035 = 0.85216*t2283*t4597;
  t7038 = t6629 + t7015 + t6668 + t7035;
  t6966 = 0.85216*t6700*t2283;
  t6979 = 0.85216*t4229*t2482;
  t6994 = t6966 + t6979 + t6567 + t6572;
  t6695 = -0.07323676079999998*var2[1]*t3347;
  p_output1[0]=var2[1]*(0.5*(2.55648*t2283*t2437 + 2.55648*t2131*t2482 + 0.85216*t1081*t2720 + 0.85216*t1830*t2776)*var2[0] + 0.5*(1.70432*Power(t2131,2) + 1.70432*t1830*t2283 + 1.70432*Power(t2437,2) + 1.70432*t1081*t2482)*var2[1] + 0.5*(0.85216*t1830*t3043 + 0.85216*t1081*t3088)*var2[2] + 0.5*(0.85216*t1657*t1830 + 0.85216*t1081*t2000)*var2[3] - 0.07323676079999998*t1081*var2[4]);
  p_output1[1]=t4129;
  p_output1[2]=var2[1]*(t3278 + t3375 + t3505 + t4647 + 0.5*(t3280 + t3282 + t4294 + 0.85216*t2437*t4330)*var2[3]);
  p_output1[3]=0.5*t4834*var2[1];
  p_output1[4]=0.5*t4834*var2[0] + (1.70432*t2283*t2437 + 1.70432*t2131*t2482)*var2[1] + 0.5*t5095*var2[2] + 0.5*t4900*var2[3] - 0.07323676079999998*t2131*var2[4];
  p_output1[5]=0.5*t5095*var2[1];
  p_output1[6]=0.5*t4900*var2[1];
  p_output1[7]=-0.07323676079999998*t2131*var2[1];
  p_output1[8]=t4129;
  p_output1[9]=var2[1]*(t5202 + t5393 + t5574 + 0.5*(1.70432*t3347*t3763 + 1.70432*t2482*t3825 + t5579 + t5587 + 0.85216*t2482*(t1694*t3594 + 2.*t1008*t3686 + t1008*t5727 + t5862 + t5898 + 2.*t3594*t620) + 0.85216*t2283*(-1.*t1008*t3594 - 2.*t3236*t3594 + t5743 + t5808 - 2.*t3686*t620 - 1.*t5727*t620))*var2[2] + 0.5*(t5218 + t5233)*var2[3]);
  p_output1[10]=var2[1]*(t5202 + t5393 + t5574 + t6441 + 0.5*(t5218 + t5233 + t5952 + t5964)*var2[3]);
  p_output1[11]=t6503;
  p_output1[12]=t6531 + t6602 + t6609 + 0.5*t6673*var2[2] + 0.5*t6574*var2[3];
  p_output1[13]=0.5*t6673*var2[1];
  p_output1[14]=0.5*t6574*var2[1];
  p_output1[15]=t6695;
  p_output1[16]=var2[1]*(t3278 + t3375 + t3505 + t4647 + 0.5*(t3280 + t3282 + t4294 + 0.85216*t2437*t6700)*var2[3]);
  p_output1[17]=var2[1]*(t5202 + t5393 + t5574 + t6441 + 0.5*(t5218 + t5233 + t5964 + t6721)*var2[3]);
  p_output1[18]=var2[1]*(t5202 + t5393 + t5574 + 0.5*(1.70432*t3347*t4470 + 1.70432*t2482*t4597 + t5579 + t5587 + 0.85216*t2283*(-2.*t3236*t4411 + t5743 + t5808 + t6052 + t6127 - 2.*t4458*t620) + 0.85216*t2482*(2.*t1008*t4458 + t5862 + t5898 + 2.*t4411*t620 + t6351 + t6352))*var2[2] + 0.5*(0.85216*t2283*t4229 + 1.70432*t3347*t4229 + 0.85216*t2482*(0. - 0.4999*t234 - 1.*t1507*t234 - 0.17188499999999995*t4324) + t5218 + t5233 + t5952 + t6721)*var2[3]);
  p_output1[19]=t6503;
  p_output1[20]=t6531 + t6602 + t6609 + 0.5*t7038*var2[2] + 0.5*t6994*var2[3];
  p_output1[21]=0.5*t7038*var2[1];
  p_output1[22]=0.5*t6994*var2[1];
  p_output1[23]=t6695;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 24, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L3_J2_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L3_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
