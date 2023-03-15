/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:29:31 GMT-08:00
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
  double t137;
  double t80;
  double t6;
  double t305;
  double t190;
  double t205;
  double t220;
  double t299;
  double t326;
  double t348;
  double t485;
  double t486;
  double t494;
  double t793;
  double t754;
  double t759;
  double t771;
  double t732;
  double t544;
  double t556;
  double t578;
  double t595;
  double t627;
  double t679;
  double t429;
  double t432;
  double t444;
  double t113;
  double t170;
  double t400;
  double t415;
  double t853;
  double t800;
  double t722;
  double t473;
  double t537;
  double t694;
  double t710;
  double t778;
  double t809;
  double t865;
  double t879;
  double t885;
  double t1007;
  double t1047;
  double t1055;
  double t1068;
  double t1072;
  double t1101;
  double t1186;
  double t1193;
  double t1213;
  double t889;
  double t1133;
  double t1536;
  double t1542;
  double t1552;
  double t1295;
  double t1419;
  double t1588;
  double t1615;
  double t843;
  double t952;
  double t1992;
  double t2025;
  double t2086;
  double t2113;
  double t1938;
  double t1953;
  double t1224;
  double t1241;
  double t2201;
  double t2231;
  double t2241;
  double t1916;
  double t1935;
  double t1986;
  double t2155;
  double t2171;
  double t2179;
  double t2358;
  double t2364;
  double t2380;
  double t2194;
  double t2195;
  double t2197;
  double t2242;
  double t2257;
  double t2278;
  double t2279;
  double t2315;
  double t2320;
  double t1907;
  double t2586;
  double t2597;
  double t2606;
  double t2614;
  double t2617;
  double t2624;
  double t2684;
  double t2687;
  double t2306;
  double t2322;
  double t2326;
  double t2328;
  double t2391;
  double t2620;
  double t2690;
  double t2694;
  double t2733;
  double t2739;
  double t2741;
  double t2400;
  double t2440;
  double t2471;
  double t2528;
  double t2532;
  double t2556;
  double t2559;
  double t976;
  double t1259;
  double t1276;
  double t2884;
  double t2929;
  double t2942;
  double t1567;
  double t1576;
  double t1587;
  double t1644;
  double t1650;
  double t1665;
  double t1667;
  double t1687;
  double t1688;
  double t1694;
  double t1697;
  double t1700;
  double t1705;
  double t1711;
  double t1795;
  double t1808;
  double t1825;
  double t1838;
  double t3070;
  double t3112;
  double t3146;
  double t3149;
  double t3365;
  double t3376;
  double t3408;
  double t3409;
  double t3526;
  double t3531;
  double t3574;
  double t3586;
  double t3603;
  double t3615;
  double t3501;
  double t3537;
  double t3546;
  double t3552;
  double t3562;
  double t3570;
  double t3414;
  double t3442;
  double t3454;
  double t3463;
  double t3932;
  double t3937;
  double t3833;
  double t3845;
  double t4353;
  double t4381;
  double t4396;
  double t4222;
  double t4245;
  double t4246;
  double t4324;
  double t4328;
  double t4332;
  double t3790;
  double t3847;
  double t3878;
  double t3884;
  double t3941;
  double t4023;
  double t4046;
  double t4052;
  double t4055;
  double t4067;
  double t4101;
  double t4106;
  double t4109;
  double t4118;
  double t4132;
  double t4538;
  double t4540;
  double t4552;
  double t4569;
  double t4576;
  double t4198;
  double t4207;
  double t4340;
  double t4342;
  double t4864;
  double t4872;
  double t4885;
  double t4899;
  double t4900;
  double t4901;
  double t4919;
  double t4920;
  double t4923;
  double t4668;
  double t4686;
  double t4699;
  double t4701;
  double t5090;
  double t5101;
  double t5106;
  double t5112;
  double t5118;
  double t5126;
  double t2188;
  double t2272;
  double t2332;
  double t2335;
  double t2395;
  double t2472;
  double t2560;
  double t2569;
  double t2580;
  double t2585;
  double t3802;
  double t3821;
  double t3897;
  double t3903;
  double t3944;
  double t4050;
  double t4094;
  double t4099;
  double t4167;
  double t4297;
  double t4337;
  double t4446;
  double t4458;
  double t4502;
  double t4529;
  double t4586;
  double t4605;
  double t4639;
  double t4643;
  double t4651;
  double t4709;
  double t4710;
  double t4714;
  double t4729;
  double t4731;
  double t4736;
  double t5209;
  double t5216;
  double t5218;
  double t5220;
  double t5233;
  double t5237;
  double t5241;
  double t5269;
  double t5270;
  double t5274;
  double t5430;
  double t5489;
  double t5491;
  double t5495;
  double t5505;
  double t5516;
  double t5521;
  double t5528;
  double t5529;
  double t5733;
  double t5800;
  double t5811;
  double t5903;
  double t5904;
  double t5925;
  double t5875;
  double t5888;
  double t6175;
  double t6186;
  double t6153;
  double t6165;
  double t5540;
  double t5450;
  double t5465;
  double t5476;
  double t5477;
  double t6293;
  double t6295;
  double t6299;
  double t5548;
  double t5585;
  double t5596;
  double t5604;
  double t6291;
  double t6292;
  double t6300;
  double t6303;
  double t6310;
  double t6313;
  double t6321;
  double t6392;
  double t6398;
  double t6399;
  double t6404;
  double t6412;
  double t6415;
  double t6423;
  double t5843;
  double t5845;
  double t5853;
  double t5882;
  double t5891;
  double t5897;
  double t5902;
  double t5928;
  double t5990;
  double t5995;
  double t6002;
  double t6004;
  double t6007;
  double t6041;
  double t6042;
  double t6071;
  double t6118;
  double t6122;
  double t6124;
  double t6125;
  double t6126;
  double t6139;
  double t6140;
  double t6141;
  double t6216;
  double t6218;
  double t6237;
  double t6239;
  double t6245;
  double t6269;
  double t6270;
  double t6727;
  double t6732;
  double t6749;
  double t6750;
  double t6196;
  double t6197;
  double t6866;
  double t6867;
  double t6880;
  double t6881;
  double t6883;
  double t6895;
  double t6900;
  double t6901;
  double t6906;
  double t6907;
  double t6936;
  double t6938;
  double t6940;
  double t6972;
  double t7000;
  double t6976;
  double t7020;
  double t7023;
  double t7061;
  double t7065;
  double t7067;
  double t7173;
  double t7181;
  double t7184;
  double t7217;
  double t7220;
  double t7224;
  double t7227;
  double t7234;
  double t7238;
  double t6354;
  double t6360;
  double t6361;
  double t6364;
  double t7279;
  double t7273;
  double t7280;
  double t7282;
  double t7296;
  double t7299;
  double t7329;
  double t7333;
  double t7335;
  double t7336;
  double t7337;
  double t6457;
  double t6497;
  double t6561;
  double t6595;
  double t6702;
  double t6720;
  double t7478;
  double t7479;
  double t7482;
  double t7483;
  double t6776;
  double t6802;
  double t6341;
  double t6348;
  double t6369;
  double t7318;
  double t6379;
  double t6380;
  double t6383;
  double t7546;
  double t7577;
  double t6458;
  double t7377;
  double t6507;
  double t7391;
  double t6580;
  double t7399;
  double t6601;
  double t7407;
  double t6626;
  double t6640;
  double t6651;
  double t7442;
  double t7443;
  double t7446;
  double t6667;
  double t6669;
  double t6679;
  double t7470;
  double t7471;
  double t7475;
  double t6723;
  double t6756;
  double t7477;
  double t7481;
  double t7501;
  double t7505;
  double t7517;
  double t7524;
  double t6785;
  double t7525;
  double t6808;
  double t7528;
  double t7089;
  double t7090;
  double t7096;
  double t7650;
  double t7651;
  double t7661;
  double t7665;
  double t7668;
  double t7669;
  double t7670;
  double t7671;
  double t7678;
  double t7679;
  double t7680;
  double t7683;
  double t7684;
  t137 = Sin(var1[7]);
  t80 = Cos(var1[8]);
  t6 = Cos(var1[7]);
  t305 = Sin(var1[8]);
  t190 = -1.*t80;
  t205 = 1. + t190;
  t220 = -1.3127*t205;
  t299 = -1.3127*t80;
  t326 = -0.06*t305;
  t348 = t220 + t299 + t326;
  t485 = t6*t80;
  t486 = -1.*t137*t305;
  t494 = t485 + t486;
  t793 = Cos(var1[6]);
  t754 = -1.*t80*t137;
  t759 = -1.*t6*t305;
  t771 = t754 + t759;
  t732 = Sin(var1[6]);
  t544 = -1.*t6;
  t556 = 1. + t544;
  t578 = -0.9063*t556;
  t595 = -0.06*t80*t137;
  t627 = t6*t348;
  t679 = t578 + t595 + t627;
  t429 = t80*t137;
  t432 = t6*t305;
  t444 = t429 + t432;
  t113 = 0.06*t6*t80;
  t170 = 0.9063*t137;
  t400 = t137*t348;
  t415 = t113 + t170 + t400;
  t853 = Sin(var1[2]);
  t800 = t793*t494;
  t722 = Cos(var1[2]);
  t473 = t415*t444;
  t537 = 0.4999*t494;
  t694 = t679*t494;
  t710 = t473 + t537 + t694;
  t778 = t732*t771;
  t809 = t778 + t800;
  t865 = t793*t771;
  t879 = -1.*t732*t494;
  t885 = t865 + t879;
  t1007 = -1.*t679*t771;
  t1047 = 0.4999*t444;
  t1055 = -1.*t415*t494;
  t1068 = t1007 + t1047 + t1055;
  t1072 = -1.*t732*t444;
  t1101 = t1072 + t800;
  t1186 = t793*t444;
  t1193 = t732*t494;
  t1213 = t1186 + t1193;
  t889 = -1.*t853*t885;
  t1133 = -1.*t853*t1101;
  t1536 = -1.*t732*t771;
  t1542 = -1.*t793*t494;
  t1552 = t1536 + t1542;
  t1295 = -1.*t722*t885;
  t1419 = -1.*t722*t1101;
  t1588 = -1.*t793*t444;
  t1615 = t1588 + t879;
  t843 = -1.*t722*t809;
  t952 = t843 + t889;
  t1992 = -0.06*t6*t80;
  t2025 = -0.9063*t137;
  t2086 = -1.*t137*t348;
  t2113 = t1992 + t2025 + t2086;
  t1938 = 0.9063*t6;
  t1953 = t1938 + t595 + t627;
  t1224 = -1.*t722*t1213;
  t1241 = t1133 + t1224;
  t2201 = -1.*t6*t80;
  t2231 = t137*t305;
  t2241 = t2201 + t2231;
  t1916 = 0.4999*t771;
  t1935 = t679*t771;
  t1986 = t1953*t444;
  t2155 = t2113*t494;
  t2171 = t415*t494;
  t2179 = t1916 + t1935 + t1986 + t2155 + t2171;
  t2358 = -1.*t853*t809;
  t2364 = t722*t885;
  t2380 = t2358 + t2364;
  t2194 = -1.*t2113*t771;
  t2195 = -1.*t415*t771;
  t2197 = -1.*t1953*t494;
  t2242 = -1.*t679*t2241;
  t2257 = t2194 + t2195 + t537 + t2197 + t2242;
  t2278 = t793*t2241;
  t2279 = t1536 + t2278;
  t2315 = t732*t2241;
  t2320 = t865 + t2315;
  t1907 = 1.142857*t1068*t952;
  t2586 = -0.06*t80;
  t2597 = 0. + t2586;
  t2606 = t2597*t137;
  t2614 = -0.06*t6*t305;
  t2617 = t2606 + t2614;
  t2624 = t6*t2597;
  t2684 = 0.06*t137*t305;
  t2687 = t2624 + t2684;
  t2306 = -1.*t853*t2279;
  t2322 = -1.*t722*t2320;
  t2326 = t2306 + t2322;
  t2328 = 1.142857*t710*t2326;
  t2391 = 1.142857*t1068*t2380;
  t2620 = t2617*t444;
  t2690 = t494*t2687;
  t2694 = t1916 + t1935 + t2620 + t2171 + t2690;
  t2733 = -1.*t2617*t494;
  t2739 = -1.*t771*t2687;
  t2741 = t2195 + t537 + t2733 + t2739 + t2242;
  t2400 = t722*t1101;
  t2440 = -1.*t853*t1213;
  t2471 = t2400 + t2440;
  t2528 = t722*t2279;
  t2532 = -1.*t853*t2320;
  t2556 = t2528 + t2532;
  t2559 = 1.142857*t710*t2556;
  t976 = 1.142857*t710*t952;
  t1259 = 1.142857*t1068*t1241;
  t1276 = t976 + t1259;
  t2884 = 1.142857*t710*t2380;
  t2929 = 1.142857*t1068*t2471;
  t2942 = t2884 + t2929;
  t1567 = t722*t1552;
  t1576 = t1567 + t889;
  t1587 = 1.142857*t710*t1576;
  t1644 = t722*t1615;
  t1650 = t1133 + t1644;
  t1665 = 1.142857*t1068*t1650;
  t1667 = t1587 + t1665;
  t1687 = 0.5*var2[0]*t1667;
  t1688 = -1.*t853*t1552;
  t1694 = t1688 + t1295;
  t1697 = 1.142857*t710*t1694;
  t1700 = -1.*t853*t1615;
  t1705 = t1419 + t1700;
  t1711 = 1.142857*t1068*t1705;
  t1795 = t1697 + t1711;
  t1808 = 0.5*var2[1]*t1795;
  t1825 = t1687 + t1808;
  t1838 = var2[6]*t1825;
  t3070 = t732*t444;
  t3112 = t3070 + t1542;
  t3146 = -1.*t793*t771;
  t3149 = t3146 + t1193;
  t3365 = -0.4999*t732;
  t3376 = -1.*t732*t679;
  t3408 = -1.*t793*t415;
  t3409 = t3365 + t3376 + t3408;
  t3526 = t793*t679;
  t3531 = -1.*t732*t415;
  t3574 = -1.*t793;
  t3586 = 1. + t3574;
  t3603 = -0.4999*t3586;
  t3615 = t3603 + t3526 + t3531;
  t3501 = 0.4999*t793;
  t3537 = t3501 + t3526 + t3531;
  t3546 = -0.4999*t793;
  t3552 = -1.*t793*t679;
  t3562 = t732*t415;
  t3570 = t3546 + t3552 + t3562;
  t3414 = 0.4999*t732;
  t3442 = t732*t679;
  t3454 = t793*t415;
  t3463 = t3414 + t3442 + t3454;
  t3932 = t853*t1552;
  t3937 = t3932 + t2364;
  t3833 = -1.*t732*t2241;
  t3845 = t3146 + t3833;
  t4353 = -1.*t732*t1953;
  t4381 = t793*t2113;
  t4396 = t4353 + t4381;
  t4222 = -1.*t793*t1953;
  t4245 = -1.*t732*t2113;
  t4246 = t4222 + t4245;
  t4324 = t793*t1953;
  t4328 = t732*t2113;
  t4332 = t4324 + t4328;
  t3790 = 1.142857*t1068*t1576;
  t3847 = t722*t3845;
  t3878 = t2306 + t3847;
  t3884 = 1.142857*t710*t3878;
  t3941 = 1.142857*t1068*t3937;
  t4023 = t853*t1615;
  t4046 = t2400 + t4023;
  t4052 = t853*t3845;
  t4055 = t2528 + t4052;
  t4067 = 1.142857*t710*t4055;
  t4101 = -1.*t3615*t1552;
  t4106 = -1.*t3537*t809;
  t4109 = -1.*t3409*t885;
  t4118 = -1.*t3463*t885;
  t4132 = t4101 + t4106 + t4109 + t4118;
  t4538 = t3409*t1101;
  t4540 = t3463*t1101;
  t4552 = t3615*t1615;
  t4569 = t3537*t1213;
  t4576 = t4538 + t4540 + t4552 + t4569;
  t4198 = t3615*t1552;
  t4207 = t3537*t809;
  t4340 = t3409*t885;
  t4342 = t3463*t885;
  t4864 = -1.*t732*t2617;
  t4872 = t793*t2687;
  t4885 = t4864 + t4872;
  t4899 = -1.*t793*t2617;
  t4900 = -1.*t732*t2687;
  t4901 = t4899 + t4900;
  t4919 = t793*t2617;
  t4920 = t732*t2687;
  t4923 = t4919 + t4920;
  t4668 = -1.*t3409*t2279;
  t4686 = -1.*t3463*t2279;
  t4699 = -1.*t3615*t3845;
  t4701 = -1.*t3537*t2320;
  t5090 = 1.142857*t710*t3937;
  t5101 = 1.142857*t1068*t4046;
  t5106 = t5090 + t5101;
  t5112 = 1.142857*t1068*t4132;
  t5118 = 1.142857*t710*t4576;
  t5126 = t5112 + t5118;
  t2188 = 1.142857*t2179*t952;
  t2272 = 1.142857*t2257*t1241;
  t2332 = t1907 + t2188 + t2272 + t2328;
  t2335 = 0.5*var2[1]*t2332;
  t2395 = 1.142857*t2179*t2380;
  t2472 = 1.142857*t2257*t2471;
  t2560 = t2391 + t2395 + t2472 + t2559;
  t2569 = 0.5*var2[0]*t2560;
  t2580 = t2335 + t2569;
  t2585 = var2[6]*t2580;
  t3802 = 1.142857*t2179*t1576;
  t3821 = 1.142857*t2257*t1650;
  t3897 = t3790 + t3802 + t3821 + t3884;
  t3903 = 0.5*var2[1]*t3897;
  t3944 = 1.142857*t2179*t3937;
  t4050 = 1.142857*t2257*t4046;
  t4094 = t3941 + t3944 + t4050 + t4067;
  t4099 = 0.5*var2[0]*t4094;
  t4167 = 1.142857*t2257*t4132;
  t4297 = t4246*t1101;
  t4337 = t4332*t1101;
  t4446 = t4396*t1615;
  t4458 = t4396*t1213;
  t4502 = t4198 + t4207 + t4297 + t4337 + t4340 + t4342 + t4446 + t4458;
  t4529 = 1.142857*t710*t4502;
  t4586 = 1.142857*t2179*t4576;
  t4605 = -1.*t4396*t1552;
  t4639 = -1.*t4396*t809;
  t4643 = -1.*t4246*t885;
  t4651 = -1.*t4332*t885;
  t4709 = t4605 + t4639 + t4643 + t4651 + t4668 + t4686 + t4699 + t4701;
  t4710 = 1.142857*t1068*t4709;
  t4714 = t4167 + t4529 + t4586 + t4710;
  t4729 = 0.5*var2[2]*t4714;
  t4731 = t3903 + t4099 + t4729;
  t4736 = var2[6]*t4731;
  t5209 = -0.9063*t6;
  t5216 = 0.06*t80*t137;
  t5218 = -1.*t6*t348;
  t5220 = t5209 + t5216 + t5218;
  t5233 = -1.*t5220*t771;
  t5237 = -2.*t1953*t771;
  t5241 = -1.*t679*t444;
  t5269 = -1.*t2113*t494;
  t5270 = -2.*t2113*t2241;
  t5274 = -1.*t415*t2241;
  t5430 = t1916 + t5233 + t5237 + t5241 + t5269 + t5270 + t5274;
  t5489 = 2.*t2113*t771;
  t5491 = t415*t771;
  t5495 = t2113*t444;
  t5505 = t5220*t494;
  t5516 = 2.*t1953*t494;
  t5521 = 0.4999*t2241;
  t5528 = t679*t2241;
  t5529 = t5489 + t5491 + t5495 + t5505 + t5516 + t5521 + t5528;
  t5733 = t722*t809;
  t5800 = t853*t885;
  t5811 = t5733 + t5800;
  t5903 = t853*t2279;
  t5904 = t722*t2320;
  t5925 = t5903 + t5904;
  t5875 = t3070 + t2278;
  t5888 = t1186 + t3833;
  t6175 = t793*t5220;
  t6186 = t6175 + t4245;
  t6153 = t732*t5220;
  t6165 = t6153 + t4381;
  t5540 = Power(t80,2);
  t5450 = 0.9063*t80;
  t5465 = t80*t348;
  t5476 = 0.06*t80*t305;
  t5477 = t5450 + t5465 + t5476;
  t6293 = -1.*t2597*t137;
  t6295 = 0.06*t6*t305;
  t6299 = t6293 + t6295;
  t5548 = -0.06*t5540;
  t5585 = 0.9063*t305;
  t5596 = t348*t305;
  t5604 = t5548 + t5585 + t5596;
  t6291 = -1.*t1953*t771;
  t6292 = -1.*t771*t2617;
  t6300 = -1.*t771*t6299;
  t6303 = -1.*t494*t2687;
  t6310 = -1.*t2113*t2241;
  t6313 = -1.*t2687*t2241;
  t6321 = t1916 + t6291 + t6292 + t6300 + t5241 + t6303 + t6310 + t5274 + t6313;
  t6392 = t2113*t771;
  t6398 = t1953*t494;
  t6399 = t2617*t494;
  t6404 = t6299*t494;
  t6412 = t771*t2687;
  t6415 = t444*t2687;
  t6423 = t6392 + t5491 + t6398 + t6399 + t6404 + t6412 + t6415 + t5521 + t5528;
  t5843 = t853*t1101;
  t5845 = t722*t1213;
  t5853 = t5843 + t5845;
  t5882 = t722*t5875;
  t5891 = t853*t5888;
  t5897 = t5882 + t5891;
  t5902 = 1.142857*t710*t5897;
  t5928 = 1.142857*t1068*t5925;
  t5990 = -1.*t853*t5875;
  t5995 = t722*t5888;
  t6002 = t5990 + t5995;
  t6004 = 1.142857*t710*t6002;
  t6007 = 1.142857*t1068*t2556;
  t6041 = -1.*t3463*t809;
  t6042 = -1.*t3615*t885;
  t6071 = t6041 + t6042;
  t6118 = t3463*t809;
  t6122 = t4396*t1101;
  t6124 = t3615*t885;
  t6125 = t4332*t1213;
  t6126 = t6118 + t6122 + t6124 + t6125;
  t6139 = t3615*t1101;
  t6140 = t3463*t1213;
  t6141 = t6139 + t6140;
  t6216 = -1.*t4332*t809;
  t6218 = -1.*t4396*t885;
  t6237 = -1.*t3615*t2279;
  t6239 = -1.*t3463*t2320;
  t6245 = t6216 + t6218 + t6237 + t6239;
  t6269 = t3615*t2279;
  t6270 = t3463*t2320;
  t6727 = t732*t6299;
  t6732 = t6727 + t4872;
  t6749 = t793*t6299;
  t6750 = t6749 + t4900;
  t6196 = -1.*t3463*t5875;
  t6197 = -1.*t3615*t5888;
  t6866 = 1.142857*t1068*t5811;
  t6867 = 1.142857*t2179*t5811;
  t6880 = 1.142857*t2257*t5853;
  t6881 = 1.142857*t710*t5925;
  t6883 = t6866 + t6867 + t6880 + t6881;
  t6895 = 1.142857*t2257*t6071;
  t6900 = 1.142857*t710*t6126;
  t6901 = 1.142857*t2179*t6141;
  t6906 = 1.142857*t1068*t6245;
  t6907 = t6895 + t6900 + t6901 + t6906;
  t6936 = 1.142857*t5477*t2179;
  t6938 = 1.142857*t5604*t2257;
  t6940 = t6936 + t6938;
  t6972 = t595 + t2614;
  t7000 = t1992 + t2684;
  t6976 = t6972*t444;
  t7020 = t494*t7000;
  t7023 = t1916 + t1935 + t6976 + t2171 + t7020;
  t7061 = -1.*t6972*t494;
  t7065 = -1.*t771*t7000;
  t7067 = t2195 + t537 + t7061 + t7065 + t2242;
  t7173 = -1.*t732*t6972;
  t7181 = t793*t7000;
  t7184 = t7173 + t7181;
  t7217 = -1.*t793*t6972;
  t7220 = -1.*t732*t7000;
  t7224 = t7217 + t7220;
  t7227 = t793*t6972;
  t7234 = t732*t7000;
  t7238 = t7227 + t7234;
  t6354 = -0.9063*t305;
  t6360 = -1.*t348*t305;
  t6361 = Power(t305,2);
  t6364 = -0.06*t6361;
  t7279 = t5216 + t6295;
  t7273 = -1.*t771*t6972;
  t7280 = -1.*t771*t7279;
  t7282 = -1.*t494*t7000;
  t7296 = -1.*t7000*t2241;
  t7299 = t1916 + t6291 + t7273 + t7280 + t5241 + t7282 + t6310 + t5274 + t7296;
  t7329 = t6972*t494;
  t7333 = t7279*t494;
  t7335 = t771*t7000;
  t7336 = t444*t7000;
  t7337 = t6392 + t5491 + t6398 + t7329 + t7333 + t7335 + t7336 + t5521 + t5528;
  t6457 = 1.142857*t2257*t5811;
  t6497 = 1.142857*t2179*t5925;
  t6561 = 1.142857*t2257*t2380;
  t6595 = 1.142857*t2179*t2556;
  t6702 = t4332*t809;
  t6720 = t4396*t885;
  t7478 = t732*t7279;
  t7479 = t7478 + t7181;
  t7482 = t793*t7279;
  t7483 = t7482 + t7220;
  t6776 = -1.*t4396*t2279;
  t6802 = -1.*t4332*t2320;
  t6341 = t2597*t80;
  t6348 = 0.06*t5540;
  t6369 = t6341 + t6348 + t6354 + t6360 + t6364;
  t7318 = 0. + t6354 + t6360 + t6364;
  t6379 = t2597*t305;
  t6380 = 0.12*t80*t305;
  t6383 = t5450 + t5465 + t6379 + t6380;
  t7546 = t1916 + t6292 + t7273 + t7280 + t5241 + t7282 + t5274 + t6313 + t7296;
  t7577 = t5491 + t6399 + t7329 + t7333 + t6412 + t7335 + t7336 + t5521 + t5528;
  t6458 = 1.142857*t2741*t5811;
  t7377 = 1.142857*t7067*t5811;
  t6507 = 1.142857*t2694*t5925;
  t7391 = 1.142857*t7023*t5925;
  t6580 = 1.142857*t2741*t2380;
  t7399 = 1.142857*t7067*t2380;
  t6601 = 1.142857*t2694*t2556;
  t7407 = 1.142857*t7023*t2556;
  t6626 = t1101*t4885;
  t6640 = t1213*t4923;
  t6651 = t6118 + t6124 + t6626 + t6640;
  t7442 = t1101*t7184;
  t7443 = t1213*t7238;
  t7446 = t6118 + t6124 + t7442 + t7443;
  t6667 = -1.*t885*t4885;
  t6669 = -1.*t809*t4923;
  t6679 = t6667 + t6669 + t6237 + t6239;
  t7470 = -1.*t885*t7184;
  t7471 = -1.*t809*t7238;
  t7475 = t7470 + t7471 + t6237 + t6239;
  t6723 = t885*t4885;
  t6756 = t809*t4923;
  t7477 = t885*t7184;
  t7481 = t1213*t7479;
  t7501 = t1101*t7483;
  t7505 = t809*t7238;
  t7517 = -1.*t809*t7479;
  t7524 = -1.*t885*t7483;
  t6785 = -1.*t4885*t2279;
  t7525 = -1.*t7184*t2279;
  t6808 = -1.*t4923*t2320;
  t7528 = -1.*t7238*t2320;
  t7089 = 1.142857*t7023*t2380;
  t7090 = 1.142857*t7067*t2471;
  t7096 = t2391 + t7089 + t7090 + t2559;
  t7650 = 1.142857*t7023*t5811;
  t7651 = 1.142857*t7067*t5853;
  t7661 = t6866 + t7650 + t7651 + t6881;
  t7665 = 1.142857*t7067*t6071;
  t7668 = 1.142857*t7023*t6141;
  t7669 = 1.142857*t710*t7446;
  t7670 = 1.142857*t1068*t7475;
  t7671 = t7665 + t7668 + t7669 + t7670;
  t7678 = 1.142857*t7318*t710;
  t7679 = 1.142857*t5477*t1068;
  t7680 = 1.142857*t5477*t7023;
  t7683 = 1.142857*t5604*t7067;
  t7684 = t7678 + t7679 + t7680 + t7683;
  p_output1[0]=(0.5*t1276*var2[0] + 0.5*(1.142857*t1068*(t1419 + t1213*t853) + 1.142857*t710*(t1295 + t809*t853))*var2[1])*var2[6];
  p_output1[1]=t1838;
  p_output1[2]=t2585;
  p_output1[3]=(0.5*(t2391 + t2559 + 1.142857*t2380*t2694 + 1.142857*t2471*t2741)*var2[0] + 0.5*(t1907 + t2328 + 1.142857*t1241*t2741 + 1.142857*t2694*t952)*var2[1])*var2[6];
  p_output1[4]=0.5*t2942*var2[6];
  p_output1[5]=0.5*t1276*var2[6];
  p_output1[6]=0.5*t2942*var2[0] + 0.5*t1276*var2[1];
  p_output1[7]=t1838;
  p_output1[8]=(0.5*(1.142857*t1068*(t1644 + t3112*t853) + 1.142857*t710*(t1567 + t3149*t853))*var2[0] + 0.5*(1.142857*t1068*(t1700 + t3112*t722) + 1.142857*t710*(t1688 + t3149*t722))*var2[1] + 0.5*(1.142857*(t1213*t3409 + 2.*t1615*t3409 + t1615*t3463 + 2.*t1101*t3537 + t1101*t3570 + t3112*t3615)*t710 + 1.142857*t1068*(-2.*t1552*t3409 - 1.*t1552*t3463 - 1.*t3149*t3615 - 1.*t3409*t809 - 2.*t3537*t885 - 1.*t3570*t885))*var2[2])*var2[6];
  p_output1[9]=t4736;
  p_output1[10]=(0.5*(1.142857*t2694*t3937 + t3941 + 1.142857*t2741*t4046 + t4067)*var2[0] + 0.5*(1.142857*t1576*t2694 + 1.142857*t1650*t2741 + t3790 + t3884)*var2[1] + 0.5*(1.142857*t2741*t4132 + 1.142857*t2694*t4576 + 1.142857*(t4198 + t4207 + t4340 + t4342 + t1213*t4885 + t1615*t4885 + t1101*t4901 + t1101*t4923)*t710 + 1.142857*t1068*(t4668 + t4686 + t4699 + t4701 - 1.*t1552*t4885 - 1.*t4885*t809 - 1.*t4901*t885 - 1.*t4923*t885))*var2[2])*var2[6];
  p_output1[11]=0.5*t5106*var2[6];
  p_output1[12]=0.5*t1667*var2[6];
  p_output1[13]=0.5*t5126*var2[6];
  p_output1[14]=0.5*t5106*var2[0] + 0.5*t1667*var2[1] + 0.5*t5126*var2[2];
  p_output1[15]=t2585;
  p_output1[16]=t4736;
  p_output1[17]=var2[6]*(0.5*(2.285714*t2257*t5811 + 1.142857*t5529*t5811 + 1.142857*t5430*t5853 + t5902 + 2.285714*t2179*t5925 + t5928)*var2[0] + 0.5*(2.285714*t2257*t2380 + 2.285714*t2179*t2556 + 1.142857*t2471*t5430 + 1.142857*t2380*t5529 + t6004 + t6007)*var2[1] + 0.5*(1.142857*t5430*t6071 + 2.285714*t2179*t6126 + 1.142857*t5529*t6141 + 2.285714*t2257*t6245 + 1.142857*t710*(t1213*t6165 + t1101*t6186 + t6269 + t6270 + 2.*t4332*t809 + 2.*t4396*t885) + 1.142857*t1068*(-2.*t2320*t4332 - 2.*t2279*t4396 + t6196 + t6197 - 1.*t6165*t809 - 1.*t6186*t885))*var2[2] + 0.5*(2.285714*Power(t2179,2) + 2.285714*Power(t2257,2) + 2.285714*t1068*t5430 + 2.285714*t5529*t710)*var2[6] + 0.5*(1.142857*t5477*t5529 + 1.142857*t5430*t5604)*var2[7] - 0.03428571*t5430*var2[8]);
  p_output1[18]=var2[6]*(0.5*(t5902 + t5928 + 1.142857*t5853*t6321 + 1.142857*t5811*t6423 + t6457 + t6458 + t6497 + t6507)*var2[0] + 0.5*(t6004 + t6007 + 1.142857*t2471*t6321 + 1.142857*t2380*t6423 + t6561 + t6580 + t6595 + t6601)*var2[1] + 0.5*(1.142857*t2694*t6126 + 1.142857*t2741*t6245 + 1.142857*t6071*t6321 + 1.142857*t6141*t6423 + 1.142857*t2179*t6651 + 1.142857*t2257*t6679 + 1.142857*(t6269 + t6270 + t6702 + t6720 + t6723 + t1213*t6732 + t1101*t6750 + t6756)*t710 + 1.142857*t1068*(t6196 + t6197 + t6776 + t6785 + t6802 + t6808 - 1.*t6732*t809 - 1.*t6750*t885))*var2[2] + 0.5*(2.285714*t2179*t2694 + 2.285714*t2257*t2741 + 2.285714*t1068*t6321 + 2.285714*t6423*t710)*var2[6] + 0.5*(1.142857*t5604*t6321 + 1.142857*t2179*t6369 + 1.142857*t2257*t6383 + 1.142857*t5477*t6423)*var2[7] - 0.03428571*t6321*var2[8]);
  p_output1[19]=0.5*t6883*var2[6];
  p_output1[20]=0.5*t2560*var2[6];
  p_output1[21]=0.5*t6907*var2[6];
  p_output1[22]=0.5*t6883*var2[0] + 0.5*t2560*var2[1] + 0.5*t6907*var2[2] + (2.285714*t1068*t2257 + 2.285714*t2179*t710)*var2[6] + 0.5*t6940*var2[7] - 0.03428571*t2257*var2[8];
  p_output1[23]=0.5*t6940*var2[6];
  p_output1[24]=-0.03428571*t2257*var2[6];
  p_output1[25]=(0.5*t7096*var2[0] + 0.5*(t1907 + t2328 + 1.142857*t1241*t7067 + 1.142857*t7023*t952)*var2[1])*var2[6];
  p_output1[26]=(0.5*(t3941 + t4067 + 1.142857*t3937*t7023 + 1.142857*t4046*t7067)*var2[0] + 0.5*(t3790 + t3884 + 1.142857*t1576*t7023 + 1.142857*t1650*t7067)*var2[1] + 0.5*(1.142857*t4576*t7023 + 1.142857*t4132*t7067 + 1.142857*t710*(t4198 + t4207 + t4340 + t4342 + t1213*t7184 + t1615*t7184 + t1101*t7224 + t1101*t7238) + 1.142857*t1068*(t4668 + t4686 + t4699 + t4701 - 1.*t1552*t7184 - 1.*t7184*t809 - 1.*t7224*t885 - 1.*t7238*t885))*var2[2])*var2[6];
  p_output1[27]=var2[6]*(0.5*(t5902 + t5928 + t6457 + t6497 + 1.142857*t5853*t7299 + 1.142857*t5811*t7337 + t7377 + t7391)*var2[0] + 0.5*(t6004 + t6007 + t6561 + t6595 + 1.142857*t2471*t7299 + 1.142857*t2380*t7337 + t7399 + t7407)*var2[1] + 0.5*(1.142857*t6126*t7023 + 1.142857*t6245*t7067 + 1.142857*t6071*t7299 + 1.142857*t6141*t7337 + 1.142857*t2179*t7446 + 1.142857*t2257*t7475 + 1.142857*t710*(t6269 + t6270 + t6702 + t6720 + t7477 + t7481 + t7501 + t7505) + 1.142857*t1068*(t6196 + t6197 + t6776 + t6802 + t7517 + t7524 + t7525 + t7528))*var2[2] + 0.5*(2.285714*t2179*t7023 + 2.285714*t2257*t7067 + 2.285714*t1068*t7299 + 2.285714*t710*t7337)*var2[6] + 0.5*(1.142857*t2257*t5477 + 1.142857*t5604*t7299 + 1.142857*t2179*t7318 + 1.142857*t5477*t7337)*var2[7] - 0.03428571*t7299*var2[8]);
  p_output1[28]=var2[6]*(0.5*(t5902 + t5928 + t6458 + t6507 + t7377 + t7391 + 1.142857*t5853*t7546 + 1.142857*t5811*t7577)*var2[0] + 0.5*(t6004 + t6007 + t6580 + t6601 + t7399 + t7407 + 1.142857*t2471*t7546 + 1.142857*t2380*t7577)*var2[1] + 0.5*(1.142857*t6651*t7023 + 1.142857*t6679*t7067 + 1.142857*t2694*t7446 + 1.142857*t2741*t7475 + 1.142857*t710*(t6269 + t6270 + t6723 + t6756 + t7477 + t7481 + t7501 + t7505) + 1.142857*t1068*(t6196 + t6197 + t6785 + t6808 + t7517 + t7524 + t7525 + t7528) + 1.142857*t6071*t7546 + 1.142857*t6141*t7577)*var2[2] + 0.5*(2.285714*t2694*t7023 + 2.285714*t2741*t7067 + 2.285714*t1068*t7546 + 2.285714*t710*t7577)*var2[6] + 0.5*(1.142857*t2741*t5477 + 1.142857*t1068*t6369 + 1.142857*t6369*t7023 + 1.142857*t6383*t7067 + 1.142857*t2694*t7318 + 1.142857*t5604*t7546 + 1.142857*t5477*t7577 + 1.142857*t710*(-1.*t2597*t305 - 0.9063*t80 - 0.12*t305*t80 - 1.*t348*t80))*var2[7] - 0.03428571*t7546*var2[8]);
  p_output1[29]=0.5*t7661*var2[6];
  p_output1[30]=0.5*t7096*var2[6];
  p_output1[31]=0.5*t7671*var2[6];
  p_output1[32]=0.5*t7661*var2[0] + 0.5*t7096*var2[1] + 0.5*t7671*var2[2] + (2.285714*t1068*t7067 + 2.285714*t7023*t710)*var2[6] + 0.5*t7684*var2[7] - 0.03428571*t7067*var2[8];
  p_output1[33]=0.5*t7684*var2[6];
  p_output1[34]=-0.03428571*t7067*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 35, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L7_J7_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L7_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
