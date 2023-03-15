/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:37 GMT-08:00
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
  double t414;
  double t243;
  double t346;
  double t1403;
  double t1847;
  double t364;
  double t1473;
  double t1704;
  double t151;
  double t1872;
  double t1970;
  double t1998;
  double t2852;
  double t2094;
  double t41;
  double t3727;
  double t3740;
  double t3752;
  double t1791;
  double t2136;
  double t2957;
  double t3005;
  double t3462;
  double t2193;
  double t3612;
  double t3617;
  double t3762;
  double t3824;
  double t3879;
  double t3892;
  double t3899;
  double t4021;
  double t4180;
  double t4253;
  double t5582;
  double t5607;
  double t5669;
  double t5705;
  double t5709;
  double t5717;
  double t5427;
  double t5475;
  double t5478;
  double t5543;
  double t5721;
  double t5749;
  double t5899;
  double t5900;
  double t5917;
  double t5922;
  double t6081;
  double t6154;
  double t6168;
  double t6190;
  double t6231;
  double t6248;
  double t5289;
  double t5855;
  double t5944;
  double t6010;
  double t4801;
  double t4861;
  double t4891;
  double t6485;
  double t6494;
  double t6505;
  double t6531;
  double t4613;
  double t4622;
  double t4627;
  double t6537;
  double t6548;
  double t6554;
  double t6559;
  double t6561;
  double t6378;
  double t6421;
  double t6440;
  double t6448;
  double t6456;
  double t6458;
  double t6459;
  double t6471;
  double t6032;
  double t6257;
  double t6265;
  double t6308;
  double t6312;
  double t6348;
  double t6581;
  double t6583;
  double t6594;
  double t6595;
  double t6892;
  double t6894;
  double t6905;
  double t6909;
  double t6632;
  double t6635;
  double t6923;
  double t6926;
  double t6927;
  double t6928;
  double t6932;
  double t6684;
  double t6720;
  double t6759;
  double t6767;
  double t6830;
  double t6838;
  double t6875;
  double t6877;
  double t7090;
  double t7093;
  double t7102;
  double t7104;
  double t7079;
  double t7082;
  double t7181;
  double t7183;
  double t7187;
  double t7266;
  double t7267;
  double t7271;
  double t7317;
  double t7250;
  double t7255;
  double t7189;
  double t7195;
  double t7197;
  double t7205;
  double t7206;
  double t7213;
  double t7215;
  double t7518;
  double t7526;
  double t7531;
  double t7488;
  double t7501;
  double t7504;
  double t7171;
  double t7172;
  double t7580;
  double t7581;
  double t7226;
  double t7244;
  double t7246;
  double t7248;
  double t7322;
  double t7360;
  double t7606;
  double t7610;
  double t7611;
  double t7613;
  double t7614;
  double t7616;
  double t7369;
  double t7380;
  double t7388;
  double t7392;
  double t7398;
  double t7399;
  double t7400;
  double t7404;
  double t7409;
  double t7415;
  double t7417;
  double t7420;
  double t7425;
  double t7430;
  double t7440;
  double t7457;
  double t7460;
  double t7512;
  double t7557;
  double t7647;
  double t7648;
  double t7650;
  double t7664;
  double t7665;
  double t7667;
  double t7563;
  double t7569;
  double t3705;
  double t4257;
  double t4792;
  double t5188;
  double t5194;
  double t6770;
  double t6864;
  double t6843;
  double t6847;
  double t6819;
  double t6831;
  double t6777;
  double t6835;
  double t6862;
  double t6867;
  double t6868;
  double t7018;
  double t7023;
  double t7007;
  double t7008;
  double t6995;
  double t7010;
  double t7037;
  double t7044;
  double t7057;
  double t7073;
  double t7089;
  double t7107;
  double t7108;
  double t7117;
  double t7122;
  double t7144;
  double t7156;
  double t7157;
  double t7158;
  double t7258;
  double t7319;
  double t7339;
  double t7353;
  double t7364;
  double t7372;
  double t7505;
  double t7536;
  double t7537;
  double t7559;
  double t7560;
  double t7570;
  double t7795;
  double t7796;
  double t7582;
  double t7583;
  double t7584;
  double t7586;
  double t7588;
  double t7589;
  double t7590;
  double t7593;
  double t7594;
  double t7597;
  double t7798;
  double t7801;
  double t7612;
  double t7617;
  double t7622;
  double t7635;
  double t7636;
  double t7640;
  double t7805;
  double t7810;
  double t7815;
  double t7816;
  double t7817;
  double t7818;
  double t7819;
  double t7651;
  double t7668;
  double t7669;
  double t7821;
  double t7672;
  double t7677;
  double t7678;
  double t7700;
  double t7705;
  double t7707;
  double t6878;
  double t6880;
  double t6884;
  double t6640;
  double t6646;
  double t6651;
  double t6596;
  double t6601;
  double t6611;
  double t6301;
  double t6356;
  double t6376;
  double t7725;
  double t7726;
  double t7727;
  double t7756;
  double t7757;
  double t7758;
  double t7783;
  double t7784;
  double t7785;
  double t7786;
  double t7787;
  double t7068;
  double t7119;
  double t7121;
  double t7161;
  double t7164;
  double t7552;
  double t7571;
  double t7573;
  double t7820;
  double t7822;
  double t7823;
  double t7670;
  double t7679;
  double t7680;
  double t7834;
  double t7835;
  double t7836;
  double t7708;
  double t7710;
  double t7711;
  double t7841;
  double t7843;
  double t6452;
  double t6472;
  double t6482;
  double t7729;
  double t7733;
  double t7734;
  double t7846;
  double t7847;
  double t7848;
  double t7747;
  double t7748;
  double t7749;
  double t7766;
  double t7769;
  double t7774;
  double t6968;
  double t6970;
  double t6975;
  double t7863;
  double t7864;
  double t7865;
  double t7347;
  double t7375;
  double t7385;
  double t7802;
  double t7804;
  double t7806;
  double t7881;
  double t7882;
  double t7888;
  double t7889;
  double t7890;
  double t7627;
  double t7641;
  double t7645;
  double t7830;
  double t7831;
  double t7832;
  double t7913;
  double t7914;
  double t7915;
  double t7916;
  double t7917;
  double t7712;
  double t7713;
  double t7714;
  double t7933;
  double t7934;
  double t7935;
  double t7942;
  double t7945;
  double t6532;
  double t6566;
  double t6571;
  double t7735;
  double t7736;
  double t7737;
  double t7849;
  double t7850;
  double t7851;
  double t7948;
  double t7949;
  double t7951;
  double t7741;
  double t7743;
  double t7744;
  double t7762;
  double t7763;
  double t7764;
  double t6938;
  double t6963;
  double t6966;
  double t7859;
  double t7860;
  double t7861;
  double t7962;
  double t7963;
  double t7964;
  double t7227;
  double t7799;
  double t7877;
  double t7878;
  double t7879;
  double t7975;
  double t7976;
  double t7977;
  double t7978;
  double t7979;
  double t7592;
  double t7598;
  double t7600;
  double t7826;
  double t7827;
  double t7828;
  double t7904;
  double t7905;
  double t7906;
  double t7907;
  double t7909;
  double t7715;
  double t7716;
  double t7718;
  double t7936;
  double t7937;
  double t7939;
  double t7995;
  double t7996;
  double t7997;
  double t8000;
  double t8004;
  double t6574;
  double t7739;
  double t7852;
  double t7854;
  double t7952;
  double t7953;
  double t8009;
  double t8010;
  double t8047;
  double t8048;
  double t7720;
  double t7840;
  double t7940;
  double t7941;
  double t7998;
  double t7999;
  double t8037;
  double t8038;
  t414 = Cos(var2[7]);
  t243 = Cos(var2[8]);
  t346 = Sin(var2[7]);
  t1403 = Sin(var2[8]);
  t1847 = Cos(var2[6]);
  t364 = -1.*t243*t346;
  t1473 = -1.*t414*t1403;
  t1704 = t364 + t1473;
  t151 = Sin(var2[6]);
  t1872 = t414*t243;
  t1970 = -1.*t346*t1403;
  t1998 = t1872 + t1970;
  t2852 = Sin(var2[2]);
  t2094 = t1847*t1998;
  t41 = Cos(var2[2]);
  t3727 = t243*t346;
  t3740 = t414*t1403;
  t3752 = t3727 + t3740;
  t1791 = t151*t1704;
  t2136 = t1791 + t2094;
  t2957 = t1847*t1704;
  t3005 = -1.*t151*t1998;
  t3462 = t2957 + t3005;
  t2193 = t41*t2136;
  t3612 = t2852*t3462;
  t3617 = t2193 + t3612;
  t3762 = -1.*t151*t3752;
  t3824 = t3762 + t2094;
  t3879 = t2852*t3824;
  t3892 = t1847*t3752;
  t3899 = t151*t1998;
  t4021 = t3892 + t3899;
  t4180 = t41*t4021;
  t4253 = t3879 + t4180;
  t5582 = -1.*t243;
  t5607 = 1. + t5582;
  t5669 = -1.3127*t5607;
  t5705 = -1.3127*t243;
  t5709 = -0.06*t1403;
  t5717 = t5669 + t5705 + t5709;
  t5427 = -1.*t414;
  t5475 = 1. + t5427;
  t5478 = -0.9063*t5475;
  t5543 = -0.06*t243*t346;
  t5721 = t414*t5717;
  t5749 = t5478 + t5543 + t5721;
  t5899 = 0.06*t414*t243;
  t5900 = 0.9063*t346;
  t5917 = t346*t5717;
  t5922 = t5899 + t5900 + t5917;
  t6081 = -1.*t1847;
  t6154 = 1. + t6081;
  t6168 = -0.4999*t6154;
  t6190 = t1847*t5749;
  t6231 = -1.*t151*t5922;
  t6248 = t6168 + t6190 + t6231;
  t5289 = 0.4999*t151;
  t5855 = t151*t5749;
  t5944 = t1847*t5922;
  t6010 = t5289 + t5855 + t5944;
  t4801 = t41*t3824;
  t4861 = -1.*t2852*t4021;
  t4891 = t4801 + t4861;
  t6485 = 0.9063*t243;
  t6494 = t243*t5717;
  t6505 = 0.06*t243*t1403;
  t6531 = t6485 + t6494 + t6505;
  t4613 = -1.*t2852*t2136;
  t4622 = t41*t3462;
  t4627 = t4613 + t4622;
  t6537 = Power(t243,2);
  t6548 = -0.06*t6537;
  t6554 = 0.9063*t1403;
  t6559 = t5717*t1403;
  t6561 = t6548 + t6554 + t6559;
  t6378 = t5922*t3752;
  t6421 = 0.4999*t1998;
  t6440 = t5749*t1998;
  t6448 = t6378 + t6421 + t6440;
  t6456 = -1.*t5749*t1704;
  t6458 = 0.4999*t3752;
  t6459 = -1.*t5922*t1998;
  t6471 = t6456 + t6458 + t6459;
  t6032 = -1.*t6010*t2136;
  t6257 = -1.*t6248*t3462;
  t6265 = t6032 + t6257;
  t6308 = t6248*t3824;
  t6312 = t6010*t4021;
  t6348 = t6308 + t6312;
  t6581 = -1.*var1[5];
  t6583 = var3[8] + t6581;
  t6594 = -1.*var1[4];
  t6595 = var3[7] + t6594;
  t6892 = -1.*t1847*t3752;
  t6894 = t6892 + t3005;
  t6905 = t2852*t6894;
  t6909 = t4801 + t6905;
  t6632 = -1.*var1[3];
  t6635 = var3[6] + t6632;
  t6923 = -1.*t151*t1704;
  t6926 = -1.*t1847*t1998;
  t6927 = t6923 + t6926;
  t6928 = t2852*t6927;
  t6932 = t6928 + t4622;
  t6684 = -1.*var1[0];
  t6720 = var3[0] + t6684;
  t6759 = -1.*var1[1];
  t6767 = var3[1] + t6759;
  t6830 = -1.*t2852*t3462;
  t6838 = -1.*t2852*t3824;
  t6875 = -1.*var1[2];
  t6877 = var3[2] + t6875;
  t7090 = -0.4999*t151;
  t7093 = -1.*t151*t5749;
  t7102 = -1.*t1847*t5922;
  t7104 = t7090 + t7093 + t7102;
  t7079 = 0.4999*t1847;
  t7082 = t7079 + t6190 + t6231;
  t7181 = -1.*t414*t243;
  t7183 = t346*t1403;
  t7187 = t7181 + t7183;
  t7266 = -0.06*t414*t243;
  t7267 = -0.9063*t346;
  t7271 = -1.*t346*t5717;
  t7317 = t7266 + t7267 + t7271;
  t7250 = 0.9063*t414;
  t7255 = t7250 + t5543 + t5721;
  t7189 = t1847*t7187;
  t7195 = t6923 + t7189;
  t7197 = t2852*t7195;
  t7205 = t151*t7187;
  t7206 = t2957 + t7205;
  t7213 = t41*t7206;
  t7215 = t7197 + t7213;
  t7518 = t1847*t7255;
  t7526 = t151*t7317;
  t7531 = t7518 + t7526;
  t7488 = -1.*t151*t7255;
  t7501 = t1847*t7317;
  t7504 = t7488 + t7501;
  t7171 = -0.06857142*t6583*t3617;
  t7172 = 1.142857*t6561*t3617;
  t7580 = -0.06*t243;
  t7581 = 0. + t7580;
  t7226 = 1.142857*t6531*t7215;
  t7244 = 1.142857*t6471*t3617;
  t7246 = 0.4999*t1704;
  t7248 = t5749*t1704;
  t7322 = t5922*t1998;
  t7360 = -1.*t5922*t1704;
  t7606 = t7581*t346;
  t7610 = -0.06*t414*t1403;
  t7611 = t7606 + t7610;
  t7613 = t414*t7581;
  t7614 = 0.06*t346*t1403;
  t7616 = t7613 + t7614;
  t7369 = -1.*t5749*t7187;
  t7380 = 1.142857*t6448*t7215;
  t7388 = 2.285714*t3617*t4253;
  t7392 = 2.285714*t3617*t7215;
  t7398 = t7388 + t7392;
  t7399 = t6720*t7398;
  t7400 = 1.142857*t4627*t4253;
  t7404 = 1.142857*t3617*t4891;
  t7409 = 1.142857*t4627*t7215;
  t7415 = t41*t7195;
  t7417 = -1.*t2852*t7206;
  t7420 = t7415 + t7417;
  t7425 = 1.142857*t3617*t7420;
  t7430 = t7400 + t7404 + t7409 + t7425;
  t7440 = t6767*t7430;
  t7457 = 1.142857*t3617*t6265;
  t7460 = t6010*t2136;
  t7512 = t6248*t3462;
  t7557 = 1.142857*t6348*t7215;
  t7647 = -1.*t151*t7611;
  t7648 = t1847*t7616;
  t7650 = t7647 + t7648;
  t7664 = t1847*t7611;
  t7665 = t151*t7616;
  t7667 = t7664 + t7665;
  t7563 = -1.*t6248*t7195;
  t7569 = -1.*t6010*t7206;
  t3705 = Power(t3617,2);
  t4257 = Power(t4253,2);
  t4792 = -1.142857*t4627*t3617;
  t5188 = -1.142857*t4253*t4891;
  t5194 = t4792 + t5188;
  t6770 = Power(t4627,2);
  t6864 = Power(t4891,2);
  t6843 = -1.*t41*t4021;
  t6847 = t6838 + t6843;
  t6819 = -1.*t41*t2136;
  t6831 = t6819 + t6830;
  t6777 = 1.142857*t6770;
  t6835 = 1.142857*t6831*t3617;
  t6862 = 1.142857*t6847*t4253;
  t6867 = 1.142857*t6864;
  t6868 = t6777 + t6835 + t6862 + t6867;
  t7018 = t41*t6894;
  t7023 = t6838 + t7018;
  t7007 = t41*t6927;
  t7008 = t7007 + t6830;
  t6995 = 1.142857*t6932*t4627;
  t7010 = 1.142857*t7008*t3617;
  t7037 = 1.142857*t7023*t4253;
  t7044 = 1.142857*t6909*t4891;
  t7057 = t6995 + t7010 + t7037 + t7044;
  t7073 = -1.*t6248*t6927;
  t7089 = -1.*t7082*t2136;
  t7107 = -1.*t7104*t3462;
  t7108 = -1.*t6010*t3462;
  t7117 = t7073 + t7089 + t7107 + t7108;
  t7122 = t7104*t3824;
  t7144 = t6010*t3824;
  t7156 = t6248*t6894;
  t7157 = t7082*t4021;
  t7158 = t7122 + t7144 + t7156 + t7157;
  t7258 = t7255*t3752;
  t7319 = t7317*t1998;
  t7339 = t7246 + t7248 + t7258 + t7319 + t7322;
  t7353 = -1.*t7317*t1704;
  t7364 = -1.*t7255*t1998;
  t7372 = t7353 + t7360 + t6421 + t7364 + t7369;
  t7505 = t7504*t3824;
  t7536 = t7531*t4021;
  t7537 = t7460 + t7505 + t7512 + t7536;
  t7559 = -1.*t7531*t2136;
  t7560 = -1.*t7504*t3462;
  t7570 = t7559 + t7560 + t7563 + t7569;
  t7795 = -0.06857142*t6583*t4627;
  t7796 = 1.142857*t6561*t4627;
  t7582 = t7581*t243;
  t7583 = 0.06*t6537;
  t7584 = -0.9063*t1403;
  t7586 = -1.*t5717*t1403;
  t7588 = Power(t1403,2);
  t7589 = -0.06*t7588;
  t7590 = t7582 + t7583 + t7584 + t7586 + t7589;
  t7593 = t7581*t1403;
  t7594 = 0.12*t243*t1403;
  t7597 = t6485 + t6494 + t7593 + t7594;
  t7798 = 1.142857*t6531*t7420;
  t7801 = 1.142857*t6471*t4627;
  t7612 = t7611*t3752;
  t7617 = t1998*t7616;
  t7622 = t7246 + t7248 + t7612 + t7322 + t7617;
  t7635 = -1.*t7611*t1998;
  t7636 = -1.*t1704*t7616;
  t7640 = t7360 + t6421 + t7635 + t7636 + t7369;
  t7805 = 1.142857*t6448*t7420;
  t7810 = 2.285714*t4627*t4891;
  t7815 = 2.285714*t4627*t7420;
  t7816 = t7810 + t7815;
  t7817 = t6767*t7816;
  t7818 = t6720*t7430;
  t7819 = 1.142857*t4627*t6265;
  t7651 = t3824*t7650;
  t7668 = t4021*t7667;
  t7669 = t7460 + t7512 + t7651 + t7668;
  t7821 = 1.142857*t6348*t7420;
  t7672 = -1.*t3462*t7650;
  t7677 = -1.*t2136*t7667;
  t7678 = t7672 + t7677 + t7563 + t7569;
  t7700 = 1.142857*t4627*t3617;
  t7705 = 1.142857*t4253*t4891;
  t7707 = t7700 + t7705;
  t6878 = 1.142857*t6265*t4891;
  t6880 = 1.142857*t4627*t6348;
  t6884 = t6878 + t6880;
  t6640 = 1.142857*t6448*t4627;
  t6646 = 1.142857*t6471*t4891;
  t6651 = t6640 + t6646;
  t6596 = 1.142857*t6531*t4627;
  t6601 = 1.142857*t6561*t4891;
  t6611 = t6596 + t6601;
  t6301 = -1.142857*t6265*t4253;
  t6356 = -1.142857*t3617*t6348;
  t6376 = t6301 + t6356;
  t7725 = -1.142857*t6265*t4891;
  t7726 = -1.142857*t4627*t6348;
  t7727 = t7725 + t7726;
  t7756 = 1.142857*t6265*t6847;
  t7757 = 1.142857*t6831*t6348;
  t7758 = t7756 + t7757;
  t7783 = 1.142857*t6265*t7023;
  t7784 = 1.142857*t7117*t4891;
  t7785 = 1.142857*t7008*t6348;
  t7786 = 1.142857*t4627*t7158;
  t7787 = t7783 + t7784 + t7785 + t7786;
  t7068 = 1.142857*t6265*t6909;
  t7119 = 1.142857*t7117*t4253;
  t7121 = 1.142857*t6932*t6348;
  t7161 = 1.142857*t3617*t7158;
  t7164 = t7068 + t7119 + t7121 + t7161;
  t7552 = 1.142857*t3617*t7537;
  t7571 = 1.142857*t4253*t7570;
  t7573 = t7457 + t7552 + t7557 + t7571;
  t7820 = 1.142857*t4627*t7537;
  t7822 = 1.142857*t4891*t7570;
  t7823 = t7819 + t7820 + t7821 + t7822;
  t7670 = 1.142857*t3617*t7669;
  t7679 = 1.142857*t4253*t7678;
  t7680 = t7457 + t7670 + t7557 + t7679;
  t7834 = 1.142857*t4627*t7669;
  t7835 = 1.142857*t4891*t7678;
  t7836 = t7819 + t7834 + t7821 + t7835;
  t7708 = 1.142857*t6265*t4253;
  t7710 = 1.142857*t3617*t6348;
  t7711 = t7708 + t7710;
  t7841 = Power(t6265,2);
  t7843 = Power(t6348,2);
  t6452 = -1.142857*t6448*t3617;
  t6472 = -1.142857*t6471*t4253;
  t6482 = t6452 + t6472;
  t7729 = -1.142857*t6448*t4627;
  t7733 = -1.142857*t6471*t4891;
  t7734 = t7729 + t7733;
  t7846 = -1.142857*t6471*t6265;
  t7847 = -1.142857*t6448*t6348;
  t7848 = -0.0085 + t7846 + t7847;
  t7747 = 1.142857*t6448*t6831;
  t7748 = 1.142857*t6471*t6847;
  t7749 = t7747 + t7748;
  t7766 = 1.142857*t6448*t7008;
  t7769 = 1.142857*t6471*t7023;
  t7774 = t7766 + t7769;
  t6968 = 1.142857*t6448*t6932;
  t6970 = 1.142857*t6471*t6909;
  t6975 = t6968 + t6970;
  t7863 = 1.142857*t6471*t7117;
  t7864 = 1.142857*t6448*t7158;
  t7865 = t7863 + t7864;
  t7347 = 1.142857*t7339*t3617;
  t7375 = 1.142857*t7372*t4253;
  t7385 = t7244 + t7347 + t7375 + t7380;
  t7802 = 1.142857*t7339*t4627;
  t7804 = 1.142857*t7372*t4891;
  t7806 = t7801 + t7802 + t7804 + t7805;
  t7881 = 1.142857*t7372*t6265;
  t7882 = 1.142857*t6448*t7537;
  t7888 = 1.142857*t7339*t6348;
  t7889 = 1.142857*t6471*t7570;
  t7890 = t7881 + t7882 + t7888 + t7889;
  t7627 = 1.142857*t7622*t3617;
  t7641 = 1.142857*t7640*t4253;
  t7645 = t7244 + t7627 + t7641 + t7380;
  t7830 = 1.142857*t7622*t4627;
  t7831 = 1.142857*t7640*t4891;
  t7832 = t7801 + t7830 + t7831 + t7805;
  t7913 = 1.142857*t7640*t6265;
  t7914 = 1.142857*t7622*t6348;
  t7915 = 1.142857*t6448*t7669;
  t7916 = 1.142857*t6471*t7678;
  t7917 = t7913 + t7914 + t7915 + t7916;
  t7712 = 1.142857*t6448*t3617;
  t7713 = 1.142857*t6471*t4253;
  t7714 = t7712 + t7713;
  t7933 = 1.142857*t6471*t6265;
  t7934 = 1.142857*t6448*t6348;
  t7935 = 0.0085 + t7933 + t7934;
  t7942 = Power(t6448,2);
  t7945 = Power(t6471,2);
  t6532 = -1.142857*t6531*t3617;
  t6566 = -1.142857*t6561*t4253;
  t6571 = t6532 + t6566;
  t7735 = -1.142857*t6531*t4627;
  t7736 = -1.142857*t6561*t4891;
  t7737 = t7735 + t7736;
  t7849 = -1.142857*t6561*t6265;
  t7850 = -1.142857*t6531*t6348;
  t7851 = -0.0085 + t7849 + t7850;
  t7948 = -1.142857*t6531*t6448;
  t7949 = -1.142857*t6561*t6471;
  t7951 = -0.0085 + t7948 + t7949;
  t7741 = 1.142857*t6531*t6831;
  t7743 = 1.142857*t6561*t6847;
  t7744 = t7741 + t7743;
  t7762 = 1.142857*t6531*t7008;
  t7763 = 1.142857*t6561*t7023;
  t7764 = t7762 + t7763;
  t6938 = 1.142857*t6531*t6932;
  t6963 = 1.142857*t6561*t6909;
  t6966 = t6938 + t6963;
  t7859 = 1.142857*t6561*t7117;
  t7860 = 1.142857*t6531*t7158;
  t7861 = t7859 + t7860;
  t7962 = 1.142857*t6531*t7339;
  t7963 = 1.142857*t6561*t7372;
  t7964 = t7962 + t7963;
  t7227 = t7172 + t7226;
  t7799 = t7796 + t7798;
  t7877 = 1.142857*t6531*t7537;
  t7878 = 1.142857*t6561*t7570;
  t7879 = t7877 + t7878;
  t7975 = 1.142857*t7590*t6448;
  t7976 = 1.142857*t7597*t6471;
  t7977 = 1.142857*t6531*t7622;
  t7978 = 1.142857*t6561*t7640;
  t7979 = t7975 + t7976 + t7977 + t7978;
  t7592 = 1.142857*t7590*t3617;
  t7598 = 1.142857*t7597*t4253;
  t7600 = t7172 + t7592 + t7598 + t7226;
  t7826 = 1.142857*t7590*t4627;
  t7827 = 1.142857*t7597*t4891;
  t7828 = t7796 + t7826 + t7827 + t7798;
  t7904 = 1.142857*t7597*t6265;
  t7905 = 1.142857*t7590*t6348;
  t7906 = 1.142857*t6531*t7669;
  t7907 = 1.142857*t6561*t7678;
  t7909 = t7904 + t7905 + t7906 + t7907;
  t7715 = 1.142857*t6531*t3617;
  t7716 = 1.142857*t6561*t4253;
  t7718 = t7715 + t7716;
  t7936 = 1.142857*t6561*t6265;
  t7937 = 1.142857*t6531*t6348;
  t7939 = 0.0085 + t7936 + t7937;
  t7995 = 1.142857*t6531*t6448;
  t7996 = 1.142857*t6561*t6471;
  t7997 = 0.0085 + t7995 + t7996;
  t8000 = Power(t6531,2);
  t8004 = Power(t6561,2);
  t6574 = 0.06857142*t4253;
  t7739 = 0.06857142*t4891;
  t7852 = 0.06857142*t6265;
  t7854 = -0.0085 + t7852;
  t7952 = 0.06857142*t6471;
  t7953 = -0.0085 + t7952;
  t8009 = 0.06857142*t6561;
  t8010 = -0.0085 + t8009;
  t8047 = -0.06857142*t6767*t4627;
  t8048 = -0.06857142*t6720*t3617;
  t7720 = -0.06857142*t4253;
  t7840 = -0.06857142*t4891;
  t7940 = -0.06857142*t6265;
  t7941 = 0.0085 + t7940;
  t7998 = -0.06857142*t6471;
  t7999 = 0.0085 + t7998;
  t8037 = -0.06857142*t6561;
  t8038 = 0.0085 + t8037;
  p_output1[0]=-1.142857*t3705 - 1.142857*t4257;
  p_output1[1]=t5194;
  p_output1[2]=t6376;
  p_output1[3]=t6482;
  p_output1[4]=t6571;
  p_output1[5]=t6574;
  p_output1[6]=-0.06857142*t4891*t6583 + t6595*t6611 + t6635*t6651 + (2.285714*t3617*t4627 + 2.285714*t4253*t4891)*t6720 + t6767*t6868 + t6877*t6884;
  p_output1[7]=-0.06857142*t6583*t6909 + t6720*(2.285714*t4253*t6909 + 2.285714*t3617*t6932) + t6595*t6966 + t6635*t6975 + t6767*t7057 + t6877*t7164;
  p_output1[8]=t7171 + t6595*t7227 + t6635*t7385 + t7399 + t7440 + t6877*t7573;
  p_output1[9]=t7171 + t7399 + t7440 + t6595*t7600 + t6635*t7645 + t6877*t7680;
  p_output1[10]=1.142857*t3705 + 1.142857*t4257;
  p_output1[11]=t7707;
  p_output1[12]=t7711;
  p_output1[13]=t7714;
  p_output1[14]=t7718;
  p_output1[15]=t7720;
  p_output1[16]=t5194;
  p_output1[17]=-1.142857*t6770 - 1.142857*t6864;
  p_output1[18]=t7727;
  p_output1[19]=t7734;
  p_output1[20]=t7737;
  p_output1[21]=t7739;
  p_output1[22]=-0.06857142*t6583*t6847 + t6767*(2.285714*t4627*t6831 + 2.285714*t4891*t6847) + t6720*t6868 + t6595*t7744 + t6635*t7749 + t6877*t7758;
  p_output1[23]=-0.06857142*t6583*t7023 + t6767*(2.285714*t4627*t7008 + 2.285714*t4891*t7023) + t6720*t7057 + t6595*t7764 + t6635*t7774 + t6877*t7787;
  p_output1[24]=t7795 + t6595*t7799 + t6635*t7806 + t7817 + t7818 + t6877*t7823;
  p_output1[25]=t7795 + t7817 + t7818 + t6595*t7828 + t6635*t7832 + t6877*t7836;
  p_output1[26]=t7707;
  p_output1[27]=t6777 + t6867;
  p_output1[28]=t6884;
  p_output1[29]=t6651;
  p_output1[30]=t6611;
  p_output1[31]=t7840;
  p_output1[32]=t6376;
  p_output1[33]=t7727;
  p_output1[34]=-0.0085 - 1.142857*t7841 - 1.142857*t7843;
  p_output1[35]=t7848;
  p_output1[36]=t7851;
  p_output1[37]=t7854;
  p_output1[38]=t6720*t6884 + t6767*t7758;
  p_output1[39]=-0.06857142*t6583*t7117 + t6877*(2.285714*t6265*t7117 + 2.285714*t6348*t7158) + t6720*t7164 + t6767*t7787 + t6595*t7861 + t6635*t7865;
  p_output1[40]=-0.06857142*t6583*t7570 + t6877*(2.285714*t6348*t7537 + 2.285714*t6265*t7570) + t6720*t7573 + t6767*t7823 + t6595*t7879 + t6635*t7890;
  p_output1[41]=-0.06857142*t6583*t7678 + t6877*(2.285714*t6348*t7669 + 2.285714*t6265*t7678) + t6720*t7680 + t6767*t7836 + t6595*t7909 + t6635*t7917;
  p_output1[42]=t7711;
  p_output1[43]=t6884;
  p_output1[44]=0.0085 + 1.142857*t7841 + 1.142857*t7843;
  p_output1[45]=t7935;
  p_output1[46]=t7939;
  p_output1[47]=t7941;
  p_output1[48]=t6482;
  p_output1[49]=t7734;
  p_output1[50]=t7848;
  p_output1[51]=-0.0085 - 1.142857*t7942 - 1.142857*t7945;
  p_output1[52]=t7951;
  p_output1[53]=t7953;
  p_output1[54]=t6651*t6720 + t6767*t7749;
  p_output1[55]=t6720*t6975 + t6767*t7774 + t6877*t7865;
  p_output1[56]=-0.06857142*t6583*t7372 + t6635*(2.285714*t6448*t7339 + 2.285714*t6471*t7372) + t6720*t7385 + t6767*t7806 + t6877*t7890 + t6595*t7964;
  p_output1[57]=-0.06857142*t6583*t7640 + t6635*(2.285714*t6448*t7622 + 2.285714*t6471*t7640) + t6720*t7645 + t6767*t7832 + t6877*t7917 + t6595*t7979;
  p_output1[58]=t7714;
  p_output1[59]=t6651;
  p_output1[60]=t7935;
  p_output1[61]=0.0085 + 1.142857*t7942 + 1.142857*t7945;
  p_output1[62]=t7997;
  p_output1[63]=t7999;
  p_output1[64]=t6571;
  p_output1[65]=t7737;
  p_output1[66]=t7851;
  p_output1[67]=t7951;
  p_output1[68]=-0.0085 - 1.142857*t8000 - 1.142857*t8004;
  p_output1[69]=t8010;
  p_output1[70]=t6611*t6720 + t6767*t7744;
  p_output1[71]=t6720*t6966 + t6767*t7764 + t6877*t7861;
  p_output1[72]=t6720*t7227 + t6767*t7799 + t6877*t7879 + t6635*t7964;
  p_output1[73]=-0.06857142*t6583*t7597 + t6595*(2.285714*t6531*t7590 + 2.285714*t6561*t7597) + t6720*t7600 + t6767*t7828 + t6877*t7909 + t6635*t7979;
  p_output1[74]=t7718;
  p_output1[75]=t6611;
  p_output1[76]=t7939;
  p_output1[77]=t7997;
  p_output1[78]=0.0085 + 1.142857*t8000 + 1.142857*t8004;
  p_output1[79]=t8038;
  p_output1[80]=t6574;
  p_output1[81]=t7739;
  p_output1[82]=t7854;
  p_output1[83]=t7953;
  p_output1[84]=t8010;
  p_output1[85]=-0.0126142852;
  p_output1[86]=-0.06857142*t4891*t6720 - 0.06857142*t6767*t6847;
  p_output1[87]=-0.06857142*t6720*t6909 - 0.06857142*t6767*t7023 - 0.06857142*t6877*t7117;
  p_output1[88]=-0.06857142*t6635*t7372 - 0.06857142*t6877*t7570 + t8047 + t8048;
  p_output1[89]=-0.06857142*t6595*t7597 - 0.06857142*t6635*t7640 - 0.06857142*t6877*t7678 + t8047 + t8048;
  p_output1[90]=t7720;
  p_output1[91]=t7840;
  p_output1[92]=t7941;
  p_output1[93]=t7999;
  p_output1[94]=t8038;
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

#include "J_dxDiscreteMap7_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void J_dxDiscreteMap7_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
