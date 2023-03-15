/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:20 GMT-08:00
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
  double t788;
  double t649;
  double t668;
  double t841;
  double t465;
  double t698;
  double t856;
  double t858;
  double t916;
  double t971;
  double t985;
  double t991;
  double t997;
  double t1062;
  double t1074;
  double t1199;
  double t1318;
  double t1346;
  double t1348;
  double t1354;
  double t1767;
  double t1702;
  double t1712;
  double t1713;
  double t1734;
  double t1817;
  double t1875;
  double t1970;
  double t1895;
  double t1898;
  double t1859;
  double t1889;
  double t1840;
  double t1846;
  double t2037;
  double t2057;
  double t2153;
  double t2154;
  double t2165;
  double t2166;
  double t2182;
  double t2193;
  double t2202;
  double t2211;
  double t2218;
  double t2223;
  double t1634;
  double t1657;
  double t1675;
  double t1684;
  double t1183;
  double t1428;
  double t1521;
  double t1551;
  double t1593;
  double t2340;
  double t2351;
  double t2371;
  double t2382;
  double t2417;
  double t1960;
  double t2555;
  double t2572;
  double t2175;
  double t2226;
  double t2234;
  double t2294;
  double t2303;
  double t2307;
  double t2707;
  double t2715;
  double t2721;
  double t2738;
  double t2762;
  double t2777;
  double t2418;
  double t2423;
  double t2435;
  double t2488;
  double t2513;
  double t2522;
  double t2524;
  double t2525;
  double t2531;
  double t2542;
  double t2581;
  double t2582;
  double t2594;
  double t2629;
  double t2630;
  double t2634;
  double t2645;
  double t2697;
  double t2700;
  double t2702;
  double t2705;
  double t2753;
  double t2889;
  double t2892;
  double t3217;
  double t3232;
  double t3245;
  double t3246;
  double t2939;
  double t2105;
  double t2124;
  double t3481;
  double t3483;
  double t3488;
  double t3490;
  double t3491;
  double t3499;
  double t3502;
  double t3504;
  double t3419;
  double t3432;
  double t3443;
  double t2461;
  double t2471;
  double t2749;
  double t2868;
  double t2879;
  double t2887;
  double t2894;
  double t2914;
  double t2982;
  double t2993;
  double t3009;
  double t3024;
  double t3030;
  double t3032;
  double t2017;
  double t3554;
  double t3458;
  double t3797;
  double t3798;
  double t3802;
  double t3807;
  double t3572;
  double t3033;
  double t3037;
  double t3051;
  double t3590;
  double t3112;
  double t3122;
  double t3138;
  double t3151;
  double t3598;
  double t3601;
  double t3632;
  double t3635;
  double t3637;
  double t3675;
  double t3686;
  double t3689;
  double t3700;
  double t3743;
  double t3752;
  double t3758;
  double t3769;
  double t3773;
  double t3775;
  double t3781;
  double t3786;
  double t3789;
  double t3792;
  double t3244;
  double t3247;
  double t3255;
  double t3822;
  double t3841;
  double t3288;
  double t3300;
  double t3354;
  double t3880;
  double t4105;
  double t4120;
  double t3918;
  double t4450;
  double t4454;
  double t4456;
  double t4458;
  double t4459;
  double t4471;
  double t4475;
  double t4480;
  double t4494;
  double t4495;
  double t4298;
  double t4322;
  double t4325;
  double t3175;
  double t3256;
  double t3366;
  double t3371;
  double t3382;
  double t4575;
  double t4002;
  double t4038;
  double t4056;
  double t4074;
  double t4121;
  double t4146;
  double t4156;
  double t4157;
  double t4158;
  double t4165;
  double t4179;
  double t4187;
  double t4188;
  double t4192;
  double t4193;
  double t4195;
  double t4209;
  double t4229;
  double t4233;
  double t4238;
  double t4257;
  double t4261;
  double t4265;
  double t4619;
  double t3988;
  double t4295;
  double t4372;
  double t4389;
  double t4412;
  double t4442;
  double t4461;
  double t4529;
  double t5053;
  double t5064;
  double t5068;
  double t5023;
  double t5025;
  double t5031;
  double t4539;
  t788 = Cos(var1[3]);
  t649 = Cos(var1[4]);
  t668 = Sin(var1[3]);
  t841 = Sin(var1[4]);
  t465 = Sin(var1[2]);
  t698 = -1.*t649*t668;
  t856 = -1.*t788*t841;
  t858 = t698 + t856;
  t916 = -1.*t465*t858;
  t971 = Cos(var1[2]);
  t985 = t788*t649;
  t991 = -1.*t668*t841;
  t997 = t985 + t991;
  t1062 = -1.*t971*t997;
  t1074 = t916 + t1062;
  t1199 = -1.*t649;
  t1318 = 1. + t1199;
  t1346 = -0.9063*t1318;
  t1348 = -1.0567*t649;
  t1354 = t1346 + t1348;
  t1767 = -1.*t465*t997;
  t1702 = t649*t668;
  t1712 = t788*t841;
  t1713 = t1702 + t1712;
  t1734 = -1.*t971*t1713;
  t1817 = t1734 + t1767;
  t1875 = t971*t997;
  t1970 = t465*t997;
  t1895 = t465*t858;
  t1898 = t1895 + t1875;
  t1859 = -1.*t465*t1713;
  t1889 = t1859 + t1875;
  t1840 = t971*t858;
  t1846 = t1840 + t1767;
  t2037 = t971*t1713;
  t2057 = t2037 + t1970;
  t2153 = 0.4999*t668;
  t2154 = t1354*t668;
  t2165 = -0.15039999999999998*t788*t841;
  t2166 = t2153 + t2154 + t2165;
  t2182 = -1.*t788;
  t2193 = 1. + t2182;
  t2202 = -0.4999*t2193;
  t2211 = t788*t1354;
  t2218 = 0.15039999999999998*t668*t841;
  t2223 = t2202 + t2211 + t2218;
  t1634 = 0.4999*t841;
  t1657 = t1354*t841;
  t1675 = 0.15039999999999998*t649*t841;
  t1684 = t1634 + t1657 + t1675;
  t1183 = 0.4999*t649;
  t1428 = t1354*t649;
  t1521 = Power(t841,2);
  t1551 = -0.15039999999999998*t1521;
  t1593 = t1183 + t1428 + t1551;
  t2340 = -1.*t788*t649;
  t2351 = t668*t841;
  t2371 = t2340 + t2351;
  t2382 = t971*t2371;
  t2417 = t916 + t2382;
  t1960 = -1.*t971*t858;
  t2555 = t465*t2371;
  t2572 = t1840 + t2555;
  t2175 = -1.*t2166*t997;
  t2226 = -1.*t858*t2223;
  t2234 = t2175 + t2226;
  t2294 = t2166*t1713;
  t2303 = t997*t2223;
  t2307 = t2294 + t2303;
  t2707 = -0.4999*t668;
  t2715 = -1.*t1354*t668;
  t2721 = 0.15039999999999998*t788*t841;
  t2738 = t2707 + t2715 + t2721;
  t2762 = 0.4999*t788;
  t2777 = t2762 + t2211 + t2218;
  t2418 = -0.26996047999999995*var2[4]*t2417;
  t2423 = 3.5899*t1684*t1846;
  t2435 = 3.5899*t1593*t2417;
  t2488 = 7.1798*t1889*t1846;
  t2513 = 3.5899*t1898*t1817;
  t2522 = 3.5899*t1074*t2057;
  t2524 = 7.1798*t1846*t2417;
  t2525 = -1.*t465*t2371;
  t2531 = t1960 + t2525;
  t2542 = 3.5899*t1898*t2531;
  t2581 = 3.5899*t1074*t2572;
  t2582 = t2488 + t2513 + t2522 + t2524 + t2542 + t2581;
  t2594 = 0.5*var2[1]*t2582;
  t2629 = 7.1798*t1898*t1889;
  t2630 = 7.1798*t1846*t2057;
  t2634 = 7.1798*t1898*t2417;
  t2645 = 7.1798*t1846*t2572;
  t2697 = t2629 + t2630 + t2634 + t2645;
  t2700 = 0.5*var2[0]*t2697;
  t2702 = 3.5899*t1846*t2234;
  t2705 = t2166*t997;
  t2753 = t858*t2223;
  t2889 = 3.5899*t2307*t2417;
  t2892 = -1.*t858*t2166;
  t3217 = 0.15039999999999998*t649*t668;
  t3232 = t3217 + t2721;
  t3245 = -0.15039999999999998*t788*t649;
  t3246 = t3245 + t2218;
  t2939 = -1.*t2223*t2371;
  t2105 = Power(t1889,2);
  t2124 = Power(t1846,2);
  t3481 = 3.5899*t1074*t1898;
  t3483 = 3.5899*t2105;
  t3488 = 3.5899*t2124;
  t3490 = 3.5899*t1817*t2057;
  t3491 = t3481 + t3483 + t3488 + t3490;
  t3499 = 3.5899*t1889*t2234;
  t3502 = 3.5899*t1846*t2307;
  t3504 = t3499 + t3502;
  t3419 = 3.5899*t1684*t1889;
  t3432 = 3.5899*t1593*t1846;
  t3443 = t3419 + t3432;
  t2461 = t2423 + t2435;
  t2471 = 0.5*var2[3]*t2461;
  t2749 = t2738*t997;
  t2868 = t1713*t2777;
  t2879 = t2705 + t2749 + t2753 + t2868;
  t2887 = 3.5899*t1846*t2879;
  t2894 = -1.*t858*t2738;
  t2914 = -1.*t997*t2777;
  t2982 = t2892 + t2894 + t2914 + t2939;
  t2993 = 3.5899*t1889*t2982;
  t3009 = t2702 + t2887 + t2889 + t2993;
  t3024 = 0.5*var2[2]*t3009;
  t3030 = t2418 + t2471 + t2594 + t2700 + t3024;
  t3032 = var2[0]*t3030;
  t2017 = t465*t1713;
  t3554 = t2017 + t2382;
  t3458 = 7.1798*t1898*t1846;
  t3797 = -0.4999*t788;
  t3798 = -1.*t788*t1354;
  t3802 = -0.15039999999999998*t668*t841;
  t3807 = t3797 + t3798 + t3802;
  t3572 = -0.26996047999999995*var2[4]*t3554;
  t3033 = Power(t649,2);
  t3037 = 0.15039999999999998*t3033;
  t3051 = 0. + t1183 + t1428 + t3037;
  t3590 = 3.5899*t1593*t3554;
  t3112 = -0.4999*t841;
  t3122 = -1.*t1354*t841;
  t3138 = -0.15039999999999998*t649*t841;
  t3151 = t3112 + t3122 + t3138;
  t3598 = 3.5899*t1684*t2572;
  t3601 = 3.5899*t2057*t2417;
  t3632 = 3.5899*t1846*t3554;
  t3635 = t2037 + t2525;
  t3637 = 3.5899*t1898*t3635;
  t3675 = 3.5899*t1889*t2572;
  t3686 = 7.1798*t2417*t2572;
  t3689 = t3458 + t3601 + t3632 + t3637 + t3675 + t3686;
  t3700 = 0.5*var2[1]*t3689;
  t3743 = Power(t1898,2);
  t3752 = 7.1798*t3743;
  t3758 = 7.1798*t1898*t3554;
  t3769 = 7.1798*t2057*t2572;
  t3773 = Power(t2572,2);
  t3775 = 7.1798*t3773;
  t3781 = t3752 + t3758 + t3769 + t3775;
  t3786 = 0.5*var2[0]*t3781;
  t3789 = 3.5899*t2307*t3554;
  t3792 = 3.5899*t2234*t2572;
  t3244 = t3232*t997;
  t3247 = t1713*t3246;
  t3255 = t2705 + t3244 + t2753 + t3247;
  t3822 = -1.*t1713*t2223;
  t3841 = -1.*t2166*t2371;
  t3288 = -1.*t858*t3232;
  t3300 = -1.*t997*t3246;
  t3354 = t2892 + t3288 + t3300 + t2939;
  t3880 = t858*t2166;
  t4105 = 0.15039999999999998*t788*t649;
  t4120 = t4105 + t3802;
  t3918 = t2223*t2371;
  t4450 = 3.5899*t1898*t1889;
  t4454 = 3.5899*t1846*t2057;
  t4456 = 3.5899*t1898*t2417;
  t4458 = 3.5899*t1846*t2572;
  t4459 = t4450 + t4454 + t4456 + t4458;
  t4471 = 3.5899*t1898*t2234;
  t4475 = 3.5899*t1898*t2879;
  t4480 = 3.5899*t2307*t2572;
  t4494 = 3.5899*t2057*t2982;
  t4495 = t4471 + t4475 + t4480 + t4494;
  t4298 = 3.5899*t1684*t1898;
  t4322 = 3.5899*t1593*t2572;
  t4325 = t4298 + t4322;
  t3175 = 3.5899*t3151*t1846;
  t3256 = 3.5899*t1846*t3255;
  t3366 = 3.5899*t1889*t3354;
  t3371 = t2702 + t3256 + t2889 + t3366;
  t3382 = 0.5*var2[2]*t3371;
  t4575 = t1183 + t1428 + t3037;
  t4002 = 3.5899*t3151*t2572;
  t4038 = 3.5899*t2879*t2572;
  t4056 = 3.5899*t3255*t2572;
  t4074 = -1.*t3232*t997;
  t4121 = -1.*t858*t4120;
  t4146 = -1.*t858*t2777;
  t4156 = -1.*t858*t3246;
  t4157 = -1.*t2738*t2371;
  t4158 = -1.*t3232*t2371;
  t4165 = t4074 + t4121 + t3822 + t4146 + t4156 + t3841 + t4157 + t4158;
  t4179 = 3.5899*t2057*t4165;
  t4187 = 3.5899*t1898*t2982;
  t4188 = 3.5899*t1898*t3354;
  t4192 = t858*t2738;
  t4193 = t858*t3232;
  t4195 = t3232*t1713;
  t4209 = t997*t4120;
  t4229 = t997*t2777;
  t4233 = t997*t3246;
  t4238 = t3880 + t4192 + t4193 + t4195 + t4209 + t4229 + t4233 + t3918;
  t4257 = 3.5899*t1898*t4238;
  t4261 = t3789 + t3792 + t4038 + t4056 + t4179 + t4187 + t4188 + t4257;
  t4265 = 0.5*var2[2]*t4261;
  t4619 = 3.5899*t4575*t1898;
  t3988 = 3.5899*t3051*t1898;
  t4295 = -0.26996047999999995*var2[4]*t2572;
  t4372 = 7.1798*t1898*t2057;
  t4389 = 7.1798*t1898*t2572;
  t4412 = t4372 + t4389;
  t4442 = var2[0]*t4412;
  t4461 = 0.5*var2[1]*t4459;
  t4529 = 0.5*var2[0]*t4459;
  t5053 = 3.5899*t1898*t3255;
  t5064 = 3.5899*t2057*t3354;
  t5068 = t4471 + t5053 + t4480 + t5064;
  t5023 = 3.5899*t3151*t1898;
  t5025 = 3.5899*t4575*t2057;
  t5031 = t5023 + t4298 + t5025 + t4322;
  t4539 = -0.26996047999999995*var2[0]*t2572;
  p_output1[0]=var2[0]*(0.5*(7.1798*t1074*t1898 + 7.1798*t1817*t2057 + 7.1798*t2105 + 7.1798*t2124)*var2[0] + 0.5*(10.7697*t1074*t1846 + 10.7697*t1817*t1889 + 3.5899*t1898*(t1960 + t1970) + 3.5899*(t1062 + t2017)*t2057)*var2[1] + 0.5*(3.5899*t1817*t2234 + 3.5899*t1074*t2307)*var2[2] + 0.5*(3.5899*t1074*t1593 + 3.5899*t1684*t1817)*var2[3] - 0.26996047999999995*t1074*var2[4]);
  p_output1[1]=t3032;
  p_output1[2]=var2[0]*(t2418 + t2594 + t2700 + t3382 + 0.5*(t2423 + t2435 + 3.5899*t1889*t3051 + t3175)*var2[3]);
  p_output1[3]=(7.1798*t1889*t2057 + t3458)*var2[0] + 0.5*t3491*var2[1] + 0.5*t3504*var2[2] + 0.5*t3443*var2[3] - 0.26996047999999995*t1846*var2[4];
  p_output1[4]=0.5*t3491*var2[0];
  p_output1[5]=0.5*t3504*var2[0];
  p_output1[6]=0.5*t3443*var2[0];
  p_output1[7]=-0.26996047999999995*t1846*var2[0];
  p_output1[8]=t3032;
  p_output1[9]=var2[0]*(t3572 + t3700 + t3786 + 0.5*(7.1798*t2572*t2879 + 7.1798*t1898*t2982 + t3789 + t3792 + 3.5899*t2057*(-2.*t2371*t2738 + t3822 + t3841 - 2.*t2777*t858 - 1.*t3807*t858 - 1.*t2738*t997) + 3.5899*t1898*(t1713*t2738 + t3880 + t3918 + 2.*t2738*t858 + 2.*t2777*t997 + t3807*t997))*var2[2] + 0.5*(t3590 + t3598)*var2[3]);
  p_output1[10]=var2[0]*(t3572 + t3700 + t3786 + t4265 + 0.5*(t3590 + t3598 + t3988 + t4002)*var2[3]);
  p_output1[11]=t4295 + t4442 + t4461 + 0.5*t4495*var2[2] + 0.5*t4325*var2[3];
  p_output1[12]=t4529;
  p_output1[13]=0.5*t4495*var2[0];
  p_output1[14]=0.5*t4325*var2[0];
  p_output1[15]=t4539;
  p_output1[16]=var2[0]*(t2418 + t2594 + t2700 + t3382 + 0.5*(t2423 + t2435 + t3175 + 3.5899*t1889*t4575)*var2[3]);
  p_output1[17]=var2[0]*(t3572 + t3700 + t3786 + t4265 + 0.5*(t3590 + t3598 + t4002 + t4619)*var2[3]);
  p_output1[18]=var2[0]*(t3572 + t3700 + t3786 + 0.5*(7.1798*t2572*t3255 + 7.1798*t1898*t3354 + t3789 + t3792 + 3.5899*t2057*(-2.*t2371*t3232 + t3822 + t3841 + t4074 + t4121 - 2.*t3246*t858) + 3.5899*t1898*(t3880 + t3918 + t4195 + t4209 + 2.*t3232*t858 + 2.*t3246*t997))*var2[2] + 0.5*(3.5899*t2057*t3151 + 7.1798*t2572*t3151 + t3590 + t3598 + t3988 + t4619 + 3.5899*t1898*(0. - 0.15039999999999998*t3033 - 0.4999*t649 - 1.*t1354*t649))*var2[3]);
  p_output1[19]=t4295 + t4442 + t4461 + 0.5*t5068*var2[2] + 0.5*t5031*var2[3];
  p_output1[20]=t4529;
  p_output1[21]=0.5*t5068*var2[0];
  p_output1[22]=0.5*t5031*var2[0];
  p_output1[23]=t4539;
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

#include "J_Ce3_vec_L3_J1_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L3_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
