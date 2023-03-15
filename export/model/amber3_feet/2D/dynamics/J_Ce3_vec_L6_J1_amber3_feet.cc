/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:29:06 GMT-08:00
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
  double t855;
  double t734;
  double t738;
  double t872;
  double t565;
  double t817;
  double t881;
  double t895;
  double t899;
  double t975;
  double t987;
  double t1033;
  double t1232;
  double t1273;
  double t1292;
  double t1389;
  double t1427;
  double t1464;
  double t1474;
  double t1569;
  double t1912;
  double t1813;
  double t1826;
  double t1867;
  double t1905;
  double t1956;
  double t2129;
  double t2159;
  double t2145;
  double t2150;
  double t2121;
  double t2131;
  double t2045;
  double t2087;
  double t2195;
  double t2201;
  double t2439;
  double t2442;
  double t2473;
  double t2534;
  double t2573;
  double t2583;
  double t2595;
  double t2601;
  double t2604;
  double t2610;
  double t1784;
  double t1794;
  double t1799;
  double t1808;
  double t1352;
  double t1622;
  double t1678;
  double t1699;
  double t1708;
  double t2797;
  double t2803;
  double t2805;
  double t2816;
  double t2828;
  double t2158;
  double t2943;
  double t2949;
  double t2549;
  double t2619;
  double t2640;
  double t2684;
  double t2704;
  double t2734;
  double t3087;
  double t3093;
  double t3105;
  double t3113;
  double t3126;
  double t3147;
  double t2831;
  double t2838;
  double t2845;
  double t2872;
  double t2874;
  double t2909;
  double t2920;
  double t2930;
  double t2931;
  double t2942;
  double t2951;
  double t2963;
  double t2967;
  double t2977;
  double t2986;
  double t3004;
  double t3007;
  double t3015;
  double t3034;
  double t3053;
  double t3057;
  double t3121;
  double t3186;
  double t3194;
  double t3445;
  double t3461;
  double t3466;
  double t3467;
  double t3267;
  double t2249;
  double t2274;
  double t3861;
  double t3870;
  double t3885;
  double t3888;
  double t3889;
  double t3904;
  double t3906;
  double t3930;
  double t3667;
  double t3691;
  double t3697;
  double t2846;
  double t2868;
  double t3116;
  double t3149;
  double t3163;
  double t3171;
  double t3227;
  double t3229;
  double t3269;
  double t3270;
  double t3274;
  double t3279;
  double t3284;
  double t3303;
  double t2190;
  double t4042;
  double t3757;
  double t4340;
  double t4343;
  double t4347;
  double t4374;
  double t4044;
  double t3314;
  double t3360;
  double t3361;
  double t4047;
  double t3373;
  double t3389;
  double t3391;
  double t3395;
  double t4049;
  double t4079;
  double t4099;
  double t4103;
  double t4127;
  double t4177;
  double t4206;
  double t4208;
  double t4224;
  double t4225;
  double t4226;
  double t4237;
  double t4239;
  double t4250;
  double t4259;
  double t4285;
  double t4286;
  double t4296;
  double t4297;
  double t3465;
  double t3495;
  double t3496;
  double t4389;
  double t4404;
  double t3513;
  double t3565;
  double t3579;
  double t4466;
  double t4592;
  double t4596;
  double t4491;
  double t4961;
  double t4982;
  double t4991;
  double t4999;
  double t5004;
  double t5087;
  double t5090;
  double t5095;
  double t5108;
  double t5113;
  double t4918;
  double t4923;
  double t4929;
  double t3405;
  double t3500;
  double t3610;
  double t3612;
  double t3625;
  double t5214;
  double t4534;
  double t4551;
  double t4571;
  double t4582;
  double t4598;
  double t4602;
  double t4603;
  double t4615;
  double t4627;
  double t4631;
  double t4699;
  double t4742;
  double t4747;
  double t4783;
  double t4789;
  double t4797;
  double t4808;
  double t4813;
  double t4834;
  double t4876;
  double t4877;
  double t4879;
  double t4880;
  double t5264;
  double t4532;
  double t4912;
  double t4944;
  double t4949;
  double t4957;
  double t4960;
  double t5085;
  double t5172;
  double t5465;
  double t5468;
  double t5482;
  double t5444;
  double t5446;
  double t5460;
  double t5202;
  t855 = Cos(var1[6]);
  t734 = Cos(var1[7]);
  t738 = Sin(var1[6]);
  t872 = Sin(var1[7]);
  t565 = Sin(var1[2]);
  t817 = -1.*t734*t738;
  t881 = -1.*t855*t872;
  t895 = t817 + t881;
  t899 = -1.*t565*t895;
  t975 = Cos(var1[2]);
  t987 = t855*t734;
  t1033 = -1.*t738*t872;
  t1232 = t987 + t1033;
  t1273 = -1.*t975*t1232;
  t1292 = t899 + t1273;
  t1389 = -1.*t734;
  t1427 = 1. + t1389;
  t1464 = -0.9063*t1427;
  t1474 = -1.0567*t734;
  t1569 = t1464 + t1474;
  t1912 = -1.*t565*t1232;
  t1813 = t734*t738;
  t1826 = t855*t872;
  t1867 = t1813 + t1826;
  t1905 = -1.*t975*t1867;
  t1956 = t1905 + t1912;
  t2129 = t975*t1232;
  t2159 = t565*t1232;
  t2145 = t565*t895;
  t2150 = t2145 + t2129;
  t2121 = -1.*t565*t1867;
  t2131 = t2121 + t2129;
  t2045 = t975*t895;
  t2087 = t2045 + t1912;
  t2195 = t975*t1867;
  t2201 = t2195 + t2159;
  t2439 = 0.4999*t738;
  t2442 = t1569*t738;
  t2473 = -0.15039999999999998*t855*t872;
  t2534 = t2439 + t2442 + t2473;
  t2573 = -1.*t855;
  t2583 = 1. + t2573;
  t2595 = -0.4999*t2583;
  t2601 = t855*t1569;
  t2604 = 0.15039999999999998*t738*t872;
  t2610 = t2595 + t2601 + t2604;
  t1784 = 0.4999*t872;
  t1794 = t1569*t872;
  t1799 = 0.15039999999999998*t734*t872;
  t1808 = t1784 + t1794 + t1799;
  t1352 = 0.4999*t734;
  t1622 = t1569*t734;
  t1678 = Power(t872,2);
  t1699 = -0.15039999999999998*t1678;
  t1708 = t1352 + t1622 + t1699;
  t2797 = -1.*t855*t734;
  t2803 = t738*t872;
  t2805 = t2797 + t2803;
  t2816 = t975*t2805;
  t2828 = t899 + t2816;
  t2158 = -1.*t975*t895;
  t2943 = t565*t2805;
  t2949 = t2045 + t2943;
  t2549 = -1.*t2534*t1232;
  t2619 = -1.*t895*t2610;
  t2640 = t2549 + t2619;
  t2684 = t2534*t1867;
  t2704 = t1232*t2610;
  t2734 = t2684 + t2704;
  t3087 = -0.4999*t738;
  t3093 = -1.*t1569*t738;
  t3105 = 0.15039999999999998*t855*t872;
  t3113 = t3087 + t3093 + t3105;
  t3126 = 0.4999*t855;
  t3147 = t3126 + t2601 + t2604;
  t2831 = -0.26996047999999995*var2[7]*t2828;
  t2838 = 3.5899*t1808*t2087;
  t2845 = 3.5899*t1708*t2828;
  t2872 = 7.1798*t2131*t2087;
  t2874 = 3.5899*t2150*t1956;
  t2909 = 3.5899*t1292*t2201;
  t2920 = 7.1798*t2087*t2828;
  t2930 = -1.*t565*t2805;
  t2931 = t2158 + t2930;
  t2942 = 3.5899*t2150*t2931;
  t2951 = 3.5899*t1292*t2949;
  t2963 = t2872 + t2874 + t2909 + t2920 + t2942 + t2951;
  t2967 = 0.5*var2[1]*t2963;
  t2977 = 7.1798*t2150*t2131;
  t2986 = 7.1798*t2087*t2201;
  t3004 = 7.1798*t2150*t2828;
  t3007 = 7.1798*t2087*t2949;
  t3015 = t2977 + t2986 + t3004 + t3007;
  t3034 = 0.5*var2[0]*t3015;
  t3053 = 3.5899*t2087*t2640;
  t3057 = t2534*t1232;
  t3121 = t895*t2610;
  t3186 = 3.5899*t2734*t2828;
  t3194 = -1.*t895*t2534;
  t3445 = 0.15039999999999998*t734*t738;
  t3461 = t3445 + t3105;
  t3466 = -0.15039999999999998*t855*t734;
  t3467 = t3466 + t2604;
  t3267 = -1.*t2610*t2805;
  t2249 = Power(t2131,2);
  t2274 = Power(t2087,2);
  t3861 = 3.5899*t1292*t2150;
  t3870 = 3.5899*t2249;
  t3885 = 3.5899*t2274;
  t3888 = 3.5899*t1956*t2201;
  t3889 = t3861 + t3870 + t3885 + t3888;
  t3904 = 3.5899*t2131*t2640;
  t3906 = 3.5899*t2087*t2734;
  t3930 = t3904 + t3906;
  t3667 = 3.5899*t1808*t2131;
  t3691 = 3.5899*t1708*t2087;
  t3697 = t3667 + t3691;
  t2846 = t2838 + t2845;
  t2868 = 0.5*var2[6]*t2846;
  t3116 = t3113*t1232;
  t3149 = t1867*t3147;
  t3163 = t3057 + t3116 + t3121 + t3149;
  t3171 = 3.5899*t2087*t3163;
  t3227 = -1.*t895*t3113;
  t3229 = -1.*t1232*t3147;
  t3269 = t3194 + t3227 + t3229 + t3267;
  t3270 = 3.5899*t2131*t3269;
  t3274 = t3053 + t3171 + t3186 + t3270;
  t3279 = 0.5*var2[2]*t3274;
  t3284 = t2831 + t2868 + t2967 + t3034 + t3279;
  t3303 = var2[0]*t3284;
  t2190 = t565*t1867;
  t4042 = t2190 + t2816;
  t3757 = 7.1798*t2150*t2087;
  t4340 = -0.4999*t855;
  t4343 = -1.*t855*t1569;
  t4347 = -0.15039999999999998*t738*t872;
  t4374 = t4340 + t4343 + t4347;
  t4044 = -0.26996047999999995*var2[7]*t4042;
  t3314 = Power(t734,2);
  t3360 = 0.15039999999999998*t3314;
  t3361 = 0. + t1352 + t1622 + t3360;
  t4047 = 3.5899*t1708*t4042;
  t3373 = -0.4999*t872;
  t3389 = -1.*t1569*t872;
  t3391 = -0.15039999999999998*t734*t872;
  t3395 = t3373 + t3389 + t3391;
  t4049 = 3.5899*t1808*t2949;
  t4079 = 3.5899*t2201*t2828;
  t4099 = 3.5899*t2087*t4042;
  t4103 = t2195 + t2930;
  t4127 = 3.5899*t2150*t4103;
  t4177 = 3.5899*t2131*t2949;
  t4206 = 7.1798*t2828*t2949;
  t4208 = t3757 + t4079 + t4099 + t4127 + t4177 + t4206;
  t4224 = 0.5*var2[1]*t4208;
  t4225 = Power(t2150,2);
  t4226 = 7.1798*t4225;
  t4237 = 7.1798*t2150*t4042;
  t4239 = 7.1798*t2201*t2949;
  t4250 = Power(t2949,2);
  t4259 = 7.1798*t4250;
  t4285 = t4226 + t4237 + t4239 + t4259;
  t4286 = 0.5*var2[0]*t4285;
  t4296 = 3.5899*t2734*t4042;
  t4297 = 3.5899*t2640*t2949;
  t3465 = t3461*t1232;
  t3495 = t1867*t3467;
  t3496 = t3057 + t3465 + t3121 + t3495;
  t4389 = -1.*t1867*t2610;
  t4404 = -1.*t2534*t2805;
  t3513 = -1.*t895*t3461;
  t3565 = -1.*t1232*t3467;
  t3579 = t3194 + t3513 + t3565 + t3267;
  t4466 = t895*t2534;
  t4592 = 0.15039999999999998*t855*t734;
  t4596 = t4592 + t4347;
  t4491 = t2610*t2805;
  t4961 = 3.5899*t2150*t2131;
  t4982 = 3.5899*t2087*t2201;
  t4991 = 3.5899*t2150*t2828;
  t4999 = 3.5899*t2087*t2949;
  t5004 = t4961 + t4982 + t4991 + t4999;
  t5087 = 3.5899*t2150*t2640;
  t5090 = 3.5899*t2150*t3163;
  t5095 = 3.5899*t2734*t2949;
  t5108 = 3.5899*t2201*t3269;
  t5113 = t5087 + t5090 + t5095 + t5108;
  t4918 = 3.5899*t1808*t2150;
  t4923 = 3.5899*t1708*t2949;
  t4929 = t4918 + t4923;
  t3405 = 3.5899*t3395*t2087;
  t3500 = 3.5899*t2087*t3496;
  t3610 = 3.5899*t2131*t3579;
  t3612 = t3053 + t3500 + t3186 + t3610;
  t3625 = 0.5*var2[2]*t3612;
  t5214 = t1352 + t1622 + t3360;
  t4534 = 3.5899*t3395*t2949;
  t4551 = 3.5899*t3163*t2949;
  t4571 = 3.5899*t3496*t2949;
  t4582 = -1.*t3461*t1232;
  t4598 = -1.*t895*t4596;
  t4602 = -1.*t895*t3147;
  t4603 = -1.*t895*t3467;
  t4615 = -1.*t3113*t2805;
  t4627 = -1.*t3461*t2805;
  t4631 = t4582 + t4598 + t4389 + t4602 + t4603 + t4404 + t4615 + t4627;
  t4699 = 3.5899*t2201*t4631;
  t4742 = 3.5899*t2150*t3269;
  t4747 = 3.5899*t2150*t3579;
  t4783 = t895*t3113;
  t4789 = t895*t3461;
  t4797 = t3461*t1867;
  t4808 = t1232*t4596;
  t4813 = t1232*t3147;
  t4834 = t1232*t3467;
  t4876 = t4466 + t4783 + t4789 + t4797 + t4808 + t4813 + t4834 + t4491;
  t4877 = 3.5899*t2150*t4876;
  t4879 = t4296 + t4297 + t4551 + t4571 + t4699 + t4742 + t4747 + t4877;
  t4880 = 0.5*var2[2]*t4879;
  t5264 = 3.5899*t5214*t2150;
  t4532 = 3.5899*t3361*t2150;
  t4912 = -0.26996047999999995*var2[7]*t2949;
  t4944 = 7.1798*t2150*t2201;
  t4949 = 7.1798*t2150*t2949;
  t4957 = t4944 + t4949;
  t4960 = var2[0]*t4957;
  t5085 = 0.5*var2[1]*t5004;
  t5172 = 0.5*var2[0]*t5004;
  t5465 = 3.5899*t2150*t3496;
  t5468 = 3.5899*t2201*t3579;
  t5482 = t5087 + t5465 + t5095 + t5468;
  t5444 = 3.5899*t3395*t2150;
  t5446 = 3.5899*t5214*t2201;
  t5460 = t5444 + t4918 + t5446 + t4923;
  t5202 = -0.26996047999999995*var2[0]*t2949;
  p_output1[0]=var2[0]*(0.5*(7.1798*t1292*t2150 + 7.1798*t1956*t2201 + 7.1798*t2249 + 7.1798*t2274)*var2[0] + 0.5*(10.7697*t1292*t2087 + 10.7697*t1956*t2131 + 3.5899*t2150*(t2158 + t2159) + 3.5899*(t1273 + t2190)*t2201)*var2[1] + 0.5*(3.5899*t1956*t2640 + 3.5899*t1292*t2734)*var2[2] + 0.5*(3.5899*t1292*t1708 + 3.5899*t1808*t1956)*var2[6] - 0.26996047999999995*t1292*var2[7]);
  p_output1[1]=t3303;
  p_output1[2]=var2[0]*(t2831 + t2967 + t3034 + t3625 + 0.5*(t2838 + t2845 + 3.5899*t2131*t3361 + t3405)*var2[6]);
  p_output1[3]=(7.1798*t2131*t2201 + t3757)*var2[0] + 0.5*t3889*var2[1] + 0.5*t3930*var2[2] + 0.5*t3697*var2[6] - 0.26996047999999995*t2087*var2[7];
  p_output1[4]=0.5*t3889*var2[0];
  p_output1[5]=0.5*t3930*var2[0];
  p_output1[6]=0.5*t3697*var2[0];
  p_output1[7]=-0.26996047999999995*t2087*var2[0];
  p_output1[8]=t3303;
  p_output1[9]=var2[0]*(t4044 + t4224 + t4286 + 0.5*(7.1798*t2949*t3163 + 7.1798*t2150*t3269 + t4296 + t4297 + 3.5899*t2150*(t1867*t3113 + 2.*t1232*t3147 + t1232*t4374 + t4466 + t4491 + 2.*t3113*t895) + 3.5899*t2201*(-1.*t1232*t3113 - 2.*t2805*t3113 + t4389 + t4404 - 2.*t3147*t895 - 1.*t4374*t895))*var2[2] + 0.5*(t4047 + t4049)*var2[6]);
  p_output1[10]=var2[0]*(t4044 + t4224 + t4286 + t4880 + 0.5*(t4047 + t4049 + t4532 + t4534)*var2[6]);
  p_output1[11]=t4912 + t4960 + t5085 + 0.5*t5113*var2[2] + 0.5*t4929*var2[6];
  p_output1[12]=t5172;
  p_output1[13]=0.5*t5113*var2[0];
  p_output1[14]=0.5*t4929*var2[0];
  p_output1[15]=t5202;
  p_output1[16]=var2[0]*(t2831 + t2967 + t3034 + t3625 + 0.5*(t2838 + t2845 + t3405 + 3.5899*t2131*t5214)*var2[6]);
  p_output1[17]=var2[0]*(t4044 + t4224 + t4286 + t4880 + 0.5*(t4047 + t4049 + t4534 + t5264)*var2[6]);
  p_output1[18]=var2[0]*(t4044 + t4224 + t4286 + 0.5*(7.1798*t2949*t3496 + 7.1798*t2150*t3579 + t4296 + t4297 + 3.5899*t2150*(2.*t1232*t3467 + t4466 + t4491 + t4797 + t4808 + 2.*t3461*t895) + 3.5899*t2201*(-2.*t2805*t3461 + t4389 + t4404 + t4582 + t4598 - 2.*t3467*t895))*var2[2] + 0.5*(3.5899*t2201*t3395 + 7.1798*t2949*t3395 + t4047 + t4049 + t4532 + t5264 + 3.5899*t2150*(0. - 0.15039999999999998*t3314 - 0.4999*t734 - 1.*t1569*t734))*var2[6]);
  p_output1[19]=t4912 + t4960 + t5085 + 0.5*t5482*var2[2] + 0.5*t5460*var2[6];
  p_output1[20]=t5172;
  p_output1[21]=0.5*t5482*var2[0];
  p_output1[22]=0.5*t5460*var2[0];
  p_output1[23]=t5202;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 24, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L6_J1_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L6_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
