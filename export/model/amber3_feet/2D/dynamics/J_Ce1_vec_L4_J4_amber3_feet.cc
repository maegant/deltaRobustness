/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:24:51 GMT-08:00
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
  double t135;
  double t68;
  double t60;
  double t231;
  double t186;
  double t187;
  double t196;
  double t212;
  double t306;
  double t331;
  double t486;
  double t509;
  double t533;
  double t874;
  double t732;
  double t747;
  double t815;
  double t728;
  double t584;
  double t589;
  double t596;
  double t630;
  double t640;
  double t654;
  double t406;
  double t445;
  double t463;
  double t113;
  double t136;
  double t350;
  double t359;
  double t950;
  double t713;
  double t1057;
  double t478;
  double t568;
  double t675;
  double t708;
  double t1235;
  double t1054;
  double t1064;
  double t1083;
  double t1109;
  double t1110;
  double t1180;
  double t1195;
  double t1212;
  double t1237;
  double t1269;
  double t1434;
  double t1453;
  double t1584;
  double t1597;
  double t1619;
  double t1812;
  double t1833;
  double t1861;
  double t1938;
  double t1687;
  double t1700;
  double t1525;
  double t1545;
  double t1562;
  double t857;
  double t2074;
  double t2083;
  double t2084;
  double t1622;
  double t1623;
  double t1629;
  double t1970;
  double t2024;
  double t2317;
  double t2363;
  double t2384;
  double t2447;
  double t2088;
  double t2091;
  double t2097;
  double t2146;
  double t2155;
  double t2164;
  double t2175;
  double t2183;
  double t2198;
  double t2246;
  double t2278;
  double t2282;
  double t898;
  double t910;
  double t925;
  double t1098;
  double t1102;
  double t1285;
  double t1304;
  double t1340;
  double t1344;
  double t1353;
  double t1415;
  double t1752;
  double t1969;
  double t1988;
  double t2698;
  double t2726;
  double t1999;
  double t2031;
  double t2090;
  double t2619;
  double t2731;
  double t2382;
  double t2458;
  double t2461;
  double t2473;
  double t2477;
  double t2490;
  double t2775;
  double t2778;
  double t2786;
  double t2878;
  double t2899;
  double t2925;
  double t2959;
  double t2741;
  double t2782;
  double t2960;
  double t3084;
  double t3086;
  double t3102;
  double t3118;
  double t3119;
  double t3125;
  double t3128;
  double t2543;
  double t3437;
  double t3438;
  double t3440;
  double t3107;
  double t3189;
  double t3219;
  double t3505;
  double t3509;
  double t3258;
  double t3295;
  double t3307;
  double t3315;
  double t3318;
  double t3331;
  double t3338;
  double t3345;
  double t3361;
  double t3398;
  double t3429;
  double t3450;
  double t1998;
  double t2147;
  double t2288;
  double t3768;
  double t3774;
  double t3803;
  double t3818;
  double t3837;
  double t3843;
  double t3465;
  double t3881;
  double t3887;
  double t3895;
  double t3472;
  double t3478;
  double t3566;
  double t3955;
  double t3959;
  double t3613;
  double t3721;
  double t3832;
  double t3853;
  double t3862;
  double t3935;
  double t3467;
  double t3948;
  double t3486;
  double t3520;
  double t3970;
  double t3529;
  double t3543;
  double t4096;
  double t3577;
  double t3600;
  double t3611;
  double t4127;
  double t3668;
  double t4173;
  double t3724;
  double t4339;
  double t4346;
  double t4403;
  double t4605;
  double t4625;
  double t4615;
  double t4620;
  double t4633;
  double t4637;
  double t4650;
  double t4654;
  double t4700;
  double t4709;
  double t1486;
  double t1490;
  double t1563;
  double t1567;
  double t4782;
  double t4793;
  double t4843;
  double t4855;
  double t4906;
  double t4697;
  double t4705;
  double t4707;
  double t4710;
  double t4716;
  double t4728;
  double t4730;
  double t2567;
  double t2627;
  double t5207;
  double t5241;
  double t5264;
  double t5302;
  double t5230;
  double t5239;
  double t5309;
  double t4783;
  double t4792;
  double t4946;
  double t3105;
  double t3108;
  double t3129;
  double t3152;
  double t3221;
  double t3234;
  double t3252;
  double t3268;
  double t3286;
  double t3302;
  double t3559;
  double t3675;
  double t5447;
  double t5472;
  double t5487;
  double t5489;
  double t5495;
  double t5516;
  double t3960;
  double t4047;
  double t4066;
  double t4117;
  double t4125;
  double t4154;
  double t5583;
  double t5886;
  double t5518;
  double t4198;
  double t4218;
  double t5952;
  double t5596;
  double t1509;
  double t1569;
  double t1575;
  double t1579;
  double t2302;
  double t2467;
  double t2497;
  double t2501;
  double t2518;
  double t6099;
  double t6101;
  double t6116;
  double t6117;
  double t6176;
  double t6203;
  double t6258;
  double t6262;
  double t6274;
  double t6277;
  double t6170;
  double t6207;
  double t6213;
  double t6237;
  double t6246;
  double t6251;
  double t6126;
  double t6127;
  double t6139;
  double t6149;
  double t6682;
  double t6701;
  double t6717;
  double t6520;
  double t6537;
  double t6543;
  double t6613;
  double t6621;
  double t6629;
  double t6451;
  double t6453;
  double t6457;
  double t6469;
  double t6472;
  double t6756;
  double t6758;
  double t6759;
  double t6774;
  double t6784;
  double t6512;
  double t6514;
  double t6675;
  double t6678;
  double t6873;
  double t6877;
  double t6897;
  double t6902;
  double t6903;
  double t6905;
  double t6907;
  double t6908;
  double t6909;
  double t6822;
  double t6837;
  double t6838;
  double t6845;
  double t7191;
  double t7197;
  double t7169;
  double t7171;
  double t6480;
  double t6567;
  double t6672;
  double t6736;
  double t6740;
  double t6747;
  double t6750;
  double t6788;
  double t6790;
  double t6791;
  double t6797;
  double t6799;
  double t6850;
  double t6852;
  double t6855;
  double t7069;
  double t7074;
  double t7092;
  double t7102;
  double t7107;
  double t7109;
  double t7114;
  double t7125;
  double t7157;
  double t7160;
  double t7165;
  double t7216;
  double t7218;
  double t7222;
  double t7223;
  double t7231;
  double t7270;
  double t7283;
  double t7407;
  double t7414;
  double t7436;
  double t7437;
  double t7201;
  double t7205;
  double t7497;
  double t7505;
  double t7515;
  double t7540;
  double t7554;
  double t7560;
  double t7563;
  double t7582;
  double t7584;
  double t7370;
  double t7401;
  double t7847;
  double t7865;
  double t7926;
  double t7942;
  double t7460;
  double t7476;
  double t7729;
  double t7732;
  double t7733;
  double t7335;
  double t7341;
  double t7343;
  double t7768;
  double t7784;
  double t7801;
  double t7364;
  double t7366;
  double t7368;
  double t7836;
  double t7966;
  double t7404;
  double t7429;
  double t7438;
  double t7442;
  double t7450;
  double t7457;
  double t8131;
  double t7468;
  double t8172;
  double t7477;
  double t8685;
  double t8695;
  double t8696;
  double t8705;
  double t8709;
  double t8731;
  double t8734;
  double t8748;
  double t8749;
  double t8753;
  double t8864;
  double t8865;
  double t8866;
  double t8874;
  double t8891;
  double t8893;
  double t8903;
  double t8904;
  double t8907;
  double t8908;
  double t8910;
  double t8911;
  double t8913;
  double t8914;
  double t8915;
  double t8920;
  double t8925;
  double t8926;
  double t8927;
  double t8948;
  double t8949;
  double t8951;
  double t8928;
  double t8956;
  double t8958;
  double t8959;
  double t8996;
  double t8997;
  double t8998;
  double t9004;
  double t9007;
  double t9008;
  double t9009;
  double t9013;
  t135 = Sin(var1[4]);
  t68 = Cos(var1[5]);
  t60 = Cos(var1[4]);
  t231 = Sin(var1[5]);
  t186 = -1.*t68;
  t187 = 1. + t186;
  t196 = -1.3127*t187;
  t212 = -1.3127*t68;
  t306 = -0.06*t231;
  t331 = t196 + t212 + t306;
  t486 = t60*t68;
  t509 = -1.*t135*t231;
  t533 = t486 + t509;
  t874 = Cos(var1[3]);
  t732 = -1.*t68*t135;
  t747 = -1.*t60*t231;
  t815 = t732 + t747;
  t728 = Sin(var1[3]);
  t584 = -1.*t60;
  t589 = 1. + t584;
  t596 = -0.9063*t589;
  t630 = -0.06*t68*t135;
  t640 = t60*t331;
  t654 = t596 + t630 + t640;
  t406 = t68*t135;
  t445 = t60*t231;
  t463 = t406 + t445;
  t113 = 0.06*t60*t68;
  t136 = 0.9063*t135;
  t350 = t135*t331;
  t359 = t113 + t136 + t350;
  t950 = Sin(var1[2]);
  t713 = Cos(var1[2]);
  t1057 = -1.*t728*t533;
  t478 = t359*t463;
  t568 = 0.4999*t533;
  t675 = t654*t533;
  t708 = t478 + t568 + t675;
  t1235 = t874*t533;
  t1054 = t874*t815;
  t1064 = t1054 + t1057;
  t1083 = -1.*t950*t1064;
  t1109 = -1.*t654*t815;
  t1110 = 0.4999*t463;
  t1180 = -1.*t359*t533;
  t1195 = t1109 + t1110 + t1180;
  t1212 = -1.*t728*t463;
  t1237 = t1212 + t1235;
  t1269 = -1.*t950*t1237;
  t1434 = t728*t815;
  t1453 = t1434 + t1235;
  t1584 = -1.*t950*t1453;
  t1597 = t713*t1064;
  t1619 = t1584 + t1597;
  t1812 = -0.06*t60*t68;
  t1833 = -0.9063*t135;
  t1861 = -1.*t135*t331;
  t1938 = t1812 + t1833 + t1861;
  t1687 = 0.9063*t60;
  t1700 = t1687 + t630 + t640;
  t1525 = t874*t463;
  t1545 = t728*t533;
  t1562 = t1525 + t1545;
  t857 = -1.*t728*t815;
  t2074 = -1.*t60*t68;
  t2083 = t135*t231;
  t2084 = t2074 + t2083;
  t1622 = 1.142857*t1195*t1619;
  t1623 = 0.4999*t815;
  t1629 = t654*t815;
  t1970 = t359*t533;
  t2024 = -1.*t359*t815;
  t2317 = -0.06*t60*t231;
  t2363 = t630 + t2317;
  t2384 = 0.06*t135*t231;
  t2447 = t1812 + t2384;
  t2088 = -1.*t654*t2084;
  t2091 = t713*t1237;
  t2097 = -1.*t950*t1562;
  t2146 = t2091 + t2097;
  t2155 = t874*t2084;
  t2164 = t857 + t2155;
  t2175 = t713*t2164;
  t2183 = t728*t2084;
  t2198 = t1054 + t2183;
  t2246 = -1.*t950*t2198;
  t2278 = t2175 + t2246;
  t2282 = 1.142857*t708*t2278;
  t898 = -1.*t874*t533;
  t910 = t857 + t898;
  t925 = t713*t910;
  t1098 = t925 + t1083;
  t1102 = 1.142857*t708*t1098;
  t1285 = -1.*t874*t463;
  t1304 = t1285 + t1057;
  t1340 = t713*t1304;
  t1344 = t1269 + t1340;
  t1353 = 1.142857*t1195*t1344;
  t1415 = t1102 + t1353;
  t1752 = t1700*t463;
  t1969 = t1938*t533;
  t1988 = t1623 + t1629 + t1752 + t1969 + t1970;
  t2698 = t950*t910;
  t2726 = t2698 + t1597;
  t1999 = -1.*t1938*t815;
  t2031 = -1.*t1700*t533;
  t2090 = t1999 + t2024 + t568 + t2031 + t2088;
  t2619 = -1.*t874*t815;
  t2731 = 1.142857*t1195*t2726;
  t2382 = t2363*t463;
  t2458 = t533*t2447;
  t2461 = t1623 + t1629 + t2382 + t1970 + t2458;
  t2473 = -1.*t2363*t533;
  t2477 = -1.*t815*t2447;
  t2490 = t2024 + t568 + t2473 + t2477 + t2088;
  t2775 = t950*t1304;
  t2778 = t2091 + t2775;
  t2786 = -1.*t728*t2084;
  t2878 = t2619 + t2786;
  t2899 = t950*t2878;
  t2925 = t2175 + t2899;
  t2959 = 1.142857*t708*t2925;
  t2741 = 1.142857*t1988*t2726;
  t2782 = 1.142857*t2090*t2778;
  t2960 = t2731 + t2741 + t2782 + t2959;
  t3084 = t713*t1453;
  t3086 = t950*t1064;
  t3102 = t3084 + t3086;
  t3118 = -0.9063*t60;
  t3119 = 0.06*t68*t135;
  t3125 = -1.*t60*t331;
  t3128 = t3118 + t3119 + t3125;
  t2543 = t728*t463;
  t3437 = t950*t2164;
  t3438 = t713*t2198;
  t3440 = t3437 + t3438;
  t3107 = t359*t815;
  t3189 = 0.4999*t2084;
  t3219 = t654*t2084;
  t3505 = 0.06*t60*t231;
  t3509 = t3119 + t3505;
  t3258 = -1.*t654*t463;
  t3295 = -1.*t359*t2084;
  t3307 = t950*t1237;
  t3315 = t713*t1562;
  t3318 = t3307 + t3315;
  t3331 = t2543 + t2155;
  t3338 = t713*t3331;
  t3345 = t1525 + t2786;
  t3361 = t950*t3345;
  t3398 = t3338 + t3361;
  t3429 = 1.142857*t708*t3398;
  t3450 = 1.142857*t1195*t3440;
  t1998 = 1.142857*t1988*t1619;
  t2147 = 1.142857*t2090*t2146;
  t2288 = t1622 + t1998 + t2147 + t2282;
  t3768 = -0.06*t68;
  t3774 = 0. + t3768;
  t3803 = t3774*t135;
  t3818 = t3803 + t2317;
  t3837 = t60*t3774;
  t3843 = t3837 + t2384;
  t3465 = 1.142857*t2090*t3102;
  t3881 = -1.*t3818*t533;
  t3887 = -1.*t815*t3843;
  t3895 = t2024 + t568 + t3881 + t3887 + t2088;
  t3472 = t1938*t815;
  t3478 = t1700*t533;
  t3566 = -1.*t1700*t815;
  t3955 = -1.*t3774*t135;
  t3959 = t3955 + t3505;
  t3613 = -1.*t1938*t2084;
  t3721 = 1.142857*t1988*t3440;
  t3832 = t3818*t463;
  t3853 = t533*t3843;
  t3862 = t1623 + t1629 + t3832 + t1970 + t3853;
  t3935 = 1.142857*t3895*t3102;
  t3467 = 1.142857*t2490*t3102;
  t3948 = t3818*t533;
  t3486 = t2363*t533;
  t3520 = t3509*t533;
  t3970 = t815*t3843;
  t3529 = t815*t2447;
  t3543 = t463*t2447;
  t4096 = -1.*t815*t3818;
  t3577 = -1.*t815*t2363;
  t3600 = -1.*t815*t3509;
  t3611 = -1.*t533*t2447;
  t4127 = -1.*t3843*t2084;
  t3668 = -1.*t2447*t2084;
  t4173 = 1.142857*t3862*t3440;
  t3724 = 1.142857*t2461*t3440;
  t4339 = 1.142857*t708*t1619;
  t4346 = 1.142857*t1195*t2146;
  t4403 = t4339 + t4346;
  t4605 = 1.142857*t1195*t3102;
  t4625 = 1.142857*t708*t3440;
  t4615 = 1.142857*t1988*t3102;
  t4620 = 1.142857*t2090*t3318;
  t4633 = t4605 + t4615 + t4620 + t4625;
  t4637 = 1.142857*t2461*t3102;
  t4650 = 1.142857*t2490*t3318;
  t4654 = t4605 + t4637 + t4650 + t4625;
  t4700 = -1.*t713*t1064;
  t4709 = -1.*t713*t1237;
  t1486 = -1.*t713*t1453;
  t1490 = t1486 + t1083;
  t1563 = -1.*t713*t1562;
  t1567 = t1269 + t1563;
  t4782 = 1.142857*t1195*t1490;
  t4793 = -1.*t950*t2164;
  t4843 = -1.*t713*t2198;
  t4855 = t4793 + t4843;
  t4906 = 1.142857*t708*t4855;
  t4697 = -1.*t950*t910;
  t4705 = t4697 + t4700;
  t4707 = 1.142857*t708*t4705;
  t4710 = -1.*t950*t1304;
  t4716 = t4709 + t4710;
  t4728 = 1.142857*t1195*t4716;
  t4730 = t4707 + t4728;
  t2567 = t2543 + t898;
  t2627 = t2619 + t1545;
  t5207 = 1.142857*t1195*t1098;
  t5241 = t713*t2878;
  t5264 = t4793 + t5241;
  t5302 = 1.142857*t708*t5264;
  t5230 = 1.142857*t1988*t1098;
  t5239 = 1.142857*t2090*t1344;
  t5309 = t5207 + t5230 + t5239 + t5302;
  t4783 = 1.142857*t1988*t1490;
  t4792 = 1.142857*t2090*t1567;
  t4946 = t4782 + t4783 + t4792 + t4906;
  t3105 = 2.*t1938*t815;
  t3108 = t1938*t463;
  t3129 = t3128*t533;
  t3152 = 2.*t1700*t533;
  t3221 = t3105 + t3107 + t3108 + t3129 + t3152 + t3189 + t3219;
  t3234 = -1.*t3128*t815;
  t3252 = -2.*t1700*t815;
  t3268 = -1.*t1938*t533;
  t3286 = -2.*t1938*t2084;
  t3302 = t1623 + t3234 + t3252 + t3258 + t3268 + t3286 + t3295;
  t3559 = t3472 + t3107 + t3478 + t3486 + t3520 + t3529 + t3543 + t3189 + t3219;
  t3675 = t1623 + t3566 + t3577 + t3600 + t3258 + t3611 + t3613 + t3295 + t3668;
  t5447 = -1.*t950*t3331;
  t5472 = t713*t3345;
  t5487 = t5447 + t5472;
  t5489 = 1.142857*t708*t5487;
  t5495 = 1.142857*t1195*t2278;
  t5516 = 1.142857*t2090*t1619;
  t3960 = t3959*t533;
  t4047 = t463*t3843;
  t4066 = t3472 + t3107 + t3478 + t3948 + t3960 + t3970 + t4047 + t3189 + t3219;
  t4117 = -1.*t815*t3959;
  t4125 = -1.*t533*t3843;
  t4154 = t1623 + t3566 + t4096 + t4117 + t3258 + t4125 + t3613 + t3295 + t4127;
  t5583 = 1.142857*t1988*t2278;
  t5886 = 1.142857*t3895*t1619;
  t5518 = 1.142857*t2490*t1619;
  t4198 = t3107 + t3948 + t3486 + t3520 + t3970 + t3529 + t3543 + t3189 + t3219;
  t4218 = t1623 + t4096 + t3577 + t3600 + t3258 + t3611 + t3295 + t4127 + t3668;
  t5952 = 1.142857*t3862*t2278;
  t5596 = 1.142857*t2461*t2278;
  t1509 = 1.142857*t708*t1490;
  t1569 = 1.142857*t1195*t1567;
  t1575 = t1509 + t1569;
  t1579 = -0.5*var2[2]*t1575;
  t2302 = -0.5*var2[4]*t2288;
  t2467 = 1.142857*t2461*t1619;
  t2497 = 1.142857*t2490*t2146;
  t2501 = t1622 + t2467 + t2497 + t2282;
  t2518 = -0.5*var2[5]*t2501;
  t6099 = -0.4999*t728;
  t6101 = -1.*t728*t654;
  t6116 = -1.*t874*t359;
  t6117 = t6099 + t6101 + t6116;
  t6176 = t874*t654;
  t6203 = -1.*t728*t359;
  t6258 = -1.*t874;
  t6262 = 1. + t6258;
  t6274 = -0.4999*t6262;
  t6277 = t6274 + t6176 + t6203;
  t6170 = 0.4999*t874;
  t6207 = t6170 + t6176 + t6203;
  t6213 = -0.4999*t874;
  t6237 = -1.*t874*t654;
  t6246 = t728*t359;
  t6251 = t6213 + t6237 + t6246;
  t6126 = 0.4999*t728;
  t6127 = t728*t654;
  t6139 = t874*t359;
  t6149 = t6126 + t6127 + t6139;
  t6682 = -1.*t728*t1700;
  t6701 = t874*t1938;
  t6717 = t6682 + t6701;
  t6520 = -1.*t874*t1700;
  t6537 = -1.*t728*t1938;
  t6543 = t6520 + t6537;
  t6613 = t874*t1700;
  t6621 = t728*t1938;
  t6629 = t6613 + t6621;
  t6451 = -1.*t6277*t910;
  t6453 = -1.*t6207*t1453;
  t6457 = -1.*t6117*t1064;
  t6469 = -1.*t6149*t1064;
  t6472 = t6451 + t6453 + t6457 + t6469;
  t6756 = t6117*t1237;
  t6758 = t6149*t1237;
  t6759 = t6277*t1304;
  t6774 = t6207*t1562;
  t6784 = t6756 + t6758 + t6759 + t6774;
  t6512 = t6277*t910;
  t6514 = t6207*t1453;
  t6675 = t6117*t1064;
  t6678 = t6149*t1064;
  t6873 = -1.*t728*t2363;
  t6877 = t874*t2447;
  t6897 = t6873 + t6877;
  t6902 = -1.*t874*t2363;
  t6903 = -1.*t728*t2447;
  t6905 = t6902 + t6903;
  t6907 = t874*t2363;
  t6908 = t728*t2447;
  t6909 = t6907 + t6908;
  t6822 = -1.*t6117*t2164;
  t6837 = -1.*t6149*t2164;
  t6838 = -1.*t6277*t2878;
  t6845 = -1.*t6207*t2198;
  t7191 = t874*t3128;
  t7197 = t7191 + t6537;
  t7169 = t728*t3128;
  t7171 = t7169 + t6701;
  t6480 = 1.142857*t2090*t6472;
  t6567 = t6543*t1237;
  t6672 = t6629*t1237;
  t6736 = t6717*t1304;
  t6740 = t6717*t1562;
  t6747 = t6512 + t6514 + t6567 + t6672 + t6675 + t6678 + t6736 + t6740;
  t6750 = 1.142857*t708*t6747;
  t6788 = 1.142857*t1988*t6784;
  t6790 = -1.*t6717*t910;
  t6791 = -1.*t6717*t1453;
  t6797 = -1.*t6543*t1064;
  t6799 = -1.*t6629*t1064;
  t6850 = t6790 + t6791 + t6797 + t6799 + t6822 + t6837 + t6838 + t6845;
  t6852 = 1.142857*t1195*t6850;
  t6855 = t6480 + t6750 + t6788 + t6852;
  t7069 = -1.*t6149*t1453;
  t7074 = -1.*t6277*t1064;
  t7092 = t7069 + t7074;
  t7102 = t6149*t1453;
  t7107 = t6717*t1237;
  t7109 = t6277*t1064;
  t7114 = t6629*t1562;
  t7125 = t7102 + t7107 + t7109 + t7114;
  t7157 = t6277*t1237;
  t7160 = t6149*t1562;
  t7165 = t7157 + t7160;
  t7216 = -1.*t6629*t1453;
  t7218 = -1.*t6717*t1064;
  t7222 = -1.*t6277*t2164;
  t7223 = -1.*t6149*t2198;
  t7231 = t7216 + t7218 + t7222 + t7223;
  t7270 = t6277*t2164;
  t7283 = t6149*t2198;
  t7407 = t728*t3509;
  t7414 = t7407 + t6877;
  t7436 = t874*t3509;
  t7437 = t7436 + t6903;
  t7201 = -1.*t6149*t3331;
  t7205 = -1.*t6277*t3345;
  t7497 = -1.*t728*t3818;
  t7505 = t874*t3843;
  t7515 = t7497 + t7505;
  t7540 = -1.*t874*t3818;
  t7554 = -1.*t728*t3843;
  t7560 = t7540 + t7554;
  t7563 = t874*t3818;
  t7582 = t728*t3843;
  t7584 = t7563 + t7582;
  t7370 = t6629*t1453;
  t7401 = t6717*t1064;
  t7847 = t728*t3959;
  t7865 = t7847 + t7505;
  t7926 = t874*t3959;
  t7942 = t7926 + t7554;
  t7460 = -1.*t6717*t2164;
  t7476 = -1.*t6629*t2198;
  t7729 = t1237*t7515;
  t7732 = t1562*t7584;
  t7733 = t7102 + t7109 + t7729 + t7732;
  t7335 = t1237*t6897;
  t7341 = t1562*t6909;
  t7343 = t7102 + t7109 + t7335 + t7341;
  t7768 = -1.*t1064*t7515;
  t7784 = -1.*t1453*t7584;
  t7801 = t7768 + t7784 + t7222 + t7223;
  t7364 = -1.*t1064*t6897;
  t7366 = -1.*t1453*t6909;
  t7368 = t7364 + t7366 + t7222 + t7223;
  t7836 = t1064*t7515;
  t7966 = t1453*t7584;
  t7404 = t1064*t6897;
  t7429 = t1562*t7414;
  t7438 = t1237*t7437;
  t7442 = t1453*t6909;
  t7450 = -1.*t1453*t7414;
  t7457 = -1.*t1064*t7437;
  t8131 = -1.*t7515*t2164;
  t7468 = -1.*t6897*t2164;
  t8172 = -1.*t7584*t2198;
  t7477 = -1.*t6909*t2198;
  t8685 = 1.142857*t2090*t7092;
  t8695 = 1.142857*t708*t7125;
  t8696 = 1.142857*t1988*t7165;
  t8705 = 1.142857*t1195*t7231;
  t8709 = t8685 + t8695 + t8696 + t8705;
  t8731 = 1.142857*t2490*t7092;
  t8734 = 1.142857*t2461*t7165;
  t8748 = 1.142857*t708*t7343;
  t8749 = 1.142857*t1195*t7368;
  t8753 = t8731 + t8734 + t8748 + t8749;
  t8864 = 2.285714*t708*t1988;
  t8865 = 2.285714*t1195*t2090;
  t8866 = t8864 + t8865;
  t8874 = 2.285714*t708*t2461;
  t8891 = 2.285714*t1195*t2490;
  t8893 = t8874 + t8891;
  t8903 = 0.9063*t68;
  t8904 = t68*t331;
  t8907 = 0.06*t68*t231;
  t8908 = t8903 + t8904 + t8907;
  t8910 = Power(t68,2);
  t8911 = -0.06*t8910;
  t8913 = 0.9063*t231;
  t8914 = t331*t231;
  t8915 = t8911 + t8913 + t8914;
  t8920 = -0.9063*t231;
  t8925 = -1.*t331*t231;
  t8926 = Power(t231,2);
  t8927 = -0.06*t8926;
  t8948 = t3774*t68;
  t8949 = 0.06*t8910;
  t8951 = t8948 + t8949 + t8920 + t8925 + t8927;
  t8928 = 0. + t8920 + t8925 + t8927;
  t8956 = t3774*t231;
  t8958 = 0.12*t68*t231;
  t8959 = t8903 + t8904 + t8956 + t8958;
  t8996 = 1.142857*t8908*t1988;
  t8997 = 1.142857*t8915*t2090;
  t8998 = t8996 + t8997;
  t9004 = 1.142857*t8928*t708;
  t9007 = 1.142857*t8908*t1195;
  t9008 = 1.142857*t8908*t2461;
  t9009 = 1.142857*t8915*t2490;
  t9013 = t9004 + t9007 + t9008 + t9009;
  p_output1[0]=var2[3]*(t1579 + t2302 + t2518 - 0.5*t1415*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t1415*var2[2] - 0.5*(1.142857*t1195*(t1340 + t2567*t950) + 1.142857*t708*(t925 + t2627*t950))*var2[3] - 0.5*t2960*var2[4] - 0.5*(1.142857*t2461*t2726 + t2731 + 1.142857*t2490*t2778 + t2959)*var2[5]);
  p_output1[2]=var2[3]*(-0.5*t2288*var2[2] - 0.5*t2960*var2[3] - 0.5*(2.285714*t2090*t3102 + 1.142857*t3102*t3221 + 1.142857*t3302*t3318 + t3429 + 2.285714*t1988*t3440 + t3450)*var2[4] - 0.5*(t3429 + t3450 + t3465 + t3467 + 1.142857*t3102*t3559 + 1.142857*t3318*t3675 + t3721 + t3724)*var2[5]);
  p_output1[3]=var2[3]*(-0.5*(t1622 + t2282 + 1.142857*t1619*t3862 + 1.142857*t2146*t3895)*var2[2] - 0.5*(t2731 + t2959 + 1.142857*t2726*t3862 + 1.142857*t2778*t3895)*var2[3] - 0.5*(t3429 + t3450 + t3465 + t3721 + t3935 + 1.142857*t3102*t4066 + 1.142857*t3318*t4154 + t4173)*var2[4] - 0.5*(t3429 + t3450 + t3467 + t3724 + t3935 + t4173 + 1.142857*t3102*t4198 + 1.142857*t3318*t4218)*var2[5]);
  p_output1[4]=-0.5*t4403*var2[3];
  p_output1[5]=-0.5*t4403*var2[2] - 1.*(1.142857*t1195*t2778 + 1.142857*t2726*t708)*var2[3] - 0.5*t4633*var2[4] - 0.5*t4654*var2[5];
  p_output1[6]=-0.5*t4633*var2[3];
  p_output1[7]=-0.5*t4654*var2[3];
  p_output1[8]=var2[3]*(-0.5*(1.142857*t708*(t4700 + t1453*t950) + 1.142857*t1195*(t4709 + t1562*t950))*var2[2] - 0.5*t4730*var2[3] - 0.5*t4946*var2[4] - 0.5*(1.142857*t1490*t2461 + 1.142857*t1567*t2490 + t4782 + t4906)*var2[5]);
  p_output1[9]=var2[3]*(-0.5*t4730*var2[2] - 0.5*(1.142857*t1195*(t4710 + t2567*t713) + 1.142857*t708*(t4697 + t2627*t713))*var2[3] - 0.5*t5309*var2[4] - 0.5*(1.142857*t1098*t2461 + 1.142857*t1344*t2490 + t5207 + t5302)*var2[5]);
  p_output1[10]=var2[3]*(-0.5*t4946*var2[2] - 0.5*t5309*var2[3] - 0.5*(2.285714*t1619*t2090 + 2.285714*t1988*t2278 + 1.142857*t1619*t3221 + 1.142857*t2146*t3302 + t5489 + t5495)*var2[4] - 0.5*(1.142857*t1619*t3559 + 1.142857*t2146*t3675 + t5489 + t5495 + t5516 + t5518 + t5583 + t5596)*var2[5]);
  p_output1[11]=var2[3]*(-0.5*(1.142857*t1490*t3862 + 1.142857*t1567*t3895 + t4782 + t4906)*var2[2] - 0.5*(1.142857*t1098*t3862 + 1.142857*t1344*t3895 + t5207 + t5302)*var2[3] - 0.5*(1.142857*t1619*t4066 + 1.142857*t2146*t4154 + t5489 + t5495 + t5516 + t5583 + t5886 + t5952)*var2[4] - 0.5*(1.142857*t1619*t4198 + 1.142857*t2146*t4218 + t5489 + t5495 + t5518 + t5596 + t5886 + t5952)*var2[5]);
  p_output1[12]=-0.5*t1575*var2[3];
  p_output1[13]=t1579 + t2302 + t2518 - 1.*t1415*var2[3];
  p_output1[14]=-0.5*t2288*var2[3];
  p_output1[15]=-0.5*t2501*var2[3];
  p_output1[16]=var2[3]*(-0.5*(1.142857*(2.*t1304*t6117 + t1562*t6117 + t1304*t6149 + 2.*t1237*t6207 + t1237*t6251 + t2567*t6277)*t708 + 1.142857*t1195*(-1.*t1453*t6117 - 2.*t1064*t6207 - 1.*t1064*t6251 - 1.*t2627*t6277 - 2.*t6117*t910 - 1.*t6149*t910))*var2[3] - 0.5*t6855*var2[4] - 0.5*(1.142857*t2490*t6472 + 1.142857*t2461*t6784 + 1.142857*(t6512 + t6514 + t6675 + t6678 + t1304*t6897 + t1562*t6897 + t1237*t6905 + t1237*t6909)*t708 + 1.142857*t1195*(t6822 + t6837 + t6838 + t6845 - 1.*t1453*t6897 - 1.*t1064*t6905 - 1.*t1064*t6909 - 1.*t6897*t910))*var2[5]);
  p_output1[17]=var2[3]*(-0.5*t6855*var2[3] - 0.5*(1.142857*t3302*t7092 + 2.285714*t1988*t7125 + 1.142857*t3221*t7165 + 1.142857*t1195*(-2.*t2198*t6629 - 2.*t2164*t6717 - 1.*t1453*t7171 - 1.*t1064*t7197 + t7201 + t7205) + 2.285714*t2090*t7231 + 1.142857*t708*(2.*t1453*t6629 + 2.*t1064*t6717 + t1562*t7171 + t1237*t7197 + t7270 + t7283))*var2[4] - 0.5*(1.142857*t3675*t7092 + 1.142857*t2461*t7125 + 1.142857*t3559*t7165 + 1.142857*t2490*t7231 + 1.142857*t1988*t7343 + 1.142857*t2090*t7368 + 1.142857*t708*(t7270 + t7283 + t7370 + t7401 + t7404 + t7429 + t7438 + t7442) + 1.142857*t1195*(t7201 + t7205 + t7450 + t7457 + t7460 + t7468 + t7476 + t7477))*var2[5]);
  p_output1[18]=var2[3]*(-0.5*(1.142857*t3895*t6472 + 1.142857*t3862*t6784 + 1.142857*t708*(t6512 + t6514 + t6675 + t6678 + t1304*t7515 + t1562*t7515 + t1237*t7560 + t1237*t7584) + 1.142857*t1195*(t6822 + t6837 + t6838 + t6845 - 1.*t1453*t7515 - 1.*t1064*t7560 - 1.*t1064*t7584 - 1.*t7515*t910))*var2[3] - 0.5*(1.142857*t4154*t7092 + 1.142857*t3862*t7125 + 1.142857*t4066*t7165 + 1.142857*t3895*t7231 + 1.142857*t1988*t7733 + 1.142857*t2090*t7801 + 1.142857*t708*(t7270 + t7283 + t7370 + t7401 + t7836 + t1562*t7865 + t1237*t7942 + t7966) + 1.142857*t1195*(t7201 + t7205 + t7460 + t7476 - 1.*t1453*t7865 - 1.*t1064*t7942 + t8131 + t8172))*var2[4] - 0.5*(1.142857*t4218*t7092 + 1.142857*t4198*t7165 + 1.142857*t3862*t7343 + 1.142857*t3895*t7368 + 1.142857*t2461*t7733 + 1.142857*t2490*t7801 + 1.142857*t708*(t7270 + t7283 + t7404 + t7429 + t7438 + t7442 + t7836 + t7966) + 1.142857*t1195*(t7201 + t7205 + t7450 + t7457 + t7468 + t7477 + t8131 + t8172))*var2[5]);
  p_output1[19]=-1.*(1.142857*t1195*t6472 + 1.142857*t6784*t708)*var2[3] - 0.5*t8709*var2[4] - 0.5*t8753*var2[5];
  p_output1[20]=-0.5*t8709*var2[3];
  p_output1[21]=-0.5*t8753*var2[3];
  p_output1[22]=var2[3]*(-0.5*(2.285714*Power(t1988,2) + 2.285714*Power(t2090,2) + 2.285714*t1195*t3302 + 2.285714*t3221*t708)*var2[4] - 0.5*(2.285714*t1988*t2461 + 2.285714*t2090*t2490 + 2.285714*t1195*t3675 + 2.285714*t3559*t708)*var2[5]);
  p_output1[23]=var2[3]*(-0.5*(2.285714*t1988*t3862 + 2.285714*t2090*t3895 + 2.285714*t1195*t4154 + 2.285714*t4066*t708)*var2[4] - 0.5*(2.285714*t2461*t3862 + 2.285714*t2490*t3895 + 2.285714*t1195*t4218 + 2.285714*t4198*t708)*var2[5]);
  p_output1[24]=-0.5*t8866*var2[4] - 0.5*t8893*var2[5];
  p_output1[25]=-0.5*t8866*var2[3];
  p_output1[26]=-0.5*t8893*var2[3];
  p_output1[27]=var2[3]*(-0.5*(1.142857*t3221*t8908 + 1.142857*t3302*t8915)*var2[4] - 0.5*(1.142857*t2090*t8908 + 1.142857*t3559*t8908 + 1.142857*t3675*t8915 + 1.142857*t1988*t8928)*var2[5]);
  p_output1[28]=var2[3]*(-0.5*(1.142857*t4066*t8908 + 1.142857*t4154*t8915 + 1.142857*t1988*t8951 + 1.142857*t2090*t8959)*var2[4] - 0.5*(1.142857*(-1.*t231*t3774 - 0.9063*t68 - 0.12*t231*t68 - 1.*t331*t68)*t708 + 1.142857*t3895*t8908 + 1.142857*t4198*t8908 + 1.142857*t4218*t8915 + 1.142857*t3862*t8928 + 1.142857*t1195*t8951 + 1.142857*t2461*t8951 + 1.142857*t2490*t8959)*var2[5]);
  p_output1[29]=-0.5*t8998*var2[4] - 0.5*t9013*var2[5];
  p_output1[30]=-0.5*t8998*var2[3];
  p_output1[31]=-0.5*t9013*var2[3];
  p_output1[32]=var2[3]*(0.03428571*t3302*var2[4] + 0.03428571*t3675*var2[5]);
  p_output1[33]=var2[3]*(0.03428571*t4154*var2[4] + 0.03428571*t4218*var2[5]);
  p_output1[34]=0.03428571*t2090*var2[4] + 0.03428571*t2490*var2[5];
  p_output1[35]=0.03428571*t2090*var2[3];
  p_output1[36]=0.03428571*t2490*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 37, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L4_J4_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L4_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
