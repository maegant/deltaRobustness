/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:24:52 GMT-08:00
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
  double t18;
  double t233;
  double t562;
  double t486;
  double t630;
  double t534;
  double t568;
  double t591;
  double t478;
  double t634;
  double t640;
  double t672;
  double t113;
  double t136;
  double t196;
  double t212;
  double t306;
  double t314;
  double t714;
  double t468;
  double t1054;
  double t1060;
  double t1090;
  double t795;
  double t47;
  double t350;
  double t406;
  double t445;
  double t1102;
  double t794;
  double t804;
  double t808;
  double t925;
  double t927;
  double t993;
  double t1025;
  double t1039;
  double t1098;
  double t1110;
  double t1133;
  double t1400;
  double t1401;
  double t596;
  double t1571;
  double t1597;
  double t1619;
  double t1545;
  double t1566;
  double t1567;
  double t1569;
  double t1463;
  double t1466;
  double t1473;
  double t1622;
  double t1623;
  double t1629;
  double t1687;
  double t1732;
  double t1752;
  double t1805;
  double t1809;
  double t675;
  double t678;
  double t708;
  double t872;
  double t924;
  double t1134;
  double t1195;
  double t1210;
  double t1235;
  double t1340;
  double t1344;
  double t2237;
  double t2317;
  double t2382;
  double t2384;
  double t1833;
  double t1928;
  double t1964;
  double t1969;
  double t1970;
  double t1988;
  double t2458;
  double t2461;
  double t2467;
  double t2490;
  double t2494;
  double t2497;
  double t2155;
  double t2628;
  double t2651;
  double t2678;
  double t2685;
  double t2692;
  double t2698;
  double t2726;
  double t2731;
  double t2739;
  double t2741;
  double t1811;
  double t2959;
  double t2962;
  double t2530;
  double t2538;
  double t3045;
  double t3050;
  double t3067;
  double t2778;
  double t2782;
  double t2813;
  double t2979;
  double t2992;
  double t3022;
  double t2819;
  double t3086;
  double t2875;
  double t3089;
  double t1998;
  double t2027;
  double t3429;
  double t3433;
  double t3435;
  double t3350;
  double t3361;
  double t3398;
  double t3450;
  double t3187;
  double t3189;
  double t3219;
  double t3454;
  double t3457;
  double t3465;
  double t3467;
  double t3486;
  double t3529;
  double t1417;
  double t1434;
  double t3765;
  double t1482;
  double t1490;
  double t3768;
  double t3769;
  double t3803;
  double t3832;
  double t3485;
  double t3505;
  double t3520;
  double t3543;
  double t3552;
  double t3559;
  double t3564;
  double t2175;
  double t2278;
  double t3960;
  double t3970;
  double t4013;
  double t4047;
  double t4066;
  double t3837;
  double t4185;
  double t4198;
  double t4201;
  double t4202;
  double t4204;
  double t3107;
  double t3108;
  double t3118;
  double t3119;
  double t3129;
  double t4301;
  double t4219;
  double t4302;
  double t1460;
  double t1509;
  double t1525;
  double t1353;
  double t1541;
  double t1977;
  double t2083;
  double t2090;
  double t2091;
  double t4440;
  double t4471;
  double t4479;
  double t4488;
  double t4497;
  double t4505;
  double t4514;
  double t4524;
  double t4532;
  double t4535;
  double t4436;
  double t4509;
  double t4539;
  double t4562;
  double t4650;
  double t4655;
  double t4736;
  double t4740;
  double t4741;
  double t4743;
  double t4643;
  double t4663;
  double t4694;
  double t4705;
  double t4707;
  double t4716;
  double t4605;
  double t4615;
  double t4620;
  double t4625;
  double t4914;
  double t4921;
  double t4949;
  double t4953;
  double t4965;
  double t4969;
  double t5036;
  double t5046;
  double t5048;
  double t4947;
  double t4974;
  double t4982;
  double t4988;
  double t4999;
  double t5000;
  double t4900;
  double t4906;
  double t5034;
  double t5035;
  double t5259;
  double t5261;
  double t5264;
  double t5270;
  double t5302;
  double t5318;
  double t5325;
  double t5343;
  double t5345;
  double t5383;
  double t5402;
  double t5406;
  double t5425;
  double t5164;
  double t5165;
  double t5186;
  double t5199;
  double t5544;
  double t5547;
  double t5553;
  double t5583;
  double t5779;
  double t5781;
  double t5596;
  double t5614;
  double t4984;
  double t5032;
  double t5054;
  double t5067;
  double t5077;
  double t5095;
  double t5126;
  double t5149;
  double t5156;
  double t5163;
  double t5201;
  double t5203;
  double t5204;
  double t6126;
  double t6127;
  double t5891;
  double t5898;
  double t6128;
  double t6139;
  double t6153;
  double t6170;
  double t5830;
  double t5831;
  double t5230;
  double t5232;
  double t5239;
  double t5241;
  double t5246;
  double t5249;
  double t5250;
  double t5251;
  double t5253;
  double t5256;
  double t6355;
  double t6356;
  double t6376;
  double t6379;
  double t6382;
  double t6385;
  double t6388;
  double t6408;
  double t6472;
  double t6480;
  double t6512;
  double t6514;
  double t6535;
  double t5975;
  double t6016;
  double t6042;
  double t6044;
  double t6045;
  double t6048;
  double t6049;
  double t6050;
  double t6073;
  double t6084;
  double t6090;
  double t6099;
  double t6750;
  double t6756;
  double t6758;
  double t6759;
  double t6784;
  double t6788;
  double t6253;
  double t6274;
  double t6747;
  double t6850;
  double t6119;
  double t6151;
  double t6176;
  double t6208;
  double t6224;
  double t6246;
  double t6877;
  double t6265;
  double t6899;
  double t6278;
  double t7163;
  double t7165;
  double t7166;
  double t6912;
  double t6915;
  double t6922;
  double t6938;
  double t6939;
  double t6942;
  double t7007;
  double t7012;
  double t7018;
  double t7064;
  double t7089;
  double t7092;
  double t7212;
  double t7214;
  double t7231;
  double t7247;
  double t7258;
  double t7322;
  double t7287;
  double t7297;
  double t7314;
  double t7335;
  double t7359;
  double t7371;
  double t7375;
  double t7376;
  double t7377;
  double t7385;
  double t7388;
  double t7391;
  double t7401;
  double t7404;
  double t7407;
  double t7411;
  double t7429;
  double t7433;
  double t7481;
  double t7489;
  double t7563;
  double t7436;
  double t7438;
  double t7594;
  double t7442;
  double t7447;
  double t7625;
  double t7485;
  double t7486;
  double t7488;
  double t7642;
  double t7491;
  double t7682;
  double t7687;
  double t7690;
  double t7693;
  double t7696;
  double t7705;
  double t7708;
  double t7729;
  double t7732;
  double t7733;
  double t7822;
  double t7835;
  double t7836;
  double t7974;
  double t7985;
  double t8015;
  double t8031;
  double t8057;
  double t8298;
  double t8306;
  double t8307;
  t18 = Cos(var1[5]);
  t233 = Sin(var1[5]);
  t562 = Cos(var1[4]);
  t486 = Sin(var1[4]);
  t630 = Cos(var1[3]);
  t534 = -1.*t18*t486;
  t568 = -1.*t562*t233;
  t591 = t534 + t568;
  t478 = Sin(var1[3]);
  t634 = t562*t18;
  t640 = -1.*t486*t233;
  t672 = t634 + t640;
  t113 = -1.*t18;
  t136 = 1. + t113;
  t196 = -1.3127*t136;
  t212 = -1.3127*t18;
  t306 = -0.06*t233;
  t314 = t196 + t212 + t306;
  t714 = Sin(var1[2]);
  t468 = Cos(var1[2]);
  t1054 = t18*t486;
  t1060 = t562*t233;
  t1090 = t1054 + t1060;
  t795 = -1.*t478*t672;
  t47 = 0.9063*t18;
  t350 = t18*t314;
  t406 = 0.06*t18*t233;
  t445 = t47 + t350 + t406;
  t1102 = t630*t672;
  t794 = t630*t591;
  t804 = t794 + t795;
  t808 = -1.*t714*t804;
  t925 = Power(t18,2);
  t927 = -0.06*t925;
  t993 = 0.9063*t233;
  t1025 = t314*t233;
  t1039 = t927 + t993 + t1025;
  t1098 = -1.*t478*t1090;
  t1110 = t1098 + t1102;
  t1133 = -1.*t714*t1110;
  t1400 = t478*t591;
  t1401 = t1400 + t1102;
  t596 = -1.*t478*t591;
  t1571 = -1.*t562*t18;
  t1597 = t486*t233;
  t1619 = t1571 + t1597;
  t1545 = -1.*t714*t1401;
  t1566 = t468*t804;
  t1567 = t1545 + t1566;
  t1569 = 1.142857*t1039*t1567;
  t1463 = t630*t1090;
  t1466 = t478*t672;
  t1473 = t1463 + t1466;
  t1622 = t630*t1619;
  t1623 = t596 + t1622;
  t1629 = t468*t1623;
  t1687 = t478*t1619;
  t1732 = t794 + t1687;
  t1752 = -1.*t714*t1732;
  t1805 = t1629 + t1752;
  t1809 = 1.142857*t445*t1805;
  t675 = -1.*t630*t672;
  t678 = t596 + t675;
  t708 = t468*t678;
  t872 = t708 + t808;
  t924 = 1.142857*t445*t872;
  t1134 = -1.*t630*t1090;
  t1195 = t1134 + t795;
  t1210 = t468*t1195;
  t1235 = t1133 + t1210;
  t1340 = 1.142857*t1039*t1235;
  t1344 = t924 + t1340;
  t2237 = -1.*t630*t591;
  t2317 = t714*t678;
  t2382 = t2317 + t1566;
  t2384 = 1.142857*t1039*t2382;
  t1833 = -0.9063*t233;
  t1928 = -1.*t314*t233;
  t1964 = Power(t233,2);
  t1969 = -0.06*t1964;
  t1970 = 0. + t1833 + t1928 + t1969;
  t1988 = t468*t1110;
  t2458 = -1.*t478*t1619;
  t2461 = t2237 + t2458;
  t2467 = t714*t2461;
  t2490 = t1629 + t2467;
  t2494 = 1.142857*t445*t2490;
  t2497 = t2384 + t2494;
  t2155 = t478*t1090;
  t2628 = t2155 + t1622;
  t2651 = t468*t2628;
  t2678 = t1463 + t2458;
  t2685 = t714*t2678;
  t2692 = t2651 + t2685;
  t2698 = 1.142857*t445*t2692;
  t2726 = t714*t1623;
  t2731 = t468*t1732;
  t2739 = t2726 + t2731;
  t2741 = 1.142857*t1039*t2739;
  t1811 = t1569 + t1809;
  t2959 = -0.06*t18;
  t2962 = 0. + t2959;
  t2530 = t714*t1195;
  t2538 = t1988 + t2530;
  t3045 = t2962*t233;
  t3050 = 0.12*t18*t233;
  t3067 = t47 + t350 + t3045 + t3050;
  t2778 = t468*t1401;
  t2782 = t714*t804;
  t2813 = t2778 + t2782;
  t2979 = t2962*t18;
  t2992 = 0.06*t925;
  t3022 = t2979 + t2992 + t1833 + t1928 + t1969;
  t2819 = 1.142857*t445*t2813;
  t3086 = 1.142857*t3067*t2813;
  t2875 = 1.142857*t1970*t2739;
  t3089 = 1.142857*t3022*t2739;
  t1998 = -1.*t714*t1473;
  t2027 = t1988 + t1998;
  t3429 = 1.142857*t445*t2382;
  t3433 = 1.142857*t1039*t2538;
  t3435 = t3429 + t3433;
  t3350 = 1.142857*t445*t1567;
  t3361 = 1.142857*t1039*t2027;
  t3398 = t3350 + t3361;
  t3450 = 1.142857*t1039*t2813;
  t3187 = t714*t1110;
  t3189 = t468*t1473;
  t3219 = t3187 + t3189;
  t3454 = 1.142857*t445*t2739;
  t3457 = 1.142857*t1970*t2813;
  t3465 = 1.142857*t445*t3219;
  t3467 = t3450 + t3457 + t3465 + t3454;
  t3486 = -1.*t468*t804;
  t3529 = -1.*t468*t1110;
  t1417 = -1.*t468*t1401;
  t1434 = t1417 + t808;
  t3765 = 1.142857*t1039*t1434;
  t1482 = -1.*t468*t1473;
  t1490 = t1133 + t1482;
  t3768 = -1.*t714*t1623;
  t3769 = -1.*t468*t1732;
  t3803 = t3768 + t3769;
  t3832 = 1.142857*t445*t3803;
  t3485 = -1.*t714*t678;
  t3505 = t3485 + t3486;
  t3520 = 1.142857*t445*t3505;
  t3543 = -1.*t714*t1195;
  t3552 = t3529 + t3543;
  t3559 = 1.142857*t1039*t3552;
  t3564 = t3520 + t3559;
  t2175 = t2155 + t675;
  t2278 = t2237 + t1466;
  t3960 = 1.142857*t1039*t872;
  t3970 = t468*t2461;
  t4013 = t3768 + t3970;
  t4047 = 1.142857*t445*t4013;
  t4066 = t3960 + t4047;
  t3837 = t3765 + t3832;
  t4185 = -1.*t714*t2628;
  t4198 = t468*t2678;
  t4201 = t4185 + t4198;
  t4202 = 1.142857*t445*t4201;
  t4204 = 1.142857*t1039*t1805;
  t3107 = -0.9063*t18;
  t3108 = -1.*t18*t314;
  t3118 = -1.*t2962*t233;
  t3119 = -0.12*t18*t233;
  t3129 = t3107 + t3108 + t3118 + t3119;
  t4301 = 1.142857*t3067*t1567;
  t4219 = 1.142857*t1970*t1805;
  t4302 = 1.142857*t3022*t1805;
  t1460 = 1.142857*t445*t1434;
  t1509 = 1.142857*t1039*t1490;
  t1525 = t1460 + t1509;
  t1353 = -0.5*var2[3]*t1344;
  t1541 = -0.5*var2[2]*t1525;
  t1977 = 1.142857*t1970*t1567;
  t2083 = 1.142857*t445*t2027;
  t2090 = t1569 + t1977 + t2083 + t1809;
  t2091 = -0.5*var2[5]*t2090;
  t4440 = -1.*t562;
  t4471 = 1. + t4440;
  t4479 = -0.9063*t4471;
  t4488 = -0.06*t18*t486;
  t4497 = t562*t314;
  t4505 = t4479 + t4488 + t4497;
  t4514 = 0.06*t562*t18;
  t4524 = 0.9063*t486;
  t4532 = t486*t314;
  t4535 = t4514 + t4524 + t4532;
  t4436 = -0.4999*t478;
  t4509 = -1.*t478*t4505;
  t4539 = -1.*t630*t4535;
  t4562 = t4436 + t4509 + t4539;
  t4650 = t630*t4505;
  t4655 = -1.*t478*t4535;
  t4736 = -1.*t630;
  t4740 = 1. + t4736;
  t4741 = -0.4999*t4740;
  t4743 = t4741 + t4650 + t4655;
  t4643 = 0.4999*t630;
  t4663 = t4643 + t4650 + t4655;
  t4694 = -0.4999*t630;
  t4705 = -1.*t630*t4505;
  t4707 = t478*t4535;
  t4716 = t4694 + t4705 + t4707;
  t4605 = 0.4999*t478;
  t4615 = t478*t4505;
  t4620 = t630*t4535;
  t4625 = t4605 + t4615 + t4620;
  t4914 = 0.9063*t562;
  t4921 = t4914 + t4488 + t4497;
  t4949 = -0.06*t562*t18;
  t4953 = -0.9063*t486;
  t4965 = -1.*t486*t314;
  t4969 = t4949 + t4953 + t4965;
  t5036 = -1.*t478*t4921;
  t5046 = t630*t4969;
  t5048 = t5036 + t5046;
  t4947 = -1.*t630*t4921;
  t4974 = -1.*t478*t4969;
  t4982 = t4947 + t4974;
  t4988 = t630*t4921;
  t4999 = t478*t4969;
  t5000 = t4988 + t4999;
  t4900 = t4743*t678;
  t4906 = t4663*t1401;
  t5034 = t4562*t804;
  t5035 = t4625*t804;
  t5259 = -0.06*t562*t233;
  t5261 = t4488 + t5259;
  t5264 = -1.*t478*t5261;
  t5270 = 0.06*t486*t233;
  t5302 = t4949 + t5270;
  t5318 = t630*t5302;
  t5325 = t5264 + t5318;
  t5343 = -1.*t630*t5261;
  t5345 = -1.*t478*t5302;
  t5383 = t5343 + t5345;
  t5402 = t630*t5261;
  t5406 = t478*t5302;
  t5425 = t5402 + t5406;
  t5164 = -1.*t4562*t1623;
  t5165 = -1.*t4625*t1623;
  t5186 = -1.*t4743*t2461;
  t5199 = -1.*t4663*t1732;
  t5544 = -0.9063*t562;
  t5547 = 0.06*t18*t486;
  t5553 = -1.*t562*t314;
  t5583 = t5544 + t5547 + t5553;
  t5779 = t630*t5583;
  t5781 = t5779 + t4974;
  t5596 = t478*t5583;
  t5614 = t5596 + t5046;
  t4984 = t4982*t1110;
  t5032 = t5000*t1110;
  t5054 = t5048*t1195;
  t5067 = t5048*t1473;
  t5077 = t4900 + t4906 + t4984 + t5032 + t5034 + t5035 + t5054 + t5067;
  t5095 = 1.142857*t445*t5077;
  t5126 = -1.*t5048*t678;
  t5149 = -1.*t5048*t1401;
  t5156 = -1.*t4982*t804;
  t5163 = -1.*t5000*t804;
  t5201 = t5126 + t5149 + t5156 + t5163 + t5164 + t5165 + t5186 + t5199;
  t5203 = 1.142857*t1039*t5201;
  t5204 = t5095 + t5203;
  t6126 = 0.06*t562*t233;
  t6127 = t5547 + t6126;
  t5891 = t4743*t1623;
  t5898 = t4625*t1732;
  t6128 = t478*t6127;
  t6139 = t6128 + t5318;
  t6153 = t630*t6127;
  t6170 = t6153 + t5345;
  t5830 = -1.*t4625*t2628;
  t5831 = -1.*t4743*t2678;
  t5230 = -1.*t4743*t678;
  t5232 = -1.*t4663*t1401;
  t5239 = -1.*t4562*t804;
  t5241 = -1.*t4625*t804;
  t5246 = t5230 + t5232 + t5239 + t5241;
  t5249 = t4562*t1110;
  t5250 = t4625*t1110;
  t5251 = t4743*t1195;
  t5253 = t4663*t1473;
  t5256 = t5249 + t5250 + t5251 + t5253;
  t6355 = t2962*t486;
  t6356 = t6355 + t5259;
  t6376 = -1.*t478*t6356;
  t6379 = t562*t2962;
  t6382 = t6379 + t5270;
  t6385 = t630*t6382;
  t6388 = t6376 + t6385;
  t6408 = -1.*t630*t6356;
  t6472 = -1.*t478*t6382;
  t6480 = t6408 + t6472;
  t6512 = t630*t6356;
  t6514 = t478*t6382;
  t6535 = t6512 + t6514;
  t5975 = t4625*t1401;
  t6016 = t5048*t1110;
  t6042 = t4743*t804;
  t6044 = t5000*t1473;
  t6045 = t5975 + t6016 + t6042 + t6044;
  t6048 = -1.*t5000*t1401;
  t6049 = -1.*t5048*t804;
  t6050 = -1.*t4743*t1623;
  t6073 = -1.*t4625*t1732;
  t6084 = t6048 + t6049 + t6050 + t6073;
  t6090 = t5000*t1401;
  t6099 = t5048*t804;
  t6750 = -1.*t2962*t486;
  t6756 = t6750 + t6126;
  t6758 = t478*t6756;
  t6759 = t6758 + t6385;
  t6784 = t630*t6756;
  t6788 = t6784 + t6472;
  t6253 = -1.*t5048*t1623;
  t6274 = -1.*t5000*t1732;
  t6747 = t804*t6388;
  t6850 = t1401*t6535;
  t6119 = t804*t5325;
  t6151 = t1473*t6139;
  t6176 = t1110*t6170;
  t6208 = t1401*t5425;
  t6224 = -1.*t1401*t6139;
  t6246 = -1.*t804*t6170;
  t6877 = -1.*t6388*t1623;
  t6265 = -1.*t5325*t1623;
  t6899 = -1.*t6535*t1732;
  t6278 = -1.*t5425*t1732;
  t7163 = 1.142857*t1039*t5246;
  t7165 = 1.142857*t445*t5256;
  t7166 = t7163 + t7165;
  t6912 = -1.*t4625*t1401;
  t6915 = -1.*t4743*t804;
  t6922 = t6912 + t6915;
  t6938 = t4743*t1110;
  t6939 = t4625*t1473;
  t6942 = t6938 + t6939;
  t7007 = t1110*t5325;
  t7012 = t1473*t5425;
  t7018 = t5975 + t6042 + t7007 + t7012;
  t7064 = -1.*t804*t5325;
  t7089 = -1.*t1401*t5425;
  t7092 = t7064 + t7089 + t6050 + t6073;
  t7212 = 1.142857*t445*t6922;
  t7214 = 1.142857*t1970*t6942;
  t7231 = 1.142857*t445*t7018;
  t7247 = 1.142857*t1039*t7092;
  t7258 = t7212 + t7214 + t7231 + t7247;
  t7322 = 0.4999*t591;
  t7287 = t4535*t591;
  t7297 = 0.4999*t1619;
  t7314 = t4505*t1619;
  t7335 = -1.*t4505*t1090;
  t7359 = -1.*t4535*t1619;
  t7371 = t4505*t591;
  t7375 = t4921*t1090;
  t7376 = t4969*t672;
  t7377 = t4535*t672;
  t7385 = t7322 + t7371 + t7375 + t7376 + t7377;
  t7388 = -1.*t4969*t591;
  t7391 = -1.*t4535*t591;
  t7401 = 0.4999*t672;
  t7404 = -1.*t4921*t672;
  t7407 = -1.*t4505*t1619;
  t7411 = t7388 + t7391 + t7401 + t7404 + t7407;
  t7429 = t4969*t591;
  t7433 = t4921*t672;
  t7481 = -1.*t4921*t591;
  t7489 = -1.*t4969*t1619;
  t7563 = t6356*t672;
  t7436 = t5261*t672;
  t7438 = t6127*t672;
  t7594 = t591*t6382;
  t7442 = t591*t5302;
  t7447 = t1090*t5302;
  t7625 = -1.*t591*t6356;
  t7485 = -1.*t591*t5261;
  t7486 = -1.*t591*t6127;
  t7488 = -1.*t672*t5302;
  t7642 = -1.*t6382*t1619;
  t7491 = -1.*t5302*t1619;
  t7682 = t4535*t1090;
  t7687 = t4505*t672;
  t7690 = t7682 + t7401 + t7687;
  t7693 = -1.*t4505*t591;
  t7696 = 0.4999*t1090;
  t7705 = -1.*t4535*t672;
  t7708 = t7693 + t7696 + t7705;
  t7729 = t5261*t1090;
  t7732 = t672*t5302;
  t7733 = t7322 + t7371 + t7729 + t7377 + t7732;
  t7822 = -1.*t5261*t672;
  t7835 = -1.*t591*t5302;
  t7836 = t7391 + t7401 + t7822 + t7835 + t7407;
  t7974 = 1.142857*t1970*t7690;
  t7985 = 1.142857*t445*t7708;
  t8015 = 1.142857*t445*t7733;
  t8031 = 1.142857*t1039*t7836;
  t8057 = t7974 + t7985 + t8015 + t8031;
  t8298 = 2.285714*t445*t1039;
  t8306 = 2.285714*t445*t1970;
  t8307 = t8298 + t8306;
  p_output1[0]=var2[4]*(t1353 + t1541 + t2091 - 0.5*t1811*var2[4]);
  p_output1[1]=var2[4]*(-0.5*t1344*var2[2] - 0.5*(1.142857*t1039*(t1210 + t2175*t714) + 1.142857*t445*(t708 + t2278*t714))*var2[3] - 0.5*t2497*var2[4] - 0.5*(1.142857*t1970*t2382 + t2384 + t2494 + 1.142857*t2538*t445)*var2[5]);
  p_output1[2]=var2[4]*(-0.5*t1811*var2[2] - 0.5*t2497*var2[3] - 0.5*(t2698 + t2741)*var2[4] - 0.5*(t2698 + t2741 + t2819 + t2875)*var2[5]);
  p_output1[3]=var2[4]*(-0.5*(t1569 + t1809 + 1.142857*t1567*t3022 + 1.142857*t2027*t3067)*var2[2] - 0.5*(t2384 + t2494 + 1.142857*t2382*t3022 + 1.142857*t2538*t3067)*var2[3] - 0.5*(t2698 + t2741 + t3086 + t3089)*var2[4] - 0.5*(t2698 + t2741 + t2819 + t2875 + t3086 + t3089 + 1.142857*t2813*t3129 + 1.142857*t3022*t3219)*var2[5]);
  p_output1[4]=-0.5*t3398*var2[4];
  p_output1[5]=-0.5*t3435*var2[4];
  p_output1[6]=-0.5*t3398*var2[2] - 0.5*t3435*var2[3] - 1.*(t3450 + t3454)*var2[4] - 0.5*t3467*var2[5];
  p_output1[7]=-0.5*t3467*var2[4];
  p_output1[8]=var2[4]*(-0.5*(1.142857*t445*(t3486 + t1401*t714) + 1.142857*t1039*(t3529 + t1473*t714))*var2[2] - 0.5*t3564*var2[3] - 0.5*t3837*var2[4] - 0.5*(1.142857*t1434*t1970 + t3765 + t3832 + 1.142857*t1490*t445)*var2[5]);
  p_output1[9]=var2[4]*(-0.5*t3564*var2[2] - 0.5*(1.142857*t1039*(t3543 + t2175*t468) + 1.142857*t445*(t3485 + t2278*t468))*var2[3] - 0.5*t4066*var2[4] - 0.5*(t3960 + t4047 + 1.142857*t1235*t445 + 1.142857*t1970*t872)*var2[5]);
  p_output1[10]=var2[4]*(-0.5*t3837*var2[2] - 0.5*t4066*var2[3] - 0.5*(t4202 + t4204)*var2[4] - 0.5*(t3350 + t4202 + t4204 + t4219)*var2[5]);
  p_output1[11]=var2[4]*(-0.5*(1.142857*t1434*t3022 + 1.142857*t1490*t3067 + t3765 + t3832)*var2[2] - 0.5*(1.142857*t1235*t3067 + t3960 + t4047 + 1.142857*t3022*t872)*var2[3] - 0.5*(t4202 + t4204 + t4301 + t4302)*var2[4] - 0.5*(1.142857*t2027*t3022 + 1.142857*t1567*t3129 + t3350 + t4202 + t4204 + t4219 + t4301 + t4302)*var2[5]);
  p_output1[12]=-0.5*t1525*var2[4];
  p_output1[13]=-0.5*t1344*var2[4];
  p_output1[14]=t1353 + t1541 + t2091 - 1.*t1811*var2[4];
  p_output1[15]=-0.5*t2090*var2[4];
  p_output1[16]=var2[4]*(-0.5*(1.142857*t445*(2.*t1195*t4562 + t1473*t4562 + t1195*t4625 + 2.*t1110*t4663 + t1110*t4716 + t2175*t4743) + 1.142857*t1039*(-1.*t1401*t4562 - 1.*t2278*t4743 - 2.*t4562*t678 - 1.*t4625*t678 - 2.*t4663*t804 - 1.*t4716*t804))*var2[3] - 0.5*t5204*var2[4] - 0.5*(1.142857*t445*t5246 + 1.142857*t1970*t5256 + 1.142857*t445*(t4900 + t4906 + t5034 + t5035 + t1195*t5325 + t1473*t5325 + t1110*t5383 + t1110*t5425) + 1.142857*t1039*(t5164 + t5165 + t5186 + t5199 - 1.*t1401*t5325 - 1.*t5325*t678 - 1.*t5383*t804 - 1.*t5425*t804))*var2[5]);
  p_output1[17]=var2[4]*(-0.5*t5204*var2[3] - 0.5*(1.142857*t445*(2.*t1401*t5000 + t1473*t5614 + t1110*t5781 + t5891 + t5898 + 2.*t5048*t804) + 1.142857*t1039*(-2.*t1732*t5000 - 2.*t1623*t5048 - 1.*t1401*t5614 + t5830 + t5831 - 1.*t5781*t804))*var2[4] - 0.5*(1.142857*t1970*t6045 + 1.142857*t445*t6084 + 1.142857*t445*(t5891 + t5898 + t6090 + t6099 + t6119 + t6151 + t6176 + t6208) + 1.142857*t1039*(t5830 + t5831 + t6224 + t6246 + t6253 + t6265 + t6274 + t6278))*var2[5]);
  p_output1[18]=var2[4]*(-0.5*(1.142857*t3067*t5246 + 1.142857*t3022*t5256 + 1.142857*t445*(t4900 + t4906 + t5034 + t5035 + t1195*t6388 + t1473*t6388 + t1110*t6480 + t1110*t6535) + 1.142857*t1039*(t5164 + t5165 + t5186 + t5199 - 1.*t1401*t6388 - 1.*t6388*t678 - 1.*t6480*t804 - 1.*t6535*t804))*var2[3] - 0.5*(1.142857*t3022*t6045 + 1.142857*t3067*t6084 + 1.142857*t445*(t5891 + t5898 + t6090 + t6099 + t6747 + t1473*t6759 + t1110*t6788 + t6850) + 1.142857*t1039*(t5830 + t5831 + t6253 + t6274 - 1.*t1401*t6759 + t6877 + t6899 - 1.*t6788*t804))*var2[4] - 0.5*(1.142857*t1970*(t5975 + t6042 + t1110*t6388 + t1473*t6535) + 1.142857*t445*(t5891 + t5898 + t6119 + t6151 + t6176 + t6208 + t6747 + t6850) + 1.142857*t1039*(t5830 + t5831 + t6224 + t6246 + t6265 + t6278 + t6877 + t6899) + 1.142857*t3022*t6922 + 1.142857*t3129*t6942 + 1.142857*t3022*t7018 + 1.142857*t3067*t7092 + 1.142857*t445*(t6050 + t6073 - 1.*t1401*t6535 - 1.*t6388*t804))*var2[5]);
  p_output1[19]=-0.5*t7166*var2[4];
  p_output1[20]=-0.5*t7166*var2[3] - 1.*(1.142857*t445*t6045 + 1.142857*t1039*t6084)*var2[4] - 0.5*t7258*var2[5];
  p_output1[21]=-0.5*t7258*var2[4];
  p_output1[22]=var2[4]*(-0.5*(1.142857*t445*(t1090*t4969 + 2.*t4969*t591 + 2.*t4921*t672 + t5583*t672 + t7287 + t7297 + t7314) + 1.142857*t1039*(-2.*t1619*t4969 - 2.*t4921*t591 - 1.*t5583*t591 - 1.*t4969*t672 + t7322 + t7335 + t7359))*var2[4] - 0.5*(1.142857*t1970*t7385 + 1.142857*t445*t7411 + 1.142857*t445*(t7287 + t7297 + t7314 + t7429 + t7433 + t7436 + t7438 + t7442 + t7447) + 1.142857*t1039*(t7322 + t7335 + t7359 + t7481 + t7485 + t7486 + t7488 + t7489 + t7491))*var2[5]);
  p_output1[23]=var2[4]*(-0.5*(1.142857*t3022*t7385 + 1.142857*t3067*t7411 + 1.142857*t445*(t1090*t6382 + t672*t6756 + t7287 + t7297 + t7314 + t7429 + t7433 + t7563 + t7594) + 1.142857*t1039*(-1.*t6382*t672 - 1.*t591*t6756 + t7322 + t7335 + t7359 + t7481 + t7489 + t7625 + t7642))*var2[4] - 0.5*(1.142857*t1970*(t1090*t6356 + t6382*t672 + t7322 + t7371 + t7377) + 1.142857*t445*(-1.*t591*t6382 - 1.*t6356*t672 + t7391 + t7401 + t7407) + 1.142857*t445*(t7287 + t7297 + t7314 + t7436 + t7438 + t7442 + t7447 + t7563 + t7594) + 1.142857*t1039*(t7322 + t7335 + t7359 + t7485 + t7486 + t7488 + t7491 + t7625 + t7642) + 1.142857*t3129*t7690 + 1.142857*t3022*t7708 + 1.142857*t3022*t7733 + 1.142857*t3067*t7836)*var2[5]);
  p_output1[24]=-1.*(1.142857*t445*t7385 + 1.142857*t1039*t7411)*var2[4] - 0.5*t8057*var2[5];
  p_output1[25]=-0.5*t8057*var2[4];
  p_output1[26]=-0.5*(2.285714*t1039*t3022 + 2.285714*t1970*t3022 + 2.285714*t3067*t445 + 2.285714*t3129*t445)*var2[4]*var2[5];
  p_output1[27]=-0.5*t8307*var2[5];
  p_output1[28]=-0.5*t8307*var2[4];
  p_output1[29]=0.03428571*t3022*var2[4]*var2[5];
  p_output1[30]=0.03428571*t445*var2[5];
  p_output1[31]=0.03428571*t445*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 32, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L4_J5_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L4_J5_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
