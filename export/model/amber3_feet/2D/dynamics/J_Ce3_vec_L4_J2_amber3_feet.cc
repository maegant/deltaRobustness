/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:37 GMT-08:00
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
  double t78;
  double t36;
  double t58;
  double t79;
  double t445;
  double t69;
  double t128;
  double t129;
  double t33;
  double t475;
  double t499;
  double t510;
  double t579;
  double t514;
  double t8;
  double t1137;
  double t1139;
  double t1185;
  double t892;
  double t893;
  double t901;
  double t912;
  double t1014;
  double t1020;
  double t324;
  double t535;
  double t566;
  double t586;
  double t662;
  double t726;
  double t734;
  double t741;
  double t1189;
  double t1194;
  double t1240;
  double t1287;
  double t1300;
  double t1309;
  double t1332;
  double t1406;
  double t1899;
  double t1955;
  double t1956;
  double t2000;
  double t2029;
  double t2037;
  double t1709;
  double t1722;
  double t1779;
  double t1875;
  double t2205;
  double t2206;
  double t2265;
  double t2269;
  double t2300;
  double t2303;
  double t2383;
  double t2414;
  double t2419;
  double t2421;
  double t2424;
  double t2442;
  double t2830;
  double t2859;
  double t2868;
  double t2878;
  double t2915;
  double t2918;
  double t2749;
  double t2750;
  double t2755;
  double t2780;
  double t870;
  double t1040;
  double t1053;
  double t1099;
  double t1491;
  double t1537;
  double t1546;
  double t1568;
  double t1589;
  double t3175;
  double t3177;
  double t3190;
  double t3192;
  double t1882;
  double t1889;
  double t2062;
  double t2063;
  double t3230;
  double t3243;
  double t3245;
  double t3256;
  double t3266;
  double t2077;
  double t2105;
  double t2116;
  double t2130;
  double t2336;
  double t2351;
  double t2369;
  double t2478;
  double t2494;
  double t2506;
  double t3373;
  double t3384;
  double t3521;
  double t3524;
  double t2781;
  double t2964;
  double t2967;
  double t3007;
  double t3026;
  double t3027;
  double t3665;
  double t3675;
  double t3676;
  double t3682;
  double t3655;
  double t3658;
  double t3882;
  double t3889;
  double t3907;
  double t4170;
  double t4179;
  double t4201;
  double t4230;
  double t4125;
  double t4129;
  double t3912;
  double t3916;
  double t3931;
  double t3939;
  double t3945;
  double t3955;
  double t4038;
  double t4592;
  double t4608;
  double t4615;
  double t4929;
  double t4937;
  double t4940;
  double t4845;
  double t4857;
  double t4863;
  double t3874;
  double t3877;
  double t5139;
  double t5141;
  double t4055;
  double t4114;
  double t4119;
  double t4122;
  double t4237;
  double t4346;
  double t5314;
  double t5329;
  double t5352;
  double t5377;
  double t5409;
  double t5433;
  double t4375;
  double t4389;
  double t4420;
  double t4431;
  double t4457;
  double t4475;
  double t4524;
  double t4525;
  double t4538;
  double t4549;
  double t4630;
  double t4632;
  double t4648;
  double t4649;
  double t4691;
  double t4720;
  double t4741;
  double t4752;
  double t4774;
  double t4827;
  double t4829;
  double t4928;
  double t4991;
  double t5540;
  double t5551;
  double t5557;
  double t5576;
  double t5607;
  double t5642;
  double t5025;
  double t5079;
  double t5762;
  double t5763;
  double t5765;
  double t5769;
  double t5777;
  double t5780;
  double t5788;
  double t5902;
  double t5905;
  double t5906;
  double t5850;
  double t5866;
  double t5868;
  double t5823;
  double t5824;
  double t5842;
  double t3227;
  double t3280;
  double t3302;
  double t3307;
  double t3338;
  double t3347;
  double t3351;
  double t3353;
  double t3372;
  double t3385;
  double t3395;
  double t3419;
  double t3427;
  double t3433;
  double t3448;
  double t3458;
  double t3473;
  double t3478;
  double t3535;
  double t3538;
  double t3544;
  double t3550;
  double t3554;
  double t3561;
  double t3567;
  double t3580;
  double t3584;
  double t3610;
  double t3652;
  double t3659;
  double t3686;
  double t3699;
  double t3733;
  double t3743;
  double t3766;
  double t3774;
  double t3782;
  double t3789;
  double t3801;
  double t3802;
  double t3803;
  double t3805;
  double t3831;
  double t3844;
  double t3861;
  double t5969;
  double t5972;
  double t5974;
  double t5983;
  double t6011;
  double t6026;
  double t6028;
  double t6033;
  double t6226;
  double t6233;
  double t6258;
  double t6262;
  double t4131;
  double t4233;
  double t4252;
  double t4298;
  double t4349;
  double t4378;
  double t6393;
  double t6394;
  double t6395;
  double t6402;
  double t4880;
  double t4957;
  double t4961;
  double t5009;
  double t5010;
  double t5080;
  double t6499;
  double t6504;
  double t6505;
  double t6380;
  double t6383;
  double t5146;
  double t5149;
  double t5170;
  double t5187;
  double t5190;
  double t5191;
  double t5214;
  double t5237;
  double t5239;
  double t5248;
  double t6411;
  double t6417;
  double t5360;
  double t5458;
  double t5463;
  double t5466;
  double t5483;
  double t5489;
  double t6424;
  double t6429;
  double t6433;
  double t6434;
  double t6437;
  double t6438;
  double t6442;
  double t6446;
  double t6449;
  double t6451;
  double t6452;
  double t6455;
  double t6459;
  double t6462;
  double t6464;
  double t6466;
  double t6467;
  double t6469;
  double t6477;
  double t6493;
  double t6494;
  double t6495;
  double t6497;
  double t6511;
  double t6513;
  double t5571;
  double t5656;
  double t5663;
  double t6534;
  double t6539;
  double t5688;
  double t5691;
  double t5698;
  double t6642;
  double t6645;
  double t6646;
  double t6569;
  double t6573;
  double t6576;
  double t6579;
  double t6687;
  double t6707;
  double t6709;
  double t6712;
  double t6715;
  double t6770;
  double t6775;
  double t6777;
  double t6782;
  double t6789;
  double t6733;
  double t6735;
  double t6743;
  double t6728;
  double t6730;
  double t6731;
  double t4063;
  double t4107;
  double t4286;
  double t4384;
  double t4390;
  double t4398;
  double t4985;
  double t5088;
  double t5092;
  double t5109;
  double t5114;
  double t5136;
  double t6414;
  double t6416;
  double t6422;
  double t6423;
  double t6426;
  double t6428;
  double t6507;
  double t6508;
  double t6516;
  double t6521;
  double t6523;
  double t6530;
  double t6533;
  double t6540;
  double t6541;
  double t6552;
  double t6554;
  double t6555;
  double t6586;
  double t6587;
  double t6588;
  double t6589;
  double t6599;
  double t6601;
  double t6852;
  double t6853;
  double t6858;
  double t6859;
  double t6812;
  double t6813;
  double t6814;
  double t6815;
  double t6816;
  double t6987;
  double t6988;
  double t6978;
  double t6983;
  double t6811;
  double t6818;
  double t6820;
  double t6847;
  double t6868;
  double t6875;
  double t7059;
  double t7060;
  double t7066;
  double t6885;
  double t6890;
  double t6896;
  double t6898;
  double t6918;
  double t6925;
  double t6930;
  double t6931;
  double t6937;
  double t6940;
  double t6941;
  double t6945;
  double t6946;
  double t6950;
  double t6951;
  double t6952;
  double t6955;
  double t6958;
  double t6959;
  double t6963;
  double t6965;
  double t6971;
  double t6973;
  double t6975;
  double t7012;
  double t7013;
  double t7129;
  double t7131;
  double t7140;
  double t7144;
  double t6994;
  double t6996;
  double t7184;
  double t7186;
  double t7187;
  double t7191;
  double t7192;
  double t7238;
  double t7239;
  double t7242;
  double t7245;
  double t7247;
  double t7223;
  double t7224;
  double t7226;
  double t7227;
  double t7232;
  double t7210;
  double t7211;
  double t7214;
  double t7275;
  double t7278;
  double t7297;
  double t7298;
  double t7301;
  double t7306;
  double t7311;
  double t7312;
  double t7266;
  double t7276;
  double t7279;
  double t7283;
  double t7286;
  double t7288;
  double t7290;
  double t7304;
  double t7314;
  double t7317;
  double t7320;
  double t7324;
  double t7325;
  double t7351;
  double t7353;
  double t7357;
  double t7041;
  double t7047;
  double t7055;
  double t7080;
  double t7402;
  double t7087;
  double t7098;
  double t7111;
  double t7121;
  double t7126;
  double t7127;
  double t7434;
  double t7441;
  double t7443;
  double t7444;
  double t7155;
  double t7158;
  double t7389;
  double t7033;
  double t7390;
  double t7034;
  double t7045;
  double t7397;
  double t7057;
  double t7400;
  double t7403;
  double t7068;
  double t7405;
  double t7414;
  double t7081;
  double t7417;
  double t7419;
  double t7420;
  double t7088;
  double t7421;
  double t7100;
  double t7426;
  double t7115;
  double t7431;
  double t7123;
  double t7432;
  double t7128;
  double t7148;
  double t7433;
  double t7442;
  double t7445;
  double t7446;
  double t7450;
  double t7451;
  double t7156;
  double t7452;
  double t7159;
  double t7453;
  double t7208;
  double t7209;
  double t7234;
  double t7236;
  double t7237;
  double t7522;
  double t7524;
  double t7527;
  double t7517;
  double t7519;
  double t7520;
  double t7509;
  double t7511;
  double t7513;
  double t7265;
  t78 = Cos(var1[4]);
  t36 = Cos(var1[5]);
  t58 = Sin(var1[4]);
  t79 = Sin(var1[5]);
  t445 = Cos(var1[3]);
  t69 = t36*t58;
  t128 = t78*t79;
  t129 = t69 + t128;
  t33 = Sin(var1[3]);
  t475 = t78*t36;
  t499 = -1.*t58*t79;
  t510 = t475 + t499;
  t579 = Sin(var1[2]);
  t514 = t445*t510;
  t8 = Cos(var1[2]);
  t1137 = -1.*t36*t58;
  t1139 = -1.*t78*t79;
  t1185 = t1137 + t1139;
  t892 = -1.*t36;
  t893 = 1. + t892;
  t901 = -1.3127*t893;
  t912 = -1.3127*t36;
  t1014 = -0.06*t79;
  t1020 = t901 + t912 + t1014;
  t324 = -1.*t33*t129;
  t535 = t324 + t514;
  t566 = -1.*t8*t535;
  t586 = t445*t129;
  t662 = t33*t510;
  t726 = t586 + t662;
  t734 = t579*t726;
  t741 = t566 + t734;
  t1189 = t33*t1185;
  t1194 = t1189 + t514;
  t1240 = t579*t1194;
  t1287 = t445*t1185;
  t1300 = -1.*t33*t510;
  t1309 = t1287 + t1300;
  t1332 = -1.*t8*t1309;
  t1406 = t1240 + t1332;
  t1899 = -1.*t78;
  t1955 = 1. + t1899;
  t1956 = -0.9063*t1955;
  t2000 = -0.06*t36*t58;
  t2029 = t78*t1020;
  t2037 = t1956 + t2000 + t2029;
  t1709 = 0.06*t78*t36;
  t1722 = 0.9063*t58;
  t1779 = t58*t1020;
  t1875 = t1709 + t1722 + t1779;
  t2205 = -1.*t579*t1194;
  t2206 = t8*t1309;
  t2265 = t2205 + t2206;
  t2269 = -1.*t8*t1194;
  t2300 = -1.*t579*t1309;
  t2303 = t2269 + t2300;
  t2383 = -1.*t579*t535;
  t2414 = -1.*t8*t726;
  t2419 = t2383 + t2414;
  t2421 = t8*t535;
  t2424 = -1.*t579*t726;
  t2442 = t2421 + t2424;
  t2830 = -1.*t445;
  t2859 = 1. + t2830;
  t2868 = -0.4999*t2859;
  t2878 = t445*t2037;
  t2915 = -1.*t33*t1875;
  t2918 = t2868 + t2878 + t2915;
  t2749 = 0.4999*t33;
  t2750 = t33*t2037;
  t2755 = t445*t1875;
  t2780 = t2749 + t2750 + t2755;
  t870 = 0.9063*t36;
  t1040 = t36*t1020;
  t1053 = 0.06*t36*t79;
  t1099 = t870 + t1040 + t1053;
  t1491 = Power(t36,2);
  t1537 = -0.06*t1491;
  t1546 = 0.9063*t79;
  t1568 = t1020*t79;
  t1589 = t1537 + t1546 + t1568;
  t3175 = -1.*t445*t129;
  t3177 = t3175 + t1300;
  t3190 = -1.*t579*t3177;
  t3192 = t566 + t3190;
  t1882 = t1875*t129;
  t1889 = 0.4999*t510;
  t2062 = t2037*t510;
  t2063 = t1882 + t1889 + t2062;
  t3230 = -1.*t33*t1185;
  t3243 = -1.*t445*t510;
  t3245 = t3230 + t3243;
  t3256 = -1.*t579*t3245;
  t3266 = t3256 + t1332;
  t2077 = -1.*t2037*t1185;
  t2105 = 0.4999*t129;
  t2116 = -1.*t1875*t510;
  t2130 = t2077 + t2105 + t2116;
  t2336 = t8*t1194;
  t2351 = t579*t1309;
  t2369 = t2336 + t2351;
  t2478 = t579*t535;
  t2494 = t8*t726;
  t2506 = t2478 + t2494;
  t3373 = t8*t3245;
  t3384 = t3373 + t2300;
  t3521 = t8*t3177;
  t3524 = t2383 + t3521;
  t2781 = -1.*t2780*t1194;
  t2964 = -1.*t2918*t1309;
  t2967 = t2781 + t2964;
  t3007 = t2918*t535;
  t3026 = t2780*t726;
  t3027 = t3007 + t3026;
  t3665 = -0.4999*t33;
  t3675 = -1.*t33*t2037;
  t3676 = -1.*t445*t1875;
  t3682 = t3665 + t3675 + t3676;
  t3655 = 0.4999*t445;
  t3658 = t3655 + t2878 + t2915;
  t3882 = -1.*t78*t36;
  t3889 = t58*t79;
  t3907 = t3882 + t3889;
  t4170 = -0.06*t78*t36;
  t4179 = -0.9063*t58;
  t4201 = -1.*t58*t1020;
  t4230 = t4170 + t4179 + t4201;
  t4125 = 0.9063*t78;
  t4129 = t4125 + t2000 + t2029;
  t3912 = t445*t3907;
  t3916 = t3230 + t3912;
  t3931 = -1.*t579*t3916;
  t3939 = t33*t3907;
  t3945 = t1287 + t3939;
  t3955 = -1.*t8*t3945;
  t4038 = t3931 + t3955;
  t4592 = t8*t3916;
  t4608 = -1.*t579*t3945;
  t4615 = t4592 + t4608;
  t4929 = t445*t4129;
  t4937 = t33*t4230;
  t4940 = t4929 + t4937;
  t4845 = -1.*t33*t4129;
  t4857 = t445*t4230;
  t4863 = t4845 + t4857;
  t3874 = -0.03428571*var2[5]*t2303;
  t3877 = 1.142857*t1589*t2303;
  t5139 = -0.06*t36;
  t5141 = 0. + t5139;
  t4055 = 1.142857*t1099*t4038;
  t4114 = 1.142857*t2130*t2303;
  t4119 = 0.4999*t1185;
  t4122 = t2037*t1185;
  t4237 = t1875*t510;
  t4346 = -1.*t1875*t1185;
  t5314 = t5141*t58;
  t5329 = -0.06*t78*t79;
  t5352 = t5314 + t5329;
  t5377 = t78*t5141;
  t5409 = 0.06*t58*t79;
  t5433 = t5377 + t5409;
  t4375 = -1.*t2037*t3907;
  t4389 = 1.142857*t2063*t4038;
  t4420 = 1.142857*t2369*t2419;
  t4431 = 1.142857*t2303*t2506;
  t4457 = 2.285714*t2265*t2442;
  t4475 = 1.142857*t2369*t4038;
  t4524 = t579*t3916;
  t4525 = t8*t3945;
  t4538 = t4524 + t4525;
  t4549 = 1.142857*t2303*t4538;
  t4630 = 2.285714*t2265*t4615;
  t4632 = t4420 + t4431 + t4457 + t4475 + t4549 + t4630;
  t4648 = 0.5*var2[0]*t4632;
  t4649 = 2.285714*t2265*t2419;
  t4691 = 2.285714*t2303*t2442;
  t4720 = 2.285714*t2265*t4038;
  t4741 = 2.285714*t2303*t4615;
  t4752 = t4649 + t4691 + t4720 + t4741;
  t4774 = 0.5*var2[1]*t4752;
  t4827 = 1.142857*t2303*t2967;
  t4829 = t2780*t1194;
  t4928 = t2918*t1309;
  t4991 = 1.142857*t3027*t4038;
  t5540 = -1.*t33*t5352;
  t5551 = t445*t5433;
  t5557 = t5540 + t5551;
  t5576 = t445*t5352;
  t5607 = t33*t5433;
  t5642 = t5576 + t5607;
  t5025 = -1.*t2918*t3916;
  t5079 = -1.*t2780*t3945;
  t5762 = Power(t2265,2);
  t5763 = 1.142857*t5762;
  t5765 = 1.142857*t2303*t2369;
  t5769 = 1.142857*t2419*t2506;
  t5777 = Power(t2442,2);
  t5780 = 1.142857*t5777;
  t5788 = t5763 + t5765 + t5769 + t5780;
  t5902 = 1.142857*t2967*t2419;
  t5905 = 1.142857*t2303*t3027;
  t5906 = t5902 + t5905;
  t5850 = 1.142857*t2063*t2303;
  t5866 = 1.142857*t2130*t2419;
  t5868 = t5850 + t5866;
  t5823 = 1.142857*t1099*t2303;
  t5824 = 1.142857*t1589*t2419;
  t5842 = t5823 + t5824;
  t3227 = -0.03428571*var2[5]*t3192;
  t3280 = 1.142857*t1099*t3266;
  t3302 = 1.142857*t1589*t3192;
  t3307 = t3280 + t3302;
  t3338 = 0.5*var2[4]*t3307;
  t3347 = 1.142857*t2063*t3266;
  t3351 = 1.142857*t2130*t3192;
  t3353 = t3347 + t3351;
  t3372 = 0.5*var2[3]*t3353;
  t3385 = 2.285714*t2265*t3384;
  t3395 = t579*t3245;
  t3419 = t3395 + t2206;
  t3427 = 1.142857*t3419*t2303;
  t3433 = 1.142857*t3266*t2369;
  t3448 = t579*t3177;
  t3458 = t2421 + t3448;
  t3473 = 1.142857*t3458*t2419;
  t3478 = 1.142857*t3192*t2506;
  t3535 = 2.285714*t3524*t2442;
  t3538 = t3385 + t3427 + t3433 + t3473 + t3478 + t3535;
  t3544 = 0.5*var2[0]*t3538;
  t3550 = 2.285714*t3266*t2265;
  t3554 = 2.285714*t3384*t2303;
  t3561 = 2.285714*t3524*t2419;
  t3567 = 2.285714*t3192*t2442;
  t3580 = t3550 + t3554 + t3561 + t3567;
  t3584 = 0.5*var2[1]*t3580;
  t3610 = 1.142857*t2967*t3192;
  t3652 = -1.*t2918*t3245;
  t3659 = -1.*t3658*t1194;
  t3686 = -1.*t3682*t1309;
  t3699 = -1.*t2780*t1309;
  t3733 = t3652 + t3659 + t3686 + t3699;
  t3743 = 1.142857*t3733*t2419;
  t3766 = 1.142857*t3266*t3027;
  t3774 = t3682*t535;
  t3782 = t2780*t535;
  t3789 = t2918*t3177;
  t3801 = t3658*t726;
  t3802 = t3774 + t3782 + t3789 + t3801;
  t3803 = 1.142857*t2303*t3802;
  t3805 = t3610 + t3743 + t3766 + t3803;
  t3831 = 0.5*var2[2]*t3805;
  t3844 = t3227 + t3338 + t3372 + t3544 + t3584 + t3831;
  t3861 = var2[1]*t3844;
  t5969 = t33*t129;
  t5972 = t5969 + t3243;
  t5974 = t8*t5972;
  t5983 = t5974 + t3190;
  t6011 = -1.*t445*t1185;
  t6026 = t6011 + t662;
  t6028 = t8*t6026;
  t6033 = t3256 + t6028;
  t6226 = -0.4999*t445;
  t6233 = -1.*t445*t2037;
  t6258 = t33*t1875;
  t6262 = t6226 + t6233 + t6258;
  t4131 = t4129*t129;
  t4233 = t4230*t510;
  t4252 = t4119 + t4122 + t4131 + t4233 + t4237;
  t4298 = -1.*t4230*t1185;
  t4349 = -1.*t4129*t510;
  t4378 = t4298 + t4346 + t1889 + t4349 + t4375;
  t6393 = -1.*t33*t3907;
  t6394 = t6011 + t6393;
  t6395 = t8*t6394;
  t6402 = t3931 + t6395;
  t4880 = t4863*t535;
  t4957 = t4940*t726;
  t4961 = t4829 + t4880 + t4928 + t4957;
  t5009 = -1.*t4940*t1194;
  t5010 = -1.*t4863*t1309;
  t5080 = t5009 + t5010 + t5025 + t5079;
  t6499 = -1.*t445*t4129;
  t6504 = -1.*t33*t4230;
  t6505 = t6499 + t6504;
  t6380 = -0.03428571*var2[5]*t3384;
  t6383 = 1.142857*t1589*t3384;
  t5146 = t5141*t36;
  t5149 = 0.06*t1491;
  t5170 = -0.9063*t79;
  t5187 = -1.*t1020*t79;
  t5190 = Power(t79,2);
  t5191 = -0.06*t5190;
  t5214 = t5146 + t5149 + t5170 + t5187 + t5191;
  t5237 = t5141*t79;
  t5239 = 0.12*t36*t79;
  t5248 = t870 + t1040 + t5237 + t5239;
  t6411 = 1.142857*t1099*t6402;
  t6417 = 1.142857*t2130*t3384;
  t5360 = t5352*t129;
  t5458 = t510*t5433;
  t5463 = t4119 + t4122 + t5360 + t4237 + t5458;
  t5466 = -1.*t5352*t510;
  t5483 = -1.*t1185*t5433;
  t5489 = t4346 + t1889 + t5466 + t5483 + t4375;
  t6424 = 1.142857*t2063*t6402;
  t6429 = 1.142857*t2369*t3524;
  t6433 = 1.142857*t2265*t3458;
  t6434 = 1.142857*t3384*t2506;
  t6437 = 1.142857*t3419*t2442;
  t6438 = 1.142857*t2369*t6402;
  t6442 = t579*t6394;
  t6446 = t4592 + t6442;
  t6449 = 1.142857*t2265*t6446;
  t6451 = 1.142857*t3384*t4538;
  t6452 = 1.142857*t3419*t4615;
  t6455 = t6429 + t6433 + t6434 + t6437 + t6438 + t6449 + t6451 + t6452;
  t6459 = 0.5*var2[0]*t6455;
  t6462 = 2.285714*t2265*t3524;
  t6464 = 2.285714*t3384*t2442;
  t6466 = 2.285714*t2265*t6402;
  t6467 = 2.285714*t3384*t4615;
  t6469 = t6462 + t6464 + t6466 + t6467;
  t6477 = 0.5*var2[1]*t6469;
  t6493 = 1.142857*t2265*t3733;
  t6494 = 1.142857*t3384*t2967;
  t6495 = t2918*t3245;
  t6497 = t3658*t1194;
  t6511 = t3682*t1309;
  t6513 = t2780*t1309;
  t5571 = t535*t5557;
  t5656 = t726*t5642;
  t5663 = t4829 + t4928 + t5571 + t5656;
  t6534 = 1.142857*t3027*t6402;
  t6539 = 1.142857*t3802*t4615;
  t5688 = -1.*t1309*t5557;
  t5691 = -1.*t1194*t5642;
  t5698 = t5688 + t5691 + t5025 + t5079;
  t6642 = -1.*t445*t5352;
  t6645 = -1.*t33*t5433;
  t6646 = t6642 + t6645;
  t6569 = -1.*t3682*t3916;
  t6573 = -1.*t2780*t3916;
  t6576 = -1.*t2918*t6394;
  t6579 = -1.*t3658*t3945;
  t6687 = 1.142857*t3419*t2265;
  t6707 = 1.142857*t3384*t2369;
  t6709 = 1.142857*t3524*t2506;
  t6712 = 1.142857*t3458*t2442;
  t6715 = t6687 + t6707 + t6709 + t6712;
  t6770 = 1.142857*t2967*t3524;
  t6775 = 1.142857*t3733*t2442;
  t6777 = 1.142857*t3384*t3027;
  t6782 = 1.142857*t2265*t3802;
  t6789 = t6770 + t6775 + t6777 + t6782;
  t6733 = 1.142857*t2063*t3384;
  t6735 = 1.142857*t2130*t3524;
  t6743 = t6733 + t6735;
  t6728 = 1.142857*t1099*t3384;
  t6730 = 1.142857*t1589*t3524;
  t6731 = t6728 + t6730;
  t4063 = t3877 + t4055;
  t4107 = 0.5*var2[4]*t4063;
  t4286 = 1.142857*t4252*t2303;
  t4384 = 1.142857*t4378*t2419;
  t4390 = t4114 + t4286 + t4384 + t4389;
  t4398 = 0.5*var2[3]*t4390;
  t4985 = 1.142857*t2303*t4961;
  t5088 = 1.142857*t2419*t5080;
  t5092 = t4827 + t4985 + t4991 + t5088;
  t5109 = 0.5*var2[2]*t5092;
  t5114 = t3874 + t4107 + t4398 + t4648 + t4774 + t5109;
  t5136 = var2[1]*t5114;
  t6414 = t6383 + t6411;
  t6416 = 0.5*var2[4]*t6414;
  t6422 = 1.142857*t4252*t3384;
  t6423 = 1.142857*t4378*t3524;
  t6426 = t6417 + t6422 + t6423 + t6424;
  t6428 = 0.5*var2[3]*t6426;
  t6507 = t6505*t535;
  t6508 = t4940*t535;
  t6516 = t4863*t3177;
  t6521 = t4863*t726;
  t6523 = t6495 + t6497 + t6507 + t6508 + t6511 + t6513 + t6516 + t6521;
  t6530 = 1.142857*t2265*t6523;
  t6533 = 1.142857*t3384*t4961;
  t6540 = 1.142857*t3524*t5080;
  t6541 = -1.*t4863*t3245;
  t6552 = -1.*t4863*t1194;
  t6554 = -1.*t6505*t1309;
  t6555 = -1.*t4940*t1309;
  t6586 = t6541 + t6552 + t6554 + t6555 + t6569 + t6573 + t6576 + t6579;
  t6587 = 1.142857*t2442*t6586;
  t6588 = t6493 + t6494 + t6530 + t6533 + t6534 + t6539 + t6540 + t6587;
  t6589 = 0.5*var2[2]*t6588;
  t6599 = t6380 + t6416 + t6428 + t6459 + t6477 + t6589;
  t6601 = var2[1]*t6599;
  t6852 = -0.9063*t78;
  t6853 = 0.06*t36*t58;
  t6858 = -1.*t78*t1020;
  t6859 = t6852 + t6853 + t6858;
  t6812 = t5969 + t3912;
  t6813 = -1.*t579*t6812;
  t6814 = t586 + t6393;
  t6815 = t8*t6814;
  t6816 = t6813 + t6815;
  t6987 = t445*t6859;
  t6988 = t6987 + t6504;
  t6978 = t33*t6859;
  t6983 = t6978 + t4857;
  t6811 = -0.03428571*var2[5]*t4615;
  t6818 = 1.142857*t1099*t6816;
  t6820 = 1.142857*t1589*t4615;
  t6847 = t1875*t1185;
  t6868 = 0.4999*t3907;
  t6875 = t2037*t3907;
  t7059 = -1.*t5141*t58;
  t7060 = 0.06*t78*t79;
  t7066 = t7059 + t7060;
  t6885 = -1.*t2037*t129;
  t6890 = -1.*t1875*t3907;
  t6896 = 1.142857*t2063*t6816;
  t6898 = 1.142857*t2130*t4615;
  t6918 = 2.285714*t2265*t2369;
  t6925 = 1.142857*t2369*t6816;
  t6930 = t8*t6812;
  t6931 = t579*t6814;
  t6937 = t6930 + t6931;
  t6940 = 1.142857*t2265*t6937;
  t6941 = 1.142857*t2442*t4538;
  t6945 = 1.142857*t2506*t4615;
  t6946 = 2.285714*t4538*t4615;
  t6950 = t6918 + t6925 + t6940 + t6941 + t6945 + t6946;
  t6951 = 0.5*var2[0]*t6950;
  t6952 = 2.285714*t5762;
  t6955 = 2.285714*t2265*t6816;
  t6958 = 2.285714*t2442*t4615;
  t6959 = Power(t4615,2);
  t6963 = 2.285714*t6959;
  t6965 = t6952 + t6955 + t6958 + t6963;
  t6971 = 0.5*var2[1]*t6965;
  t6973 = 1.142857*t3027*t6816;
  t6975 = 1.142857*t2967*t4615;
  t7012 = t2918*t3916;
  t7013 = t2780*t3945;
  t7129 = t33*t7066;
  t7131 = t7129 + t5551;
  t7140 = t445*t7066;
  t7144 = t7140 + t6645;
  t6994 = -1.*t2780*t6812;
  t6996 = -1.*t2918*t6814;
  t7184 = 1.142857*t2265*t2506;
  t7186 = 1.142857*t2369*t2442;
  t7187 = 1.142857*t2265*t4538;
  t7191 = 1.142857*t2369*t4615;
  t7192 = t7184 + t7186 + t7187 + t7191;
  t7238 = 1.142857*t2265*t2967;
  t7239 = 1.142857*t2265*t4961;
  t7242 = 1.142857*t3027*t4615;
  t7245 = 1.142857*t2442*t5080;
  t7247 = t7238 + t7239 + t7242 + t7245;
  t7223 = 1.142857*t2130*t2265;
  t7224 = 1.142857*t4252*t2265;
  t7226 = 1.142857*t4378*t2442;
  t7227 = 1.142857*t2063*t4615;
  t7232 = t7223 + t7224 + t7226 + t7227;
  t7210 = 1.142857*t1589*t2265;
  t7211 = 1.142857*t1099*t4615;
  t7214 = t7210 + t7211;
  t7275 = t2000 + t5329;
  t7278 = t4170 + t5409;
  t7297 = -1.*t33*t7275;
  t7298 = t445*t7278;
  t7301 = t7297 + t7298;
  t7306 = t445*t7275;
  t7311 = t33*t7278;
  t7312 = t7306 + t7311;
  t7266 = 0. + t5170 + t5187 + t5191;
  t7276 = t7275*t129;
  t7279 = t510*t7278;
  t7283 = t4119 + t4122 + t7276 + t4237 + t7279;
  t7286 = -1.*t7275*t510;
  t7288 = -1.*t1185*t7278;
  t7290 = t4346 + t1889 + t7286 + t7288 + t4375;
  t7304 = t535*t7301;
  t7314 = t726*t7312;
  t7317 = t4829 + t4928 + t7304 + t7314;
  t7320 = -1.*t1309*t7301;
  t7324 = -1.*t1194*t7312;
  t7325 = t7320 + t7324 + t5025 + t5079;
  t7351 = -1.*t445*t7275;
  t7353 = -1.*t33*t7278;
  t7357 = t7351 + t7353;
  t7041 = 1.142857*t4378*t2265;
  t7047 = t4230*t1185;
  t7055 = t4129*t510;
  t7080 = -1.*t4129*t1185;
  t7402 = t6853 + t7060;
  t7087 = -1.*t4230*t3907;
  t7098 = 1.142857*t4252*t4615;
  t7111 = 1.142857*t4961*t4615;
  t7121 = 1.142857*t2265*t5080;
  t7126 = t4940*t1194;
  t7127 = t4863*t1309;
  t7434 = t33*t7402;
  t7441 = t7434 + t7298;
  t7443 = t445*t7402;
  t7444 = t7443 + t7353;
  t7155 = -1.*t4863*t3916;
  t7158 = -1.*t4940*t3945;
  t7389 = 1.142857*t1099*t2265;
  t7033 = 1.142857*t5248*t2265;
  t7390 = 1.142857*t7266*t4615;
  t7034 = 1.142857*t5214*t4615;
  t7045 = 1.142857*t5489*t2265;
  t7397 = 1.142857*t7290*t2265;
  t7057 = t5352*t510;
  t7400 = t7275*t510;
  t7403 = t7402*t510;
  t7068 = t1185*t5433;
  t7405 = t1185*t7278;
  t7414 = t129*t7278;
  t7081 = -1.*t1185*t5352;
  t7417 = -1.*t1185*t7275;
  t7419 = -1.*t1185*t7402;
  t7420 = -1.*t510*t7278;
  t7088 = -1.*t5433*t3907;
  t7421 = -1.*t7278*t3907;
  t7100 = 1.142857*t5463*t4615;
  t7426 = 1.142857*t7283*t4615;
  t7115 = 1.142857*t5663*t4615;
  t7431 = 1.142857*t7317*t4615;
  t7123 = 1.142857*t2265*t5698;
  t7432 = 1.142857*t2265*t7325;
  t7128 = t1309*t5557;
  t7148 = t1194*t5642;
  t7433 = t1309*t7301;
  t7442 = t726*t7441;
  t7445 = t535*t7444;
  t7446 = t1194*t7312;
  t7450 = -1.*t1194*t7441;
  t7451 = -1.*t1309*t7444;
  t7156 = -1.*t5557*t3916;
  t7452 = -1.*t7301*t3916;
  t7159 = -1.*t5642*t3945;
  t7453 = -1.*t7312*t3945;
  t7208 = 0.5*var2[1]*t7192;
  t7209 = -0.03428571*var2[5]*t2265;
  t7234 = t4457 + t4630;
  t7236 = var2[1]*t7234;
  t7237 = 0.5*var2[0]*t7192;
  t7522 = 1.142857*t2265*t7317;
  t7524 = 1.142857*t2442*t7325;
  t7527 = t7238 + t7522 + t7242 + t7524;
  t7517 = 1.142857*t7283*t2265;
  t7519 = 1.142857*t7290*t2442;
  t7520 = t7223 + t7517 + t7519 + t7227;
  t7509 = 1.142857*t7266*t2265;
  t7511 = 1.142857*t1099*t2442;
  t7513 = t7210 + t7509 + t7511 + t7211;
  t7265 = -0.03428571*var2[1]*t2265;
  p_output1[0]=var2[1]*(0.5*(3.428571*t2265*t2303 + 1.142857*t1406*t2369 + 3.428571*t2419*t2442 + 1.142857*t2506*t741)*var2[0] + 0.5*(2.285714*t1406*t2265 + 2.285714*Power(t2303,2) + 2.285714*Power(t2419,2) + 2.285714*t2442*t741)*var2[1] + 0.5*(1.142857*t1406*t3027 + 1.142857*t2967*t741)*var2[2] + 0.5*(1.142857*t1406*t2063 + 1.142857*t2130*t741)*var2[3] + 0.5*(1.142857*t1099*t1406 + 1.142857*t1589*t741)*var2[4] - 0.03428571*t741*var2[5]);
  p_output1[1]=t3861;
  p_output1[2]=t5136;
  p_output1[3]=var2[1]*(t3874 + t4648 + t4774 + 0.5*(t4827 + t4991 + 1.142857*t2303*t5663 + 1.142857*t2419*t5698)*var2[2] + 0.5*(t4114 + t4389 + 1.142857*t2303*t5463 + 1.142857*t2419*t5489)*var2[3] + 0.5*(t3877 + t4055 + 1.142857*t2303*t5214 + 1.142857*t2419*t5248)*var2[4]);
  p_output1[4]=0.5*t5788*var2[1];
  p_output1[5]=0.5*t5788*var2[0] + (2.285714*t2265*t2303 + 2.285714*t2419*t2442)*var2[1] + 0.5*t5906*var2[2] + 0.5*t5868*var2[3] + 0.5*t5842*var2[4] - 0.03428571*t2419*var2[5];
  p_output1[6]=0.5*t5906*var2[1];
  p_output1[7]=0.5*t5868*var2[1];
  p_output1[8]=0.5*t5842*var2[1];
  p_output1[9]=-0.03428571*t2419*var2[1];
  p_output1[10]=t3861;
  p_output1[11]=var2[1]*(0.5*(2.285714*t3384*t3419 + 2.285714*t3458*t3524 + 1.142857*t2442*(t3521 + t579*t5972) + 1.142857*t2506*t5983 + 1.142857*t2265*(t3373 + t579*t6026) + 1.142857*t2369*t6033)*var2[0] + 0.5*(2.285714*Power(t3384,2) + 2.285714*Power(t3524,2) + 2.285714*t2442*t5983 + 2.285714*t2265*t6033)*var2[1] + 0.5*(2.285714*t3524*t3733 + 2.285714*t3384*t3802 + 1.142857*t2967*t5983 + 1.142857*t3027*t6033 + 1.142857*t2442*(-1.*t2780*t3245 - 2.*t1309*t3658 - 1.*t1194*t3682 - 2.*t3245*t3682 - 1.*t2918*t6026 - 1.*t1309*t6262) + 1.142857*t2265*(t2780*t3177 + 2.*t3177*t3682 + 2.*t3658*t535 + t2918*t5972 + t535*t6262 + t3682*t726))*var2[2] + 0.5*(1.142857*t2130*t5983 + 1.142857*t2063*t6033)*var2[3] + 0.5*(1.142857*t1589*t5983 + 1.142857*t1099*t6033)*var2[4] - 0.03428571*t5983*var2[5]);
  p_output1[12]=t6601;
  p_output1[13]=var2[1]*(t6380 + t6459 + t6477 + 0.5*(1.142857*t3384*t5663 + 1.142857*t3524*t5698 + t6493 + t6494 + t6534 + t6539 + 1.142857*t2442*(-1.*t1194*t5557 - 1.*t3245*t5557 - 1.*t1309*t5642 + t6569 + t6573 + t6576 + t6579 - 1.*t1309*t6646) + 1.142857*t2265*(t3177*t5557 + t535*t5642 + t6495 + t6497 + t6511 + t6513 + t535*t6646 + t5557*t726))*var2[2] + 0.5*(1.142857*t3384*t5463 + 1.142857*t3524*t5489 + t6417 + t6424)*var2[3] + 0.5*(1.142857*t3384*t5214 + 1.142857*t3524*t5248 + t6383 + t6411)*var2[4]);
  p_output1[14]=0.5*t6715*var2[1];
  p_output1[15]=0.5*t6715*var2[0] + (t3385 + t3535)*var2[1] + 0.5*t6789*var2[2] + 0.5*t6743*var2[3] + 0.5*t6731*var2[4] - 0.03428571*t3524*var2[5];
  p_output1[16]=0.5*t6789*var2[1];
  p_output1[17]=0.5*t6743*var2[1];
  p_output1[18]=0.5*t6731*var2[1];
  p_output1[19]=-0.03428571*t3524*var2[1];
  p_output1[20]=t5136;
  p_output1[21]=t6601;
  p_output1[22]=var2[1]*(t6811 + t6951 + t6971 + 0.5*(2.285714*t4615*t4961 + 2.285714*t2265*t5080 + t6973 + t6975 + 1.142857*t2442*(-2.*t3916*t4863 - 2.*t3945*t4940 - 1.*t1194*t6983 - 1.*t1309*t6988 + t6994 + t6996) + 1.142857*t2265*(2.*t1309*t4863 + 2.*t1194*t4940 + t535*t6988 + t7012 + t7013 + t6983*t726))*var2[2] + 0.5*(2.285714*t2265*t4378 + 2.285714*t4252*t4615 + 1.142857*t2265*(2.*t1185*t4230 + t129*t4230 + 2.*t4129*t510 + t6847 + t510*t6859 + t6868 + t6875) + 1.142857*t2442*(t4119 - 2.*t1185*t4129 - 2.*t3907*t4230 - 1.*t4230*t510 - 1.*t1185*t6859 + t6885 + t6890) + t6896 + t6898)*var2[3] + 0.5*(t6818 + t6820)*var2[4]);
  p_output1[23]=var2[1]*(t6811 + t6951 + t6971 + 0.5*(t6973 + t6975 + t7111 + t7115 + t7121 + t7123 + 1.142857*t2442*(t6994 + t6996 - 1.*t1194*t7131 - 1.*t1309*t7144 + t7155 + t7156 + t7158 + t7159) + 1.142857*t2265*(t7012 + t7013 + t7126 + t7127 + t7128 + t535*t7144 + t7148 + t7131*t726))*var2[2] + 0.5*(t6896 + t6898 + t7041 + t7045 + 1.142857*t2265*(t129*t5433 + t6847 + t6868 + t6875 + t7047 + t7055 + t7057 + t510*t7066 + t7068) + 1.142857*t2442*(t4119 - 1.*t510*t5433 + t6885 + t6890 - 1.*t1185*t7066 + t7080 + t7081 + t7087 + t7088) + t7098 + t7100)*var2[3] + 0.5*(t6818 + t6820 + t7033 + t7034)*var2[4]);
  p_output1[24]=t7208;
  p_output1[25]=t7209 + t7236 + t7237 + 0.5*t7247*var2[2] + 0.5*t7232*var2[3] + 0.5*t7214*var2[4];
  p_output1[26]=0.5*t7247*var2[1];
  p_output1[27]=0.5*t7232*var2[1];
  p_output1[28]=0.5*t7214*var2[1];
  p_output1[29]=t7265;
  p_output1[30]=var2[1]*(t3874 + t4648 + t4774 + 0.5*(t4827 + t4991 + 1.142857*t2303*t7317 + 1.142857*t2419*t7325)*var2[2] + 0.5*(t4114 + t4389 + 1.142857*t2303*t7283 + 1.142857*t2419*t7290)*var2[3] + 0.5*(1.142857*t1099*t2419 + t3877 + t4055 + 1.142857*t2303*t7266)*var2[4]);
  p_output1[31]=var2[1]*(t6380 + t6459 + t6477 + 0.5*(t6493 + t6494 + t6534 + t6539 + 1.142857*t3384*t7317 + 1.142857*t3524*t7325 + 1.142857*t2442*(t6569 + t6573 + t6576 + t6579 - 1.*t1194*t7301 - 1.*t3245*t7301 - 1.*t1309*t7312 - 1.*t1309*t7357) + 1.142857*t2265*(t6495 + t6497 + t6511 + t6513 + t3177*t7301 + t726*t7301 + t535*t7312 + t535*t7357))*var2[2] + 0.5*(t6417 + t6424 + 1.142857*t3384*t7283 + 1.142857*t3524*t7290)*var2[3] + 0.5*(1.142857*t1099*t3524 + t6383 + t6411 + 1.142857*t3384*t7266)*var2[4]);
  p_output1[32]=var2[1]*(t6811 + t6951 + t6971 + 0.5*(t6973 + t6975 + t7111 + t7121 + t7431 + t7432 + 1.142857*t2265*(t7012 + t7013 + t7126 + t7127 + t7433 + t7442 + t7445 + t7446) + 1.142857*t2442*(t6994 + t6996 + t7155 + t7158 + t7450 + t7451 + t7452 + t7453))*var2[2] + 0.5*(t6896 + t6898 + t7041 + t7098 + t7397 + 1.142857*t2265*(t6847 + t6868 + t6875 + t7047 + t7055 + t7400 + t7403 + t7405 + t7414) + 1.142857*t2442*(t4119 + t6885 + t6890 + t7080 + t7087 + t7417 + t7419 + t7420 + t7421) + t7426)*var2[3] + 0.5*(t6818 + t6820 + t7389 + t7390)*var2[4]);
  p_output1[33]=var2[1]*(t6811 + t6951 + t6971 + 0.5*(t6973 + t6975 + t7115 + t7123 + t7431 + t7432 + 1.142857*t2265*(t7012 + t7013 + t7128 + t7148 + t7433 + t7442 + t7445 + t7446) + 1.142857*t2442*(t6994 + t6996 + t7156 + t7159 + t7450 + t7451 + t7452 + t7453))*var2[2] + 0.5*(t6896 + t6898 + t7045 + t7100 + t7397 + 1.142857*t2265*(t6847 + t6868 + t6875 + t7057 + t7068 + t7400 + t7403 + t7405 + t7414) + 1.142857*t2442*(t4119 + t6885 + t6890 + t7081 + t7088 + t7417 + t7419 + t7420 + t7421) + t7426)*var2[3] + 0.5*(1.142857*t2442*t5214 + t6818 + t6820 + t7033 + t7034 + t7389 + t7390 + 1.142857*t2265*(-0.9063*t36 - 1.*t1020*t36 - 0.12*t36*t79 - 1.*t5141*t79))*var2[4]);
  p_output1[34]=t7208;
  p_output1[35]=t7209 + t7236 + t7237 + 0.5*t7527*var2[2] + 0.5*t7520*var2[3] + 0.5*t7513*var2[4];
  p_output1[36]=0.5*t7527*var2[1];
  p_output1[37]=0.5*t7520*var2[1];
  p_output1[38]=0.5*t7513*var2[1];
  p_output1[39]=t7265;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L4_J2_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L4_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
