/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:21 GMT-08:00
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
  double t413;
  double t126;
  double t199;
  double t667;
  double t1159;
  double t121;
  double t1167;
  double t1183;
  double t1256;
  double t1521;
  double t1548;
  double t1551;
  double t1593;
  double t1602;
  double t396;
  double t781;
  double t985;
  double t1074;
  double t1346;
  double t1348;
  double t1712;
  double t1675;
  double t1684;
  double t1695;
  double t1702;
  double t1719;
  double t2002;
  double t1852;
  double t1857;
  double t2036;
  double t2037;
  double t1894;
  double t1895;
  double t1898;
  double t1970;
  double t2010;
  double t2144;
  double t2153;
  double t2154;
  double t2165;
  double t2202;
  double t2211;
  double t2218;
  double t2234;
  double t2255;
  double t2267;
  double t1468;
  double t1612;
  double t1634;
  double t1657;
  double t1766;
  double t1816;
  double t1817;
  double t1825;
  double t1831;
  double t2417;
  double t2418;
  double t2423;
  double t2435;
  double t2442;
  double t2100;
  double t2102;
  double t2107;
  double t2124;
  double t2555;
  double t2572;
  double t2174;
  double t2294;
  double t2303;
  double t2309;
  double t2310;
  double t2316;
  double t2879;
  double t2887;
  double t2889;
  double t2982;
  double t3030;
  double t3032;
  double t2452;
  double t2488;
  double t2513;
  double t2531;
  double t2542;
  double t2581;
  double t2609;
  double t2629;
  double t2630;
  double t2634;
  double t2645;
  double t2702;
  double t2705;
  double t2707;
  double t2721;
  double t2749;
  double t2750;
  double t2753;
  double t2762;
  double t2764;
  double t2868;
  double t2993;
  double t3107;
  double t3112;
  double t3419;
  double t3432;
  double t3458;
  double t3472;
  double t3159;
  double t3527;
  double t3529;
  double t3530;
  double t3547;
  double t3550;
  double t3554;
  double t3599;
  double t3773;
  double t3774;
  double t3775;
  double t3632;
  double t3635;
  double t3637;
  double t2522;
  double t2524;
  double t2984;
  double t3033;
  double t3037;
  double t3051;
  double t3138;
  double t3151;
  double t3175;
  double t3180;
  double t3216;
  double t3217;
  double t3244;
  double t3245;
  double t3802;
  double t4179;
  double t4187;
  double t4188;
  double t4192;
  double t3816;
  double t3366;
  double t3385;
  double t3387;
  double t3247;
  double t3255;
  double t3256;
  double t3347;
  double t3828;
  double t3842;
  double t3877;
  double t3882;
  double t3889;
  double t3907;
  double t3912;
  double t3913;
  double t3921;
  double t3922;
  double t3931;
  double t3955;
  double t3962;
  double t3969;
  double t3977;
  double t4010;
  double t4027;
  double t4032;
  double t4038;
  double t3448;
  double t3474;
  double t3479;
  double t4105;
  double t4229;
  double t4238;
  double t3483;
  double t3488;
  double t3490;
  double t4322;
  double t4575;
  double t4577;
  double t4450;
  double t4907;
  double t4910;
  double t4928;
  double t4947;
  double t4948;
  double t5025;
  double t5036;
  double t5050;
  double t5053;
  double t5064;
  double t4990;
  double t4991;
  double t4998;
  double t3354;
  double t3481;
  double t3493;
  double t3499;
  double t3502;
  double t5096;
  double t4494;
  double t4536;
  double t4538;
  double t4539;
  double t4593;
  double t4595;
  double t4607;
  double t4613;
  double t4638;
  double t4649;
  double t4666;
  double t4697;
  double t4741;
  double t4772;
  double t4843;
  double t4846;
  double t4848;
  double t4863;
  double t4867;
  double t4868;
  double t4873;
  double t4884;
  double t4892;
  double t5179;
  double t4480;
  double t4952;
  double t4987;
  double t5010;
  double t5019;
  double t5023;
  double t5509;
  double t5514;
  double t5533;
  double t5493;
  double t5497;
  double t5506;
  double t5092;
  t413 = Cos(var1[3]);
  t126 = Cos(var1[4]);
  t199 = Sin(var1[3]);
  t667 = Sin(var1[4]);
  t1159 = Sin(var1[2]);
  t121 = Cos(var1[2]);
  t1167 = t413*t126;
  t1183 = -1.*t199*t667;
  t1256 = t1167 + t1183;
  t1521 = -1.*t126;
  t1548 = 1. + t1521;
  t1551 = -0.9063*t1548;
  t1593 = -1.0567*t126;
  t1602 = t1551 + t1593;
  t396 = -1.*t126*t199;
  t781 = -1.*t413*t667;
  t985 = t396 + t781;
  t1074 = -1.*t121*t985;
  t1346 = t1159*t1256;
  t1348 = t1074 + t1346;
  t1712 = -1.*t121*t1256;
  t1675 = t126*t199;
  t1684 = t413*t667;
  t1695 = t1675 + t1684;
  t1702 = t1159*t1695;
  t1719 = t1702 + t1712;
  t2002 = -1.*t1159*t1256;
  t1852 = -1.*t1159*t985;
  t1857 = t1852 + t1712;
  t2036 = t121*t985;
  t2037 = t2036 + t2002;
  t1894 = -1.*t1159*t1695;
  t1895 = t121*t1256;
  t1898 = t1894 + t1895;
  t1970 = -1.*t121*t1695;
  t2010 = t1970 + t2002;
  t2144 = 0.4999*t199;
  t2153 = t1602*t199;
  t2154 = -0.15039999999999998*t413*t667;
  t2165 = t2144 + t2153 + t2154;
  t2202 = -1.*t413;
  t2211 = 1. + t2202;
  t2218 = -0.4999*t2211;
  t2234 = t413*t1602;
  t2255 = 0.15039999999999998*t199*t667;
  t2267 = t2218 + t2234 + t2255;
  t1468 = 0.4999*t667;
  t1612 = t1602*t667;
  t1634 = 0.15039999999999998*t126*t667;
  t1657 = t1468 + t1612 + t1634;
  t1766 = 0.4999*t126;
  t1816 = t1602*t126;
  t1817 = Power(t667,2);
  t1825 = -0.15039999999999998*t1817;
  t1831 = t1766 + t1816 + t1825;
  t2417 = -1.*t413*t126;
  t2418 = t199*t667;
  t2423 = t2417 + t2418;
  t2435 = -1.*t1159*t2423;
  t2442 = t1074 + t2435;
  t2100 = t1159*t985;
  t2102 = t2100 + t1895;
  t2107 = t121*t1695;
  t2124 = t2107 + t1346;
  t2555 = t121*t2423;
  t2572 = t1852 + t2555;
  t2174 = -1.*t2165*t1256;
  t2294 = -1.*t985*t2267;
  t2303 = t2174 + t2294;
  t2309 = t2165*t1695;
  t2310 = t1256*t2267;
  t2316 = t2309 + t2310;
  t2879 = -0.4999*t199;
  t2887 = -1.*t1602*t199;
  t2889 = 0.15039999999999998*t413*t667;
  t2982 = t2879 + t2887 + t2889;
  t3030 = 0.4999*t413;
  t3032 = t3030 + t2234 + t2255;
  t2452 = -0.26996047999999995*var2[4]*t2442;
  t2488 = 3.5899*t1657*t1857;
  t2513 = 3.5899*t1831*t2442;
  t2531 = 7.1798*t1857*t1898;
  t2542 = 7.1798*t2037*t2010;
  t2581 = 7.1798*t1857*t2572;
  t2609 = 7.1798*t2037*t2442;
  t2629 = t2531 + t2542 + t2581 + t2609;
  t2630 = 0.5*var2[1]*t2629;
  t2634 = 7.1798*t1898*t2037;
  t2645 = 3.5899*t2102*t2010;
  t2702 = 3.5899*t1857*t2124;
  t2705 = 7.1798*t2037*t2572;
  t2707 = 3.5899*t2102*t2442;
  t2721 = t1159*t2423;
  t2749 = t2036 + t2721;
  t2750 = 3.5899*t1857*t2749;
  t2753 = t2634 + t2645 + t2702 + t2705 + t2707 + t2750;
  t2762 = 0.5*var2[0]*t2753;
  t2764 = 3.5899*t1857*t2303;
  t2868 = t2165*t1256;
  t2993 = t985*t2267;
  t3107 = 3.5899*t2316*t2442;
  t3112 = -1.*t985*t2165;
  t3419 = 0.15039999999999998*t126*t199;
  t3432 = t3419 + t2889;
  t3458 = -0.15039999999999998*t413*t126;
  t3472 = t3458 + t2255;
  t3159 = -1.*t2267*t2423;
  t3527 = 3.5899*t1857*t2102;
  t3529 = Power(t1898,2);
  t3530 = 3.5899*t3529;
  t3547 = Power(t2037,2);
  t3550 = 3.5899*t3547;
  t3554 = 3.5899*t2010*t2124;
  t3599 = t3527 + t3530 + t3550 + t3554;
  t3773 = 3.5899*t2010*t2303;
  t3774 = 3.5899*t1857*t2316;
  t3775 = t3773 + t3774;
  t3632 = 3.5899*t1831*t1857;
  t3635 = 3.5899*t1657*t2010;
  t3637 = t3632 + t3635;
  t2522 = t2488 + t2513;
  t2524 = 0.5*var2[3]*t2522;
  t2984 = t2982*t1256;
  t3033 = t1695*t3032;
  t3037 = t2868 + t2984 + t2993 + t3033;
  t3051 = 3.5899*t1857*t3037;
  t3138 = -1.*t985*t2982;
  t3151 = -1.*t1256*t3032;
  t3175 = t3112 + t3138 + t3151 + t3159;
  t3180 = 3.5899*t2010*t3175;
  t3216 = t2764 + t3051 + t3107 + t3180;
  t3217 = 0.5*var2[2]*t3216;
  t3244 = t2452 + t2524 + t2630 + t2762 + t3217;
  t3245 = var2[1]*t3244;
  t3802 = t2107 + t2435;
  t4179 = -0.4999*t413;
  t4187 = -1.*t413*t1602;
  t4188 = -0.15039999999999998*t199*t667;
  t4192 = t4179 + t4187 + t4188;
  t3816 = -0.26996047999999995*var2[4]*t3802;
  t3366 = Power(t126,2);
  t3385 = 0.15039999999999998*t3366;
  t3387 = 0. + t1766 + t1816 + t3385;
  t3247 = -0.4999*t667;
  t3255 = -1.*t1602*t667;
  t3256 = -0.15039999999999998*t126*t667;
  t3347 = t3247 + t3255 + t3256;
  t3828 = 3.5899*t1657*t2572;
  t3842 = 3.5899*t1831*t3802;
  t3877 = 7.1798*t3547;
  t3882 = 7.1798*t1898*t2572;
  t3889 = Power(t2572,2);
  t3907 = 7.1798*t3889;
  t3912 = 7.1798*t2037*t3802;
  t3913 = t3877 + t3882 + t3907 + t3912;
  t3921 = 0.5*var2[1]*t3913;
  t3922 = 7.1798*t2102*t2037;
  t3931 = 3.5899*t2124*t2572;
  t3955 = t1702 + t2555;
  t3962 = 3.5899*t2037*t3955;
  t3969 = 3.5899*t2102*t3802;
  t3977 = 3.5899*t1898*t2749;
  t4010 = 7.1798*t2572*t2749;
  t4027 = t3922 + t3931 + t3962 + t3969 + t3977 + t4010;
  t4032 = 0.5*var2[0]*t4027;
  t4038 = 3.5899*t2303*t2572;
  t3448 = t3432*t1256;
  t3474 = t1695*t3472;
  t3479 = t2868 + t3448 + t2993 + t3474;
  t4105 = 3.5899*t2316*t3802;
  t4229 = -1.*t1695*t2267;
  t4238 = -1.*t2165*t2423;
  t3483 = -1.*t985*t3432;
  t3488 = -1.*t1256*t3472;
  t3490 = t3112 + t3483 + t3488 + t3159;
  t4322 = t985*t2165;
  t4575 = 0.15039999999999998*t413*t126;
  t4577 = t4575 + t4188;
  t4450 = t2267*t2423;
  t4907 = 3.5899*t2102*t1898;
  t4910 = 3.5899*t2037*t2124;
  t4928 = 3.5899*t2102*t2572;
  t4947 = 3.5899*t2037*t2749;
  t4948 = t4907 + t4910 + t4928 + t4947;
  t5025 = 3.5899*t2037*t2303;
  t5036 = 3.5899*t2037*t3037;
  t5050 = 3.5899*t2316*t2572;
  t5053 = 3.5899*t1898*t3175;
  t5064 = t5025 + t5036 + t5050 + t5053;
  t4990 = 3.5899*t1657*t2037;
  t4991 = 3.5899*t1831*t2572;
  t4998 = t4990 + t4991;
  t3354 = 3.5899*t3347*t1857;
  t3481 = 3.5899*t1857*t3479;
  t3493 = 3.5899*t2010*t3490;
  t3499 = t2764 + t3481 + t3107 + t3493;
  t3502 = 0.5*var2[2]*t3499;
  t5096 = t1766 + t1816 + t3385;
  t4494 = 3.5899*t3347*t2572;
  t4536 = 3.5899*t3037*t2572;
  t4538 = 3.5899*t3479*t2572;
  t4539 = -1.*t3432*t1256;
  t4593 = -1.*t985*t4577;
  t4595 = -1.*t985*t3032;
  t4607 = -1.*t985*t3472;
  t4613 = -1.*t2982*t2423;
  t4638 = -1.*t3432*t2423;
  t4649 = t4539 + t4593 + t4229 + t4595 + t4607 + t4238 + t4613 + t4638;
  t4666 = 3.5899*t1898*t4649;
  t4697 = 3.5899*t2037*t3175;
  t4741 = 3.5899*t2037*t3490;
  t4772 = t985*t2982;
  t4843 = t985*t3432;
  t4846 = t3432*t1695;
  t4848 = t1256*t4577;
  t4863 = t1256*t3032;
  t4867 = t1256*t3472;
  t4868 = t4322 + t4772 + t4843 + t4846 + t4848 + t4863 + t4867 + t4450;
  t4873 = 3.5899*t2037*t4868;
  t4884 = t4038 + t4536 + t4538 + t4105 + t4666 + t4697 + t4741 + t4873;
  t4892 = 0.5*var2[2]*t4884;
  t5179 = 3.5899*t5096*t2037;
  t4480 = 3.5899*t3387*t2037;
  t4952 = 0.5*var2[1]*t4948;
  t4987 = -0.26996047999999995*var2[4]*t2572;
  t5010 = t2634 + t2705;
  t5019 = var2[1]*t5010;
  t5023 = 0.5*var2[0]*t4948;
  t5509 = 3.5899*t2037*t3479;
  t5514 = 3.5899*t1898*t3490;
  t5533 = t5025 + t5509 + t5050 + t5514;
  t5493 = 3.5899*t5096*t1898;
  t5497 = 3.5899*t3347*t2037;
  t5506 = t5493 + t5497 + t4990 + t4991;
  t5092 = -0.26996047999999995*var2[1]*t2572;
  p_output1[0]=var2[1]*(0.5*(10.7697*t1898*t2010 + 10.7697*t1857*t2037 + 3.5899*t1348*t2102 + 3.5899*t1719*t2124)*var2[0] + 0.5*(7.1798*Power(t1857,2) + 7.1798*t1719*t1898 + 7.1798*Power(t2010,2) + 7.1798*t1348*t2037)*var2[1] + 0.5*(3.5899*t1719*t2303 + 3.5899*t1348*t2316)*var2[2] + 0.5*(3.5899*t1657*t1719 + 3.5899*t1348*t1831)*var2[3] - 0.26996047999999995*t1348*var2[4]);
  p_output1[1]=t3245;
  p_output1[2]=var2[1]*(t2452 + t2630 + t2762 + t3502 + 0.5*(t2488 + t2513 + t3354 + 3.5899*t2010*t3387)*var2[3]);
  p_output1[3]=0.5*t3599*var2[1];
  p_output1[4]=0.5*t3599*var2[0] + (7.1798*t1898*t2010 + 7.1798*t1857*t2037)*var2[1] + 0.5*t3775*var2[2] + 0.5*t3637*var2[3] - 0.26996047999999995*t1857*var2[4];
  p_output1[5]=0.5*t3775*var2[1];
  p_output1[6]=0.5*t3637*var2[1];
  p_output1[7]=-0.26996047999999995*t1857*var2[1];
  p_output1[8]=t3245;
  p_output1[9]=var2[1]*(t3816 + t3921 + t4032 + 0.5*(7.1798*t2572*t3037 + 7.1798*t2037*t3175 + t4038 + t4105 + 3.5899*t2037*(t1695*t2982 + 2.*t1256*t3032 + t1256*t4192 + t4322 + t4450 + 2.*t2982*t985) + 3.5899*t1898*(-1.*t1256*t2982 - 2.*t2423*t2982 + t4229 + t4238 - 2.*t3032*t985 - 1.*t4192*t985))*var2[2] + 0.5*(t3828 + t3842)*var2[3]);
  p_output1[10]=var2[1]*(t3816 + t3921 + t4032 + t4892 + 0.5*(t3828 + t3842 + t4480 + t4494)*var2[3]);
  p_output1[11]=t4952;
  p_output1[12]=t4987 + t5019 + t5023 + 0.5*t5064*var2[2] + 0.5*t4998*var2[3];
  p_output1[13]=0.5*t5064*var2[1];
  p_output1[14]=0.5*t4998*var2[1];
  p_output1[15]=t5092;
  p_output1[16]=var2[1]*(t2452 + t2630 + t2762 + t3502 + 0.5*(t2488 + t2513 + t3354 + 3.5899*t2010*t5096)*var2[3]);
  p_output1[17]=var2[1]*(t3816 + t3921 + t4032 + t4892 + 0.5*(t3828 + t3842 + t4494 + t5179)*var2[3]);
  p_output1[18]=var2[1]*(t3816 + t3921 + t4032 + 0.5*(7.1798*t2572*t3479 + 7.1798*t2037*t3490 + t4038 + t4105 + 3.5899*t2037*(2.*t1256*t3472 + t4322 + t4450 + t4846 + t4848 + 2.*t3432*t985) + 3.5899*t1898*(-2.*t2423*t3432 + t4229 + t4238 + t4539 + t4593 - 2.*t3472*t985))*var2[2] + 0.5*(3.5899*t1898*t3347 + 7.1798*t2572*t3347 + 3.5899*t2037*(0. - 0.4999*t126 - 1.*t126*t1602 - 0.15039999999999998*t3366) + t3828 + t3842 + t4480 + t5179)*var2[3]);
  p_output1[19]=t4952;
  p_output1[20]=t4987 + t5019 + t5023 + 0.5*t5533*var2[2] + 0.5*t5506*var2[3];
  p_output1[21]=0.5*t5533*var2[1];
  p_output1[22]=0.5*t5506*var2[1];
  p_output1[23]=t5092;
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

#include "J_Ce3_vec_L3_J2_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L3_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
