/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:29:33 GMT-08:00
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
  double t22;
  double t170;
  double t367;
  double t340;
  double t432;
  double t345;
  double t400;
  double t401;
  double t326;
  double t463;
  double t473;
  double t485;
  double t54;
  double t55;
  double t113;
  double t114;
  double t207;
  double t220;
  double t627;
  double t537;
  double t312;
  double t865;
  double t952;
  double t976;
  double t29;
  double t262;
  double t286;
  double t299;
  double t429;
  double t578;
  double t693;
  double t694;
  double t710;
  double t800;
  double t819;
  double t829;
  double t835;
  double t844;
  double t1011;
  double t1047;
  double t1129;
  double t1141;
  double t1145;
  double t731;
  double t1068;
  double t1477;
  double t1483;
  double t1492;
  double t1259;
  double t1285;
  double t1522;
  double t1532;
  double t595;
  double t778;
  double t1838;
  double t1862;
  double t1907;
  double t1916;
  double t1935;
  double t1958;
  double t1978;
  double t1828;
  double t2272;
  double t2278;
  double t1174;
  double t1179;
  double t1938;
  double t1986;
  double t1992;
  double t1996;
  double t2025;
  double t2058;
  double t2060;
  double t2092;
  double t2315;
  double t2326;
  double t2328;
  double t2348;
  double t2364;
  double t2380;
  double t2391;
  double t2400;
  double t2454;
  double t2460;
  double t2110;
  double t2155;
  double t2171;
  double t2179;
  double t2528;
  double t2556;
  double t2559;
  double t794;
  double t1186;
  double t1191;
  double t2614;
  double t2615;
  double t2620;
  double t1493;
  double t1504;
  double t1509;
  double t1567;
  double t1576;
  double t1582;
  double t1587;
  double t1644;
  double t1650;
  double t1659;
  double t1663;
  double t1665;
  double t1694;
  double t1697;
  double t1705;
  double t1711;
  double t1725;
  double t1825;
  double t2694;
  double t2706;
  double t2761;
  double t2774;
  double t2983;
  double t2991;
  double t3018;
  double t3023;
  double t3036;
  double t3050;
  double t3079;
  double t3084;
  double t3088;
  double t3091;
  double t2976;
  double t3070;
  double t3099;
  double t3108;
  double t3162;
  double t3193;
  double t3286;
  double t3290;
  double t3296;
  double t3297;
  double t3156;
  double t3196;
  double t3222;
  double t3231;
  double t3260;
  double t3269;
  double t3123;
  double t3124;
  double t3125;
  double t3145;
  double t3519;
  double t3520;
  double t3678;
  double t3691;
  double t3701;
  double t3702;
  double t3707;
  double t3712;
  double t3802;
  double t3821;
  double t3847;
  double t3693;
  double t3724;
  double t3738;
  double t3749;
  double t3757;
  double t3759;
  double t3501;
  double t3526;
  double t3540;
  double t3546;
  double t3573;
  double t3582;
  double t3603;
  double t3628;
  double t3638;
  double t3639;
  double t3660;
  double t3663;
  double t3772;
  double t3790;
  double t4334;
  double t4337;
  double t4340;
  double t4342;
  double t4346;
  double t4381;
  double t4397;
  double t4400;
  double t4408;
  double t4458;
  double t4473;
  double t4502;
  double t4529;
  double t4538;
  double t4540;
  double t3934;
  double t3936;
  double t3937;
  double t3940;
  double t4067;
  double t4078;
  double t4190;
  double t4194;
  double t4195;
  double t4198;
  double t4207;
  double t4256;
  double t4260;
  double t4297;
  double t4305;
  double t4324;
  double t4728;
  double t4731;
  double t4736;
  double t4765;
  double t4781;
  double t4786;
  double t2008;
  double t2012;
  double t2188;
  double t2189;
  double t2231;
  double t2257;
  double t3548;
  double t3562;
  double t3644;
  double t3647;
  double t3742;
  double t3765;
  double t3868;
  double t3871;
  double t3878;
  double t3884;
  double t3915;
  double t3928;
  double t3929;
  double t3932;
  double t3941;
  double t3944;
  double t3960;
  double t3966;
  double t3985;
  double t4023;
  double t4872;
  double t4890;
  double t4893;
  double t4898;
  double t5040;
  double t5069;
  double t5216;
  double t5227;
  double t5189;
  double t5206;
  double t4945;
  double t4839;
  double t4919;
  double t4920;
  double t5670;
  double t5674;
  double t5675;
  double t4983;
  double t5008;
  double t5052;
  double t5078;
  double t5082;
  double t5090;
  double t5101;
  double t5107;
  double t5108;
  double t5112;
  double t5130;
  double t5147;
  double t5152;
  double t5153;
  double t5163;
  double t5465;
  double t5476;
  double t6007;
  double t6009;
  double t6017;
  double t6025;
  double t5317;
  double t5365;
  double t5845;
  double t5853;
  double t5864;
  double t5910;
  double t5925;
  double t5928;
  double t5945;
  double t5956;
  double t5959;
  double t5971;
  double t5976;
  double t5985;
  double t5986;
  double t5529;
  double t5536;
  double t5538;
  double t5540;
  double t5548;
  double t5593;
  double t5596;
  double t5604;
  double t5614;
  double t5624;
  double t5633;
  double t6247;
  double t6248;
  double t6249;
  double t6169;
  double t6175;
  double t6192;
  double t6206;
  double t6212;
  double t6222;
  double t6278;
  double t6387;
  double t6392;
  double t6398;
  double t6399;
  double t6404;
  double t6423;
  double t6427;
  double t6432;
  double t6436;
  double t6437;
  double t6438;
  double t5650;
  double t5655;
  double t5727;
  double t6582;
  double t5800;
  double t6001;
  double t6002;
  double t6745;
  double t6749;
  double t6756;
  double t6757;
  double t6124;
  double t6126;
  double t6887;
  double t6895;
  double t6900;
  double t6901;
  double t6906;
  double t5665;
  double t6580;
  double t6586;
  double t5680;
  double t6595;
  double t6601;
  double t5733;
  double t6610;
  double t6612;
  double t6615;
  double t5811;
  double t6626;
  double t6654;
  double t5871;
  double t6655;
  double t5878;
  double t5897;
  double t6702;
  double t5902;
  double t6004;
  double t6071;
  double t6736;
  double t6753;
  double t6767;
  double t6771;
  double t6809;
  double t6825;
  double t6125;
  double t6833;
  double t6132;
  double t6861;
  double t7163;
  double t7170;
  double t7171;
  double t6290;
  double t6295;
  double t6315;
  double t7240;
  double t7242;
  double t7244;
  double t7250;
  double t7253;
  double t7257;
  double t7270;
  double t7272;
  double t7299;
  double t7326;
  double t7329;
  double t7333;
  double t6941;
  double t6944;
  double t6949;
  double t6953;
  double t6955;
  double t6958;
  double t6959;
  double t7023;
  double t7053;
  double t7067;
  double t7098;
  double t7101;
  double t7103;
  double t7400;
  double t7406;
  double t7407;
  double t7415;
  double t7416;
  double t7370;
  double t7372;
  double t7373;
  double t7380;
  double t7388;
  double t7391;
  double t7392;
  double t7397;
  t22 = Cos(var1[8]);
  t170 = Sin(var1[8]);
  t367 = Cos(var1[7]);
  t340 = Sin(var1[7]);
  t432 = Cos(var1[6]);
  t345 = -1.*t22*t340;
  t400 = -1.*t367*t170;
  t401 = t345 + t400;
  t326 = Sin(var1[6]);
  t463 = t367*t22;
  t473 = -1.*t340*t170;
  t485 = t463 + t473;
  t54 = -1.*t22;
  t55 = 1. + t54;
  t113 = -1.3127*t55;
  t114 = -1.3127*t22;
  t207 = -0.06*t170;
  t220 = t113 + t114 + t207;
  t627 = Sin(var1[2]);
  t537 = t432*t485;
  t312 = Cos(var1[2]);
  t865 = t22*t340;
  t952 = t367*t170;
  t976 = t865 + t952;
  t29 = 0.9063*t22;
  t262 = t22*t220;
  t286 = 0.06*t22*t170;
  t299 = t29 + t262 + t286;
  t429 = t326*t401;
  t578 = t429 + t537;
  t693 = t432*t401;
  t694 = -1.*t326*t485;
  t710 = t693 + t694;
  t800 = Power(t22,2);
  t819 = -0.06*t800;
  t829 = 0.9063*t170;
  t835 = t220*t170;
  t844 = t819 + t829 + t835;
  t1011 = -1.*t326*t976;
  t1047 = t1011 + t537;
  t1129 = t432*t976;
  t1141 = t326*t485;
  t1145 = t1129 + t1141;
  t731 = -1.*t627*t710;
  t1068 = -1.*t627*t1047;
  t1477 = -1.*t326*t401;
  t1483 = -1.*t432*t485;
  t1492 = t1477 + t1483;
  t1259 = -1.*t312*t710;
  t1285 = -1.*t312*t1047;
  t1522 = -1.*t432*t976;
  t1532 = t1522 + t694;
  t595 = -1.*t312*t578;
  t778 = t595 + t731;
  t1838 = -1.*t367*t22;
  t1862 = t340*t170;
  t1907 = t1838 + t1862;
  t1916 = t432*t1907;
  t1935 = t1477 + t1916;
  t1958 = t326*t1907;
  t1978 = t693 + t1958;
  t1828 = 1.142857*t844*t778;
  t2272 = -0.06*t22;
  t2278 = 0. + t2272;
  t1174 = -1.*t312*t1145;
  t1179 = t1068 + t1174;
  t1938 = -1.*t627*t1935;
  t1986 = -1.*t312*t1978;
  t1992 = t1938 + t1986;
  t1996 = 1.142857*t299*t1992;
  t2025 = -1.*t627*t578;
  t2058 = t312*t710;
  t2060 = t2025 + t2058;
  t2092 = 1.142857*t844*t2060;
  t2315 = t2278*t22;
  t2326 = 0.06*t800;
  t2328 = -0.9063*t170;
  t2348 = -1.*t220*t170;
  t2364 = Power(t170,2);
  t2380 = -0.06*t2364;
  t2391 = t2315 + t2326 + t2328 + t2348 + t2380;
  t2400 = t2278*t170;
  t2454 = 0.12*t22*t170;
  t2460 = t29 + t262 + t2400 + t2454;
  t2110 = t312*t1935;
  t2155 = -1.*t627*t1978;
  t2171 = t2110 + t2155;
  t2179 = 1.142857*t299*t2171;
  t2528 = t312*t1047;
  t2556 = -1.*t627*t1145;
  t2559 = t2528 + t2556;
  t794 = 1.142857*t299*t778;
  t1186 = 1.142857*t844*t1179;
  t1191 = t794 + t1186;
  t2614 = 1.142857*t299*t2060;
  t2615 = 1.142857*t844*t2559;
  t2620 = t2614 + t2615;
  t1493 = t312*t1492;
  t1504 = t1493 + t731;
  t1509 = 1.142857*t299*t1504;
  t1567 = t312*t1532;
  t1576 = t1068 + t1567;
  t1582 = 1.142857*t844*t1576;
  t1587 = t1509 + t1582;
  t1644 = 0.5*var2[0]*t1587;
  t1650 = -1.*t627*t1492;
  t1659 = t1650 + t1259;
  t1663 = 1.142857*t299*t1659;
  t1665 = -1.*t627*t1532;
  t1694 = t1285 + t1665;
  t1697 = 1.142857*t844*t1694;
  t1705 = t1663 + t1697;
  t1711 = 0.5*var2[1]*t1705;
  t1725 = t1644 + t1711;
  t1825 = var2[7]*t1725;
  t2694 = t326*t976;
  t2706 = t2694 + t1483;
  t2761 = -1.*t432*t401;
  t2774 = t2761 + t1141;
  t2983 = -1.*t367;
  t2991 = 1. + t2983;
  t3018 = -0.9063*t2991;
  t3023 = -0.06*t22*t340;
  t3036 = t367*t220;
  t3050 = t3018 + t3023 + t3036;
  t3079 = 0.06*t367*t22;
  t3084 = 0.9063*t340;
  t3088 = t340*t220;
  t3091 = t3079 + t3084 + t3088;
  t2976 = -0.4999*t326;
  t3070 = -1.*t326*t3050;
  t3099 = -1.*t432*t3091;
  t3108 = t2976 + t3070 + t3099;
  t3162 = t432*t3050;
  t3193 = -1.*t326*t3091;
  t3286 = -1.*t432;
  t3290 = 1. + t3286;
  t3296 = -0.4999*t3290;
  t3297 = t3296 + t3162 + t3193;
  t3156 = 0.4999*t432;
  t3196 = t3156 + t3162 + t3193;
  t3222 = -0.4999*t432;
  t3231 = -1.*t432*t3050;
  t3260 = t326*t3091;
  t3269 = t3222 + t3231 + t3260;
  t3123 = 0.4999*t326;
  t3124 = t326*t3050;
  t3125 = t432*t3091;
  t3145 = t3123 + t3124 + t3125;
  t3519 = -1.*t326*t1907;
  t3520 = t2761 + t3519;
  t3678 = 0.9063*t367;
  t3691 = t3678 + t3023 + t3036;
  t3701 = -0.06*t367*t22;
  t3702 = -0.9063*t340;
  t3707 = -1.*t340*t220;
  t3712 = t3701 + t3702 + t3707;
  t3802 = -1.*t326*t3691;
  t3821 = t432*t3712;
  t3847 = t3802 + t3821;
  t3693 = -1.*t432*t3691;
  t3724 = -1.*t326*t3712;
  t3738 = t3693 + t3724;
  t3749 = t432*t3691;
  t3757 = t326*t3712;
  t3759 = t3749 + t3757;
  t3501 = 1.142857*t844*t1504;
  t3526 = t312*t3520;
  t3540 = t1938 + t3526;
  t3546 = 1.142857*t299*t3540;
  t3573 = t627*t1492;
  t3582 = t3573 + t2058;
  t3603 = 1.142857*t844*t3582;
  t3628 = t627*t3520;
  t3638 = t2110 + t3628;
  t3639 = 1.142857*t299*t3638;
  t3660 = t3297*t1492;
  t3663 = t3196*t578;
  t3772 = t3108*t710;
  t3790 = t3145*t710;
  t4334 = t2278*t340;
  t4337 = -0.06*t367*t170;
  t4340 = t4334 + t4337;
  t4342 = -1.*t326*t4340;
  t4346 = t367*t2278;
  t4381 = 0.06*t340*t170;
  t4397 = t4346 + t4381;
  t4400 = t432*t4397;
  t4408 = t4342 + t4400;
  t4458 = -1.*t432*t4340;
  t4473 = -1.*t326*t4397;
  t4502 = t4458 + t4473;
  t4529 = t432*t4340;
  t4538 = t326*t4397;
  t4540 = t4529 + t4538;
  t3934 = -1.*t3108*t1935;
  t3936 = -1.*t3145*t1935;
  t3937 = -1.*t3297*t3520;
  t3940 = -1.*t3196*t1978;
  t4067 = t627*t1532;
  t4078 = t2528 + t4067;
  t4190 = -1.*t3297*t1492;
  t4194 = -1.*t3196*t578;
  t4195 = -1.*t3108*t710;
  t4198 = -1.*t3145*t710;
  t4207 = t4190 + t4194 + t4195 + t4198;
  t4256 = t3108*t1047;
  t4260 = t3145*t1047;
  t4297 = t3297*t1532;
  t4305 = t3196*t1145;
  t4324 = t4256 + t4260 + t4297 + t4305;
  t4728 = 1.142857*t299*t3582;
  t4731 = 1.142857*t844*t4078;
  t4736 = t4728 + t4731;
  t4765 = 1.142857*t844*t4207;
  t4781 = 1.142857*t299*t4324;
  t4786 = t4765 + t4781;
  t2008 = t1828 + t1996;
  t2012 = 0.5*var2[1]*t2008;
  t2188 = t2092 + t2179;
  t2189 = 0.5*var2[0]*t2188;
  t2231 = t2012 + t2189;
  t2257 = var2[7]*t2231;
  t3548 = t3501 + t3546;
  t3562 = 0.5*var2[1]*t3548;
  t3644 = t3603 + t3639;
  t3647 = 0.5*var2[0]*t3644;
  t3742 = t3738*t1047;
  t3765 = t3759*t1047;
  t3868 = t3847*t1532;
  t3871 = t3847*t1145;
  t3878 = t3660 + t3663 + t3742 + t3765 + t3772 + t3790 + t3868 + t3871;
  t3884 = 1.142857*t299*t3878;
  t3915 = -1.*t3847*t1492;
  t3928 = -1.*t3847*t578;
  t3929 = -1.*t3738*t710;
  t3932 = -1.*t3759*t710;
  t3941 = t3915 + t3928 + t3929 + t3932 + t3934 + t3936 + t3937 + t3940;
  t3944 = 1.142857*t844*t3941;
  t3960 = t3884 + t3944;
  t3966 = 0.5*var2[2]*t3960;
  t3985 = t3562 + t3647 + t3966;
  t4023 = var2[7]*t3985;
  t4872 = -0.9063*t367;
  t4890 = 0.06*t22*t340;
  t4893 = -1.*t367*t220;
  t4898 = t4872 + t4890 + t4893;
  t5040 = t2694 + t1916;
  t5069 = t1129 + t3519;
  t5216 = t432*t4898;
  t5227 = t5216 + t3724;
  t5189 = t326*t4898;
  t5206 = t5189 + t3821;
  t4945 = 0.4999*t401;
  t4839 = t3091*t401;
  t4919 = 0.4999*t1907;
  t4920 = t3050*t1907;
  t5670 = -1.*t2278*t340;
  t5674 = 0.06*t367*t170;
  t5675 = t5670 + t5674;
  t4983 = -1.*t3050*t976;
  t5008 = -1.*t3091*t1907;
  t5052 = t312*t5040;
  t5078 = t627*t5069;
  t5082 = t5052 + t5078;
  t5090 = 1.142857*t299*t5082;
  t5101 = t627*t1935;
  t5107 = t312*t1978;
  t5108 = t5101 + t5107;
  t5112 = 1.142857*t844*t5108;
  t5130 = -1.*t627*t5040;
  t5147 = t312*t5069;
  t5152 = t5130 + t5147;
  t5153 = 1.142857*t299*t5152;
  t5163 = 1.142857*t844*t2171;
  t5465 = t3297*t1935;
  t5476 = t3145*t1978;
  t6007 = t326*t5675;
  t6009 = t6007 + t4400;
  t6017 = t432*t5675;
  t6025 = t6017 + t4473;
  t5317 = -1.*t3145*t5040;
  t5365 = -1.*t3297*t5069;
  t5845 = t312*t578;
  t5853 = t627*t710;
  t5864 = t5845 + t5853;
  t5910 = t3145*t578;
  t5925 = t3847*t1047;
  t5928 = t3297*t710;
  t5945 = t3759*t1145;
  t5956 = t5910 + t5925 + t5928 + t5945;
  t5959 = -1.*t3759*t578;
  t5971 = -1.*t3847*t710;
  t5976 = -1.*t3297*t1935;
  t5985 = -1.*t3145*t1978;
  t5986 = t5959 + t5971 + t5976 + t5985;
  t5529 = t3050*t401;
  t5536 = t3691*t976;
  t5538 = t3712*t485;
  t5540 = t3091*t485;
  t5548 = t4945 + t5529 + t5536 + t5538 + t5540;
  t5593 = -1.*t3712*t401;
  t5596 = -1.*t3091*t401;
  t5604 = 0.4999*t485;
  t5614 = -1.*t3691*t485;
  t5624 = -1.*t3050*t1907;
  t5633 = t5593 + t5596 + t5604 + t5614 + t5624;
  t6247 = 1.142857*t299*t5548;
  t6248 = 1.142857*t844*t5633;
  t6249 = t6247 + t6248;
  t6169 = 1.142857*t844*t5864;
  t6175 = 1.142857*t299*t5108;
  t6192 = t6169 + t6175;
  t6206 = 1.142857*t299*t5956;
  t6212 = 1.142857*t844*t5986;
  t6222 = t6206 + t6212;
  t6278 = 0. + t2328 + t2348 + t2380;
  t6387 = t3023 + t4337;
  t6392 = -1.*t326*t6387;
  t6398 = t3701 + t4381;
  t6399 = t432*t6398;
  t6404 = t6392 + t6399;
  t6423 = -1.*t432*t6387;
  t6427 = -1.*t326*t6398;
  t6432 = t6423 + t6427;
  t6436 = t432*t6387;
  t6437 = t326*t6398;
  t6438 = t6436 + t6437;
  t5650 = t3712*t401;
  t5655 = t3691*t485;
  t5727 = -1.*t3691*t401;
  t6582 = t4890 + t5674;
  t5800 = -1.*t3712*t1907;
  t6001 = t3759*t578;
  t6002 = t3847*t710;
  t6745 = t326*t6582;
  t6749 = t6745 + t6399;
  t6756 = t432*t6582;
  t6757 = t6756 + t6427;
  t6124 = -1.*t3847*t1935;
  t6126 = -1.*t3759*t1978;
  t6887 = -0.9063*t22;
  t6895 = -1.*t22*t220;
  t6900 = -1.*t2278*t170;
  t6901 = -0.12*t22*t170;
  t6906 = t6887 + t6895 + t6900 + t6901;
  t5665 = t4340*t485;
  t6580 = t6387*t485;
  t6586 = t6582*t485;
  t5680 = t401*t4397;
  t6595 = t401*t6398;
  t6601 = t976*t6398;
  t5733 = -1.*t401*t4340;
  t6610 = -1.*t401*t6387;
  t6612 = -1.*t401*t6582;
  t6615 = -1.*t485*t6398;
  t5811 = -1.*t4397*t1907;
  t6626 = -1.*t6398*t1907;
  t6654 = 1.142857*t299*t5864;
  t5871 = 1.142857*t2460*t5864;
  t6655 = 1.142857*t6278*t5108;
  t5878 = 1.142857*t2391*t5108;
  t5897 = 1.142857*t2460*t2060;
  t6702 = 1.142857*t6278*t2171;
  t5902 = 1.142857*t2391*t2171;
  t6004 = t710*t4408;
  t6071 = t578*t4540;
  t6736 = t710*t6404;
  t6753 = t1145*t6749;
  t6767 = t1047*t6757;
  t6771 = t578*t6438;
  t6809 = -1.*t578*t6749;
  t6825 = -1.*t710*t6757;
  t6125 = -1.*t4408*t1935;
  t6833 = -1.*t6404*t1935;
  t6132 = -1.*t4540*t1978;
  t6861 = -1.*t6438*t1978;
  t7163 = t627*t1047;
  t7170 = t312*t1145;
  t7171 = t7163 + t7170;
  t6290 = 1.142857*t6278*t2060;
  t6295 = 1.142857*t299*t2559;
  t6315 = t2092 + t6290 + t6295 + t2179;
  t7240 = -1.*t3145*t578;
  t7242 = -1.*t3297*t710;
  t7244 = t7240 + t7242;
  t7250 = t3297*t1047;
  t7253 = t3145*t1145;
  t7257 = t7250 + t7253;
  t7270 = t1047*t6404;
  t7272 = t1145*t6438;
  t7299 = t5910 + t5928 + t7270 + t7272;
  t7326 = -1.*t710*t6404;
  t7329 = -1.*t578*t6438;
  t7333 = t7326 + t7329 + t5976 + t5985;
  t6941 = t3091*t976;
  t6944 = t3050*t485;
  t6949 = t6941 + t5604 + t6944;
  t6953 = -1.*t3050*t401;
  t6955 = 0.4999*t976;
  t6958 = -1.*t3091*t485;
  t6959 = t6953 + t6955 + t6958;
  t7023 = t6387*t976;
  t7053 = t485*t6398;
  t7067 = t4945 + t5529 + t7023 + t5540 + t7053;
  t7098 = -1.*t6387*t485;
  t7101 = -1.*t401*t6398;
  t7103 = t5596 + t5604 + t7098 + t7101 + t5624;
  t7400 = 1.142857*t6278*t6949;
  t7406 = 1.142857*t299*t6959;
  t7407 = 1.142857*t299*t7067;
  t7415 = 1.142857*t844*t7103;
  t7416 = t7400 + t7406 + t7407 + t7415;
  t7370 = 1.142857*t6278*t5864;
  t7372 = 1.142857*t299*t7171;
  t7373 = t6169 + t7370 + t7372 + t6175;
  t7380 = 1.142857*t299*t7244;
  t7388 = 1.142857*t6278*t7257;
  t7391 = 1.142857*t299*t7299;
  t7392 = 1.142857*t844*t7333;
  t7397 = t7380 + t7388 + t7391 + t7392;
  p_output1[0]=(0.5*t1191*var2[0] + 0.5*(1.142857*t299*(t1259 + t578*t627) + 1.142857*(t1285 + t1145*t627)*t844)*var2[1])*var2[7];
  p_output1[1]=t1825;
  p_output1[2]=t2257;
  p_output1[3]=(0.5*(t2092 + t2179 + 1.142857*t2060*t2391 + 1.142857*t2460*t2559)*var2[0] + 0.5*(t1828 + t1996 + 1.142857*t1179*t2460 + 1.142857*t2391*t778)*var2[1])*var2[7];
  p_output1[4]=0.5*t2620*var2[7];
  p_output1[5]=0.5*t1191*var2[7];
  p_output1[6]=0.5*t2620*var2[0] + 0.5*t1191*var2[1];
  p_output1[7]=t1825;
  p_output1[8]=(0.5*(1.142857*t299*(t1493 + t2774*t627) + 1.142857*(t1567 + t2706*t627)*t844)*var2[0] + 0.5*(1.142857*t299*(t1650 + t2774*t312) + 1.142857*(t1665 + t2706*t312)*t844)*var2[1] + 0.5*(1.142857*t299*(t1145*t3108 + 2.*t1532*t3108 + t1532*t3145 + 2.*t1047*t3196 + t1047*t3269 + t2706*t3297) + 1.142857*(-2.*t1492*t3108 - 1.*t1492*t3145 - 1.*t2774*t3297 - 1.*t3108*t578 - 2.*t3196*t710 - 1.*t3269*t710)*t844)*var2[2])*var2[7];
  p_output1[9]=t4023;
  p_output1[10]=(0.5*(1.142857*t2391*t3582 + t3603 + t3639 + 1.142857*t2460*t4078)*var2[0] + 0.5*(1.142857*t1504*t2391 + 1.142857*t1576*t2460 + t3501 + t3546)*var2[1] + 0.5*(1.142857*t2460*t4207 + 1.142857*t2391*t4324 + 1.142857*t299*(t3660 + t3663 + t3772 + t3790 + t1145*t4408 + t1532*t4408 + t1047*t4502 + t1047*t4540) + 1.142857*(t3934 + t3936 + t3937 + t3940 - 1.*t1492*t4408 - 1.*t4408*t578 - 1.*t4502*t710 - 1.*t4540*t710)*t844)*var2[2])*var2[7];
  p_output1[11]=0.5*t4736*var2[7];
  p_output1[12]=0.5*t1587*var2[7];
  p_output1[13]=0.5*t4786*var2[7];
  p_output1[14]=0.5*t4736*var2[0] + 0.5*t1587*var2[1] + 0.5*t4786*var2[2];
  p_output1[15]=t2257;
  p_output1[16]=t4023;
  p_output1[17]=(0.5*(t5090 + t5112)*var2[0] + 0.5*(t5153 + t5163)*var2[1] + 0.5*(1.142857*t299*(t1145*t5206 + t1047*t5227 + t5465 + t5476 + 2.*t3759*t578 + 2.*t3847*t710) + 1.142857*(-2.*t1978*t3759 - 2.*t1935*t3847 + t5317 + t5365 - 1.*t5206*t578 - 1.*t5227*t710)*t844)*var2[2] + 0.5*(1.142857*(-2.*t1907*t3712 - 2.*t3691*t401 - 1.*t3712*t485 - 1.*t401*t4898 + t4945 + t4983 + t5008)*t844 + 1.142857*t299*(2.*t3712*t401 + t4839 + 2.*t3691*t485 + t485*t4898 + t4919 + t4920 + t3712*t976))*var2[6])*var2[7];
  p_output1[18]=(0.5*(t5090 + t5112 + t5871 + t5878)*var2[0] + 0.5*(t5153 + t5163 + t5897 + t5902)*var2[1] + 0.5*(1.142857*t2391*t5956 + 1.142857*t2460*t5986 + 1.142857*t299*(t5465 + t5476 + t6001 + t6002 + t6004 + t1145*t6009 + t1047*t6025 + t6071) + 1.142857*(t5317 + t5365 - 1.*t578*t6009 + t6124 + t6125 + t6126 + t6132 - 1.*t6025*t710)*t844)*var2[2] + 0.5*(1.142857*t2391*t5548 + 1.142857*t2460*t5633 + 1.142857*(-1.*t4397*t485 + t4945 + t4983 + t5008 - 1.*t401*t5675 + t5727 + t5733 + t5800 + t5811)*t844 + 1.142857*t299*(t4839 + t4919 + t4920 + t5650 + t5655 + t5665 + t485*t5675 + t5680 + t4397*t976))*var2[6])*var2[7];
  p_output1[19]=0.5*t6192*var2[7];
  p_output1[20]=0.5*t2188*var2[7];
  p_output1[21]=0.5*t6222*var2[7];
  p_output1[22]=0.5*t6249*var2[7];
  p_output1[23]=0.5*t6192*var2[0] + 0.5*t2188*var2[1] + 0.5*t6222*var2[2] + 0.5*t6249*var2[6];
  p_output1[24]=(0.5*t6315*var2[0] + 0.5*(t1828 + t1996 + 1.142857*t1179*t299 + 1.142857*t6278*t778)*var2[1])*var2[7];
  p_output1[25]=(0.5*(t3603 + t3639 + 1.142857*t299*t4078 + 1.142857*t3582*t6278)*var2[0] + 0.5*(1.142857*t1576*t299 + t3501 + t3546 + 1.142857*t1504*t6278)*var2[1] + 0.5*(1.142857*t299*t4207 + 1.142857*t4324*t6278 + 1.142857*t299*(t3660 + t3663 + t3772 + t3790 + t1145*t6404 + t1532*t6404 + t1047*t6432 + t1047*t6438) + 1.142857*(t3934 + t3936 + t3937 + t3940 - 1.*t1492*t6404 - 1.*t578*t6404 - 1.*t6432*t710 - 1.*t6438*t710)*t844)*var2[2])*var2[7];
  p_output1[26]=(0.5*(t5090 + t5112 + t6654 + t6655)*var2[0] + 0.5*(t2614 + t5153 + t5163 + t6702)*var2[1] + 0.5*(1.142857*t299*t5986 + 1.142857*t5956*t6278 + 1.142857*t299*(t5465 + t5476 + t6001 + t6002 + t6736 + t6753 + t6767 + t6771) + 1.142857*(t5317 + t5365 + t6124 + t6126 + t6809 + t6825 + t6833 + t6861)*t844)*var2[2] + 0.5*(1.142857*t299*t5633 + 1.142857*t5548*t6278 + 1.142857*t299*(t4839 + t4919 + t4920 + t5650 + t5655 + t6580 + t6586 + t6595 + t6601) + 1.142857*(t4945 + t4983 + t5008 + t5727 + t5800 + t6610 + t6612 + t6615 + t6626)*t844)*var2[6])*var2[7];
  p_output1[27]=var2[7]*(0.5*(t5090 + t5112 + t5871 + t5878 + t6654 + t6655 + 1.142857*t5864*t6906 + 1.142857*t2391*t7171)*var2[0] + 0.5*(1.142857*t2391*t2559 + t2614 + t5153 + t5163 + t5897 + t5902 + t6702 + 1.142857*t2060*t6906)*var2[1] + 0.5*(1.142857*(t1047*t4408 + t1145*t4540 + t5910 + t5928)*t6278 + 1.142857*t299*(t5465 + t5476 + t6004 + t6071 + t6736 + t6753 + t6767 + t6771) + 1.142857*t299*(-1.*t4540*t578 + t5976 + t5985 - 1.*t4408*t710) + 1.142857*t2391*t7244 + 1.142857*t6906*t7257 + 1.142857*t2391*t7299 + 1.142857*t2460*t7333 + 1.142857*(t5317 + t5365 + t6125 + t6132 + t6809 + t6825 + t6833 + t6861)*t844)*var2[2] + 0.5*(1.142857*t299*(-1.*t401*t4397 - 1.*t4340*t485 + t5596 + t5604 + t5624) + 1.142857*t299*(t4839 + t4919 + t4920 + t5665 + t5680 + t6580 + t6586 + t6595 + t6601) + 1.142857*t6906*t6949 + 1.142857*t2391*t6959 + 1.142857*t2391*t7067 + 1.142857*t2460*t7103 + 1.142857*(t4945 + t4983 + t5008 + t5733 + t5811 + t6610 + t6612 + t6615 + t6626)*t844 + 1.142857*t6278*(t4397*t485 + t4945 + t5529 + t5540 + t4340*t976))*var2[6] + 0.5*(2.285714*t2460*t299 + 2.285714*t2391*t6278 + 2.285714*t299*t6906 + 2.285714*t2391*t844)*var2[7] - 0.03428571*t2391*var2[8]);
  p_output1[28]=0.5*t7373*var2[7];
  p_output1[29]=0.5*t6315*var2[7];
  p_output1[30]=0.5*t7397*var2[7];
  p_output1[31]=0.5*t7416*var2[7];
  p_output1[32]=0.5*t7373*var2[0] + 0.5*t6315*var2[1] + 0.5*t7397*var2[2] + 0.5*t7416*var2[6] + (2.285714*t299*t6278 + 2.285714*t299*t844)*var2[7] - 0.03428571*t299*var2[8];
  p_output1[33]=-0.03428571*t299*var2[7];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 34, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L7_J8_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L7_J8_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
