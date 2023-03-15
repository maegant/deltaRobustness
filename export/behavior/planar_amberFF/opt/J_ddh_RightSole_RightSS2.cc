/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:14 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t450;
  double t136;
  double t283;
  double t591;
  double t932;
  double t327;
  double t615;
  double t740;
  double t94;
  double t1043;
  double t1049;
  double t1069;
  double t1623;
  double t852;
  double t1148;
  double t1255;
  double t17;
  double t1686;
  double t1751;
  double t1863;
  double t2288;
  double t2376;
  double t2396;
  double t2161;
  double t2434;
  double t2080;
  double t2209;
  double t3725;
  double t3938;
  double t3946;
  double t4071;
  double t4104;
  double t4221;
  double t4368;
  double t4188;
  double t4471;
  double t4517;
  double t4637;
  double t4641;
  double t4685;
  double t4779;
  double t4790;
  double t4805;
  double t1886;
  double t2497;
  double t2506;
  double t5182;
  double t5235;
  double t5251;
  double t5256;
  double t5280;
  double t5289;
  double t5048;
  double t5087;
  double t5091;
  double t5099;
  double t5346;
  double t5357;
  double t5527;
  double t5544;
  double t5565;
  double t5592;
  double t5669;
  double t5705;
  double t5709;
  double t5798;
  double t5802;
  double t6092;
  double t6096;
  double t2399;
  double t2485;
  double t2493;
  double t2581;
  double t3211;
  double t6318;
  double t6416;
  double t6440;
  double t5944;
  double t6021;
  double t6058;
  double t6103;
  double t6171;
  double t6239;
  double t5034;
  double t5522;
  double t5662;
  double t5666;
  double t6106;
  double t6127;
  double t5856;
  double t5857;
  double t5861;
  double t5921;
  double t6265;
  double t6337;
  double t6835;
  double t6867;
  double t6877;
  double t6878;
  double t6884;
  double t6894;
  double t6969;
  double t6970;
  double t6975;
  double t7023;
  double t7039;
  double t6765;
  double t6800;
  double t6967;
  double t6968;
  double t7117;
  double t7121;
  double t7122;
  double t7144;
  double t7157;
  double t7158;
  double t7166;
  double t7170;
  double t7176;
  double t7183;
  double t7189;
  double t7044;
  double t7045;
  double t7048;
  double t7055;
  double t7057;
  double t7067;
  double t6922;
  double t6932;
  double t6958;
  double t6871;
  double t6897;
  double t6900;
  double t6905;
  double t6963;
  double t6981;
  double t6982;
  double t6990;
  double t6994;
  double t7090;
  double t6548;
  double t7526;
  double t7537;
  double t7440;
  double t7444;
  double t7457;
  double t7460;
  double t7420;
  double t7503;
  double t7505;
  double t7536;
  double t7548;
  double t7552;
  double t7554;
  double t7557;
  double t7570;
  double t7571;
  double t7573;
  double t7606;
  double t7610;
  double t7612;
  double t7205;
  double t7215;
  double t7226;
  double t7227;
  double t7589;
  double t7590;
  double t7282;
  double t7292;
  double t7324;
  double t7372;
  double t7380;
  double t7392;
  double t7398;
  double t7399;
  double t7400;
  double t7404;
  double t7191;
  double t7192;
  double t7197;
  double t7208;
  double t7213;
  double t7230;
  double t7244;
  double t7246;
  double t7250;
  double t7411;
  double t7598;
  double t7600;
  double t7602;
  double t7613;
  double t7614;
  double t7617;
  double t7622;
  double t7627;
  double t7640;
  double t7641;
  double t7645;
  double t7646;
  double t7648;
  double t7651;
  double t7657;
  double t7664;
  double t7665;
  double t7668;
  double t7669;
  double t7670;
  double t7678;
  double t7727;
  double t7733;
  double t4955;
  double t4956;
  double t1570;
  double t1955;
  double t7375;
  double t7385;
  double t7387;
  double t5808;
  double t5939;
  double t6151;
  double t6348;
  double t6352;
  double t7712;
  double t7713;
  double t7714;
  double t7319;
  double t7322;
  double t7339;
  double t7707;
  double t7708;
  double t7710;
  double t7683;
  double t7689;
  double t7692;
  double t7693;
  double t7694;
  double t7698;
  double t7700;
  double t7703;
  double t7792;
  double t7793;
  double t7765;
  double t7766;
  double t7830;
  double t7822;
  double t7823;
  double t7824;
  double t7836;
  double t7833;
  double t7834;
  double t7826;
  double t7835;
  double t7837;
  double t7838;
  double t7839;
  double t7840;
  double t6559;
  double t6583;
  double t6592;
  double t6595;
  double t6601;
  double t7781;
  double t7782;
  double t7888;
  double t7889;
  double t7890;
  double t7891;
  double t7815;
  double t7801;
  double t7802;
  double t7804;
  double t7583;
  double t7584;
  double t7578;
  double t7580;
  double t7879;
  double t7880;
  double t7881;
  double t7882;
  double t7892;
  double t7893;
  double t7894;
  double t7933;
  double t7936;
  double t7943;
  double t7945;
  double t7818;
  double t7819;
  double t7913;
  double t7915;
  double t7918;
  double t7919;
  double t7922;
  double t7924;
  double t7930;
  double t7896;
  double t7898;
  double t7900;
  double t7903;
  double t7904;
  double t7905;
  double t7906;
  double t7740;
  double t7741;
  double t7743;
  double t7745;
  double t7747;
  double t7748;
  double t7953;
  double t7954;
  double t7955;
  double t7956;
  double t7957;
  double t7958;
  double t7959;
  double t7960;
  double t7961;
  double t7962;
  double t7963;
  double t7964;
  double t7965;
  double t7966;
  double t7967;
  double t7968;
  double t7969;
  double t7857;
  double t7858;
  double t7827;
  double t7828;
  double t7849;
  double t7850;
  double t7851;
  double t7852;
  double t7854;
  double t7920;
  double t7921;
  double t7925;
  double t7980;
  double t7981;
  double t7982;
  double t7910;
  double t7914;
  double t7916;
  double t7976;
  double t7977;
  double t7978;
  double t7972;
  double t7973;
  double t7974;
  double t8036;
  double t8037;
  t450 = Cos(var1[7]);
  t136 = Cos(var1[8]);
  t283 = Sin(var1[7]);
  t591 = Sin(var1[8]);
  t932 = Cos(var1[6]);
  t327 = -1.*t136*t283;
  t615 = -1.*t450*t591;
  t740 = t327 + t615;
  t94 = Sin(var1[6]);
  t1043 = t450*t136;
  t1049 = -1.*t283*t591;
  t1069 = t1043 + t1049;
  t1623 = Cos(var1[2]);
  t852 = t94*t740;
  t1148 = t932*t1069;
  t1255 = t852 + t1148;
  t17 = Sin(var1[2]);
  t1686 = t932*t740;
  t1751 = -1.*t94*t1069;
  t1863 = t1686 + t1751;
  t2288 = -1.*t94*t740;
  t2376 = -1.*t932*t1069;
  t2396 = t2288 + t2376;
  t2161 = -1.*t17*t1863;
  t2434 = -1.*t1623*t1863;
  t2080 = -1.*t1623*t1255;
  t2209 = t2080 + t2161;
  t3725 = -1.*t450*t136;
  t3938 = t283*t591;
  t3946 = t3725 + t3938;
  t4071 = t932*t3946;
  t4104 = t2288 + t4071;
  t4221 = t94*t3946;
  t4368 = t1686 + t4221;
  t4188 = -1.*t17*t4104;
  t4471 = -1.*t1623*t4368;
  t4517 = t4188 + t4471;
  t4637 = var2[1]*t4517;
  t4641 = t1623*t4104;
  t4685 = -1.*t17*t4368;
  t4779 = t4641 + t4685;
  t4790 = var2[0]*t4779;
  t4805 = t4637 + t4790;
  t1886 = t1623*t1863;
  t2497 = t1623*t2396;
  t2506 = t2497 + t2161;
  t5182 = -1.*t136;
  t5235 = 1. + t5182;
  t5251 = -1.3127*t5235;
  t5256 = -1.3127*t136;
  t5280 = -0.06*t591;
  t5289 = t5251 + t5256 + t5280;
  t5048 = -1.*t450;
  t5087 = 1. + t5048;
  t5091 = -0.9063*t5087;
  t5099 = -0.06*t136*t283;
  t5346 = t450*t5289;
  t5357 = t5091 + t5099 + t5346;
  t5527 = 0.06*t450*t136;
  t5544 = 0.9063*t283;
  t5565 = t283*t5289;
  t5592 = t5527 + t5544 + t5565;
  t5669 = t136*t283;
  t5705 = t450*t591;
  t5709 = t5669 + t5705;
  t5798 = -1.*t94*t5709;
  t5802 = t5798 + t1148;
  t6092 = t932*t5357;
  t6096 = -1.*t94*t5592;
  t2399 = -1.*t17*t2396;
  t2485 = t2399 + t2434;
  t2493 = var2[1]*t2485;
  t2581 = var2[0]*t2506;
  t3211 = t2493 + t2581;
  t6318 = t94*t1069;
  t6416 = -1.*t932*t740;
  t6440 = t6416 + t6318;
  t5944 = -1.*t932;
  t6021 = 1. + t5944;
  t6058 = -0.4999*t6021;
  t6103 = t6058 + t6092 + t6096;
  t6171 = 0.4999*t932;
  t6239 = t6171 + t6092 + t6096;
  t5034 = -0.4999*t94;
  t5522 = -1.*t94*t5357;
  t5662 = -1.*t932*t5592;
  t5666 = t5034 + t5522 + t5662;
  t6106 = -1.*t932*t5709;
  t6127 = t6106 + t1751;
  t5856 = 0.4999*t94;
  t5857 = t94*t5357;
  t5861 = t932*t5592;
  t5921 = t5856 + t5857 + t5861;
  t6265 = t932*t5709;
  t6337 = t6265 + t6318;
  t6835 = 0.9063*t450;
  t6867 = t6835 + t5099 + t5346;
  t6877 = -0.06*t450*t136;
  t6878 = -0.9063*t283;
  t6884 = -1.*t283*t5289;
  t6894 = t6877 + t6878 + t6884;
  t6969 = -1.*t94*t6867;
  t6970 = t932*t6894;
  t6975 = t6969 + t6970;
  t7023 = -1.*t94*t3946;
  t7039 = t6416 + t7023;
  t6765 = t6103*t2396;
  t6800 = t6239*t1255;
  t6967 = t5666*t1863;
  t6968 = t5921*t1863;
  t7117 = -0.06*t136;
  t7121 = 0. + t7117;
  t7122 = t7121*t283;
  t7144 = -0.06*t450*t591;
  t7157 = t7122 + t7144;
  t7158 = -1.*t94*t7157;
  t7166 = t450*t7121;
  t7170 = 0.06*t283*t591;
  t7176 = t7166 + t7170;
  t7183 = t932*t7176;
  t7189 = t7158 + t7183;
  t7044 = t1623*t7039;
  t7045 = t4188 + t7044;
  t7048 = var2[1]*t7045;
  t7055 = t17*t7039;
  t7057 = t4641 + t7055;
  t7067 = var2[0]*t7057;
  t6922 = t932*t6867;
  t6932 = t94*t6894;
  t6958 = t6922 + t6932;
  t6871 = -1.*t932*t6867;
  t6897 = -1.*t94*t6894;
  t6900 = t6871 + t6897;
  t6905 = t6900*t5802;
  t6963 = t6958*t5802;
  t6981 = t6975*t6127;
  t6982 = t6975*t6337;
  t6990 = t6765 + t6800 + t6905 + t6963 + t6967 + t6968 + t6981 + t6982;
  t6994 = var2[2]*t6990;
  t7090 = t6994 + t7048 + t7067;
  t6548 = t94*t5709;
  t7526 = t6548 + t4071;
  t7537 = t6265 + t7023;
  t7440 = -0.9063*t450;
  t7444 = 0.06*t136*t283;
  t7457 = -1.*t450*t5289;
  t7460 = t7440 + t7444 + t7457;
  t7420 = t5592*t740;
  t7503 = 0.4999*t3946;
  t7505 = t5357*t3946;
  t7536 = -1.*t17*t7526;
  t7548 = t1623*t7537;
  t7552 = t7536 + t7548;
  t7554 = var2[1]*t7552;
  t7557 = t1623*t7526;
  t7570 = t17*t7537;
  t7571 = t7557 + t7570;
  t7573 = var2[0]*t7571;
  t7606 = -1.*t7121*t283;
  t7610 = 0.06*t450*t591;
  t7612 = t7606 + t7610;
  t7205 = -1.*t94*t7176;
  t7215 = t932*t7157;
  t7226 = t94*t7176;
  t7227 = t7215 + t7226;
  t7589 = t6103*t4104;
  t7590 = t5921*t4368;
  t7282 = 0.4999*t740;
  t7292 = t5357*t740;
  t7324 = t5592*t1069;
  t7372 = t5921*t1255;
  t7380 = t6103*t1863;
  t7392 = t17*t4104;
  t7398 = t1623*t4368;
  t7399 = t7392 + t7398;
  t7400 = var3[0]*t7399;
  t7404 = var3[1]*t4779;
  t7191 = t6127*t7189;
  t7192 = t6337*t7189;
  t7197 = -1.*t932*t7157;
  t7208 = t7197 + t7205;
  t7213 = t5802*t7208;
  t7230 = t5802*t7227;
  t7244 = t6765 + t6800 + t6967 + t6968 + t7191 + t7192 + t7213 + t7230;
  t7246 = var2[2]*t7244;
  t7250 = t7246 + t7048 + t7067;
  t7411 = var2[2]*t4805;
  t7598 = t6894*t740;
  t7600 = t6867*t1069;
  t7602 = t7157*t1069;
  t7613 = t7612*t1069;
  t7614 = t740*t7176;
  t7617 = t5709*t7176;
  t7622 = t7598 + t7420 + t7600 + t7602 + t7613 + t7614 + t7617 + t7503 + t7505;
  t7627 = var2[6]*t7622;
  t7640 = t6958*t1255;
  t7641 = t6975*t1863;
  t7645 = t1863*t7189;
  t7646 = t94*t7612;
  t7648 = t7646 + t7183;
  t7651 = t6337*t7648;
  t7657 = t932*t7612;
  t7664 = t7657 + t7205;
  t7665 = t5802*t7664;
  t7668 = t1255*t7227;
  t7669 = t7640 + t7641 + t7645 + t7651 + t7665 + t7668 + t7589 + t7590;
  t7670 = var2[2]*t7669;
  t7678 = t7627 + t7554 + t7573 + t7670;
  t7727 = t7444 + t7610;
  t7733 = t6877 + t7170;
  t4955 = t17*t2396;
  t4956 = t4955 + t1886;
  t1570 = -1.*t17*t1255;
  t1955 = t1570 + t1886;
  t7375 = t6975*t5802;
  t7385 = t6958*t6337;
  t7387 = t7372 + t7375 + t7380 + t7385;
  t5808 = t5666*t5802;
  t5939 = t5921*t5802;
  t6151 = t6103*t6127;
  t6348 = t6239*t6337;
  t6352 = t5808 + t5939 + t6151 + t6348;
  t7712 = t5802*t7189;
  t7713 = t6337*t7227;
  t7714 = t7372 + t7380 + t7712 + t7713;
  t7319 = t6867*t5709;
  t7322 = t6894*t1069;
  t7339 = t7282 + t7292 + t7319 + t7322 + t7324;
  t7707 = t7157*t5709;
  t7708 = t1069*t7176;
  t7710 = t7282 + t7292 + t7707 + t7324 + t7708;
  t7683 = t7121*t136;
  t7689 = Power(t136,2);
  t7692 = 0.06*t7689;
  t7693 = -0.9063*t591;
  t7694 = -1.*t5289*t591;
  t7698 = Power(t591,2);
  t7700 = -0.06*t7698;
  t7703 = t7683 + t7692 + t7693 + t7694 + t7700;
  t7792 = var2[0]*t7399;
  t7793 = var2[1]*t4779;
  t7765 = var2[0]*t1955;
  t7766 = var2[1]*t2209;
  t7830 = t7765 + t7766;
  t7822 = -1.*t17*t5802;
  t7823 = -1.*t1623*t6337;
  t7824 = t7822 + t7823;
  t7836 = -1.*t1623*t5802;
  t7833 = t1623*t6127;
  t7834 = t7822 + t7833;
  t7826 = t1623*t5802;
  t7835 = var2[0]*t7834;
  t7837 = -1.*t17*t6127;
  t7838 = t7836 + t7837;
  t7839 = var2[1]*t7838;
  t7840 = t7835 + t7839;
  t6559 = t6548 + t2376;
  t6583 = -0.4999*t932;
  t6592 = -1.*t932*t5357;
  t6595 = t94*t5592;
  t6601 = t6583 + t6592 + t6595;
  t7781 = var2[0]*t4956;
  t7782 = var2[1]*t2506;
  t7888 = -1.*t5666*t4104;
  t7889 = -1.*t5921*t4104;
  t7890 = -1.*t6103*t7039;
  t7891 = -1.*t6239*t4368;
  t7815 = 0.4999*t1069;
  t7801 = t1623*t1255;
  t7802 = t17*t1863;
  t7804 = t7801 + t7802;
  t7583 = t94*t7460;
  t7584 = t7583 + t6970;
  t7578 = t932*t7460;
  t7580 = t7578 + t6897;
  t7879 = -1.*t6975*t2396;
  t7880 = -1.*t6975*t1255;
  t7881 = -1.*t6900*t1863;
  t7882 = -1.*t6958*t1863;
  t7892 = t7879 + t7880 + t7881 + t7882 + t7888 + t7889 + t7890 + t7891;
  t7893 = var2[2]*t7892;
  t7894 = t7781 + t7782 + t7893;
  t7933 = -1.*t5357*t5709;
  t7936 = -1.*t5592*t3946;
  t7943 = -1.*t5921*t7526;
  t7945 = -1.*t6103*t7537;
  t7818 = 0.9063*t136;
  t7819 = t136*t5289;
  t7913 = -1.*t5592*t740;
  t7915 = -1.*t5357*t3946;
  t7918 = var3[1]*t1955;
  t7919 = var3[0]*t7804;
  t7922 = -1.*t6103*t4104;
  t7924 = -1.*t5921*t4368;
  t7930 = var2[2]*t7830;
  t7896 = -1.*t2396*t7189;
  t7898 = -1.*t1255*t7189;
  t7900 = -1.*t1863*t7208;
  t7903 = -1.*t1863*t7227;
  t7904 = t7896 + t7898 + t7900 + t7903 + t7888 + t7889 + t7890 + t7891;
  t7905 = var2[2]*t7904;
  t7906 = t7781 + t7782 + t7905;
  t7740 = t94*t7727;
  t7741 = t932*t7733;
  t7743 = t7740 + t7741;
  t7745 = t932*t7727;
  t7747 = -1.*t94*t7733;
  t7748 = t7745 + t7747;
  t7953 = -1.*t6867*t740;
  t7954 = -1.*t740*t7157;
  t7955 = -1.*t740*t7612;
  t7956 = -1.*t1069*t7176;
  t7957 = -1.*t6894*t3946;
  t7958 = -1.*t7176*t3946;
  t7959 = t7282 + t7953 + t7954 + t7955 + t7933 + t7956 + t7957 + t7936 + t7958;
  t7960 = var2[6]*t7959;
  t7961 = -1.*t1255*t7648;
  t7962 = -1.*t1863*t7664;
  t7963 = -1.*t6975*t4104;
  t7964 = -1.*t7189*t4104;
  t7965 = -1.*t6958*t4368;
  t7966 = -1.*t7227*t4368;
  t7967 = t7961 + t7962 + t7963 + t7964 + t7943 + t7945 + t7965 + t7966;
  t7968 = var2[2]*t7967;
  t7969 = t7960 + t7792 + t7793 + t7968;
  t7857 = t17*t6127;
  t7858 = t7826 + t7857;
  t7827 = -1.*t17*t6337;
  t7828 = t7826 + t7827;
  t7849 = -1.*t6103*t2396;
  t7850 = -1.*t6239*t1255;
  t7851 = -1.*t5666*t1863;
  t7852 = -1.*t5921*t1863;
  t7854 = t7849 + t7850 + t7851 + t7852;
  t7920 = -1.*t6958*t1255;
  t7921 = -1.*t6975*t1863;
  t7925 = t7920 + t7921 + t7922 + t7924;
  t7980 = -1.*t1863*t7189;
  t7981 = -1.*t1255*t7227;
  t7982 = t7980 + t7981 + t7922 + t7924;
  t7910 = -1.*t6894*t740;
  t7914 = -1.*t6867*t1069;
  t7916 = t7910 + t7913 + t7815 + t7914 + t7915;
  t7976 = -1.*t7157*t1069;
  t7977 = -1.*t740*t7176;
  t7978 = t7913 + t7815 + t7976 + t7977 + t7915;
  t7972 = t7121*t591;
  t7973 = 0.12*t136*t591;
  t7974 = t7818 + t7819 + t7972 + t7973;
  t8036 = var2[1]*t1955;
  t8037 = var2[0]*t7804;
  p_output1[0]=(t2209*var2[0] + (t1255*t17 + t2434)*var2[1])*var2[2] + t3211*var2[6] + t4805*var2[7] + t4805*var2[8] + t1955*var3[0] + t2209*var3[1];
  p_output1[1]=t3211*var2[2] + ((t2497 + t17*t6440)*var2[0] + (t2399 + t1623*t6440)*var2[1] + (2.*t5666*t6127 + t5921*t6127 + 2.*t5802*t6239 + t5666*t6337 + t6103*t6559 + t5802*t6601)*var2[2])*var2[6] + t7090*var2[7] + t7250*var2[8] + t4956*var3[0] + t2506*var3[1] + t6352*var3[2];
  p_output1[2]=t7400 + t7404 + t7411 + t7090*var2[6] + (t7554 + t7573 + (2.*t1255*t6958 + 2.*t1863*t6975 + t5802*t7580 + t6337*t7584 + t7589 + t7590)*var2[2] + (2.*t1069*t6867 + t5709*t6894 + 2.*t6894*t740 + t7420 + t1069*t7460 + t7503 + t7505)*var2[6])*var2[7] + t7678*var2[8] + t7387*var3[2] + t7339*var3[6];
  p_output1[3]=t7400 + t7404 + t7411 + t7250*var2[6] + t7678*var2[7] + (t7554 + t7573 + (2.*t1863*t7189 + 2.*t1255*t7227 + t7589 + t7590 + t6337*t7743 + t5802*t7748)*var2[2] + (2.*t1069*t7157 + 2.*t7176*t740 + t7420 + t7503 + t7505 + t1069*t7727 + t5709*t7733)*var2[6] + (-0.9063*t136 - 1.*t136*t5289 - 0.18*t136*t591 - 2.*t591*t7121)*var2[7])*var2[8] + t7714*var3[2] + t7710*var3[6] + t7703*var3[7];
  p_output1[4]=t1955*var2[2] + t4956*var2[6] + t7399*var2[7] + t7399*var2[8];
  p_output1[5]=t2209*var2[2] + t2506*var2[6] + t4779*var2[7] + t4779*var2[8];
  p_output1[6]=t7765 + t7766 + t6352*var2[6] + t7387*var2[7] + t7714*var2[8];
  p_output1[7]=t7781 + t7782 + t6352*var2[2] + t7339*var2[7] + t7710*var2[8];
  p_output1[8]=t7792 + t7793 + t7387*var2[2] + t7339*var2[6] + t7703*var2[8];
  p_output1[9]=t7792 + t7793 + t7714*var2[2] + t7710*var2[6] + t7703*var2[7];
  p_output1[10]=t7804;
  p_output1[11]=t1955;
  p_output1[12]=t5802*t6103 + t5921*t6337;
  p_output1[13]=t1069*t5357 + t5592*t5709 + t7815;
  p_output1[14]=0.06*t136*t591 + t7818 + t7819;
  p_output1[15]=(t7824*var2[0] + (t17*t6337 + t7836)*var2[1])*var2[2] + t7840*var2[6] + t7830*var2[7] + t7830*var2[8] + t7828*var3[0] + t7824*var3[1];
  p_output1[16]=t7840*var2[2] + ((t17*t6559 + t7833)*var2[0] + (t1623*t6559 + t7837)*var2[1] + (-1.*t1255*t5666 - 2.*t2396*t5666 - 1.*t2396*t5921 - 2.*t1863*t6239 - 1.*t6103*t6440 - 1.*t1863*t6601)*var2[2])*var2[6] + t7894*var2[7] + t7906*var2[8] + t7858*var3[0] + t7834*var3[1] + t7854*var3[2];
  p_output1[17]=t7918 + t7919 + t7930 + t7894*var2[6] + (t7792 + t7793 + (-2.*t4368*t6958 - 2.*t4104*t6975 - 1.*t1863*t7580 - 1.*t1255*t7584 + t7943 + t7945)*var2[2] + (-1.*t1069*t6894 - 2.*t3946*t6894 + t7282 - 2.*t6867*t740 - 1.*t740*t7460 + t7933 + t7936)*var2[6])*var2[7] + t7969*var2[8] + t7925*var3[2] + t7916*var3[6];
  p_output1[18]=t7918 + t7919 + t7930 + t7906*var2[6] + t7969*var2[7] + (t7792 + t7793 + (-2.*t4104*t7189 - 2.*t4368*t7227 - 1.*t1255*t7743 - 1.*t1863*t7748 + t7943 + t7945)*var2[2] + (-2.*t3946*t7176 + t7282 - 2.*t7157*t740 - 1.*t740*t7727 - 1.*t1069*t7733 + t7933 + t7936)*var2[6] + (2.*t136*t7121 + 0.12*t7689 + t7693 + t7694 + t7700)*var2[7])*var2[8] + t7982*var3[2] + t7978*var3[6] + t7974*var3[7];
  p_output1[19]=t7828*var2[2] + t7858*var2[6] + t7804*var2[7] + t7804*var2[8];
  p_output1[20]=t7824*var2[2] + t7834*var2[6] + t1955*var2[7] + t1955*var2[8];
  p_output1[21]=t7828*var2[0] + t7824*var2[1] + t7854*var2[6] + t7925*var2[7] + t7982*var2[8];
  p_output1[22]=t7858*var2[0] + t7834*var2[1] + t7854*var2[2] + t7916*var2[7] + t7978*var2[8];
  p_output1[23]=t8036 + t8037 + t7925*var2[2] + t7916*var2[6] + t7974*var2[8];
  p_output1[24]=t8036 + t8037 + t7982*var2[2] + t7978*var2[6] + t7974*var2[7];
  p_output1[25]=t17*t5802 + t1623*t6337;
  p_output1[26]=t7828;
  p_output1[27]=-1.*t1255*t5921 - 1.*t1863*t6103;
  p_output1[28]=-1.*t1069*t5592 + 0.4999*t5709 - 1.*t5357*t740;
  p_output1[29]=0.9063*t591 + t5289*t591 - 0.06*t7689;
  p_output1[30]=-0.06;
  p_output1[31]=1.;
  p_output1[32]=1.;
  p_output1[33]=1.;
  p_output1[34]=1.;
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 35, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightSole_RightSS2.hh"

namespace RightSS2
{

void J_ddh_RightSole_RightSS2_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
