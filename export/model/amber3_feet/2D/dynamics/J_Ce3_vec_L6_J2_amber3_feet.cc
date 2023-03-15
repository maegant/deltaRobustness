/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:29:07 GMT-08:00
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
  double t683;
  double t377;
  double t518;
  double t770;
  double t978;
  double t61;
  double t983;
  double t987;
  double t1042;
  double t1342;
  double t1352;
  double t1373;
  double t1464;
  double t1474;
  double t583;
  double t894;
  double t962;
  double t973;
  double t1126;
  double t1227;
  double t1756;
  double t1698;
  double t1699;
  double t1703;
  double t1708;
  double t1759;
  double t2132;
  double t1956;
  double t1959;
  double t2171;
  double t2185;
  double t2045;
  double t2087;
  double t2098;
  double t2131;
  double t2145;
  double t2362;
  double t2369;
  double t2412;
  double t2430;
  double t2442;
  double t2448;
  double t2473;
  double t2477;
  double t2595;
  double t2601;
  double t1292;
  double t1591;
  double t1622;
  double t1678;
  double t1794;
  double t1799;
  double t1808;
  double t1813;
  double t1826;
  double t2794;
  double t2803;
  double t2816;
  double t2828;
  double t2831;
  double t2227;
  double t2237;
  double t2249;
  double t2266;
  double t2931;
  double t2942;
  double t2439;
  double t2604;
  double t2640;
  double t2684;
  double t2704;
  double t2734;
  double t3121;
  double t3126;
  double t3149;
  double t3163;
  double t3186;
  double t3205;
  double t2838;
  double t2845;
  double t2872;
  double t2909;
  double t2920;
  double t2943;
  double t2949;
  double t2951;
  double t2952;
  double t2977;
  double t2986;
  double t3004;
  double t3007;
  double t3050;
  double t3053;
  double t3057;
  double t3074;
  double t3087;
  double t3098;
  double t3105;
  double t3116;
  double t3184;
  double t3303;
  double t3314;
  double t3617;
  double t3627;
  double t3661;
  double t3667;
  double t3362;
  double t3888;
  double t3890;
  double t3904;
  double t3906;
  double t3910;
  double t3954;
  double t3963;
  double t4079;
  double t4099;
  double t4103;
  double t4001;
  double t4035;
  double t4038;
  double t2874;
  double t2891;
  double t3171;
  double t3269;
  double t3270;
  double t3284;
  double t3360;
  double t3361;
  double t3363;
  double t3373;
  double t3391;
  double t3395;
  double t3405;
  double t3408;
  double t4177;
  double t4496;
  double t4508;
  double t4512;
  double t4524;
  double t4199;
  double t3466;
  double t3495;
  double t3496;
  double t3421;
  double t3435;
  double t3445;
  double t3464;
  double t4206;
  double t4225;
  double t4239;
  double t4250;
  double t4259;
  double t4296;
  double t4297;
  double t4304;
  double t4307;
  double t4340;
  double t4347;
  double t4384;
  double t4391;
  double t4395;
  double t4425;
  double t4443;
  double t4449;
  double t4463;
  double t4468;
  double t3628;
  double t3691;
  double t3716;
  double t4477;
  double t4531;
  double t4549;
  double t3771;
  double t3783;
  double t3835;
  double t4629;
  double t4944;
  double t4949;
  double t4742;
  double t5244;
  double t5273;
  double t5276;
  double t5283;
  double t5284;
  double t5385;
  double t5389;
  double t5395;
  double t5396;
  double t5402;
  double t5300;
  double t5314;
  double t5329;
  double t3465;
  double t3757;
  double t3844;
  double t3850;
  double t3861;
  double t5424;
  double t4877;
  double t4918;
  double t4923;
  double t4932;
  double t4957;
  double t4961;
  double t4982;
  double t4991;
  double t4999;
  double t5081;
  double t5087;
  double t5090;
  double t5095;
  double t5108;
  double t5143;
  double t5156;
  double t5178;
  double t5190;
  double t5202;
  double t5214;
  double t5216;
  double t5228;
  double t5230;
  double t5463;
  double t4876;
  double t5291;
  double t5292;
  double t5337;
  double t5343;
  double t5377;
  double t5711;
  double t5714;
  double t5737;
  double t5675;
  double t5683;
  double t5694;
  double t5418;
  t683 = Cos(var1[6]);
  t377 = Cos(var1[7]);
  t518 = Sin(var1[6]);
  t770 = Sin(var1[7]);
  t978 = Sin(var1[2]);
  t61 = Cos(var1[2]);
  t983 = t683*t377;
  t987 = -1.*t518*t770;
  t1042 = t983 + t987;
  t1342 = -1.*t377;
  t1352 = 1. + t1342;
  t1373 = -0.9063*t1352;
  t1464 = -1.0567*t377;
  t1474 = t1373 + t1464;
  t583 = -1.*t377*t518;
  t894 = -1.*t683*t770;
  t962 = t583 + t894;
  t973 = -1.*t61*t962;
  t1126 = t978*t1042;
  t1227 = t973 + t1126;
  t1756 = -1.*t61*t1042;
  t1698 = t377*t518;
  t1699 = t683*t770;
  t1703 = t1698 + t1699;
  t1708 = t978*t1703;
  t1759 = t1708 + t1756;
  t2132 = -1.*t978*t1042;
  t1956 = -1.*t978*t962;
  t1959 = t1956 + t1756;
  t2171 = t61*t962;
  t2185 = t2171 + t2132;
  t2045 = -1.*t978*t1703;
  t2087 = t61*t1042;
  t2098 = t2045 + t2087;
  t2131 = -1.*t61*t1703;
  t2145 = t2131 + t2132;
  t2362 = 0.4999*t518;
  t2369 = t1474*t518;
  t2412 = -0.15039999999999998*t683*t770;
  t2430 = t2362 + t2369 + t2412;
  t2442 = -1.*t683;
  t2448 = 1. + t2442;
  t2473 = -0.4999*t2448;
  t2477 = t683*t1474;
  t2595 = 0.15039999999999998*t518*t770;
  t2601 = t2473 + t2477 + t2595;
  t1292 = 0.4999*t770;
  t1591 = t1474*t770;
  t1622 = 0.15039999999999998*t377*t770;
  t1678 = t1292 + t1591 + t1622;
  t1794 = 0.4999*t377;
  t1799 = t1474*t377;
  t1808 = Power(t770,2);
  t1813 = -0.15039999999999998*t1808;
  t1826 = t1794 + t1799 + t1813;
  t2794 = -1.*t683*t377;
  t2803 = t518*t770;
  t2816 = t2794 + t2803;
  t2828 = -1.*t978*t2816;
  t2831 = t973 + t2828;
  t2227 = t978*t962;
  t2237 = t2227 + t2087;
  t2249 = t61*t1703;
  t2266 = t2249 + t1126;
  t2931 = t61*t2816;
  t2942 = t1956 + t2931;
  t2439 = -1.*t2430*t1042;
  t2604 = -1.*t962*t2601;
  t2640 = t2439 + t2604;
  t2684 = t2430*t1703;
  t2704 = t1042*t2601;
  t2734 = t2684 + t2704;
  t3121 = -0.4999*t518;
  t3126 = -1.*t1474*t518;
  t3149 = 0.15039999999999998*t683*t770;
  t3163 = t3121 + t3126 + t3149;
  t3186 = 0.4999*t683;
  t3205 = t3186 + t2477 + t2595;
  t2838 = -0.26996047999999995*var2[7]*t2831;
  t2845 = 3.5899*t1678*t1959;
  t2872 = 3.5899*t1826*t2831;
  t2909 = 7.1798*t1959*t2098;
  t2920 = 7.1798*t2185*t2145;
  t2943 = 7.1798*t1959*t2942;
  t2949 = 7.1798*t2185*t2831;
  t2951 = t2909 + t2920 + t2943 + t2949;
  t2952 = 0.5*var2[1]*t2951;
  t2977 = 7.1798*t2098*t2185;
  t2986 = 3.5899*t2237*t2145;
  t3004 = 3.5899*t1959*t2266;
  t3007 = 7.1798*t2185*t2942;
  t3050 = 3.5899*t2237*t2831;
  t3053 = t978*t2816;
  t3057 = t2171 + t3053;
  t3074 = 3.5899*t1959*t3057;
  t3087 = t2977 + t2986 + t3004 + t3007 + t3050 + t3074;
  t3098 = 0.5*var2[0]*t3087;
  t3105 = 3.5899*t1959*t2640;
  t3116 = t2430*t1042;
  t3184 = t962*t2601;
  t3303 = 3.5899*t2734*t2831;
  t3314 = -1.*t962*t2430;
  t3617 = 0.15039999999999998*t377*t518;
  t3627 = t3617 + t3149;
  t3661 = -0.15039999999999998*t683*t377;
  t3667 = t3661 + t2595;
  t3362 = -1.*t2601*t2816;
  t3888 = 3.5899*t1959*t2237;
  t3890 = Power(t2098,2);
  t3904 = 3.5899*t3890;
  t3906 = Power(t2185,2);
  t3910 = 3.5899*t3906;
  t3954 = 3.5899*t2145*t2266;
  t3963 = t3888 + t3904 + t3910 + t3954;
  t4079 = 3.5899*t2145*t2640;
  t4099 = 3.5899*t1959*t2734;
  t4103 = t4079 + t4099;
  t4001 = 3.5899*t1826*t1959;
  t4035 = 3.5899*t1678*t2145;
  t4038 = t4001 + t4035;
  t2874 = t2845 + t2872;
  t2891 = 0.5*var2[6]*t2874;
  t3171 = t3163*t1042;
  t3269 = t1703*t3205;
  t3270 = t3116 + t3171 + t3184 + t3269;
  t3284 = 3.5899*t1959*t3270;
  t3360 = -1.*t962*t3163;
  t3361 = -1.*t1042*t3205;
  t3363 = t3314 + t3360 + t3361 + t3362;
  t3373 = 3.5899*t2145*t3363;
  t3391 = t3105 + t3284 + t3303 + t3373;
  t3395 = 0.5*var2[2]*t3391;
  t3405 = t2838 + t2891 + t2952 + t3098 + t3395;
  t3408 = var2[1]*t3405;
  t4177 = t2249 + t2828;
  t4496 = -0.4999*t683;
  t4508 = -1.*t683*t1474;
  t4512 = -0.15039999999999998*t518*t770;
  t4524 = t4496 + t4508 + t4512;
  t4199 = -0.26996047999999995*var2[7]*t4177;
  t3466 = Power(t377,2);
  t3495 = 0.15039999999999998*t3466;
  t3496 = 0. + t1794 + t1799 + t3495;
  t3421 = -0.4999*t770;
  t3435 = -1.*t1474*t770;
  t3445 = -0.15039999999999998*t377*t770;
  t3464 = t3421 + t3435 + t3445;
  t4206 = 3.5899*t1678*t2942;
  t4225 = 3.5899*t1826*t4177;
  t4239 = 7.1798*t3906;
  t4250 = 7.1798*t2098*t2942;
  t4259 = Power(t2942,2);
  t4296 = 7.1798*t4259;
  t4297 = 7.1798*t2185*t4177;
  t4304 = t4239 + t4250 + t4296 + t4297;
  t4307 = 0.5*var2[1]*t4304;
  t4340 = 7.1798*t2237*t2185;
  t4347 = 3.5899*t2266*t2942;
  t4384 = t1708 + t2931;
  t4391 = 3.5899*t2185*t4384;
  t4395 = 3.5899*t2237*t4177;
  t4425 = 3.5899*t2098*t3057;
  t4443 = 7.1798*t2942*t3057;
  t4449 = t4340 + t4347 + t4391 + t4395 + t4425 + t4443;
  t4463 = 0.5*var2[0]*t4449;
  t4468 = 3.5899*t2640*t2942;
  t3628 = t3627*t1042;
  t3691 = t1703*t3667;
  t3716 = t3116 + t3628 + t3184 + t3691;
  t4477 = 3.5899*t2734*t4177;
  t4531 = -1.*t1703*t2601;
  t4549 = -1.*t2430*t2816;
  t3771 = -1.*t962*t3627;
  t3783 = -1.*t1042*t3667;
  t3835 = t3314 + t3771 + t3783 + t3362;
  t4629 = t962*t2430;
  t4944 = 0.15039999999999998*t683*t377;
  t4949 = t4944 + t4512;
  t4742 = t2601*t2816;
  t5244 = 3.5899*t2237*t2098;
  t5273 = 3.5899*t2185*t2266;
  t5276 = 3.5899*t2237*t2942;
  t5283 = 3.5899*t2185*t3057;
  t5284 = t5244 + t5273 + t5276 + t5283;
  t5385 = 3.5899*t2185*t2640;
  t5389 = 3.5899*t2185*t3270;
  t5395 = 3.5899*t2734*t2942;
  t5396 = 3.5899*t2098*t3363;
  t5402 = t5385 + t5389 + t5395 + t5396;
  t5300 = 3.5899*t1678*t2185;
  t5314 = 3.5899*t1826*t2942;
  t5329 = t5300 + t5314;
  t3465 = 3.5899*t3464*t1959;
  t3757 = 3.5899*t1959*t3716;
  t3844 = 3.5899*t2145*t3835;
  t3850 = t3105 + t3757 + t3303 + t3844;
  t3861 = 0.5*var2[2]*t3850;
  t5424 = t1794 + t1799 + t3495;
  t4877 = 3.5899*t3464*t2942;
  t4918 = 3.5899*t3270*t2942;
  t4923 = 3.5899*t3716*t2942;
  t4932 = -1.*t3627*t1042;
  t4957 = -1.*t962*t4949;
  t4961 = -1.*t962*t3205;
  t4982 = -1.*t962*t3667;
  t4991 = -1.*t3163*t2816;
  t4999 = -1.*t3627*t2816;
  t5081 = t4932 + t4957 + t4531 + t4961 + t4982 + t4549 + t4991 + t4999;
  t5087 = 3.5899*t2098*t5081;
  t5090 = 3.5899*t2185*t3363;
  t5095 = 3.5899*t2185*t3835;
  t5108 = t962*t3163;
  t5143 = t962*t3627;
  t5156 = t3627*t1703;
  t5178 = t1042*t4949;
  t5190 = t1042*t3205;
  t5202 = t1042*t3667;
  t5214 = t4629 + t5108 + t5143 + t5156 + t5178 + t5190 + t5202 + t4742;
  t5216 = 3.5899*t2185*t5214;
  t5228 = t4468 + t4918 + t4923 + t4477 + t5087 + t5090 + t5095 + t5216;
  t5230 = 0.5*var2[2]*t5228;
  t5463 = 3.5899*t5424*t2185;
  t4876 = 3.5899*t3496*t2185;
  t5291 = 0.5*var2[1]*t5284;
  t5292 = -0.26996047999999995*var2[7]*t2942;
  t5337 = t2977 + t3007;
  t5343 = var2[1]*t5337;
  t5377 = 0.5*var2[0]*t5284;
  t5711 = 3.5899*t2185*t3716;
  t5714 = 3.5899*t2098*t3835;
  t5737 = t5385 + t5711 + t5395 + t5714;
  t5675 = 3.5899*t5424*t2098;
  t5683 = 3.5899*t3464*t2185;
  t5694 = t5675 + t5683 + t5300 + t5314;
  t5418 = -0.26996047999999995*var2[1]*t2942;
  p_output1[0]=var2[1]*(0.5*(10.7697*t2098*t2145 + 10.7697*t1959*t2185 + 3.5899*t1227*t2237 + 3.5899*t1759*t2266)*var2[0] + 0.5*(7.1798*Power(t1959,2) + 7.1798*t1759*t2098 + 7.1798*Power(t2145,2) + 7.1798*t1227*t2185)*var2[1] + 0.5*(3.5899*t1759*t2640 + 3.5899*t1227*t2734)*var2[2] + 0.5*(3.5899*t1678*t1759 + 3.5899*t1227*t1826)*var2[6] - 0.26996047999999995*t1227*var2[7]);
  p_output1[1]=t3408;
  p_output1[2]=var2[1]*(t2838 + t2952 + t3098 + t3861 + 0.5*(t2845 + t2872 + t3465 + 3.5899*t2145*t3496)*var2[6]);
  p_output1[3]=0.5*t3963*var2[1];
  p_output1[4]=0.5*t3963*var2[0] + (7.1798*t2098*t2145 + 7.1798*t1959*t2185)*var2[1] + 0.5*t4103*var2[2] + 0.5*t4038*var2[6] - 0.26996047999999995*t1959*var2[7];
  p_output1[5]=0.5*t4103*var2[1];
  p_output1[6]=0.5*t4038*var2[1];
  p_output1[7]=-0.26996047999999995*t1959*var2[1];
  p_output1[8]=t3408;
  p_output1[9]=var2[1]*(t4199 + t4307 + t4463 + 0.5*(7.1798*t2942*t3270 + 7.1798*t2185*t3363 + t4468 + t4477 + 3.5899*t2185*(t1703*t3163 + 2.*t1042*t3205 + t1042*t4524 + t4629 + t4742 + 2.*t3163*t962) + 3.5899*t2098*(-1.*t1042*t3163 - 2.*t2816*t3163 + t4531 + t4549 - 2.*t3205*t962 - 1.*t4524*t962))*var2[2] + 0.5*(t4206 + t4225)*var2[6]);
  p_output1[10]=var2[1]*(t4199 + t4307 + t4463 + t5230 + 0.5*(t4206 + t4225 + t4876 + t4877)*var2[6]);
  p_output1[11]=t5291;
  p_output1[12]=t5292 + t5343 + t5377 + 0.5*t5402*var2[2] + 0.5*t5329*var2[6];
  p_output1[13]=0.5*t5402*var2[1];
  p_output1[14]=0.5*t5329*var2[1];
  p_output1[15]=t5418;
  p_output1[16]=var2[1]*(t2838 + t2952 + t3098 + t3861 + 0.5*(t2845 + t2872 + t3465 + 3.5899*t2145*t5424)*var2[6]);
  p_output1[17]=var2[1]*(t4199 + t4307 + t4463 + t5230 + 0.5*(t4206 + t4225 + t4877 + t5463)*var2[6]);
  p_output1[18]=var2[1]*(t4199 + t4307 + t4463 + 0.5*(7.1798*t2942*t3716 + 7.1798*t2185*t3835 + t4468 + t4477 + 3.5899*t2185*(2.*t1042*t3667 + t4629 + t4742 + t5156 + t5178 + 2.*t3627*t962) + 3.5899*t2098*(-2.*t2816*t3627 + t4531 + t4549 + t4932 + t4957 - 2.*t3667*t962))*var2[2] + 0.5*(3.5899*t2098*t3464 + 7.1798*t2942*t3464 + 3.5899*t2185*(0. - 0.15039999999999998*t3466 - 0.4999*t377 - 1.*t1474*t377) + t4206 + t4225 + t4876 + t5463)*var2[6]);
  p_output1[19]=t5291;
  p_output1[20]=t5292 + t5343 + t5377 + 0.5*t5737*var2[2] + 0.5*t5694*var2[6];
  p_output1[21]=0.5*t5737*var2[1];
  p_output1[22]=0.5*t5694*var2[1];
  p_output1[23]=t5418;
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

#include "J_Ce3_vec_L6_J2_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L6_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
