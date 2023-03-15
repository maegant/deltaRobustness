/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:32 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t2149;
  double t576;
  double t815;
  double t2368;
  double t3115;
  double t1171;
  double t2691;
  double t2788;
  double t188;
  double t3159;
  double t3614;
  double t3688;
  double t4096;
  double t3727;
  double t183;
  double t4627;
  double t4676;
  double t4767;
  double t3005;
  double t3763;
  double t4257;
  double t4276;
  double t4302;
  double t3879;
  double t4391;
  double t4436;
  double t4941;
  double t4946;
  double t4948;
  double t4982;
  double t5194;
  double t5279;
  double t5289;
  double t5427;
  double t6110;
  double t6145;
  double t6154;
  double t6168;
  double t6185;
  double t6189;
  double t5930;
  double t5948;
  double t6010;
  double t6081;
  double t6190;
  double t6227;
  double t6248;
  double t6257;
  double t6265;
  double t6272;
  double t6284;
  double t6290;
  double t6301;
  double t6308;
  double t6309;
  double t6316;
  double t5922;
  double t6231;
  double t6275;
  double t6281;
  double t5855;
  double t5867;
  double t5899;
  double t6488;
  double t6494;
  double t6531;
  double t6532;
  double t5606;
  double t5669;
  double t5721;
  double t6548;
  double t6552;
  double t6558;
  double t6559;
  double t6561;
  double t6448;
  double t6452;
  double t6456;
  double t6458;
  double t6460;
  double t6465;
  double t6468;
  double t6471;
  double t6282;
  double t6342;
  double t6348;
  double t6399;
  double t6421;
  double t6434;
  double t6575;
  double t6581;
  double t6586;
  double t6592;
  double t6836;
  double t6838;
  double t6843;
  double t6845;
  double t6607;
  double t6611;
  double t6848;
  double t6857;
  double t6858;
  double t6862;
  double t6864;
  double t6643;
  double t6646;
  double t6721;
  double t6723;
  double t6736;
  double t6744;
  double t6791;
  double t6806;
  double t6938;
  double t6939;
  double t6941;
  double t6942;
  double t6932;
  double t6935;
  double t7009;
  double t7018;
  double t7020;
  double t7107;
  double t7108;
  double t7111;
  double t7113;
  double t7102;
  double t7103;
  double t7023;
  double t7032;
  double t7037;
  double t7044;
  double t7053;
  double t7067;
  double t7068;
  double t7248;
  double t7250;
  double t7252;
  double t7228;
  double t7230;
  double t7234;
  double t7007;
  double t7008;
  double t7360;
  double t7364;
  double t7073;
  double t7089;
  double t7090;
  double t7093;
  double t7119;
  double t7151;
  double t7415;
  double t7417;
  double t7418;
  double t7425;
  double t7430;
  double t7439;
  double t7154;
  double t7164;
  double t7171;
  double t7172;
  double t7181;
  double t7183;
  double t7187;
  double t7189;
  double t7195;
  double t7197;
  double t7198;
  double t7205;
  double t7206;
  double t7213;
  double t7215;
  double t7226;
  double t7227;
  double t7246;
  double t7271;
  double t7507;
  double t7512;
  double t7515;
  double t7526;
  double t7531;
  double t7532;
  double t7295;
  double t7307;
  double t4449;
  double t5475;
  double t5749;
  double t5900;
  double t5917;
  double t6724;
  double t6759;
  double t6750;
  double t6752;
  double t6733;
  double t6741;
  double t6727;
  double t6742;
  double t6753;
  double t6767;
  double t6778;
  double t6905;
  double t6909;
  double t6894;
  double t6901;
  double t6892;
  double t6903;
  double t6922;
  double t6923;
  double t6926;
  double t6929;
  double t6936;
  double t6944;
  double t6949;
  double t6963;
  double t6968;
  double t6970;
  double t6975;
  double t6976;
  double t6981;
  double t7104;
  double t7117;
  double t7121;
  double t7127;
  double t7153;
  double t7157;
  double t7244;
  double t7258;
  double t7266;
  double t7277;
  double t7288;
  double t7317;
  double t7720;
  double t7721;
  double t7369;
  double t7372;
  double t7375;
  double t7376;
  double t7380;
  double t7385;
  double t7387;
  double t7392;
  double t7398;
  double t7399;
  double t7722;
  double t7726;
  double t7420;
  double t7440;
  double t7457;
  double t7463;
  double t7482;
  double t7488;
  double t7733;
  double t7736;
  double t7737;
  double t7739;
  double t7740;
  double t7741;
  double t7743;
  double t7518;
  double t7536;
  double t7537;
  double t7745;
  double t7555;
  double t7556;
  double t7557;
  double t7577;
  double t7578;
  double t7580;
  double t6811;
  double t6819;
  double t6830;
  double t6620;
  double t6632;
  double t6635;
  double t6594;
  double t6595;
  double t6596;
  double t6378;
  double t6437;
  double t6440;
  double t7600;
  double t7602;
  double t7606;
  double t7667;
  double t7668;
  double t7669;
  double t7711;
  double t7712;
  double t7713;
  double t7714;
  double t7715;
  double t6928;
  double t6966;
  double t6967;
  double t6982;
  double t6990;
  double t7267;
  double t7319;
  double t7322;
  double t7744;
  double t7747;
  double t7748;
  double t7552;
  double t7559;
  double t7560;
  double t7759;
  double t7760;
  double t7761;
  double t7581;
  double t7582;
  double t7583;
  double t7766;
  double t7774;
  double t6459;
  double t6482;
  double t6485;
  double t7610;
  double t7611;
  double t7612;
  double t7779;
  double t7780;
  double t7781;
  double t7641;
  double t7645;
  double t7646;
  double t7692;
  double t7693;
  double t7694;
  double t6877;
  double t6878;
  double t6880;
  double t7801;
  double t7802;
  double t7804;
  double t7122;
  double t7161;
  double t7166;
  double t7727;
  double t7729;
  double t7734;
  double t7824;
  double t7825;
  double t7826;
  double t7827;
  double t7828;
  double t7460;
  double t7501;
  double t7504;
  double t7755;
  double t7756;
  double t7757;
  double t7844;
  double t7845;
  double t7846;
  double t7847;
  double t7848;
  double t7584;
  double t7586;
  double t7588;
  double t7861;
  double t7862;
  double t7863;
  double t7871;
  double t7873;
  double t6537;
  double t6566;
  double t6571;
  double t7613;
  double t7614;
  double t7616;
  double t7782;
  double t7783;
  double t7784;
  double t7876;
  double t7877;
  double t7878;
  double t7627;
  double t7635;
  double t7636;
  double t7678;
  double t7679;
  double t7680;
  double t6867;
  double t6868;
  double t6871;
  double t7796;
  double t7798;
  double t7799;
  double t7894;
  double t7895;
  double t7896;
  double t7079;
  double t7724;
  double t7820;
  double t7821;
  double t7822;
  double t7914;
  double t7915;
  double t7916;
  double t7917;
  double t7918;
  double t7388;
  double t7400;
  double t7404;
  double t7751;
  double t7752;
  double t7753;
  double t7838;
  double t7839;
  double t7840;
  double t7841;
  double t7842;
  double t7589;
  double t7590;
  double t7592;
  double t7864;
  double t7865;
  double t7866;
  double t7935;
  double t7936;
  double t7937;
  double t7941;
  double t7943;
  double t6574;
  double t7617;
  double t7785;
  double t7786;
  double t7879;
  double t7880;
  double t7947;
  double t7948;
  double t7985;
  double t7986;
  double t7593;
  double t7765;
  double t7867;
  double t7868;
  double t7939;
  double t7940;
  double t7975;
  double t7976;
  t2149 = Cos(var2[4]);
  t576 = Cos(var2[5]);
  t815 = Sin(var2[4]);
  t2368 = Sin(var2[5]);
  t3115 = Cos(var2[3]);
  t1171 = -1.*t576*t815;
  t2691 = -1.*t2149*t2368;
  t2788 = t1171 + t2691;
  t188 = Sin(var2[3]);
  t3159 = t2149*t576;
  t3614 = -1.*t815*t2368;
  t3688 = t3159 + t3614;
  t4096 = Sin(var2[2]);
  t3727 = t3115*t3688;
  t183 = Cos(var2[2]);
  t4627 = t576*t815;
  t4676 = t2149*t2368;
  t4767 = t4627 + t4676;
  t3005 = t188*t2788;
  t3763 = t3005 + t3727;
  t4257 = t3115*t2788;
  t4276 = -1.*t188*t3688;
  t4302 = t4257 + t4276;
  t3879 = t183*t3763;
  t4391 = t4096*t4302;
  t4436 = t3879 + t4391;
  t4941 = -1.*t188*t4767;
  t4946 = t4941 + t3727;
  t4948 = t4096*t4946;
  t4982 = t3115*t4767;
  t5194 = t188*t3688;
  t5279 = t4982 + t5194;
  t5289 = t183*t5279;
  t5427 = t4948 + t5289;
  t6110 = -1.*t576;
  t6145 = 1. + t6110;
  t6154 = -1.3127*t6145;
  t6168 = -1.3127*t576;
  t6185 = -0.06*t2368;
  t6189 = t6154 + t6168 + t6185;
  t5930 = -1.*t2149;
  t5948 = 1. + t5930;
  t6010 = -0.9063*t5948;
  t6081 = -0.06*t576*t815;
  t6190 = t2149*t6189;
  t6227 = t6010 + t6081 + t6190;
  t6248 = 0.06*t2149*t576;
  t6257 = 0.9063*t815;
  t6265 = t815*t6189;
  t6272 = t6248 + t6257 + t6265;
  t6284 = -1.*t3115;
  t6290 = 1. + t6284;
  t6301 = -0.4999*t6290;
  t6308 = t3115*t6227;
  t6309 = -1.*t188*t6272;
  t6316 = t6301 + t6308 + t6309;
  t5922 = 0.4999*t188;
  t6231 = t188*t6227;
  t6275 = t3115*t6272;
  t6281 = t5922 + t6231 + t6275;
  t5855 = t183*t4946;
  t5867 = -1.*t4096*t5279;
  t5899 = t5855 + t5867;
  t6488 = 0.9063*t576;
  t6494 = t576*t6189;
  t6531 = 0.06*t576*t2368;
  t6532 = t6488 + t6494 + t6531;
  t5606 = -1.*t4096*t3763;
  t5669 = t183*t4302;
  t5721 = t5606 + t5669;
  t6548 = Power(t576,2);
  t6552 = -0.06*t6548;
  t6558 = 0.9063*t2368;
  t6559 = t6189*t2368;
  t6561 = t6552 + t6558 + t6559;
  t6448 = t6272*t4767;
  t6452 = 0.4999*t3688;
  t6456 = t6227*t3688;
  t6458 = t6448 + t6452 + t6456;
  t6460 = -1.*t6227*t2788;
  t6465 = 0.4999*t4767;
  t6468 = -1.*t6272*t3688;
  t6471 = t6460 + t6465 + t6468;
  t6282 = -1.*t6281*t3763;
  t6342 = -1.*t6316*t4302;
  t6348 = t6282 + t6342;
  t6399 = t6316*t4946;
  t6421 = t6281*t5279;
  t6434 = t6399 + t6421;
  t6575 = -1.*var1[8];
  t6581 = var3[5] + t6575;
  t6586 = -1.*var1[7];
  t6592 = var3[4] + t6586;
  t6836 = -1.*t3115*t4767;
  t6838 = t6836 + t4276;
  t6843 = t4096*t6838;
  t6845 = t5855 + t6843;
  t6607 = -1.*var1[6];
  t6611 = var3[3] + t6607;
  t6848 = -1.*t188*t2788;
  t6857 = -1.*t3115*t3688;
  t6858 = t6848 + t6857;
  t6862 = t4096*t6858;
  t6864 = t6862 + t5669;
  t6643 = -1.*var1[0];
  t6646 = var3[0] + t6643;
  t6721 = -1.*var1[1];
  t6723 = var3[1] + t6721;
  t6736 = -1.*t4096*t4302;
  t6744 = -1.*t4096*t4946;
  t6791 = -1.*var1[2];
  t6806 = var3[2] + t6791;
  t6938 = -0.4999*t188;
  t6939 = -1.*t188*t6227;
  t6941 = -1.*t3115*t6272;
  t6942 = t6938 + t6939 + t6941;
  t6932 = 0.4999*t3115;
  t6935 = t6932 + t6308 + t6309;
  t7009 = -1.*t2149*t576;
  t7018 = t815*t2368;
  t7020 = t7009 + t7018;
  t7107 = -0.06*t2149*t576;
  t7108 = -0.9063*t815;
  t7111 = -1.*t815*t6189;
  t7113 = t7107 + t7108 + t7111;
  t7102 = 0.9063*t2149;
  t7103 = t7102 + t6081 + t6190;
  t7023 = t3115*t7020;
  t7032 = t6848 + t7023;
  t7037 = t4096*t7032;
  t7044 = t188*t7020;
  t7053 = t4257 + t7044;
  t7067 = t183*t7053;
  t7068 = t7037 + t7067;
  t7248 = t3115*t7103;
  t7250 = t188*t7113;
  t7252 = t7248 + t7250;
  t7228 = -1.*t188*t7103;
  t7230 = t3115*t7113;
  t7234 = t7228 + t7230;
  t7007 = -0.06857142*t6581*t4436;
  t7008 = 1.142857*t6561*t4436;
  t7360 = -0.06*t576;
  t7364 = 0. + t7360;
  t7073 = 1.142857*t6532*t7068;
  t7089 = 1.142857*t6471*t4436;
  t7090 = 0.4999*t2788;
  t7093 = t6227*t2788;
  t7119 = t6272*t3688;
  t7151 = -1.*t6272*t2788;
  t7415 = t7364*t815;
  t7417 = -0.06*t2149*t2368;
  t7418 = t7415 + t7417;
  t7425 = t2149*t7364;
  t7430 = 0.06*t815*t2368;
  t7439 = t7425 + t7430;
  t7154 = -1.*t6227*t7020;
  t7164 = 1.142857*t6458*t7068;
  t7171 = 2.285714*t4436*t5427;
  t7172 = 2.285714*t4436*t7068;
  t7181 = t7171 + t7172;
  t7183 = t6646*t7181;
  t7187 = 1.142857*t5721*t5427;
  t7189 = 1.142857*t4436*t5899;
  t7195 = 1.142857*t5721*t7068;
  t7197 = t183*t7032;
  t7198 = -1.*t4096*t7053;
  t7205 = t7197 + t7198;
  t7206 = 1.142857*t4436*t7205;
  t7213 = t7187 + t7189 + t7195 + t7206;
  t7215 = t6723*t7213;
  t7226 = 1.142857*t4436*t6348;
  t7227 = t6281*t3763;
  t7246 = t6316*t4302;
  t7271 = 1.142857*t6434*t7068;
  t7507 = -1.*t188*t7418;
  t7512 = t3115*t7439;
  t7515 = t7507 + t7512;
  t7526 = t3115*t7418;
  t7531 = t188*t7439;
  t7532 = t7526 + t7531;
  t7295 = -1.*t6316*t7032;
  t7307 = -1.*t6281*t7053;
  t4449 = Power(t4436,2);
  t5475 = Power(t5427,2);
  t5749 = -1.142857*t5721*t4436;
  t5900 = -1.142857*t5427*t5899;
  t5917 = t5749 + t5900;
  t6724 = Power(t5721,2);
  t6759 = Power(t5899,2);
  t6750 = -1.*t183*t5279;
  t6752 = t6744 + t6750;
  t6733 = -1.*t183*t3763;
  t6741 = t6733 + t6736;
  t6727 = 1.142857*t6724;
  t6742 = 1.142857*t6741*t4436;
  t6753 = 1.142857*t6752*t5427;
  t6767 = 1.142857*t6759;
  t6778 = t6727 + t6742 + t6753 + t6767;
  t6905 = t183*t6838;
  t6909 = t6744 + t6905;
  t6894 = t183*t6858;
  t6901 = t6894 + t6736;
  t6892 = 1.142857*t6864*t5721;
  t6903 = 1.142857*t6901*t4436;
  t6922 = 1.142857*t6909*t5427;
  t6923 = 1.142857*t6845*t5899;
  t6926 = t6892 + t6903 + t6922 + t6923;
  t6929 = -1.*t6316*t6858;
  t6936 = -1.*t6935*t3763;
  t6944 = -1.*t6942*t4302;
  t6949 = -1.*t6281*t4302;
  t6963 = t6929 + t6936 + t6944 + t6949;
  t6968 = t6942*t4946;
  t6970 = t6281*t4946;
  t6975 = t6316*t6838;
  t6976 = t6935*t5279;
  t6981 = t6968 + t6970 + t6975 + t6976;
  t7104 = t7103*t4767;
  t7117 = t7113*t3688;
  t7121 = t7090 + t7093 + t7104 + t7117 + t7119;
  t7127 = -1.*t7113*t2788;
  t7153 = -1.*t7103*t3688;
  t7157 = t7127 + t7151 + t6452 + t7153 + t7154;
  t7244 = t7234*t4946;
  t7258 = t7252*t5279;
  t7266 = t7227 + t7244 + t7246 + t7258;
  t7277 = -1.*t7252*t3763;
  t7288 = -1.*t7234*t4302;
  t7317 = t7277 + t7288 + t7295 + t7307;
  t7720 = -0.06857142*t6581*t5721;
  t7721 = 1.142857*t6561*t5721;
  t7369 = t7364*t576;
  t7372 = 0.06*t6548;
  t7375 = -0.9063*t2368;
  t7376 = -1.*t6189*t2368;
  t7380 = Power(t2368,2);
  t7385 = -0.06*t7380;
  t7387 = t7369 + t7372 + t7375 + t7376 + t7385;
  t7392 = t7364*t2368;
  t7398 = 0.12*t576*t2368;
  t7399 = t6488 + t6494 + t7392 + t7398;
  t7722 = 1.142857*t6532*t7205;
  t7726 = 1.142857*t6471*t5721;
  t7420 = t7418*t4767;
  t7440 = t3688*t7439;
  t7457 = t7090 + t7093 + t7420 + t7119 + t7440;
  t7463 = -1.*t7418*t3688;
  t7482 = -1.*t2788*t7439;
  t7488 = t7151 + t6452 + t7463 + t7482 + t7154;
  t7733 = 1.142857*t6458*t7205;
  t7736 = 2.285714*t5721*t5899;
  t7737 = 2.285714*t5721*t7205;
  t7739 = t7736 + t7737;
  t7740 = t6723*t7739;
  t7741 = t6646*t7213;
  t7743 = 1.142857*t5721*t6348;
  t7518 = t4946*t7515;
  t7536 = t5279*t7532;
  t7537 = t7227 + t7246 + t7518 + t7536;
  t7745 = 1.142857*t6434*t7205;
  t7555 = -1.*t4302*t7515;
  t7556 = -1.*t3763*t7532;
  t7557 = t7555 + t7556 + t7295 + t7307;
  t7577 = 1.142857*t5721*t4436;
  t7578 = 1.142857*t5427*t5899;
  t7580 = t7577 + t7578;
  t6811 = 1.142857*t6348*t5899;
  t6819 = 1.142857*t5721*t6434;
  t6830 = t6811 + t6819;
  t6620 = 1.142857*t6458*t5721;
  t6632 = 1.142857*t6471*t5899;
  t6635 = t6620 + t6632;
  t6594 = 1.142857*t6532*t5721;
  t6595 = 1.142857*t6561*t5899;
  t6596 = t6594 + t6595;
  t6378 = -1.142857*t6348*t5427;
  t6437 = -1.142857*t4436*t6434;
  t6440 = t6378 + t6437;
  t7600 = -1.142857*t6348*t5899;
  t7602 = -1.142857*t5721*t6434;
  t7606 = t7600 + t7602;
  t7667 = 1.142857*t6348*t6752;
  t7668 = 1.142857*t6741*t6434;
  t7669 = t7667 + t7668;
  t7711 = 1.142857*t6348*t6909;
  t7712 = 1.142857*t6963*t5899;
  t7713 = 1.142857*t6901*t6434;
  t7714 = 1.142857*t5721*t6981;
  t7715 = t7711 + t7712 + t7713 + t7714;
  t6928 = 1.142857*t6348*t6845;
  t6966 = 1.142857*t6963*t5427;
  t6967 = 1.142857*t6864*t6434;
  t6982 = 1.142857*t4436*t6981;
  t6990 = t6928 + t6966 + t6967 + t6982;
  t7267 = 1.142857*t4436*t7266;
  t7319 = 1.142857*t5427*t7317;
  t7322 = t7226 + t7267 + t7271 + t7319;
  t7744 = 1.142857*t5721*t7266;
  t7747 = 1.142857*t5899*t7317;
  t7748 = t7743 + t7744 + t7745 + t7747;
  t7552 = 1.142857*t4436*t7537;
  t7559 = 1.142857*t5427*t7557;
  t7560 = t7226 + t7552 + t7271 + t7559;
  t7759 = 1.142857*t5721*t7537;
  t7760 = 1.142857*t5899*t7557;
  t7761 = t7743 + t7759 + t7745 + t7760;
  t7581 = 1.142857*t6348*t5427;
  t7582 = 1.142857*t4436*t6434;
  t7583 = t7581 + t7582;
  t7766 = Power(t6348,2);
  t7774 = Power(t6434,2);
  t6459 = -1.142857*t6458*t4436;
  t6482 = -1.142857*t6471*t5427;
  t6485 = t6459 + t6482;
  t7610 = -1.142857*t6458*t5721;
  t7611 = -1.142857*t6471*t5899;
  t7612 = t7610 + t7611;
  t7779 = -1.142857*t6471*t6348;
  t7780 = -1.142857*t6458*t6434;
  t7781 = -0.0085 + t7779 + t7780;
  t7641 = 1.142857*t6458*t6741;
  t7645 = 1.142857*t6471*t6752;
  t7646 = t7641 + t7645;
  t7692 = 1.142857*t6458*t6901;
  t7693 = 1.142857*t6471*t6909;
  t7694 = t7692 + t7693;
  t6877 = 1.142857*t6458*t6864;
  t6878 = 1.142857*t6471*t6845;
  t6880 = t6877 + t6878;
  t7801 = 1.142857*t6471*t6963;
  t7802 = 1.142857*t6458*t6981;
  t7804 = t7801 + t7802;
  t7122 = 1.142857*t7121*t4436;
  t7161 = 1.142857*t7157*t5427;
  t7166 = t7089 + t7122 + t7161 + t7164;
  t7727 = 1.142857*t7121*t5721;
  t7729 = 1.142857*t7157*t5899;
  t7734 = t7726 + t7727 + t7729 + t7733;
  t7824 = 1.142857*t7157*t6348;
  t7825 = 1.142857*t6458*t7266;
  t7826 = 1.142857*t7121*t6434;
  t7827 = 1.142857*t6471*t7317;
  t7828 = t7824 + t7825 + t7826 + t7827;
  t7460 = 1.142857*t7457*t4436;
  t7501 = 1.142857*t7488*t5427;
  t7504 = t7089 + t7460 + t7501 + t7164;
  t7755 = 1.142857*t7457*t5721;
  t7756 = 1.142857*t7488*t5899;
  t7757 = t7726 + t7755 + t7756 + t7733;
  t7844 = 1.142857*t7488*t6348;
  t7845 = 1.142857*t7457*t6434;
  t7846 = 1.142857*t6458*t7537;
  t7847 = 1.142857*t6471*t7557;
  t7848 = t7844 + t7845 + t7846 + t7847;
  t7584 = 1.142857*t6458*t4436;
  t7586 = 1.142857*t6471*t5427;
  t7588 = t7584 + t7586;
  t7861 = 1.142857*t6471*t6348;
  t7862 = 1.142857*t6458*t6434;
  t7863 = 0.0085 + t7861 + t7862;
  t7871 = Power(t6458,2);
  t7873 = Power(t6471,2);
  t6537 = -1.142857*t6532*t4436;
  t6566 = -1.142857*t6561*t5427;
  t6571 = t6537 + t6566;
  t7613 = -1.142857*t6532*t5721;
  t7614 = -1.142857*t6561*t5899;
  t7616 = t7613 + t7614;
  t7782 = -1.142857*t6561*t6348;
  t7783 = -1.142857*t6532*t6434;
  t7784 = -0.0085 + t7782 + t7783;
  t7876 = -1.142857*t6532*t6458;
  t7877 = -1.142857*t6561*t6471;
  t7878 = -0.0085 + t7876 + t7877;
  t7627 = 1.142857*t6532*t6741;
  t7635 = 1.142857*t6561*t6752;
  t7636 = t7627 + t7635;
  t7678 = 1.142857*t6532*t6901;
  t7679 = 1.142857*t6561*t6909;
  t7680 = t7678 + t7679;
  t6867 = 1.142857*t6532*t6864;
  t6868 = 1.142857*t6561*t6845;
  t6871 = t6867 + t6868;
  t7796 = 1.142857*t6561*t6963;
  t7798 = 1.142857*t6532*t6981;
  t7799 = t7796 + t7798;
  t7894 = 1.142857*t6532*t7121;
  t7895 = 1.142857*t6561*t7157;
  t7896 = t7894 + t7895;
  t7079 = t7008 + t7073;
  t7724 = t7721 + t7722;
  t7820 = 1.142857*t6532*t7266;
  t7821 = 1.142857*t6561*t7317;
  t7822 = t7820 + t7821;
  t7914 = 1.142857*t7387*t6458;
  t7915 = 1.142857*t7399*t6471;
  t7916 = 1.142857*t6532*t7457;
  t7917 = 1.142857*t6561*t7488;
  t7918 = t7914 + t7915 + t7916 + t7917;
  t7388 = 1.142857*t7387*t4436;
  t7400 = 1.142857*t7399*t5427;
  t7404 = t7008 + t7388 + t7400 + t7073;
  t7751 = 1.142857*t7387*t5721;
  t7752 = 1.142857*t7399*t5899;
  t7753 = t7721 + t7751 + t7752 + t7722;
  t7838 = 1.142857*t7399*t6348;
  t7839 = 1.142857*t7387*t6434;
  t7840 = 1.142857*t6532*t7537;
  t7841 = 1.142857*t6561*t7557;
  t7842 = t7838 + t7839 + t7840 + t7841;
  t7589 = 1.142857*t6532*t4436;
  t7590 = 1.142857*t6561*t5427;
  t7592 = t7589 + t7590;
  t7864 = 1.142857*t6561*t6348;
  t7865 = 1.142857*t6532*t6434;
  t7866 = 0.0085 + t7864 + t7865;
  t7935 = 1.142857*t6532*t6458;
  t7936 = 1.142857*t6561*t6471;
  t7937 = 0.0085 + t7935 + t7936;
  t7941 = Power(t6532,2);
  t7943 = Power(t6561,2);
  t6574 = 0.06857142*t5427;
  t7617 = 0.06857142*t5899;
  t7785 = 0.06857142*t6348;
  t7786 = -0.0085 + t7785;
  t7879 = 0.06857142*t6471;
  t7880 = -0.0085 + t7879;
  t7947 = 0.06857142*t6561;
  t7948 = -0.0085 + t7947;
  t7985 = -0.06857142*t6723*t5721;
  t7986 = -0.06857142*t6646*t4436;
  t7593 = -0.06857142*t5427;
  t7765 = -0.06857142*t5899;
  t7867 = -0.06857142*t6348;
  t7868 = 0.0085 + t7867;
  t7939 = -0.06857142*t6471;
  t7940 = 0.0085 + t7939;
  t7975 = -0.06857142*t6561;
  t7976 = 0.0085 + t7975;
  p_output1[0]=-1.142857*t4449 - 1.142857*t5475;
  p_output1[1]=t5917;
  p_output1[2]=t6440;
  p_output1[3]=t6485;
  p_output1[4]=t6571;
  p_output1[5]=t6574;
  p_output1[6]=-0.06857142*t5899*t6581 + t6592*t6596 + t6611*t6635 + (2.285714*t4436*t5721 + 2.285714*t5427*t5899)*t6646 + t6723*t6778 + t6806*t6830;
  p_output1[7]=-0.06857142*t6581*t6845 + t6646*(2.285714*t5427*t6845 + 2.285714*t4436*t6864) + t6592*t6871 + t6611*t6880 + t6723*t6926 + t6806*t6990;
  p_output1[8]=t7007 + t6592*t7079 + t6611*t7166 + t7183 + t7215 + t6806*t7322;
  p_output1[9]=t7007 + t7183 + t7215 + t6592*t7404 + t6611*t7504 + t6806*t7560;
  p_output1[10]=1.142857*t4449 + 1.142857*t5475;
  p_output1[11]=t7580;
  p_output1[12]=t7583;
  p_output1[13]=t7588;
  p_output1[14]=t7592;
  p_output1[15]=t7593;
  p_output1[16]=t5917;
  p_output1[17]=-1.142857*t6724 - 1.142857*t6759;
  p_output1[18]=t7606;
  p_output1[19]=t7612;
  p_output1[20]=t7616;
  p_output1[21]=t7617;
  p_output1[22]=-0.06857142*t6581*t6752 + t6723*(2.285714*t5721*t6741 + 2.285714*t5899*t6752) + t6646*t6778 + t6592*t7636 + t6611*t7646 + t6806*t7669;
  p_output1[23]=-0.06857142*t6581*t6909 + t6723*(2.285714*t5721*t6901 + 2.285714*t5899*t6909) + t6646*t6926 + t6592*t7680 + t6611*t7694 + t6806*t7715;
  p_output1[24]=t7720 + t6592*t7724 + t6611*t7734 + t7740 + t7741 + t6806*t7748;
  p_output1[25]=t7720 + t7740 + t7741 + t6592*t7753 + t6611*t7757 + t6806*t7761;
  p_output1[26]=t7580;
  p_output1[27]=t6727 + t6767;
  p_output1[28]=t6830;
  p_output1[29]=t6635;
  p_output1[30]=t6596;
  p_output1[31]=t7765;
  p_output1[32]=t6440;
  p_output1[33]=t7606;
  p_output1[34]=-0.0085 - 1.142857*t7766 - 1.142857*t7774;
  p_output1[35]=t7781;
  p_output1[36]=t7784;
  p_output1[37]=t7786;
  p_output1[38]=t6646*t6830 + t6723*t7669;
  p_output1[39]=-0.06857142*t6581*t6963 + t6806*(2.285714*t6348*t6963 + 2.285714*t6434*t6981) + t6646*t6990 + t6723*t7715 + t6592*t7799 + t6611*t7804;
  p_output1[40]=-0.06857142*t6581*t7317 + t6806*(2.285714*t6434*t7266 + 2.285714*t6348*t7317) + t6646*t7322 + t6723*t7748 + t6592*t7822 + t6611*t7828;
  p_output1[41]=-0.06857142*t6581*t7557 + t6806*(2.285714*t6434*t7537 + 2.285714*t6348*t7557) + t6646*t7560 + t6723*t7761 + t6592*t7842 + t6611*t7848;
  p_output1[42]=t7583;
  p_output1[43]=t6830;
  p_output1[44]=0.0085 + 1.142857*t7766 + 1.142857*t7774;
  p_output1[45]=t7863;
  p_output1[46]=t7866;
  p_output1[47]=t7868;
  p_output1[48]=t6485;
  p_output1[49]=t7612;
  p_output1[50]=t7781;
  p_output1[51]=-0.0085 - 1.142857*t7871 - 1.142857*t7873;
  p_output1[52]=t7878;
  p_output1[53]=t7880;
  p_output1[54]=t6635*t6646 + t6723*t7646;
  p_output1[55]=t6646*t6880 + t6723*t7694 + t6806*t7804;
  p_output1[56]=-0.06857142*t6581*t7157 + t6611*(2.285714*t6458*t7121 + 2.285714*t6471*t7157) + t6646*t7166 + t6723*t7734 + t6806*t7828 + t6592*t7896;
  p_output1[57]=-0.06857142*t6581*t7488 + t6611*(2.285714*t6458*t7457 + 2.285714*t6471*t7488) + t6646*t7504 + t6723*t7757 + t6806*t7848 + t6592*t7918;
  p_output1[58]=t7588;
  p_output1[59]=t6635;
  p_output1[60]=t7863;
  p_output1[61]=0.0085 + 1.142857*t7871 + 1.142857*t7873;
  p_output1[62]=t7937;
  p_output1[63]=t7940;
  p_output1[64]=t6571;
  p_output1[65]=t7616;
  p_output1[66]=t7784;
  p_output1[67]=t7878;
  p_output1[68]=-0.0085 - 1.142857*t7941 - 1.142857*t7943;
  p_output1[69]=t7948;
  p_output1[70]=t6596*t6646 + t6723*t7636;
  p_output1[71]=t6646*t6871 + t6723*t7680 + t6806*t7799;
  p_output1[72]=t6646*t7079 + t6723*t7724 + t6806*t7822 + t6611*t7896;
  p_output1[73]=-0.06857142*t6581*t7399 + t6592*(2.285714*t6532*t7387 + 2.285714*t6561*t7399) + t6646*t7404 + t6723*t7753 + t6806*t7842 + t6611*t7918;
  p_output1[74]=t7592;
  p_output1[75]=t6596;
  p_output1[76]=t7866;
  p_output1[77]=t7937;
  p_output1[78]=0.0085 + 1.142857*t7941 + 1.142857*t7943;
  p_output1[79]=t7976;
  p_output1[80]=t6574;
  p_output1[81]=t7617;
  p_output1[82]=t7786;
  p_output1[83]=t7880;
  p_output1[84]=t7948;
  p_output1[85]=-0.0126142852;
  p_output1[86]=-0.06857142*t5899*t6646 - 0.06857142*t6723*t6752;
  p_output1[87]=-0.06857142*t6646*t6845 - 0.06857142*t6723*t6909 - 0.06857142*t6806*t6963;
  p_output1[88]=-0.06857142*t6611*t7157 - 0.06857142*t6806*t7317 + t7985 + t7986;
  p_output1[89]=-0.06857142*t6592*t7399 - 0.06857142*t6611*t7488 - 0.06857142*t6806*t7557 + t7985 + t7986;
  p_output1[90]=t7593;
  p_output1[91]=t7765;
  p_output1[92]=t7868;
  p_output1[93]=t7940;
  p_output1[94]=t7976;
  p_output1[95]=0.0126142852;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 96, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMap4_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void J_dxDiscreteMap4_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
