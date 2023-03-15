/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:57 GMT-08:00
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
  double t1529;
  double t843;
  double t886;
  double t1585;
  double t2247;
  double t1483;
  double t2050;
  double t2084;
  double t707;
  double t2651;
  double t2705;
  double t2764;
  double t2879;
  double t2786;
  double t426;
  double t3607;
  double t3631;
  double t3632;
  double t2217;
  double t2787;
  double t2882;
  double t3166;
  double t3180;
  double t2829;
  double t3287;
  double t3291;
  double t3796;
  double t3901;
  double t3929;
  double t3969;
  double t3974;
  double t4062;
  double t4100;
  double t4376;
  double t5410;
  double t5457;
  double t5509;
  double t5604;
  double t5643;
  double t5644;
  double t5200;
  double t5259;
  double t5262;
  double t5366;
  double t5661;
  double t5673;
  double t5808;
  double t5820;
  double t5868;
  double t5945;
  double t6160;
  double t6162;
  double t6176;
  double t6177;
  double t6188;
  double t6202;
  double t5051;
  double t5792;
  double t6036;
  double t6049;
  double t4823;
  double t4859;
  double t4886;
  double t6570;
  double t6583;
  double t6595;
  double t6616;
  double t4539;
  double t4612;
  double t4659;
  double t6621;
  double t6633;
  double t6637;
  double t6644;
  double t6661;
  double t6402;
  double t6407;
  double t6447;
  double t6455;
  double t6474;
  double t6486;
  double t6506;
  double t6527;
  double t6137;
  double t6211;
  double t6230;
  double t6309;
  double t6317;
  double t6371;
  double t6686;
  double t6688;
  double t6718;
  double t6722;
  double t7190;
  double t7194;
  double t7201;
  double t7204;
  double t6762;
  double t6784;
  double t7286;
  double t7291;
  double t7292;
  double t7297;
  double t7300;
  double t6813;
  double t6826;
  double t6917;
  double t6944;
  double t7027;
  double t7044;
  double t7105;
  double t7117;
  double t7552;
  double t7562;
  double t7568;
  double t7570;
  double t7541;
  double t7547;
  double t7630;
  double t7632;
  double t7640;
  double t7710;
  double t7711;
  double t7712;
  double t7713;
  double t7707;
  double t7708;
  double t7641;
  double t7645;
  double t7665;
  double t7668;
  double t7669;
  double t7670;
  double t7679;
  double t7783;
  double t7784;
  double t7785;
  double t7774;
  double t7775;
  double t7778;
  double t7622;
  double t7627;
  double t7810;
  double t7815;
  double t7680;
  double t7689;
  double t7696;
  double t7706;
  double t7715;
  double t7722;
  double t7838;
  double t7839;
  double t7841;
  double t7843;
  double t7844;
  double t7845;
  double t7726;
  double t7734;
  double t7737;
  double t7739;
  double t7744;
  double t7749;
  double t7750;
  double t7751;
  double t7753;
  double t7754;
  double t7755;
  double t7758;
  double t7762;
  double t7763;
  double t7764;
  double t7766;
  double t7772;
  double t7780;
  double t7796;
  double t7863;
  double t7864;
  double t7865;
  double t7867;
  double t7868;
  double t7871;
  double t7800;
  double t7801;
  double t3414;
  double t4406;
  double t4750;
  double t4971;
  double t4976;
  double t6953;
  double t7074;
  double t7045;
  double t7055;
  double t6961;
  double t7040;
  double t6954;
  double t7043;
  double t7059;
  double t7084;
  double t7086;
  double t7491;
  double t7496;
  double t7399;
  double t7425;
  double t7396;
  double t7486;
  double t7497;
  double t7512;
  double t7516;
  double t7535;
  double t7548;
  double t7571;
  double t7588;
  double t7592;
  double t7598;
  double t7600;
  double t7601;
  double t7602;
  double t7610;
  double t7709;
  double t7714;
  double t7717;
  double t7721;
  double t7723;
  double t7729;
  double t7779;
  double t7786;
  double t7787;
  double t7798;
  double t7799;
  double t7802;
  double t8032;
  double t8036;
  double t7816;
  double t7817;
  double t7818;
  double t7819;
  double t7820;
  double t7821;
  double t7824;
  double t7826;
  double t7829;
  double t7830;
  double t8037;
  double t8040;
  double t7842;
  double t7847;
  double t7848;
  double t7856;
  double t7857;
  double t7859;
  double t8043;
  double t8046;
  double t8047;
  double t8048;
  double t8049;
  double t8050;
  double t8051;
  double t7866;
  double t7872;
  double t7873;
  double t8053;
  double t7875;
  double t7876;
  double t7877;
  double t7909;
  double t7917;
  double t7929;
  double t7118;
  double t7125;
  double t7159;
  double t6788;
  double t6792;
  double t6804;
  double t6725;
  double t6735;
  double t6755;
  double t6238;
  double t6381;
  double t6395;
  double t7951;
  double t7952;
  double t7959;
  double t7997;
  double t7998;
  double t8000;
  double t8024;
  double t8025;
  double t8027;
  double t8028;
  double t8029;
  double t7530;
  double t7593;
  double t7594;
  double t7613;
  double t7614;
  double t7795;
  double t7804;
  double t7805;
  double t8052;
  double t8054;
  double t8055;
  double t7874;
  double t7878;
  double t7892;
  double t8067;
  double t8068;
  double t8069;
  double t7931;
  double t7932;
  double t7934;
  double t8075;
  double t8077;
  double t6470;
  double t6555;
  double t6564;
  double t7967;
  double t7968;
  double t7970;
  double t8080;
  double t8081;
  double t8082;
  double t7985;
  double t7986;
  double t7990;
  double t8010;
  double t8011;
  double t8012;
  double t7322;
  double t7332;
  double t7341;
  double t8097;
  double t8098;
  double t8101;
  double t7718;
  double t7730;
  double t7735;
  double t8041;
  double t8042;
  double t8044;
  double t8119;
  double t8120;
  double t8121;
  double t8122;
  double t8123;
  double t7855;
  double t7860;
  double t7861;
  double t8062;
  double t8063;
  double t8065;
  double t8144;
  double t8145;
  double t8146;
  double t8147;
  double t8148;
  double t7935;
  double t7937;
  double t7939;
  double t8160;
  double t8161;
  double t8162;
  double t8170;
  double t8174;
  double t6620;
  double t6671;
  double t6673;
  double t7971;
  double t7973;
  double t7974;
  double t8083;
  double t8084;
  double t8085;
  double t8177;
  double t8178;
  double t8179;
  double t7979;
  double t7982;
  double t7983;
  double t8004;
  double t8005;
  double t8006;
  double t7303;
  double t7311;
  double t7316;
  double t8093;
  double t8094;
  double t8095;
  double t8195;
  double t8196;
  double t8197;
  double t7683;
  double t8038;
  double t8111;
  double t8112;
  double t8116;
  double t8211;
  double t8212;
  double t8213;
  double t8214;
  double t8215;
  double t7825;
  double t7831;
  double t7832;
  double t8058;
  double t8059;
  double t8060;
  double t8137;
  double t8139;
  double t8140;
  double t8141;
  double t8142;
  double t7940;
  double t7941;
  double t7942;
  double t8163;
  double t8164;
  double t8165;
  double t8230;
  double t8231;
  double t8232;
  double t8237;
  double t8239;
  double t6675;
  double t7975;
  double t8086;
  double t8087;
  double t8180;
  double t8181;
  double t8243;
  double t8244;
  double t8293;
  double t8294;
  double t7946;
  double t8074;
  double t8166;
  double t8167;
  double t8233;
  double t8236;
  double t8281;
  double t8282;
  t1529 = Cos(var2[7]);
  t843 = Cos(var2[8]);
  t886 = Sin(var2[7]);
  t1585 = Sin(var2[8]);
  t2247 = Cos(var2[6]);
  t1483 = -1.*t843*t886;
  t2050 = -1.*t1529*t1585;
  t2084 = t1483 + t2050;
  t707 = Sin(var2[6]);
  t2651 = t1529*t843;
  t2705 = -1.*t886*t1585;
  t2764 = t2651 + t2705;
  t2879 = Sin(var2[2]);
  t2786 = t2247*t2764;
  t426 = Cos(var2[2]);
  t3607 = t843*t886;
  t3631 = t1529*t1585;
  t3632 = t3607 + t3631;
  t2217 = t707*t2084;
  t2787 = t2217 + t2786;
  t2882 = t2247*t2084;
  t3166 = -1.*t707*t2764;
  t3180 = t2882 + t3166;
  t2829 = t426*t2787;
  t3287 = t2879*t3180;
  t3291 = t2829 + t3287;
  t3796 = -1.*t707*t3632;
  t3901 = t3796 + t2786;
  t3929 = t2879*t3901;
  t3969 = t2247*t3632;
  t3974 = t707*t2764;
  t4062 = t3969 + t3974;
  t4100 = t426*t4062;
  t4376 = t3929 + t4100;
  t5410 = -1.*t843;
  t5457 = 1. + t5410;
  t5509 = -1.3127*t5457;
  t5604 = -1.3127*t843;
  t5643 = -0.06*t1585;
  t5644 = t5509 + t5604 + t5643;
  t5200 = -1.*t1529;
  t5259 = 1. + t5200;
  t5262 = -0.9063*t5259;
  t5366 = -0.06*t843*t886;
  t5661 = t1529*t5644;
  t5673 = t5262 + t5366 + t5661;
  t5808 = 0.06*t1529*t843;
  t5820 = 0.9063*t886;
  t5868 = t886*t5644;
  t5945 = t5808 + t5820 + t5868;
  t6160 = -1.*t2247;
  t6162 = 1. + t6160;
  t6176 = -0.4999*t6162;
  t6177 = t2247*t5673;
  t6188 = -1.*t707*t5945;
  t6202 = t6176 + t6177 + t6188;
  t5051 = 0.4999*t707;
  t5792 = t707*t5673;
  t6036 = t2247*t5945;
  t6049 = t5051 + t5792 + t6036;
  t4823 = t426*t3901;
  t4859 = -1.*t2879*t4062;
  t4886 = t4823 + t4859;
  t6570 = 0.9063*t843;
  t6583 = t843*t5644;
  t6595 = 0.06*t843*t1585;
  t6616 = t6570 + t6583 + t6595;
  t4539 = -1.*t2879*t2787;
  t4612 = t426*t3180;
  t4659 = t4539 + t4612;
  t6621 = Power(t843,2);
  t6633 = -0.06*t6621;
  t6637 = 0.9063*t1585;
  t6644 = t5644*t1585;
  t6661 = t6633 + t6637 + t6644;
  t6402 = t5945*t3632;
  t6407 = 0.4999*t2764;
  t6447 = t5673*t2764;
  t6455 = t6402 + t6407 + t6447;
  t6474 = -1.*t5673*t2084;
  t6486 = 0.4999*t3632;
  t6506 = -1.*t5945*t2764;
  t6527 = t6474 + t6486 + t6506;
  t6137 = -1.*t6049*t2787;
  t6211 = -1.*t6202*t3180;
  t6230 = t6137 + t6211;
  t6309 = t6202*t3901;
  t6317 = t6049*t4062;
  t6371 = t6309 + t6317;
  t6686 = -1.*var1[5];
  t6688 = var3[8] + t6686;
  t6718 = -1.*var1[4];
  t6722 = var3[7] + t6718;
  t7190 = -1.*t2247*t3632;
  t7194 = t7190 + t3166;
  t7201 = t2879*t7194;
  t7204 = t4823 + t7201;
  t6762 = -1.*var1[3];
  t6784 = var3[6] + t6762;
  t7286 = -1.*t707*t2084;
  t7291 = -1.*t2247*t2764;
  t7292 = t7286 + t7291;
  t7297 = t2879*t7292;
  t7300 = t7297 + t4612;
  t6813 = -1.*var1[0];
  t6826 = var3[0] + t6813;
  t6917 = -1.*var1[1];
  t6944 = var3[1] + t6917;
  t7027 = -1.*t2879*t3180;
  t7044 = -1.*t2879*t3901;
  t7105 = -1.*var1[2];
  t7117 = var3[2] + t7105;
  t7552 = -0.4999*t707;
  t7562 = -1.*t707*t5673;
  t7568 = -1.*t2247*t5945;
  t7570 = t7552 + t7562 + t7568;
  t7541 = 0.4999*t2247;
  t7547 = t7541 + t6177 + t6188;
  t7630 = -1.*t1529*t843;
  t7632 = t886*t1585;
  t7640 = t7630 + t7632;
  t7710 = -0.06*t1529*t843;
  t7711 = -0.9063*t886;
  t7712 = -1.*t886*t5644;
  t7713 = t7710 + t7711 + t7712;
  t7707 = 0.9063*t1529;
  t7708 = t7707 + t5366 + t5661;
  t7641 = t2247*t7640;
  t7645 = t7286 + t7641;
  t7665 = t2879*t7645;
  t7668 = t707*t7640;
  t7669 = t2882 + t7668;
  t7670 = t426*t7669;
  t7679 = t7665 + t7670;
  t7783 = t2247*t7708;
  t7784 = t707*t7713;
  t7785 = t7783 + t7784;
  t7774 = -1.*t707*t7708;
  t7775 = t2247*t7713;
  t7778 = t7774 + t7775;
  t7622 = -0.06857142*t6688*t3291;
  t7627 = 1.142857*t6661*t3291;
  t7810 = -0.06*t843;
  t7815 = 0. + t7810;
  t7680 = 1.142857*t6616*t7679;
  t7689 = 1.142857*t6527*t3291;
  t7696 = 0.4999*t2084;
  t7706 = t5673*t2084;
  t7715 = t5945*t2764;
  t7722 = -1.*t5945*t2084;
  t7838 = t7815*t886;
  t7839 = -0.06*t1529*t1585;
  t7841 = t7838 + t7839;
  t7843 = t1529*t7815;
  t7844 = 0.06*t886*t1585;
  t7845 = t7843 + t7844;
  t7726 = -1.*t5673*t7640;
  t7734 = 1.142857*t6455*t7679;
  t7737 = 2.285714*t3291*t4376;
  t7739 = 2.285714*t3291*t7679;
  t7744 = t7737 + t7739;
  t7749 = t6826*t7744;
  t7750 = 1.142857*t4659*t4376;
  t7751 = 1.142857*t3291*t4886;
  t7753 = 1.142857*t4659*t7679;
  t7754 = t426*t7645;
  t7755 = -1.*t2879*t7669;
  t7758 = t7754 + t7755;
  t7762 = 1.142857*t3291*t7758;
  t7763 = t7750 + t7751 + t7753 + t7762;
  t7764 = t6944*t7763;
  t7766 = 1.142857*t3291*t6230;
  t7772 = t6049*t2787;
  t7780 = t6202*t3180;
  t7796 = 1.142857*t6371*t7679;
  t7863 = -1.*t707*t7841;
  t7864 = t2247*t7845;
  t7865 = t7863 + t7864;
  t7867 = t2247*t7841;
  t7868 = t707*t7845;
  t7871 = t7867 + t7868;
  t7800 = -1.*t6202*t7645;
  t7801 = -1.*t6049*t7669;
  t3414 = Power(t3291,2);
  t4406 = Power(t4376,2);
  t4750 = -1.142857*t4659*t3291;
  t4971 = -1.142857*t4376*t4886;
  t4976 = t4750 + t4971;
  t6953 = Power(t4659,2);
  t7074 = Power(t4886,2);
  t7045 = -1.*t426*t4062;
  t7055 = t7044 + t7045;
  t6961 = -1.*t426*t2787;
  t7040 = t6961 + t7027;
  t6954 = 1.142857*t6953;
  t7043 = 1.142857*t7040*t3291;
  t7059 = 1.142857*t7055*t4376;
  t7084 = 1.142857*t7074;
  t7086 = t6954 + t7043 + t7059 + t7084;
  t7491 = t426*t7194;
  t7496 = t7044 + t7491;
  t7399 = t426*t7292;
  t7425 = t7399 + t7027;
  t7396 = 1.142857*t7300*t4659;
  t7486 = 1.142857*t7425*t3291;
  t7497 = 1.142857*t7496*t4376;
  t7512 = 1.142857*t7204*t4886;
  t7516 = t7396 + t7486 + t7497 + t7512;
  t7535 = -1.*t6202*t7292;
  t7548 = -1.*t7547*t2787;
  t7571 = -1.*t7570*t3180;
  t7588 = -1.*t6049*t3180;
  t7592 = t7535 + t7548 + t7571 + t7588;
  t7598 = t7570*t3901;
  t7600 = t6049*t3901;
  t7601 = t6202*t7194;
  t7602 = t7547*t4062;
  t7610 = t7598 + t7600 + t7601 + t7602;
  t7709 = t7708*t3632;
  t7714 = t7713*t2764;
  t7717 = t7696 + t7706 + t7709 + t7714 + t7715;
  t7721 = -1.*t7713*t2084;
  t7723 = -1.*t7708*t2764;
  t7729 = t7721 + t7722 + t6407 + t7723 + t7726;
  t7779 = t7778*t3901;
  t7786 = t7785*t4062;
  t7787 = t7772 + t7779 + t7780 + t7786;
  t7798 = -1.*t7785*t2787;
  t7799 = -1.*t7778*t3180;
  t7802 = t7798 + t7799 + t7800 + t7801;
  t8032 = -0.06857142*t6688*t4659;
  t8036 = 1.142857*t6661*t4659;
  t7816 = t7815*t843;
  t7817 = 0.06*t6621;
  t7818 = -0.9063*t1585;
  t7819 = -1.*t5644*t1585;
  t7820 = Power(t1585,2);
  t7821 = -0.06*t7820;
  t7824 = t7816 + t7817 + t7818 + t7819 + t7821;
  t7826 = t7815*t1585;
  t7829 = 0.12*t843*t1585;
  t7830 = t6570 + t6583 + t7826 + t7829;
  t8037 = 1.142857*t6616*t7758;
  t8040 = 1.142857*t6527*t4659;
  t7842 = t7841*t3632;
  t7847 = t2764*t7845;
  t7848 = t7696 + t7706 + t7842 + t7715 + t7847;
  t7856 = -1.*t7841*t2764;
  t7857 = -1.*t2084*t7845;
  t7859 = t7722 + t6407 + t7856 + t7857 + t7726;
  t8043 = 1.142857*t6455*t7758;
  t8046 = 2.285714*t4659*t4886;
  t8047 = 2.285714*t4659*t7758;
  t8048 = t8046 + t8047;
  t8049 = t6944*t8048;
  t8050 = t6826*t7763;
  t8051 = 1.142857*t4659*t6230;
  t7866 = t3901*t7865;
  t7872 = t4062*t7871;
  t7873 = t7772 + t7780 + t7866 + t7872;
  t8053 = 1.142857*t6371*t7758;
  t7875 = -1.*t3180*t7865;
  t7876 = -1.*t2787*t7871;
  t7877 = t7875 + t7876 + t7800 + t7801;
  t7909 = 1.142857*t4659*t3291;
  t7917 = 1.142857*t4376*t4886;
  t7929 = t7909 + t7917;
  t7118 = 1.142857*t6230*t4886;
  t7125 = 1.142857*t4659*t6371;
  t7159 = t7118 + t7125;
  t6788 = 1.142857*t6455*t4659;
  t6792 = 1.142857*t6527*t4886;
  t6804 = t6788 + t6792;
  t6725 = 1.142857*t6616*t4659;
  t6735 = 1.142857*t6661*t4886;
  t6755 = t6725 + t6735;
  t6238 = -1.142857*t6230*t4376;
  t6381 = -1.142857*t3291*t6371;
  t6395 = t6238 + t6381;
  t7951 = -1.142857*t6230*t4886;
  t7952 = -1.142857*t4659*t6371;
  t7959 = t7951 + t7952;
  t7997 = 1.142857*t6230*t7055;
  t7998 = 1.142857*t7040*t6371;
  t8000 = t7997 + t7998;
  t8024 = 1.142857*t6230*t7496;
  t8025 = 1.142857*t7592*t4886;
  t8027 = 1.142857*t7425*t6371;
  t8028 = 1.142857*t4659*t7610;
  t8029 = t8024 + t8025 + t8027 + t8028;
  t7530 = 1.142857*t6230*t7204;
  t7593 = 1.142857*t7592*t4376;
  t7594 = 1.142857*t7300*t6371;
  t7613 = 1.142857*t3291*t7610;
  t7614 = t7530 + t7593 + t7594 + t7613;
  t7795 = 1.142857*t3291*t7787;
  t7804 = 1.142857*t4376*t7802;
  t7805 = t7766 + t7795 + t7796 + t7804;
  t8052 = 1.142857*t4659*t7787;
  t8054 = 1.142857*t4886*t7802;
  t8055 = t8051 + t8052 + t8053 + t8054;
  t7874 = 1.142857*t3291*t7873;
  t7878 = 1.142857*t4376*t7877;
  t7892 = t7766 + t7874 + t7796 + t7878;
  t8067 = 1.142857*t4659*t7873;
  t8068 = 1.142857*t4886*t7877;
  t8069 = t8051 + t8067 + t8053 + t8068;
  t7931 = 1.142857*t6230*t4376;
  t7932 = 1.142857*t3291*t6371;
  t7934 = t7931 + t7932;
  t8075 = Power(t6230,2);
  t8077 = Power(t6371,2);
  t6470 = -1.142857*t6455*t3291;
  t6555 = -1.142857*t6527*t4376;
  t6564 = t6470 + t6555;
  t7967 = -1.142857*t6455*t4659;
  t7968 = -1.142857*t6527*t4886;
  t7970 = t7967 + t7968;
  t8080 = -1.142857*t6527*t6230;
  t8081 = -1.142857*t6455*t6371;
  t8082 = -0.0085 + t8080 + t8081;
  t7985 = 1.142857*t6455*t7040;
  t7986 = 1.142857*t6527*t7055;
  t7990 = t7985 + t7986;
  t8010 = 1.142857*t6455*t7425;
  t8011 = 1.142857*t6527*t7496;
  t8012 = t8010 + t8011;
  t7322 = 1.142857*t6455*t7300;
  t7332 = 1.142857*t6527*t7204;
  t7341 = t7322 + t7332;
  t8097 = 1.142857*t6527*t7592;
  t8098 = 1.142857*t6455*t7610;
  t8101 = t8097 + t8098;
  t7718 = 1.142857*t7717*t3291;
  t7730 = 1.142857*t7729*t4376;
  t7735 = t7689 + t7718 + t7730 + t7734;
  t8041 = 1.142857*t7717*t4659;
  t8042 = 1.142857*t7729*t4886;
  t8044 = t8040 + t8041 + t8042 + t8043;
  t8119 = 1.142857*t7729*t6230;
  t8120 = 1.142857*t6455*t7787;
  t8121 = 1.142857*t7717*t6371;
  t8122 = 1.142857*t6527*t7802;
  t8123 = t8119 + t8120 + t8121 + t8122;
  t7855 = 1.142857*t7848*t3291;
  t7860 = 1.142857*t7859*t4376;
  t7861 = t7689 + t7855 + t7860 + t7734;
  t8062 = 1.142857*t7848*t4659;
  t8063 = 1.142857*t7859*t4886;
  t8065 = t8040 + t8062 + t8063 + t8043;
  t8144 = 1.142857*t7859*t6230;
  t8145 = 1.142857*t7848*t6371;
  t8146 = 1.142857*t6455*t7873;
  t8147 = 1.142857*t6527*t7877;
  t8148 = t8144 + t8145 + t8146 + t8147;
  t7935 = 1.142857*t6455*t3291;
  t7937 = 1.142857*t6527*t4376;
  t7939 = t7935 + t7937;
  t8160 = 1.142857*t6527*t6230;
  t8161 = 1.142857*t6455*t6371;
  t8162 = 0.0085 + t8160 + t8161;
  t8170 = Power(t6455,2);
  t8174 = Power(t6527,2);
  t6620 = -1.142857*t6616*t3291;
  t6671 = -1.142857*t6661*t4376;
  t6673 = t6620 + t6671;
  t7971 = -1.142857*t6616*t4659;
  t7973 = -1.142857*t6661*t4886;
  t7974 = t7971 + t7973;
  t8083 = -1.142857*t6661*t6230;
  t8084 = -1.142857*t6616*t6371;
  t8085 = -0.0085 + t8083 + t8084;
  t8177 = -1.142857*t6616*t6455;
  t8178 = -1.142857*t6661*t6527;
  t8179 = -0.0085 + t8177 + t8178;
  t7979 = 1.142857*t6616*t7040;
  t7982 = 1.142857*t6661*t7055;
  t7983 = t7979 + t7982;
  t8004 = 1.142857*t6616*t7425;
  t8005 = 1.142857*t6661*t7496;
  t8006 = t8004 + t8005;
  t7303 = 1.142857*t6616*t7300;
  t7311 = 1.142857*t6661*t7204;
  t7316 = t7303 + t7311;
  t8093 = 1.142857*t6661*t7592;
  t8094 = 1.142857*t6616*t7610;
  t8095 = t8093 + t8094;
  t8195 = 1.142857*t6616*t7717;
  t8196 = 1.142857*t6661*t7729;
  t8197 = t8195 + t8196;
  t7683 = t7627 + t7680;
  t8038 = t8036 + t8037;
  t8111 = 1.142857*t6616*t7787;
  t8112 = 1.142857*t6661*t7802;
  t8116 = t8111 + t8112;
  t8211 = 1.142857*t7824*t6455;
  t8212 = 1.142857*t7830*t6527;
  t8213 = 1.142857*t6616*t7848;
  t8214 = 1.142857*t6661*t7859;
  t8215 = t8211 + t8212 + t8213 + t8214;
  t7825 = 1.142857*t7824*t3291;
  t7831 = 1.142857*t7830*t4376;
  t7832 = t7627 + t7825 + t7831 + t7680;
  t8058 = 1.142857*t7824*t4659;
  t8059 = 1.142857*t7830*t4886;
  t8060 = t8036 + t8058 + t8059 + t8037;
  t8137 = 1.142857*t7830*t6230;
  t8139 = 1.142857*t7824*t6371;
  t8140 = 1.142857*t6616*t7873;
  t8141 = 1.142857*t6661*t7877;
  t8142 = t8137 + t8139 + t8140 + t8141;
  t7940 = 1.142857*t6616*t3291;
  t7941 = 1.142857*t6661*t4376;
  t7942 = t7940 + t7941;
  t8163 = 1.142857*t6661*t6230;
  t8164 = 1.142857*t6616*t6371;
  t8165 = 0.0085 + t8163 + t8164;
  t8230 = 1.142857*t6616*t6455;
  t8231 = 1.142857*t6661*t6527;
  t8232 = 0.0085 + t8230 + t8231;
  t8237 = Power(t6616,2);
  t8239 = Power(t6661,2);
  t6675 = 0.06857142*t4376;
  t7975 = 0.06857142*t4886;
  t8086 = 0.06857142*t6230;
  t8087 = -0.0085 + t8086;
  t8180 = 0.06857142*t6527;
  t8181 = -0.0085 + t8180;
  t8243 = 0.06857142*t6661;
  t8244 = -0.0085 + t8243;
  t8293 = -0.06857142*t6944*t4659;
  t8294 = -0.06857142*t6826*t3291;
  t7946 = -0.06857142*t4376;
  t8074 = -0.06857142*t4886;
  t8166 = -0.06857142*t6230;
  t8167 = 0.0085 + t8166;
  t8233 = -0.06857142*t6527;
  t8236 = 0.0085 + t8233;
  t8281 = -0.06857142*t6661;
  t8282 = 0.0085 + t8281;
  p_output1[0]=-1.142857*t3414 - 1.142857*t4406;
  p_output1[1]=t4976;
  p_output1[2]=t6395;
  p_output1[3]=t6564;
  p_output1[4]=t6673;
  p_output1[5]=t6675;
  p_output1[6]=-0.06857142*t4886*t6688 + t6722*t6755 + t6784*t6804 + (2.285714*t3291*t4659 + 2.285714*t4376*t4886)*t6826 + t6944*t7086 + t7117*t7159;
  p_output1[7]=-0.06857142*t6688*t7204 + t6826*(2.285714*t4376*t7204 + 2.285714*t3291*t7300) + t6722*t7316 + t6784*t7341 + t6944*t7516 + t7117*t7614;
  p_output1[8]=t7622 + t6722*t7683 + t6784*t7735 + t7749 + t7764 + t7117*t7805;
  p_output1[9]=t7622 + t7749 + t7764 + t6722*t7832 + t6784*t7861 + t7117*t7892;
  p_output1[10]=1.142857*t3414 + 1.142857*t4406;
  p_output1[11]=t7929;
  p_output1[12]=t7934;
  p_output1[13]=t7939;
  p_output1[14]=t7942;
  p_output1[15]=t7946;
  p_output1[16]=t4976;
  p_output1[17]=-1.142857*t6953 - 1.142857*t7074;
  p_output1[18]=t7959;
  p_output1[19]=t7970;
  p_output1[20]=t7974;
  p_output1[21]=t7975;
  p_output1[22]=-0.06857142*t6688*t7055 + t6944*(2.285714*t4659*t7040 + 2.285714*t4886*t7055) + t6826*t7086 + t6722*t7983 + t6784*t7990 + t7117*t8000;
  p_output1[23]=-0.06857142*t6688*t7496 + t6944*(2.285714*t4659*t7425 + 2.285714*t4886*t7496) + t6826*t7516 + t6722*t8006 + t6784*t8012 + t7117*t8029;
  p_output1[24]=t8032 + t6722*t8038 + t6784*t8044 + t8049 + t8050 + t7117*t8055;
  p_output1[25]=t8032 + t8049 + t8050 + t6722*t8060 + t6784*t8065 + t7117*t8069;
  p_output1[26]=t7929;
  p_output1[27]=t6954 + t7084;
  p_output1[28]=t7159;
  p_output1[29]=t6804;
  p_output1[30]=t6755;
  p_output1[31]=t8074;
  p_output1[32]=t6395;
  p_output1[33]=t7959;
  p_output1[34]=-0.0085 - 1.142857*t8075 - 1.142857*t8077;
  p_output1[35]=t8082;
  p_output1[36]=t8085;
  p_output1[37]=t8087;
  p_output1[38]=t6826*t7159 + t6944*t8000;
  p_output1[39]=-0.06857142*t6688*t7592 + t7117*(2.285714*t6230*t7592 + 2.285714*t6371*t7610) + t6826*t7614 + t6944*t8029 + t6722*t8095 + t6784*t8101;
  p_output1[40]=-0.06857142*t6688*t7802 + t7117*(2.285714*t6371*t7787 + 2.285714*t6230*t7802) + t6826*t7805 + t6944*t8055 + t6722*t8116 + t6784*t8123;
  p_output1[41]=-0.06857142*t6688*t7877 + t7117*(2.285714*t6371*t7873 + 2.285714*t6230*t7877) + t6826*t7892 + t6944*t8069 + t6722*t8142 + t6784*t8148;
  p_output1[42]=t7934;
  p_output1[43]=t7159;
  p_output1[44]=0.0085 + 1.142857*t8075 + 1.142857*t8077;
  p_output1[45]=t8162;
  p_output1[46]=t8165;
  p_output1[47]=t8167;
  p_output1[48]=t6564;
  p_output1[49]=t7970;
  p_output1[50]=t8082;
  p_output1[51]=-0.0085 - 1.142857*t8170 - 1.142857*t8174;
  p_output1[52]=t8179;
  p_output1[53]=t8181;
  p_output1[54]=t6804*t6826 + t6944*t7990;
  p_output1[55]=t6826*t7341 + t6944*t8012 + t7117*t8101;
  p_output1[56]=-0.06857142*t6688*t7729 + t6784*(2.285714*t6455*t7717 + 2.285714*t6527*t7729) + t6826*t7735 + t6944*t8044 + t7117*t8123 + t6722*t8197;
  p_output1[57]=-0.06857142*t6688*t7859 + t6784*(2.285714*t6455*t7848 + 2.285714*t6527*t7859) + t6826*t7861 + t6944*t8065 + t7117*t8148 + t6722*t8215;
  p_output1[58]=t7939;
  p_output1[59]=t6804;
  p_output1[60]=t8162;
  p_output1[61]=0.0085 + 1.142857*t8170 + 1.142857*t8174;
  p_output1[62]=t8232;
  p_output1[63]=t8236;
  p_output1[64]=t6673;
  p_output1[65]=t7974;
  p_output1[66]=t8085;
  p_output1[67]=t8179;
  p_output1[68]=-0.0085 - 1.142857*t8237 - 1.142857*t8239;
  p_output1[69]=t8244;
  p_output1[70]=t6755*t6826 + t6944*t7983;
  p_output1[71]=t6826*t7316 + t6944*t8006 + t7117*t8095;
  p_output1[72]=t6826*t7683 + t6944*t8038 + t7117*t8116 + t6784*t8197;
  p_output1[73]=-0.06857142*t6688*t7830 + t6722*(2.285714*t6616*t7824 + 2.285714*t6661*t7830) + t6826*t7832 + t6944*t8060 + t7117*t8142 + t6784*t8215;
  p_output1[74]=t7942;
  p_output1[75]=t6755;
  p_output1[76]=t8165;
  p_output1[77]=t8232;
  p_output1[78]=0.0085 + 1.142857*t8237 + 1.142857*t8239;
  p_output1[79]=t8282;
  p_output1[80]=t6675;
  p_output1[81]=t7975;
  p_output1[82]=t8087;
  p_output1[83]=t8181;
  p_output1[84]=t8244;
  p_output1[85]=-0.0126142852;
  p_output1[86]=-0.06857142*t4886*t6826 - 0.06857142*t6944*t7055;
  p_output1[87]=-0.06857142*t6826*t7204 - 0.06857142*t6944*t7496 - 0.06857142*t7117*t7592;
  p_output1[88]=-0.06857142*t6784*t7729 - 0.06857142*t7117*t7802 + t8293 + t8294;
  p_output1[89]=-0.06857142*t6722*t7830 - 0.06857142*t6784*t7859 - 0.06857142*t7117*t7877 + t8293 + t8294;
  p_output1[90]=t7946;
  p_output1[91]=t8074;
  p_output1[92]=t8167;
  p_output1[93]=t8236;
  p_output1[94]=t8282;
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

#include "J_dxDiscreteMap7_LeftLateImpactRelabel.hh"

namespace LeftLateImpactRelabel
{

void J_dxDiscreteMap7_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
