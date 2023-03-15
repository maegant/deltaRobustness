/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:23 GMT-08:00
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
  double t961;
  double t540;
  double t851;
  double t1152;
  double t313;
  double t955;
  double t1181;
  double t1225;
  double t1313;
  double t1320;
  double t1384;
  double t1465;
  double t1485;
  double t1538;
  double t1598;
  double t1771;
  double t1825;
  double t1828;
  double t1858;
  double t1865;
  double t2432;
  double t2283;
  double t2355;
  double t2360;
  double t2399;
  double t2437;
  double t2653;
  double t2768;
  double t2720;
  double t2723;
  double t2626;
  double t2665;
  double t2558;
  double t2578;
  double t2851;
  double t2859;
  double t3077;
  double t3088;
  double t3149;
  double t3161;
  double t3188;
  double t3189;
  double t3211;
  double t3222;
  double t3236;
  double t3239;
  double t2170;
  double t2211;
  double t2234;
  double t2261;
  double t1690;
  double t1897;
  double t1928;
  double t2000;
  double t2027;
  double t3348;
  double t3352;
  double t3359;
  double t3370;
  double t3373;
  double t2766;
  double t3505;
  double t3525;
  double t3173;
  double t3241;
  double t3254;
  double t3278;
  double t3280;
  double t3282;
  double t3729;
  double t3743;
  double t3763;
  double t3765;
  double t3774;
  double t3777;
  double t3375;
  double t3386;
  double t3402;
  double t3433;
  double t3437;
  double t3459;
  double t3461;
  double t3463;
  double t3467;
  double t3475;
  double t3550;
  double t3554;
  double t3555;
  double t3558;
  double t3570;
  double t3585;
  double t3602;
  double t3626;
  double t3673;
  double t3678;
  double t3686;
  double t3768;
  double t3825;
  double t3862;
  double t4458;
  double t4459;
  double t4470;
  double t4488;
  double t3977;
  double t3032;
  double t3039;
  double t4924;
  double t4950;
  double t5017;
  double t5037;
  double t5065;
  double t5095;
  double t5096;
  double t5117;
  double t4808;
  double t4834;
  double t4867;
  double t3409;
  double t3411;
  double t3766;
  double t3781;
  double t3790;
  double t3796;
  double t3884;
  double t3933;
  double t3989;
  double t4043;
  double t4106;
  double t4152;
  double t4154;
  double t4229;
  double t2796;
  double t5233;
  double t4879;
  double t5632;
  double t5653;
  double t5664;
  double t5729;
  double t5235;
  double t4294;
  double t4324;
  double t4328;
  double t5255;
  double t4340;
  double t4350;
  double t4357;
  double t4391;
  double t5269;
  double t5295;
  double t5311;
  double t5323;
  double t5326;
  double t5333;
  double t5361;
  double t5382;
  double t5388;
  double t5393;
  double t5411;
  double t5413;
  double t5420;
  double t5470;
  double t5546;
  double t5565;
  double t5568;
  double t5574;
  double t5579;
  double t4464;
  double t4552;
  double t4554;
  double t5733;
  double t5801;
  double t4600;
  double t4607;
  double t4634;
  double t5870;
  double t6178;
  double t6179;
  double t5917;
  double t6491;
  double t6493;
  double t6503;
  double t6531;
  double t6542;
  double t6572;
  double t6574;
  double t6593;
  double t6602;
  double t6608;
  double t6423;
  double t6429;
  double t6430;
  double t4405;
  double t4597;
  double t4647;
  double t4749;
  double t4751;
  double t6689;
  double t6047;
  double t6123;
  double t6151;
  double t6157;
  double t6204;
  double t6207;
  double t6209;
  double t6216;
  double t6244;
  double t6250;
  double t6253;
  double t6254;
  double t6258;
  double t6259;
  double t6264;
  double t6267;
  double t6288;
  double t6300;
  double t6351;
  double t6352;
  double t6357;
  double t6367;
  double t6368;
  double t6709;
  double t6041;
  double t6416;
  double t6466;
  double t6477;
  double t6478;
  double t6481;
  double t6558;
  double t6641;
  double t6966;
  double t6979;
  double t6989;
  double t6944;
  double t6948;
  double t6960;
  double t6680;
  t961 = Cos(var1[3]);
  t540 = Cos(var1[4]);
  t851 = Sin(var1[3]);
  t1152 = Sin(var1[4]);
  t313 = Sin(var1[2]);
  t955 = -1.*t540*t851;
  t1181 = -1.*t961*t1152;
  t1225 = t955 + t1181;
  t1313 = -1.*t313*t1225;
  t1320 = Cos(var1[2]);
  t1384 = t961*t540;
  t1465 = -1.*t851*t1152;
  t1485 = t1384 + t1465;
  t1538 = -1.*t1320*t1485;
  t1598 = t1313 + t1538;
  t1771 = -1.*t540;
  t1825 = 1. + t1771;
  t1828 = -0.9063*t1825;
  t1858 = -1.078185*t540;
  t1865 = t1828 + t1858;
  t2432 = -1.*t313*t1485;
  t2283 = t540*t851;
  t2355 = t961*t1152;
  t2360 = t2283 + t2355;
  t2399 = -1.*t1320*t2360;
  t2437 = t2399 + t2432;
  t2653 = t1320*t1485;
  t2768 = t313*t1485;
  t2720 = t313*t1225;
  t2723 = t2720 + t2653;
  t2626 = -1.*t313*t2360;
  t2665 = t2626 + t2653;
  t2558 = t1320*t1225;
  t2578 = t2558 + t2432;
  t2851 = t1320*t2360;
  t2859 = t2851 + t2768;
  t3077 = 0.4999*t851;
  t3088 = t1865*t851;
  t3149 = -0.17188499999999995*t961*t1152;
  t3161 = t3077 + t3088 + t3149;
  t3188 = -1.*t961;
  t3189 = 1. + t3188;
  t3211 = -0.4999*t3189;
  t3222 = t961*t1865;
  t3236 = 0.17188499999999995*t851*t1152;
  t3239 = t3211 + t3222 + t3236;
  t2170 = 0.4999*t1152;
  t2211 = t1865*t1152;
  t2234 = 0.17188499999999995*t540*t1152;
  t2261 = t2170 + t2211 + t2234;
  t1690 = 0.4999*t540;
  t1897 = t1865*t540;
  t1928 = Power(t1152,2);
  t2000 = -0.17188499999999995*t1928;
  t2027 = t1690 + t1897 + t2000;
  t3348 = -1.*t961*t540;
  t3352 = t851*t1152;
  t3359 = t3348 + t3352;
  t3370 = t1320*t3359;
  t3373 = t1313 + t3370;
  t2766 = -1.*t1320*t1225;
  t3505 = t313*t3359;
  t3525 = t2558 + t3505;
  t3173 = -1.*t3161*t1485;
  t3241 = -1.*t1225*t3239;
  t3254 = t3173 + t3241;
  t3278 = t3161*t2360;
  t3280 = t1485*t3239;
  t3282 = t3278 + t3280;
  t3729 = -0.4999*t851;
  t3743 = -1.*t1865*t851;
  t3763 = 0.17188499999999995*t961*t1152;
  t3765 = t3729 + t3743 + t3763;
  t3774 = 0.4999*t961;
  t3777 = t3774 + t3222 + t3236;
  t3375 = -0.07323676079999998*var2[4]*t3373;
  t3386 = 0.85216*t2261*t2578;
  t3402 = 0.85216*t2027*t3373;
  t3433 = 1.70432*t2665*t2578;
  t3437 = 0.85216*t2723*t2437;
  t3459 = 0.85216*t1598*t2859;
  t3461 = 1.70432*t2578*t3373;
  t3463 = -1.*t313*t3359;
  t3467 = t2766 + t3463;
  t3475 = 0.85216*t2723*t3467;
  t3550 = 0.85216*t1598*t3525;
  t3554 = t3433 + t3437 + t3459 + t3461 + t3475 + t3550;
  t3555 = 0.5*var2[1]*t3554;
  t3558 = 1.70432*t2723*t2665;
  t3570 = 1.70432*t2578*t2859;
  t3585 = 1.70432*t2723*t3373;
  t3602 = 1.70432*t2578*t3525;
  t3626 = t3558 + t3570 + t3585 + t3602;
  t3673 = 0.5*var2[0]*t3626;
  t3678 = 0.85216*t2578*t3254;
  t3686 = t3161*t1485;
  t3768 = t1225*t3239;
  t3825 = 0.85216*t3282*t3373;
  t3862 = -1.*t1225*t3161;
  t4458 = 0.17188499999999995*t540*t851;
  t4459 = t4458 + t3763;
  t4470 = -0.17188499999999995*t961*t540;
  t4488 = t4470 + t3236;
  t3977 = -1.*t3239*t3359;
  t3032 = Power(t2665,2);
  t3039 = Power(t2578,2);
  t4924 = 0.85216*t1598*t2723;
  t4950 = 0.85216*t3032;
  t5017 = 0.85216*t3039;
  t5037 = 0.85216*t2437*t2859;
  t5065 = t4924 + t4950 + t5017 + t5037;
  t5095 = 0.85216*t2665*t3254;
  t5096 = 0.85216*t2578*t3282;
  t5117 = t5095 + t5096;
  t4808 = 0.85216*t2261*t2665;
  t4834 = 0.85216*t2027*t2578;
  t4867 = t4808 + t4834;
  t3409 = t3386 + t3402;
  t3411 = 0.5*var2[3]*t3409;
  t3766 = t3765*t1485;
  t3781 = t2360*t3777;
  t3790 = t3686 + t3766 + t3768 + t3781;
  t3796 = 0.85216*t2578*t3790;
  t3884 = -1.*t1225*t3765;
  t3933 = -1.*t1485*t3777;
  t3989 = t3862 + t3884 + t3933 + t3977;
  t4043 = 0.85216*t2665*t3989;
  t4106 = t3678 + t3796 + t3825 + t4043;
  t4152 = 0.5*var2[2]*t4106;
  t4154 = t3375 + t3411 + t3555 + t3673 + t4152;
  t4229 = var2[0]*t4154;
  t2796 = t313*t2360;
  t5233 = t2796 + t3370;
  t4879 = 1.70432*t2723*t2578;
  t5632 = -0.4999*t961;
  t5653 = -1.*t961*t1865;
  t5664 = -0.17188499999999995*t851*t1152;
  t5729 = t5632 + t5653 + t5664;
  t5235 = -0.07323676079999998*var2[4]*t5233;
  t4294 = Power(t540,2);
  t4324 = 0.17188499999999995*t4294;
  t4328 = 0. + t1690 + t1897 + t4324;
  t5255 = 0.85216*t2027*t5233;
  t4340 = -0.4999*t1152;
  t4350 = -1.*t1865*t1152;
  t4357 = -0.17188499999999995*t540*t1152;
  t4391 = t4340 + t4350 + t4357;
  t5269 = 0.85216*t2261*t3525;
  t5295 = 0.85216*t2859*t3373;
  t5311 = 0.85216*t2578*t5233;
  t5323 = t2851 + t3463;
  t5326 = 0.85216*t2723*t5323;
  t5333 = 0.85216*t2665*t3525;
  t5361 = 1.70432*t3373*t3525;
  t5382 = t4879 + t5295 + t5311 + t5326 + t5333 + t5361;
  t5388 = 0.5*var2[1]*t5382;
  t5393 = Power(t2723,2);
  t5411 = 1.70432*t5393;
  t5413 = 1.70432*t2723*t5233;
  t5420 = 1.70432*t2859*t3525;
  t5470 = Power(t3525,2);
  t5546 = 1.70432*t5470;
  t5565 = t5411 + t5413 + t5420 + t5546;
  t5568 = 0.5*var2[0]*t5565;
  t5574 = 0.85216*t3282*t5233;
  t5579 = 0.85216*t3254*t3525;
  t4464 = t4459*t1485;
  t4552 = t2360*t4488;
  t4554 = t3686 + t4464 + t3768 + t4552;
  t5733 = -1.*t2360*t3239;
  t5801 = -1.*t3161*t3359;
  t4600 = -1.*t1225*t4459;
  t4607 = -1.*t1485*t4488;
  t4634 = t3862 + t4600 + t4607 + t3977;
  t5870 = t1225*t3161;
  t6178 = 0.17188499999999995*t961*t540;
  t6179 = t6178 + t5664;
  t5917 = t3239*t3359;
  t6491 = 0.85216*t2723*t2665;
  t6493 = 0.85216*t2578*t2859;
  t6503 = 0.85216*t2723*t3373;
  t6531 = 0.85216*t2578*t3525;
  t6542 = t6491 + t6493 + t6503 + t6531;
  t6572 = 0.85216*t2723*t3254;
  t6574 = 0.85216*t2723*t3790;
  t6593 = 0.85216*t3282*t3525;
  t6602 = 0.85216*t2859*t3989;
  t6608 = t6572 + t6574 + t6593 + t6602;
  t6423 = 0.85216*t2261*t2723;
  t6429 = 0.85216*t2027*t3525;
  t6430 = t6423 + t6429;
  t4405 = 0.85216*t4391*t2578;
  t4597 = 0.85216*t2578*t4554;
  t4647 = 0.85216*t2665*t4634;
  t4749 = t3678 + t4597 + t3825 + t4647;
  t4751 = 0.5*var2[2]*t4749;
  t6689 = t1690 + t1897 + t4324;
  t6047 = 0.85216*t4391*t3525;
  t6123 = 0.85216*t3790*t3525;
  t6151 = 0.85216*t4554*t3525;
  t6157 = -1.*t4459*t1485;
  t6204 = -1.*t1225*t6179;
  t6207 = -1.*t1225*t3777;
  t6209 = -1.*t1225*t4488;
  t6216 = -1.*t3765*t3359;
  t6244 = -1.*t4459*t3359;
  t6250 = t6157 + t6204 + t5733 + t6207 + t6209 + t5801 + t6216 + t6244;
  t6253 = 0.85216*t2859*t6250;
  t6254 = 0.85216*t2723*t3989;
  t6258 = 0.85216*t2723*t4634;
  t6259 = t1225*t3765;
  t6264 = t1225*t4459;
  t6267 = t4459*t2360;
  t6288 = t1485*t6179;
  t6300 = t1485*t3777;
  t6351 = t1485*t4488;
  t6352 = t5870 + t6259 + t6264 + t6267 + t6288 + t6300 + t6351 + t5917;
  t6357 = 0.85216*t2723*t6352;
  t6367 = t5574 + t5579 + t6123 + t6151 + t6253 + t6254 + t6258 + t6357;
  t6368 = 0.5*var2[2]*t6367;
  t6709 = 0.85216*t6689*t2723;
  t6041 = 0.85216*t4328*t2723;
  t6416 = -0.07323676079999998*var2[4]*t3525;
  t6466 = 1.70432*t2723*t2859;
  t6477 = 1.70432*t2723*t3525;
  t6478 = t6466 + t6477;
  t6481 = var2[0]*t6478;
  t6558 = 0.5*var2[1]*t6542;
  t6641 = 0.5*var2[0]*t6542;
  t6966 = 0.85216*t2723*t4554;
  t6979 = 0.85216*t2859*t4634;
  t6989 = t6572 + t6966 + t6593 + t6979;
  t6944 = 0.85216*t4391*t2723;
  t6948 = 0.85216*t6689*t2859;
  t6960 = t6944 + t6423 + t6948 + t6429;
  t6680 = -0.07323676079999998*var2[0]*t3525;
  p_output1[0]=var2[0]*(0.5*(1.70432*t1598*t2723 + 1.70432*t2437*t2859 + 1.70432*t3032 + 1.70432*t3039)*var2[0] + 0.5*(2.55648*t1598*t2578 + 2.55648*t2437*t2665 + 0.85216*t2723*(t2766 + t2768) + 0.85216*(t1538 + t2796)*t2859)*var2[1] + 0.5*(0.85216*t2437*t3254 + 0.85216*t1598*t3282)*var2[2] + 0.5*(0.85216*t1598*t2027 + 0.85216*t2261*t2437)*var2[3] - 0.07323676079999998*t1598*var2[4]);
  p_output1[1]=t4229;
  p_output1[2]=var2[0]*(t3375 + t3555 + t3673 + t4751 + 0.5*(t3386 + t3402 + 0.85216*t2665*t4328 + t4405)*var2[3]);
  p_output1[3]=(1.70432*t2665*t2859 + t4879)*var2[0] + 0.5*t5065*var2[1] + 0.5*t5117*var2[2] + 0.5*t4867*var2[3] - 0.07323676079999998*t2578*var2[4];
  p_output1[4]=0.5*t5065*var2[0];
  p_output1[5]=0.5*t5117*var2[0];
  p_output1[6]=0.5*t4867*var2[0];
  p_output1[7]=-0.07323676079999998*t2578*var2[0];
  p_output1[8]=t4229;
  p_output1[9]=var2[0]*(t5235 + t5388 + t5568 + 0.5*(1.70432*t3525*t3790 + 1.70432*t2723*t3989 + t5574 + t5579 + 0.85216*t2859*(-1.*t1485*t3765 - 2.*t3359*t3765 - 2.*t1225*t3777 - 1.*t1225*t5729 + t5733 + t5801) + 0.85216*t2723*(2.*t1225*t3765 + t2360*t3765 + 2.*t1485*t3777 + t1485*t5729 + t5870 + t5917))*var2[2] + 0.5*(t5255 + t5269)*var2[3]);
  p_output1[10]=var2[0]*(t5235 + t5388 + t5568 + t6368 + 0.5*(t5255 + t5269 + t6041 + t6047)*var2[3]);
  p_output1[11]=t6416 + t6481 + t6558 + 0.5*t6608*var2[2] + 0.5*t6430*var2[3];
  p_output1[12]=t6641;
  p_output1[13]=0.5*t6608*var2[0];
  p_output1[14]=0.5*t6430*var2[0];
  p_output1[15]=t6680;
  p_output1[16]=var2[0]*(t3375 + t3555 + t3673 + t4751 + 0.5*(t3386 + t3402 + t4405 + 0.85216*t2665*t6689)*var2[3]);
  p_output1[17]=var2[0]*(t5235 + t5388 + t5568 + t6368 + 0.5*(t5255 + t5269 + t6047 + t6709)*var2[3]);
  p_output1[18]=var2[0]*(t5235 + t5388 + t5568 + 0.5*(1.70432*t3525*t4554 + 1.70432*t2723*t4634 + t5574 + t5579 + 0.85216*t2859*(-2.*t3359*t4459 - 2.*t1225*t4488 + t5733 + t5801 + t6157 + t6204) + 0.85216*t2723*(2.*t1225*t4459 + 2.*t1485*t4488 + t5870 + t5917 + t6267 + t6288))*var2[2] + 0.5*(0.85216*t2859*t4391 + 1.70432*t3525*t4391 + t5255 + t5269 + 0.85216*t2723*(0. - 0.17188499999999995*t4294 - 0.4999*t540 - 1.*t1865*t540) + t6041 + t6709)*var2[3]);
  p_output1[19]=t6416 + t6481 + t6558 + 0.5*t6989*var2[2] + 0.5*t6960*var2[3];
  p_output1[20]=t6641;
  p_output1[21]=0.5*t6989*var2[0];
  p_output1[22]=0.5*t6960*var2[0];
  p_output1[23]=t6680;
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

#include "J_Ce3_vec_L3_J1_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L3_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
