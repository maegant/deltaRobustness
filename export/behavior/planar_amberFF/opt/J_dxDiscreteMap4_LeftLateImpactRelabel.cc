/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:52 GMT-08:00
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
  double t2021;
  double t890;
  double t1519;
  double t2090;
  double t2901;
  double t1979;
  double t2091;
  double t2466;
  double t647;
  double t2962;
  double t2998;
  double t3018;
  double t3214;
  double t3057;
  double t138;
  double t4003;
  double t4062;
  double t4236;
  double t2764;
  double t3102;
  double t3247;
  double t3352;
  double t3541;
  double t3180;
  double t3597;
  double t3607;
  double t4304;
  double t4307;
  double t4376;
  double t4444;
  double t4455;
  double t4486;
  double t4539;
  double t4580;
  double t5196;
  double t5210;
  double t5259;
  double t5262;
  double t5366;
  double t5376;
  double t5007;
  double t5094;
  double t5103;
  double t5123;
  double t5410;
  double t5459;
  double t5526;
  double t5644;
  double t5661;
  double t5672;
  double t5741;
  double t5781;
  double t5808;
  double t5820;
  double t5861;
  double t5979;
  double t5003;
  double t5509;
  double t5673;
  double t5697;
  double t4924;
  double t4944;
  double t4953;
  double t6407;
  double t6419;
  double t6431;
  double t6447;
  double t4796;
  double t4859;
  double t4886;
  double t6470;
  double t6474;
  double t6506;
  double t6527;
  double t6553;
  double t6202;
  double t6230;
  double t6271;
  double t6309;
  double t6362;
  double t6371;
  double t6376;
  double t6395;
  double t5725;
  double t6031;
  double t6049;
  double t6160;
  double t6162;
  double t6167;
  double t6574;
  double t6583;
  double t6593;
  double t6595;
  double t6948;
  double t6953;
  double t6954;
  double t6961;
  double t6636;
  double t6637;
  double t6964;
  double t6982;
  double t6985;
  double t6990;
  double t6994;
  double t6666;
  double t6671;
  double t6700;
  double t6718;
  double t6751;
  double t6768;
  double t6833;
  double t6840;
  double t7241;
  double t7244;
  double t7246;
  double t7256;
  double t7218;
  double t7219;
  double t7385;
  double t7396;
  double t7398;
  double t7548;
  double t7552;
  double t7553;
  double t7557;
  double t7541;
  double t7544;
  double t7399;
  double t7408;
  double t7425;
  double t7486;
  double t7490;
  double t7491;
  double t7496;
  double t7669;
  double t7670;
  double t7677;
  double t7644;
  double t7645;
  double t7653;
  double t7378;
  double t7379;
  double t7712;
  double t7713;
  double t7497;
  double t7518;
  double t7530;
  double t7535;
  double t7568;
  double t7578;
  double t7739;
  double t7744;
  double t7745;
  double t7750;
  double t7751;
  double t7752;
  double t7582;
  double t7593;
  double t7600;
  double t7601;
  double t7602;
  double t7610;
  double t7613;
  double t7614;
  double t7615;
  double t7617;
  double t7618;
  double t7622;
  double t7627;
  double t7630;
  double t7632;
  double t7640;
  double t7641;
  double t7668;
  double t7689;
  double t7765;
  double t7766;
  double t7769;
  double t7774;
  double t7775;
  double t7776;
  double t7704;
  double t7705;
  double t3969;
  double t4612;
  double t4892;
  double t4971;
  double t4976;
  double t6722;
  double t6792;
  double t6783;
  double t6784;
  double t6739;
  double t6755;
  double t6725;
  double t6760;
  double t6788;
  double t6804;
  double t6813;
  double t7165;
  double t7166;
  double t7117;
  double t7125;
  double t7105;
  double t7159;
  double t7183;
  double t7190;
  double t7192;
  double t7213;
  double t7225;
  double t7258;
  double t7266;
  double t7286;
  double t7297;
  double t7300;
  double t7303;
  double t7311;
  double t7316;
  double t7547;
  double t7562;
  double t7570;
  double t7577;
  double t7581;
  double t7588;
  double t7665;
  double t7679;
  double t7680;
  double t7692;
  double t7693;
  double t7706;
  double t7935;
  double t7937;
  double t7714;
  double t7715;
  double t7718;
  double t7720;
  double t7721;
  double t7722;
  double t7723;
  double t7729;
  double t7730;
  double t7734;
  double t7939;
  double t7942;
  double t7749;
  double t7753;
  double t7754;
  double t7756;
  double t7757;
  double t7758;
  double t7948;
  double t7952;
  double t7959;
  double t7967;
  double t7968;
  double t7970;
  double t7971;
  double t7772;
  double t7778;
  double t7779;
  double t7974;
  double t7781;
  double t7782;
  double t7783;
  double t7799;
  double t7800;
  double t7801;
  double t6860;
  double t6865;
  double t6888;
  double t6639;
  double t6644;
  double t6649;
  double t6616;
  double t6620;
  double t6621;
  double t6137;
  double t6177;
  double t6188;
  double t7824;
  double t7825;
  double t7826;
  double t7863;
  double t7864;
  double t7865;
  double t7907;
  double t7909;
  double t7917;
  double t7929;
  double t7931;
  double t7211;
  double t7291;
  double t7292;
  double t7319;
  double t7322;
  double t7683;
  double t7707;
  double t7708;
  double t7973;
  double t7975;
  double t7978;
  double t7780;
  double t7784;
  double t7785;
  double t7994;
  double t7995;
  double t7996;
  double t7802;
  double t7804;
  double t7805;
  double t8002;
  double t8004;
  double t6317;
  double t6402;
  double t6405;
  double t7829;
  double t7830;
  double t7831;
  double t8009;
  double t8010;
  double t8011;
  double t7847;
  double t7848;
  double t7855;
  double t7875;
  double t7876;
  double t7877;
  double t7044;
  double t7045;
  double t7055;
  double t8031;
  double t8032;
  double t8036;
  double t7571;
  double t7592;
  double t7594;
  double t7946;
  double t7947;
  double t7949;
  double t8050;
  double t8051;
  double t8052;
  double t8053;
  double t8054;
  double t7755;
  double t7762;
  double t7763;
  double t7990;
  double t7991;
  double t7992;
  double t8072;
  double t8073;
  double t8074;
  double t8075;
  double t8076;
  double t7806;
  double t7807;
  double t7810;
  double t8088;
  double t8089;
  double t8090;
  double t8097;
  double t8101;
  double t6455;
  double t6555;
  double t6564;
  double t7832;
  double t7835;
  double t7838;
  double t8012;
  double t8013;
  double t8017;
  double t8104;
  double t8105;
  double t8106;
  double t7842;
  double t7843;
  double t7844;
  double t7871;
  double t7872;
  double t7873;
  double t7016;
  double t7027;
  double t7040;
  double t8027;
  double t8028;
  double t8029;
  double t8121;
  double t8122;
  double t8123;
  double t7512;
  double t7940;
  double t8046;
  double t8047;
  double t8048;
  double t8139;
  double t8140;
  double t8141;
  double t8142;
  double t8143;
  double t7726;
  double t7735;
  double t7736;
  double t7983;
  double t7984;
  double t7985;
  double t8065;
  double t8066;
  double t8067;
  double t8068;
  double t8069;
  double t7815;
  double t7816;
  double t7817;
  double t8091;
  double t8093;
  double t8094;
  double t8156;
  double t8157;
  double t8158;
  double t8161;
  double t8163;
  double t6570;
  double t7839;
  double t8020;
  double t8021;
  double t8107;
  double t8108;
  double t8166;
  double t8167;
  double t8215;
  double t8216;
  double t7818;
  double t8001;
  double t8095;
  double t8096;
  double t8159;
  double t8160;
  double t8202;
  double t8203;
  t2021 = Cos(var2[4]);
  t890 = Cos(var2[5]);
  t1519 = Sin(var2[4]);
  t2090 = Sin(var2[5]);
  t2901 = Cos(var2[3]);
  t1979 = -1.*t890*t1519;
  t2091 = -1.*t2021*t2090;
  t2466 = t1979 + t2091;
  t647 = Sin(var2[3]);
  t2962 = t2021*t890;
  t2998 = -1.*t1519*t2090;
  t3018 = t2962 + t2998;
  t3214 = Sin(var2[2]);
  t3057 = t2901*t3018;
  t138 = Cos(var2[2]);
  t4003 = t890*t1519;
  t4062 = t2021*t2090;
  t4236 = t4003 + t4062;
  t2764 = t647*t2466;
  t3102 = t2764 + t3057;
  t3247 = t2901*t2466;
  t3352 = -1.*t647*t3018;
  t3541 = t3247 + t3352;
  t3180 = t138*t3102;
  t3597 = t3214*t3541;
  t3607 = t3180 + t3597;
  t4304 = -1.*t647*t4236;
  t4307 = t4304 + t3057;
  t4376 = t3214*t4307;
  t4444 = t2901*t4236;
  t4455 = t647*t3018;
  t4486 = t4444 + t4455;
  t4539 = t138*t4486;
  t4580 = t4376 + t4539;
  t5196 = -1.*t890;
  t5210 = 1. + t5196;
  t5259 = -1.3127*t5210;
  t5262 = -1.3127*t890;
  t5366 = -0.06*t2090;
  t5376 = t5259 + t5262 + t5366;
  t5007 = -1.*t2021;
  t5094 = 1. + t5007;
  t5103 = -0.9063*t5094;
  t5123 = -0.06*t890*t1519;
  t5410 = t2021*t5376;
  t5459 = t5103 + t5123 + t5410;
  t5526 = 0.06*t2021*t890;
  t5644 = 0.9063*t1519;
  t5661 = t1519*t5376;
  t5672 = t5526 + t5644 + t5661;
  t5741 = -1.*t2901;
  t5781 = 1. + t5741;
  t5808 = -0.4999*t5781;
  t5820 = t2901*t5459;
  t5861 = -1.*t647*t5672;
  t5979 = t5808 + t5820 + t5861;
  t5003 = 0.4999*t647;
  t5509 = t647*t5459;
  t5673 = t2901*t5672;
  t5697 = t5003 + t5509 + t5673;
  t4924 = t138*t4307;
  t4944 = -1.*t3214*t4486;
  t4953 = t4924 + t4944;
  t6407 = 0.9063*t890;
  t6419 = t890*t5376;
  t6431 = 0.06*t890*t2090;
  t6447 = t6407 + t6419 + t6431;
  t4796 = -1.*t3214*t3102;
  t4859 = t138*t3541;
  t4886 = t4796 + t4859;
  t6470 = Power(t890,2);
  t6474 = -0.06*t6470;
  t6506 = 0.9063*t2090;
  t6527 = t5376*t2090;
  t6553 = t6474 + t6506 + t6527;
  t6202 = t5672*t4236;
  t6230 = 0.4999*t3018;
  t6271 = t5459*t3018;
  t6309 = t6202 + t6230 + t6271;
  t6362 = -1.*t5459*t2466;
  t6371 = 0.4999*t4236;
  t6376 = -1.*t5672*t3018;
  t6395 = t6362 + t6371 + t6376;
  t5725 = -1.*t5697*t3102;
  t6031 = -1.*t5979*t3541;
  t6049 = t5725 + t6031;
  t6160 = t5979*t4307;
  t6162 = t5697*t4486;
  t6167 = t6160 + t6162;
  t6574 = -1.*var1[8];
  t6583 = var3[5] + t6574;
  t6593 = -1.*var1[7];
  t6595 = var3[4] + t6593;
  t6948 = -1.*t2901*t4236;
  t6953 = t6948 + t3352;
  t6954 = t3214*t6953;
  t6961 = t4924 + t6954;
  t6636 = -1.*var1[6];
  t6637 = var3[3] + t6636;
  t6964 = -1.*t647*t2466;
  t6982 = -1.*t2901*t3018;
  t6985 = t6964 + t6982;
  t6990 = t3214*t6985;
  t6994 = t6990 + t4859;
  t6666 = -1.*var1[0];
  t6671 = var3[0] + t6666;
  t6700 = -1.*var1[1];
  t6718 = var3[1] + t6700;
  t6751 = -1.*t3214*t3541;
  t6768 = -1.*t3214*t4307;
  t6833 = -1.*var1[2];
  t6840 = var3[2] + t6833;
  t7241 = -0.4999*t647;
  t7244 = -1.*t647*t5459;
  t7246 = -1.*t2901*t5672;
  t7256 = t7241 + t7244 + t7246;
  t7218 = 0.4999*t2901;
  t7219 = t7218 + t5820 + t5861;
  t7385 = -1.*t2021*t890;
  t7396 = t1519*t2090;
  t7398 = t7385 + t7396;
  t7548 = -0.06*t2021*t890;
  t7552 = -0.9063*t1519;
  t7553 = -1.*t1519*t5376;
  t7557 = t7548 + t7552 + t7553;
  t7541 = 0.9063*t2021;
  t7544 = t7541 + t5123 + t5410;
  t7399 = t2901*t7398;
  t7408 = t6964 + t7399;
  t7425 = t3214*t7408;
  t7486 = t647*t7398;
  t7490 = t3247 + t7486;
  t7491 = t138*t7490;
  t7496 = t7425 + t7491;
  t7669 = t2901*t7544;
  t7670 = t647*t7557;
  t7677 = t7669 + t7670;
  t7644 = -1.*t647*t7544;
  t7645 = t2901*t7557;
  t7653 = t7644 + t7645;
  t7378 = -0.06857142*t6583*t3607;
  t7379 = 1.142857*t6553*t3607;
  t7712 = -0.06*t890;
  t7713 = 0. + t7712;
  t7497 = 1.142857*t6447*t7496;
  t7518 = 1.142857*t6395*t3607;
  t7530 = 0.4999*t2466;
  t7535 = t5459*t2466;
  t7568 = t5672*t3018;
  t7578 = -1.*t5672*t2466;
  t7739 = t7713*t1519;
  t7744 = -0.06*t2021*t2090;
  t7745 = t7739 + t7744;
  t7750 = t2021*t7713;
  t7751 = 0.06*t1519*t2090;
  t7752 = t7750 + t7751;
  t7582 = -1.*t5459*t7398;
  t7593 = 1.142857*t6309*t7496;
  t7600 = 2.285714*t3607*t4580;
  t7601 = 2.285714*t3607*t7496;
  t7602 = t7600 + t7601;
  t7610 = t6671*t7602;
  t7613 = 1.142857*t4886*t4580;
  t7614 = 1.142857*t3607*t4953;
  t7615 = 1.142857*t4886*t7496;
  t7617 = t138*t7408;
  t7618 = -1.*t3214*t7490;
  t7622 = t7617 + t7618;
  t7627 = 1.142857*t3607*t7622;
  t7630 = t7613 + t7614 + t7615 + t7627;
  t7632 = t6718*t7630;
  t7640 = 1.142857*t3607*t6049;
  t7641 = t5697*t3102;
  t7668 = t5979*t3541;
  t7689 = 1.142857*t6167*t7496;
  t7765 = -1.*t647*t7745;
  t7766 = t2901*t7752;
  t7769 = t7765 + t7766;
  t7774 = t2901*t7745;
  t7775 = t647*t7752;
  t7776 = t7774 + t7775;
  t7704 = -1.*t5979*t7408;
  t7705 = -1.*t5697*t7490;
  t3969 = Power(t3607,2);
  t4612 = Power(t4580,2);
  t4892 = -1.142857*t4886*t3607;
  t4971 = -1.142857*t4580*t4953;
  t4976 = t4892 + t4971;
  t6722 = Power(t4886,2);
  t6792 = Power(t4953,2);
  t6783 = -1.*t138*t4486;
  t6784 = t6768 + t6783;
  t6739 = -1.*t138*t3102;
  t6755 = t6739 + t6751;
  t6725 = 1.142857*t6722;
  t6760 = 1.142857*t6755*t3607;
  t6788 = 1.142857*t6784*t4580;
  t6804 = 1.142857*t6792;
  t6813 = t6725 + t6760 + t6788 + t6804;
  t7165 = t138*t6953;
  t7166 = t6768 + t7165;
  t7117 = t138*t6985;
  t7125 = t7117 + t6751;
  t7105 = 1.142857*t6994*t4886;
  t7159 = 1.142857*t7125*t3607;
  t7183 = 1.142857*t7166*t4580;
  t7190 = 1.142857*t6961*t4953;
  t7192 = t7105 + t7159 + t7183 + t7190;
  t7213 = -1.*t5979*t6985;
  t7225 = -1.*t7219*t3102;
  t7258 = -1.*t7256*t3541;
  t7266 = -1.*t5697*t3541;
  t7286 = t7213 + t7225 + t7258 + t7266;
  t7297 = t7256*t4307;
  t7300 = t5697*t4307;
  t7303 = t5979*t6953;
  t7311 = t7219*t4486;
  t7316 = t7297 + t7300 + t7303 + t7311;
  t7547 = t7544*t4236;
  t7562 = t7557*t3018;
  t7570 = t7530 + t7535 + t7547 + t7562 + t7568;
  t7577 = -1.*t7557*t2466;
  t7581 = -1.*t7544*t3018;
  t7588 = t7577 + t7578 + t6230 + t7581 + t7582;
  t7665 = t7653*t4307;
  t7679 = t7677*t4486;
  t7680 = t7641 + t7665 + t7668 + t7679;
  t7692 = -1.*t7677*t3102;
  t7693 = -1.*t7653*t3541;
  t7706 = t7692 + t7693 + t7704 + t7705;
  t7935 = -0.06857142*t6583*t4886;
  t7937 = 1.142857*t6553*t4886;
  t7714 = t7713*t890;
  t7715 = 0.06*t6470;
  t7718 = -0.9063*t2090;
  t7720 = -1.*t5376*t2090;
  t7721 = Power(t2090,2);
  t7722 = -0.06*t7721;
  t7723 = t7714 + t7715 + t7718 + t7720 + t7722;
  t7729 = t7713*t2090;
  t7730 = 0.12*t890*t2090;
  t7734 = t6407 + t6419 + t7729 + t7730;
  t7939 = 1.142857*t6447*t7622;
  t7942 = 1.142857*t6395*t4886;
  t7749 = t7745*t4236;
  t7753 = t3018*t7752;
  t7754 = t7530 + t7535 + t7749 + t7568 + t7753;
  t7756 = -1.*t7745*t3018;
  t7757 = -1.*t2466*t7752;
  t7758 = t7578 + t6230 + t7756 + t7757 + t7582;
  t7948 = 1.142857*t6309*t7622;
  t7952 = 2.285714*t4886*t4953;
  t7959 = 2.285714*t4886*t7622;
  t7967 = t7952 + t7959;
  t7968 = t6718*t7967;
  t7970 = t6671*t7630;
  t7971 = 1.142857*t4886*t6049;
  t7772 = t4307*t7769;
  t7778 = t4486*t7776;
  t7779 = t7641 + t7668 + t7772 + t7778;
  t7974 = 1.142857*t6167*t7622;
  t7781 = -1.*t3541*t7769;
  t7782 = -1.*t3102*t7776;
  t7783 = t7781 + t7782 + t7704 + t7705;
  t7799 = 1.142857*t4886*t3607;
  t7800 = 1.142857*t4580*t4953;
  t7801 = t7799 + t7800;
  t6860 = 1.142857*t6049*t4953;
  t6865 = 1.142857*t4886*t6167;
  t6888 = t6860 + t6865;
  t6639 = 1.142857*t6309*t4886;
  t6644 = 1.142857*t6395*t4953;
  t6649 = t6639 + t6644;
  t6616 = 1.142857*t6447*t4886;
  t6620 = 1.142857*t6553*t4953;
  t6621 = t6616 + t6620;
  t6137 = -1.142857*t6049*t4580;
  t6177 = -1.142857*t3607*t6167;
  t6188 = t6137 + t6177;
  t7824 = -1.142857*t6049*t4953;
  t7825 = -1.142857*t4886*t6167;
  t7826 = t7824 + t7825;
  t7863 = 1.142857*t6049*t6784;
  t7864 = 1.142857*t6755*t6167;
  t7865 = t7863 + t7864;
  t7907 = 1.142857*t6049*t7166;
  t7909 = 1.142857*t7286*t4953;
  t7917 = 1.142857*t7125*t6167;
  t7929 = 1.142857*t4886*t7316;
  t7931 = t7907 + t7909 + t7917 + t7929;
  t7211 = 1.142857*t6049*t6961;
  t7291 = 1.142857*t7286*t4580;
  t7292 = 1.142857*t6994*t6167;
  t7319 = 1.142857*t3607*t7316;
  t7322 = t7211 + t7291 + t7292 + t7319;
  t7683 = 1.142857*t3607*t7680;
  t7707 = 1.142857*t4580*t7706;
  t7708 = t7640 + t7683 + t7689 + t7707;
  t7973 = 1.142857*t4886*t7680;
  t7975 = 1.142857*t4953*t7706;
  t7978 = t7971 + t7973 + t7974 + t7975;
  t7780 = 1.142857*t3607*t7779;
  t7784 = 1.142857*t4580*t7783;
  t7785 = t7640 + t7780 + t7689 + t7784;
  t7994 = 1.142857*t4886*t7779;
  t7995 = 1.142857*t4953*t7783;
  t7996 = t7971 + t7994 + t7974 + t7995;
  t7802 = 1.142857*t6049*t4580;
  t7804 = 1.142857*t3607*t6167;
  t7805 = t7802 + t7804;
  t8002 = Power(t6049,2);
  t8004 = Power(t6167,2);
  t6317 = -1.142857*t6309*t3607;
  t6402 = -1.142857*t6395*t4580;
  t6405 = t6317 + t6402;
  t7829 = -1.142857*t6309*t4886;
  t7830 = -1.142857*t6395*t4953;
  t7831 = t7829 + t7830;
  t8009 = -1.142857*t6395*t6049;
  t8010 = -1.142857*t6309*t6167;
  t8011 = -0.0085 + t8009 + t8010;
  t7847 = 1.142857*t6309*t6755;
  t7848 = 1.142857*t6395*t6784;
  t7855 = t7847 + t7848;
  t7875 = 1.142857*t6309*t7125;
  t7876 = 1.142857*t6395*t7166;
  t7877 = t7875 + t7876;
  t7044 = 1.142857*t6309*t6994;
  t7045 = 1.142857*t6395*t6961;
  t7055 = t7044 + t7045;
  t8031 = 1.142857*t6395*t7286;
  t8032 = 1.142857*t6309*t7316;
  t8036 = t8031 + t8032;
  t7571 = 1.142857*t7570*t3607;
  t7592 = 1.142857*t7588*t4580;
  t7594 = t7518 + t7571 + t7592 + t7593;
  t7946 = 1.142857*t7570*t4886;
  t7947 = 1.142857*t7588*t4953;
  t7949 = t7942 + t7946 + t7947 + t7948;
  t8050 = 1.142857*t7588*t6049;
  t8051 = 1.142857*t6309*t7680;
  t8052 = 1.142857*t7570*t6167;
  t8053 = 1.142857*t6395*t7706;
  t8054 = t8050 + t8051 + t8052 + t8053;
  t7755 = 1.142857*t7754*t3607;
  t7762 = 1.142857*t7758*t4580;
  t7763 = t7518 + t7755 + t7762 + t7593;
  t7990 = 1.142857*t7754*t4886;
  t7991 = 1.142857*t7758*t4953;
  t7992 = t7942 + t7990 + t7991 + t7948;
  t8072 = 1.142857*t7758*t6049;
  t8073 = 1.142857*t7754*t6167;
  t8074 = 1.142857*t6309*t7779;
  t8075 = 1.142857*t6395*t7783;
  t8076 = t8072 + t8073 + t8074 + t8075;
  t7806 = 1.142857*t6309*t3607;
  t7807 = 1.142857*t6395*t4580;
  t7810 = t7806 + t7807;
  t8088 = 1.142857*t6395*t6049;
  t8089 = 1.142857*t6309*t6167;
  t8090 = 0.0085 + t8088 + t8089;
  t8097 = Power(t6309,2);
  t8101 = Power(t6395,2);
  t6455 = -1.142857*t6447*t3607;
  t6555 = -1.142857*t6553*t4580;
  t6564 = t6455 + t6555;
  t7832 = -1.142857*t6447*t4886;
  t7835 = -1.142857*t6553*t4953;
  t7838 = t7832 + t7835;
  t8012 = -1.142857*t6553*t6049;
  t8013 = -1.142857*t6447*t6167;
  t8017 = -0.0085 + t8012 + t8013;
  t8104 = -1.142857*t6447*t6309;
  t8105 = -1.142857*t6553*t6395;
  t8106 = -0.0085 + t8104 + t8105;
  t7842 = 1.142857*t6447*t6755;
  t7843 = 1.142857*t6553*t6784;
  t7844 = t7842 + t7843;
  t7871 = 1.142857*t6447*t7125;
  t7872 = 1.142857*t6553*t7166;
  t7873 = t7871 + t7872;
  t7016 = 1.142857*t6447*t6994;
  t7027 = 1.142857*t6553*t6961;
  t7040 = t7016 + t7027;
  t8027 = 1.142857*t6553*t7286;
  t8028 = 1.142857*t6447*t7316;
  t8029 = t8027 + t8028;
  t8121 = 1.142857*t6447*t7570;
  t8122 = 1.142857*t6553*t7588;
  t8123 = t8121 + t8122;
  t7512 = t7379 + t7497;
  t7940 = t7937 + t7939;
  t8046 = 1.142857*t6447*t7680;
  t8047 = 1.142857*t6553*t7706;
  t8048 = t8046 + t8047;
  t8139 = 1.142857*t7723*t6309;
  t8140 = 1.142857*t7734*t6395;
  t8141 = 1.142857*t6447*t7754;
  t8142 = 1.142857*t6553*t7758;
  t8143 = t8139 + t8140 + t8141 + t8142;
  t7726 = 1.142857*t7723*t3607;
  t7735 = 1.142857*t7734*t4580;
  t7736 = t7379 + t7726 + t7735 + t7497;
  t7983 = 1.142857*t7723*t4886;
  t7984 = 1.142857*t7734*t4953;
  t7985 = t7937 + t7983 + t7984 + t7939;
  t8065 = 1.142857*t7734*t6049;
  t8066 = 1.142857*t7723*t6167;
  t8067 = 1.142857*t6447*t7779;
  t8068 = 1.142857*t6553*t7783;
  t8069 = t8065 + t8066 + t8067 + t8068;
  t7815 = 1.142857*t6447*t3607;
  t7816 = 1.142857*t6553*t4580;
  t7817 = t7815 + t7816;
  t8091 = 1.142857*t6553*t6049;
  t8093 = 1.142857*t6447*t6167;
  t8094 = 0.0085 + t8091 + t8093;
  t8156 = 1.142857*t6447*t6309;
  t8157 = 1.142857*t6553*t6395;
  t8158 = 0.0085 + t8156 + t8157;
  t8161 = Power(t6447,2);
  t8163 = Power(t6553,2);
  t6570 = 0.06857142*t4580;
  t7839 = 0.06857142*t4953;
  t8020 = 0.06857142*t6049;
  t8021 = -0.0085 + t8020;
  t8107 = 0.06857142*t6395;
  t8108 = -0.0085 + t8107;
  t8166 = 0.06857142*t6553;
  t8167 = -0.0085 + t8166;
  t8215 = -0.06857142*t6718*t4886;
  t8216 = -0.06857142*t6671*t3607;
  t7818 = -0.06857142*t4580;
  t8001 = -0.06857142*t4953;
  t8095 = -0.06857142*t6049;
  t8096 = 0.0085 + t8095;
  t8159 = -0.06857142*t6395;
  t8160 = 0.0085 + t8159;
  t8202 = -0.06857142*t6553;
  t8203 = 0.0085 + t8202;
  p_output1[0]=-1.142857*t3969 - 1.142857*t4612;
  p_output1[1]=t4976;
  p_output1[2]=t6188;
  p_output1[3]=t6405;
  p_output1[4]=t6564;
  p_output1[5]=t6570;
  p_output1[6]=-0.06857142*t4953*t6583 + t6595*t6621 + t6637*t6649 + (2.285714*t3607*t4886 + 2.285714*t4580*t4953)*t6671 + t6718*t6813 + t6840*t6888;
  p_output1[7]=-0.06857142*t6583*t6961 + t6671*(2.285714*t4580*t6961 + 2.285714*t3607*t6994) + t6595*t7040 + t6637*t7055 + t6718*t7192 + t6840*t7322;
  p_output1[8]=t7378 + t6595*t7512 + t6637*t7594 + t7610 + t7632 + t6840*t7708;
  p_output1[9]=t7378 + t7610 + t7632 + t6595*t7736 + t6637*t7763 + t6840*t7785;
  p_output1[10]=1.142857*t3969 + 1.142857*t4612;
  p_output1[11]=t7801;
  p_output1[12]=t7805;
  p_output1[13]=t7810;
  p_output1[14]=t7817;
  p_output1[15]=t7818;
  p_output1[16]=t4976;
  p_output1[17]=-1.142857*t6722 - 1.142857*t6792;
  p_output1[18]=t7826;
  p_output1[19]=t7831;
  p_output1[20]=t7838;
  p_output1[21]=t7839;
  p_output1[22]=-0.06857142*t6583*t6784 + t6718*(2.285714*t4886*t6755 + 2.285714*t4953*t6784) + t6671*t6813 + t6595*t7844 + t6637*t7855 + t6840*t7865;
  p_output1[23]=-0.06857142*t6583*t7166 + t6718*(2.285714*t4886*t7125 + 2.285714*t4953*t7166) + t6671*t7192 + t6595*t7873 + t6637*t7877 + t6840*t7931;
  p_output1[24]=t7935 + t6595*t7940 + t6637*t7949 + t7968 + t7970 + t6840*t7978;
  p_output1[25]=t7935 + t7968 + t7970 + t6595*t7985 + t6637*t7992 + t6840*t7996;
  p_output1[26]=t7801;
  p_output1[27]=t6725 + t6804;
  p_output1[28]=t6888;
  p_output1[29]=t6649;
  p_output1[30]=t6621;
  p_output1[31]=t8001;
  p_output1[32]=t6188;
  p_output1[33]=t7826;
  p_output1[34]=-0.0085 - 1.142857*t8002 - 1.142857*t8004;
  p_output1[35]=t8011;
  p_output1[36]=t8017;
  p_output1[37]=t8021;
  p_output1[38]=t6671*t6888 + t6718*t7865;
  p_output1[39]=-0.06857142*t6583*t7286 + t6840*(2.285714*t6049*t7286 + 2.285714*t6167*t7316) + t6671*t7322 + t6718*t7931 + t6595*t8029 + t6637*t8036;
  p_output1[40]=-0.06857142*t6583*t7706 + t6840*(2.285714*t6167*t7680 + 2.285714*t6049*t7706) + t6671*t7708 + t6718*t7978 + t6595*t8048 + t6637*t8054;
  p_output1[41]=-0.06857142*t6583*t7783 + t6840*(2.285714*t6167*t7779 + 2.285714*t6049*t7783) + t6671*t7785 + t6718*t7996 + t6595*t8069 + t6637*t8076;
  p_output1[42]=t7805;
  p_output1[43]=t6888;
  p_output1[44]=0.0085 + 1.142857*t8002 + 1.142857*t8004;
  p_output1[45]=t8090;
  p_output1[46]=t8094;
  p_output1[47]=t8096;
  p_output1[48]=t6405;
  p_output1[49]=t7831;
  p_output1[50]=t8011;
  p_output1[51]=-0.0085 - 1.142857*t8097 - 1.142857*t8101;
  p_output1[52]=t8106;
  p_output1[53]=t8108;
  p_output1[54]=t6649*t6671 + t6718*t7855;
  p_output1[55]=t6671*t7055 + t6718*t7877 + t6840*t8036;
  p_output1[56]=-0.06857142*t6583*t7588 + t6637*(2.285714*t6309*t7570 + 2.285714*t6395*t7588) + t6671*t7594 + t6718*t7949 + t6840*t8054 + t6595*t8123;
  p_output1[57]=-0.06857142*t6583*t7758 + t6637*(2.285714*t6309*t7754 + 2.285714*t6395*t7758) + t6671*t7763 + t6718*t7992 + t6840*t8076 + t6595*t8143;
  p_output1[58]=t7810;
  p_output1[59]=t6649;
  p_output1[60]=t8090;
  p_output1[61]=0.0085 + 1.142857*t8097 + 1.142857*t8101;
  p_output1[62]=t8158;
  p_output1[63]=t8160;
  p_output1[64]=t6564;
  p_output1[65]=t7838;
  p_output1[66]=t8017;
  p_output1[67]=t8106;
  p_output1[68]=-0.0085 - 1.142857*t8161 - 1.142857*t8163;
  p_output1[69]=t8167;
  p_output1[70]=t6621*t6671 + t6718*t7844;
  p_output1[71]=t6671*t7040 + t6718*t7873 + t6840*t8029;
  p_output1[72]=t6671*t7512 + t6718*t7940 + t6840*t8048 + t6637*t8123;
  p_output1[73]=-0.06857142*t6583*t7734 + t6595*(2.285714*t6447*t7723 + 2.285714*t6553*t7734) + t6671*t7736 + t6718*t7985 + t6840*t8069 + t6637*t8143;
  p_output1[74]=t7817;
  p_output1[75]=t6621;
  p_output1[76]=t8094;
  p_output1[77]=t8158;
  p_output1[78]=0.0085 + 1.142857*t8161 + 1.142857*t8163;
  p_output1[79]=t8203;
  p_output1[80]=t6570;
  p_output1[81]=t7839;
  p_output1[82]=t8021;
  p_output1[83]=t8108;
  p_output1[84]=t8167;
  p_output1[85]=-0.0126142852;
  p_output1[86]=-0.06857142*t4953*t6671 - 0.06857142*t6718*t6784;
  p_output1[87]=-0.06857142*t6671*t6961 - 0.06857142*t6718*t7166 - 0.06857142*t6840*t7286;
  p_output1[88]=-0.06857142*t6637*t7588 - 0.06857142*t6840*t7706 + t8215 + t8216;
  p_output1[89]=-0.06857142*t6595*t7734 - 0.06857142*t6637*t7758 - 0.06857142*t6840*t7783 + t8215 + t8216;
  p_output1[90]=t7818;
  p_output1[91]=t8001;
  p_output1[92]=t8096;
  p_output1[93]=t8160;
  p_output1[94]=t8203;
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

#include "J_dxDiscreteMap4_LeftLateImpactRelabel.hh"

namespace LeftLateImpactRelabel
{

void J_dxDiscreteMap4_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
