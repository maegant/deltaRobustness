/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:02 GMT-08:00
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
  double t359;
  double t905;
  double t932;
  double t953;
  double t1753;
  double t2062;
  double t2176;
  double t2719;
  double t2955;
  double t2966;
  double t2969;
  double t3282;
  double t3339;
  double t3579;
  double t3609;
  double t3776;
  double t3856;
  double t4138;
  double t4469;
  double t5134;
  double t5238;
  double t5293;
  double t5297;
  double t5375;
  double t5379;
  double t5448;
  double t5451;
  double t5468;
  double t5499;
  double t5594;
  double t7575;
  double t7579;
  double t7588;
  double t7591;
  double t7594;
  double t7601;
  double t7603;
  double t7605;
  double t7608;
  double t7614;
  double t7623;
  double t7628;
  double t7636;
  double t7667;
  double t7670;
  double t7671;
  double t7672;
  double t7680;
  double t7681;
  double t7682;
  double t7685;
  double t7686;
  double t7687;
  double t7688;
  double t7692;
  double t7694;
  double t7721;
  double t7722;
  double t7725;
  double t7727;
  double t7728;
  double t7730;
  double t7731;
  double t7732;
  double t7734;
  double t7735;
  double t7738;
  double t7739;
  double t7740;
  double t7760;
  double t7761;
  double t7763;
  double t7765;
  double t7766;
  double t7767;
  double t7769;
  double t7770;
  double t7771;
  double t7772;
  double t7773;
  double t7774;
  double t7775;
  double t3036;
  double t3185;
  double t3204;
  double t3557;
  double t3565;
  double t3578;
  double t3622;
  double t3673;
  double t3677;
  double t3861;
  double t3864;
  double t3990;
  double t4013;
  double t4123;
  double t5764;
  double t5886;
  double t5920;
  double t6571;
  double t7323;
  double t7350;
  double t7454;
  double t7457;
  double t7472;
  double t7480;
  double t7481;
  double t7510;
  double t7521;
  double t7542;
  double t7550;
  double t7566;
  double t7574;
  double t7637;
  double t7639;
  double t7640;
  double t7642;
  double t7643;
  double t7644;
  double t7645;
  double t7647;
  double t7649;
  double t7650;
  double t7651;
  double t7654;
  double t7655;
  double t7658;
  double t7661;
  double t7662;
  double t7664;
  double t7696;
  double t7697;
  double t7698;
  double t7699;
  double t7701;
  double t7702;
  double t7703;
  double t7705;
  double t7709;
  double t7711;
  double t7712;
  double t7714;
  double t7715;
  double t7716;
  double t7717;
  double t7719;
  double t7720;
  double t7741;
  double t7742;
  double t7743;
  double t7744;
  double t7745;
  double t7746;
  double t7747;
  double t7748;
  double t7749;
  double t7750;
  double t7751;
  double t7752;
  double t7753;
  double t7755;
  double t7756;
  double t7757;
  double t7759;
  double t7776;
  double t7777;
  double t7778;
  double t7869;
  double t7878;
  double t7870;
  double t7871;
  double t7872;
  double t7873;
  double t7874;
  double t7875;
  double t7876;
  double t7877;
  double t7879;
  double t7880;
  double t7881;
  double t7882;
  double t7883;
  double t7884;
  double t7885;
  double t7886;
  double t7887;
  double t7888;
  double t7889;
  double t7890;
  double t7891;
  double t7892;
  double t7893;
  double t7894;
  double t7895;
  double t7896;
  double t7897;
  double t7898;
  double t7899;
  double t7900;
  double t7901;
  double t7902;
  double t7903;
  double t7904;
  double t7905;
  double t7906;
  double t7907;
  double t7908;
  double t7909;
  double t7910;
  double t7911;
  double t7912;
  double t7913;
  double t7914;
  double t7915;
  double t7916;
  double t7917;
  double t7918;
  double t7919;
  double t7920;
  double t7921;
  double t7922;
  double t7923;
  double t7924;
  double t7925;
  t359 = -1.*var4[1];
  t905 = var4[0] + t359;
  t932 = Power(t905,-2);
  t953 = 1/t905;
  t1753 = 0.8128*var1[2];
  t2062 = 0.8128*var1[6];
  t2176 = 0.4064*var1[7];
  t2719 = 0. + t359 + t1753 + t2062 + t2176;
  t2955 = -1.*t953*t2719;
  t2966 = 1. + t2955;
  t2969 = Power(t2966,3);
  t3282 = Power(t905,-3);
  t3339 = Power(t2966,2);
  t3579 = Power(t905,-4);
  t3609 = Power(t2719,2);
  t3776 = Power(t905,-5);
  t3856 = Power(t2719,3);
  t4138 = 13.2128768*var3[0]*t932*t2969;
  t4469 = -26.4257536*var3[5]*t932*t2969;
  t5134 = 13.2128768*var3[10]*t932*t2969;
  t5238 = 39.6386304*var3[5]*t3282*t3339*t2719;
  t5293 = -79.2772608*var3[10]*t3282*t3339*t2719;
  t5297 = 39.6386304*var3[15]*t3282*t3339*t2719;
  t5375 = 39.6386304*var3[10]*t3579*t2966*t3609;
  t5379 = -79.2772608*var3[15]*t3579*t2966*t3609;
  t5448 = 39.6386304*var3[20]*t3579*t2966*t3609;
  t5451 = 13.2128768*var3[15]*t3776*t3856;
  t5468 = -26.4257536*var3[20]*t3776*t3856;
  t5499 = 13.2128768*var3[25]*t3776*t3856;
  t5594 = t4138 + t4469 + t5134 + t5238 + t5293 + t5297 + t5375 + t5379 + t5448 + t5451 + t5468 + t5499;
  t7575 = 13.2128768*var3[1]*t932*t2969;
  t7579 = -26.4257536*var3[6]*t932*t2969;
  t7588 = 13.2128768*var3[11]*t932*t2969;
  t7591 = 39.6386304*var3[6]*t3282*t3339*t2719;
  t7594 = -79.2772608*var3[11]*t3282*t3339*t2719;
  t7601 = 39.6386304*var3[16]*t3282*t3339*t2719;
  t7603 = 39.6386304*var3[11]*t3579*t2966*t3609;
  t7605 = -79.2772608*var3[16]*t3579*t2966*t3609;
  t7608 = 39.6386304*var3[21]*t3579*t2966*t3609;
  t7614 = 13.2128768*var3[16]*t3776*t3856;
  t7623 = -26.4257536*var3[21]*t3776*t3856;
  t7628 = 13.2128768*var3[26]*t3776*t3856;
  t7636 = t7575 + t7579 + t7588 + t7591 + t7594 + t7601 + t7603 + t7605 + t7608 + t7614 + t7623 + t7628;
  t7667 = 13.2128768*var3[2]*t932*t2969;
  t7670 = -26.4257536*var3[7]*t932*t2969;
  t7671 = 13.2128768*var3[12]*t932*t2969;
  t7672 = 39.6386304*var3[7]*t3282*t3339*t2719;
  t7680 = -79.2772608*var3[12]*t3282*t3339*t2719;
  t7681 = 39.6386304*var3[17]*t3282*t3339*t2719;
  t7682 = 39.6386304*var3[12]*t3579*t2966*t3609;
  t7685 = -79.2772608*var3[17]*t3579*t2966*t3609;
  t7686 = 39.6386304*var3[22]*t3579*t2966*t3609;
  t7687 = 13.2128768*var3[17]*t3776*t3856;
  t7688 = -26.4257536*var3[22]*t3776*t3856;
  t7692 = 13.2128768*var3[27]*t3776*t3856;
  t7694 = t7667 + t7670 + t7671 + t7672 + t7680 + t7681 + t7682 + t7685 + t7686 + t7687 + t7688 + t7692;
  t7721 = 13.2128768*var3[3]*t932*t2969;
  t7722 = -26.4257536*var3[8]*t932*t2969;
  t7725 = 13.2128768*var3[13]*t932*t2969;
  t7727 = 39.6386304*var3[8]*t3282*t3339*t2719;
  t7728 = -79.2772608*var3[13]*t3282*t3339*t2719;
  t7730 = 39.6386304*var3[18]*t3282*t3339*t2719;
  t7731 = 39.6386304*var3[13]*t3579*t2966*t3609;
  t7732 = -79.2772608*var3[18]*t3579*t2966*t3609;
  t7734 = 39.6386304*var3[23]*t3579*t2966*t3609;
  t7735 = 13.2128768*var3[18]*t3776*t3856;
  t7738 = -26.4257536*var3[23]*t3776*t3856;
  t7739 = 13.2128768*var3[28]*t3776*t3856;
  t7740 = t7721 + t7722 + t7725 + t7727 + t7728 + t7730 + t7731 + t7732 + t7734 + t7735 + t7738 + t7739;
  t7760 = 13.2128768*var3[4]*t932*t2969;
  t7761 = -26.4257536*var3[9]*t932*t2969;
  t7763 = 13.2128768*var3[14]*t932*t2969;
  t7765 = 39.6386304*var3[9]*t3282*t3339*t2719;
  t7766 = -79.2772608*var3[14]*t3282*t3339*t2719;
  t7767 = 39.6386304*var3[19]*t3282*t3339*t2719;
  t7769 = 39.6386304*var3[14]*t3579*t2966*t3609;
  t7770 = -79.2772608*var3[19]*t3579*t2966*t3609;
  t7771 = 39.6386304*var3[24]*t3579*t2966*t3609;
  t7772 = 13.2128768*var3[19]*t3776*t3856;
  t7773 = -26.4257536*var3[24]*t3776*t3856;
  t7774 = 13.2128768*var3[29]*t3776*t3856;
  t7775 = t7760 + t7761 + t7763 + t7765 + t7766 + t7767 + t7769 + t7770 + t7771 + t7772 + t7773 + t7774;
  t3036 = 6.6064384*var3[0]*t932*t2969;
  t3185 = -13.2128768*var3[5]*t932*t2969;
  t3204 = 6.6064384*var3[10]*t932*t2969;
  t3557 = 19.8193152*var3[5]*t3282*t3339*t2719;
  t3565 = -39.6386304*var3[10]*t3282*t3339*t2719;
  t3578 = 19.8193152*var3[15]*t3282*t3339*t2719;
  t3622 = 19.8193152*var3[10]*t3579*t2966*t3609;
  t3673 = -39.6386304*var3[15]*t3579*t2966*t3609;
  t3677 = 19.8193152*var3[20]*t3579*t2966*t3609;
  t3861 = 6.6064384*var3[15]*t3776*t3856;
  t3864 = -13.2128768*var3[20]*t3776*t3856;
  t3990 = 6.6064384*var3[25]*t3776*t3856;
  t4013 = t3036 + t3185 + t3204 + t3557 + t3565 + t3578 + t3622 + t3673 + t3677 + t3861 + t3864 + t3990;
  t4123 = var2[7]*t4013;
  t5764 = var2[2]*t5594;
  t5886 = var2[6]*t5594;
  t5920 = t4123 + t5764 + t5886;
  t6571 = 6.6064384*var3[1]*t932*t2969;
  t7323 = -13.2128768*var3[6]*t932*t2969;
  t7350 = 6.6064384*var3[11]*t932*t2969;
  t7454 = 19.8193152*var3[6]*t3282*t3339*t2719;
  t7457 = -39.6386304*var3[11]*t3282*t3339*t2719;
  t7472 = 19.8193152*var3[16]*t3282*t3339*t2719;
  t7480 = 19.8193152*var3[11]*t3579*t2966*t3609;
  t7481 = -39.6386304*var3[16]*t3579*t2966*t3609;
  t7510 = 19.8193152*var3[21]*t3579*t2966*t3609;
  t7521 = 6.6064384*var3[16]*t3776*t3856;
  t7542 = -13.2128768*var3[21]*t3776*t3856;
  t7550 = 6.6064384*var3[26]*t3776*t3856;
  t7566 = t6571 + t7323 + t7350 + t7454 + t7457 + t7472 + t7480 + t7481 + t7510 + t7521 + t7542 + t7550;
  t7574 = var2[7]*t7566;
  t7637 = var2[2]*t7636;
  t7639 = var2[6]*t7636;
  t7640 = t7574 + t7637 + t7639;
  t7642 = 6.6064384*var3[2]*t932*t2969;
  t7643 = -13.2128768*var3[7]*t932*t2969;
  t7644 = 6.6064384*var3[12]*t932*t2969;
  t7645 = 19.8193152*var3[7]*t3282*t3339*t2719;
  t7647 = -39.6386304*var3[12]*t3282*t3339*t2719;
  t7649 = 19.8193152*var3[17]*t3282*t3339*t2719;
  t7650 = 19.8193152*var3[12]*t3579*t2966*t3609;
  t7651 = -39.6386304*var3[17]*t3579*t2966*t3609;
  t7654 = 19.8193152*var3[22]*t3579*t2966*t3609;
  t7655 = 6.6064384*var3[17]*t3776*t3856;
  t7658 = -13.2128768*var3[22]*t3776*t3856;
  t7661 = 6.6064384*var3[27]*t3776*t3856;
  t7662 = t7642 + t7643 + t7644 + t7645 + t7647 + t7649 + t7650 + t7651 + t7654 + t7655 + t7658 + t7661;
  t7664 = var2[7]*t7662;
  t7696 = var2[2]*t7694;
  t7697 = var2[6]*t7694;
  t7698 = t7664 + t7696 + t7697;
  t7699 = 6.6064384*var3[3]*t932*t2969;
  t7701 = -13.2128768*var3[8]*t932*t2969;
  t7702 = 6.6064384*var3[13]*t932*t2969;
  t7703 = 19.8193152*var3[8]*t3282*t3339*t2719;
  t7705 = -39.6386304*var3[13]*t3282*t3339*t2719;
  t7709 = 19.8193152*var3[18]*t3282*t3339*t2719;
  t7711 = 19.8193152*var3[13]*t3579*t2966*t3609;
  t7712 = -39.6386304*var3[18]*t3579*t2966*t3609;
  t7714 = 19.8193152*var3[23]*t3579*t2966*t3609;
  t7715 = 6.6064384*var3[18]*t3776*t3856;
  t7716 = -13.2128768*var3[23]*t3776*t3856;
  t7717 = 6.6064384*var3[28]*t3776*t3856;
  t7719 = t7699 + t7701 + t7702 + t7703 + t7705 + t7709 + t7711 + t7712 + t7714 + t7715 + t7716 + t7717;
  t7720 = var2[7]*t7719;
  t7741 = var2[2]*t7740;
  t7742 = var2[6]*t7740;
  t7743 = t7720 + t7741 + t7742;
  t7744 = 6.6064384*var3[4]*t932*t2969;
  t7745 = -13.2128768*var3[9]*t932*t2969;
  t7746 = 6.6064384*var3[14]*t932*t2969;
  t7747 = 19.8193152*var3[9]*t3282*t3339*t2719;
  t7748 = -39.6386304*var3[14]*t3282*t3339*t2719;
  t7749 = 19.8193152*var3[19]*t3282*t3339*t2719;
  t7750 = 19.8193152*var3[14]*t3579*t2966*t3609;
  t7751 = -39.6386304*var3[19]*t3579*t2966*t3609;
  t7752 = 19.8193152*var3[24]*t3579*t2966*t3609;
  t7753 = 6.6064384*var3[19]*t3776*t3856;
  t7755 = -13.2128768*var3[24]*t3776*t3856;
  t7756 = 6.6064384*var3[29]*t3776*t3856;
  t7757 = t7744 + t7745 + t7746 + t7747 + t7748 + t7749 + t7750 + t7751 + t7752 + t7753 + t7755 + t7756;
  t7759 = var2[7]*t7757;
  t7776 = var2[2]*t7775;
  t7777 = var2[6]*t7775;
  t7778 = t7759 + t7776 + t7777;
  t7869 = Power(t2966,4);
  t7878 = Power(t2719,4);
  t7870 = -4.064*var3[0]*t953*t7869;
  t7871 = 4.064*var3[5]*t953*t7869;
  t7872 = -16.256*var3[5]*t932*t2969*t2719;
  t7873 = 16.256*var3[10]*t932*t2969*t2719;
  t7874 = -24.383999999999997*var3[10]*t3282*t3339*t3609;
  t7875 = 24.383999999999997*var3[15]*t3282*t3339*t3609;
  t7876 = -16.256*var3[15]*t3579*t2966*t3856;
  t7877 = 16.256*var3[20]*t3579*t2966*t3856;
  t7879 = -4.064*var3[20]*t3776*t7878;
  t7880 = 4.064*var3[25]*t3776*t7878;
  t7881 = t7870 + t7871 + t7872 + t7873 + t7874 + t7875 + t7876 + t7877 + t7879 + t7880;
  t7882 = -4.064*var3[1]*t953*t7869;
  t7883 = 4.064*var3[6]*t953*t7869;
  t7884 = -16.256*var3[6]*t932*t2969*t2719;
  t7885 = 16.256*var3[11]*t932*t2969*t2719;
  t7886 = -24.383999999999997*var3[11]*t3282*t3339*t3609;
  t7887 = 24.383999999999997*var3[16]*t3282*t3339*t3609;
  t7888 = -16.256*var3[16]*t3579*t2966*t3856;
  t7889 = 16.256*var3[21]*t3579*t2966*t3856;
  t7890 = -4.064*var3[21]*t3776*t7878;
  t7891 = 4.064*var3[26]*t3776*t7878;
  t7892 = t7882 + t7883 + t7884 + t7885 + t7886 + t7887 + t7888 + t7889 + t7890 + t7891;
  t7893 = -4.064*var3[2]*t953*t7869;
  t7894 = 4.064*var3[7]*t953*t7869;
  t7895 = -16.256*var3[7]*t932*t2969*t2719;
  t7896 = 16.256*var3[12]*t932*t2969*t2719;
  t7897 = -24.383999999999997*var3[12]*t3282*t3339*t3609;
  t7898 = 24.383999999999997*var3[17]*t3282*t3339*t3609;
  t7899 = -16.256*var3[17]*t3579*t2966*t3856;
  t7900 = 16.256*var3[22]*t3579*t2966*t3856;
  t7901 = -4.064*var3[22]*t3776*t7878;
  t7902 = 4.064*var3[27]*t3776*t7878;
  t7903 = t7893 + t7894 + t7895 + t7896 + t7897 + t7898 + t7899 + t7900 + t7901 + t7902;
  t7904 = -4.064*var3[3]*t953*t7869;
  t7905 = 4.064*var3[8]*t953*t7869;
  t7906 = -16.256*var3[8]*t932*t2969*t2719;
  t7907 = 16.256*var3[13]*t932*t2969*t2719;
  t7908 = -24.383999999999997*var3[13]*t3282*t3339*t3609;
  t7909 = 24.383999999999997*var3[18]*t3282*t3339*t3609;
  t7910 = -16.256*var3[18]*t3579*t2966*t3856;
  t7911 = 16.256*var3[23]*t3579*t2966*t3856;
  t7912 = -4.064*var3[23]*t3776*t7878;
  t7913 = 4.064*var3[28]*t3776*t7878;
  t7914 = t7904 + t7905 + t7906 + t7907 + t7908 + t7909 + t7910 + t7911 + t7912 + t7913;
  t7915 = -4.064*var3[4]*t953*t7869;
  t7916 = 4.064*var3[9]*t953*t7869;
  t7917 = -16.256*var3[9]*t932*t2969*t2719;
  t7918 = 16.256*var3[14]*t932*t2969*t2719;
  t7919 = -24.383999999999997*var3[14]*t3282*t3339*t3609;
  t7920 = 24.383999999999997*var3[19]*t3282*t3339*t3609;
  t7921 = -16.256*var3[19]*t3579*t2966*t3856;
  t7922 = 16.256*var3[24]*t3579*t2966*t3856;
  t7923 = -4.064*var3[24]*t3776*t7878;
  t7924 = 4.064*var3[29]*t3776*t7878;
  t7925 = t7915 + t7916 + t7917 + t7918 + t7919 + t7920 + t7921 + t7922 + t7923 + t7924;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=t5920;
  p_output1[11]=t7640;
  p_output1[12]=t7698;
  p_output1[13]=t7743;
  p_output1[14]=t7778;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t5920;
  p_output1[31]=t7640;
  p_output1[32]=t7698;
  p_output1[33]=t7743;
  p_output1[34]=t7778;
  p_output1[35]=t4013*var2[2] + t4013*var2[6] + var2[7]*(3.3032192*t2969*t932*var3[0] + 9.9096576*t2719*t3282*t3339*var3[5] - 6.6064384*t2969*t932*var3[5] - 19.8193152*t2719*t3282*t3339*var3[10] + 9.9096576*t2966*t3579*t3609*var3[10] + 3.3032192*t2969*t932*var3[10] + 9.9096576*t2719*t3282*t3339*var3[15] - 19.8193152*t2966*t3579*t3609*var3[15] + 3.3032192*t3776*t3856*var3[15] + 9.9096576*t2966*t3579*t3609*var3[20] - 6.6064384*t3776*t3856*var3[20] + 3.3032192*t3776*t3856*var3[25]);
  p_output1[36]=t7566*var2[2] + t7566*var2[6] + var2[7]*(3.3032192*t2969*t932*var3[1] + 9.9096576*t2719*t3282*t3339*var3[6] - 6.6064384*t2969*t932*var3[6] - 19.8193152*t2719*t3282*t3339*var3[11] + 9.9096576*t2966*t3579*t3609*var3[11] + 3.3032192*t2969*t932*var3[11] + 9.9096576*t2719*t3282*t3339*var3[16] - 19.8193152*t2966*t3579*t3609*var3[16] + 3.3032192*t3776*t3856*var3[16] + 9.9096576*t2966*t3579*t3609*var3[21] - 6.6064384*t3776*t3856*var3[21] + 3.3032192*t3776*t3856*var3[26]);
  p_output1[37]=t7662*var2[2] + t7662*var2[6] + var2[7]*(3.3032192*t2969*t932*var3[2] + 9.9096576*t2719*t3282*t3339*var3[7] - 6.6064384*t2969*t932*var3[7] - 19.8193152*t2719*t3282*t3339*var3[12] + 9.9096576*t2966*t3579*t3609*var3[12] + 3.3032192*t2969*t932*var3[12] + 9.9096576*t2719*t3282*t3339*var3[17] - 19.8193152*t2966*t3579*t3609*var3[17] + 3.3032192*t3776*t3856*var3[17] + 9.9096576*t2966*t3579*t3609*var3[22] - 6.6064384*t3776*t3856*var3[22] + 3.3032192*t3776*t3856*var3[27]);
  p_output1[38]=t7719*var2[2] + t7719*var2[6] + var2[7]*(3.3032192*t2969*t932*var3[3] + 9.9096576*t2719*t3282*t3339*var3[8] - 6.6064384*t2969*t932*var3[8] - 19.8193152*t2719*t3282*t3339*var3[13] + 9.9096576*t2966*t3579*t3609*var3[13] + 3.3032192*t2969*t932*var3[13] + 9.9096576*t2719*t3282*t3339*var3[18] - 19.8193152*t2966*t3579*t3609*var3[18] + 3.3032192*t3776*t3856*var3[18] + 9.9096576*t2966*t3579*t3609*var3[23] - 6.6064384*t3776*t3856*var3[23] + 3.3032192*t3776*t3856*var3[28]);
  p_output1[39]=t7757*var2[2] + t7757*var2[6] + var2[7]*(3.3032192*t2969*t932*var3[4] + 9.9096576*t2719*t3282*t3339*var3[9] - 6.6064384*t2969*t932*var3[9] - 19.8193152*t2719*t3282*t3339*var3[14] + 9.9096576*t2966*t3579*t3609*var3[14] + 3.3032192*t2969*t932*var3[14] + 9.9096576*t2719*t3282*t3339*var3[19] - 19.8193152*t2966*t3579*t3609*var3[19] + 3.3032192*t3776*t3856*var3[19] + 9.9096576*t2966*t3579*t3609*var3[24] - 6.6064384*t3776*t3856*var3[24] + 3.3032192*t3776*t3856*var3[29]);
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=t7881;
  p_output1[56]=t7892;
  p_output1[57]=t7903;
  p_output1[58]=t7914;
  p_output1[59]=t7925;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=t7881;
  p_output1[76]=t7892;
  p_output1[77]=t7903;
  p_output1[78]=t7914;
  p_output1[79]=t7925;
  p_output1[80]=-2.032*t7869*t953*var3[0] - 8.128*t2719*t2969*t932*var3[5] + 2.032*t7869*t953*var3[5] - 12.191999999999998*t3282*t3339*t3609*var3[10] + 8.128*t2719*t2969*t932*var3[10] + 12.191999999999998*t3282*t3339*t3609*var3[15] - 8.128*t2966*t3579*t3856*var3[15] + 8.128*t2966*t3579*t3856*var3[20] - 2.032*t3776*t7878*var3[20] + 2.032*t3776*t7878*var3[25];
  p_output1[81]=-2.032*t7869*t953*var3[1] - 8.128*t2719*t2969*t932*var3[6] + 2.032*t7869*t953*var3[6] - 12.191999999999998*t3282*t3339*t3609*var3[11] + 8.128*t2719*t2969*t932*var3[11] + 12.191999999999998*t3282*t3339*t3609*var3[16] - 8.128*t2966*t3579*t3856*var3[16] + 8.128*t2966*t3579*t3856*var3[21] - 2.032*t3776*t7878*var3[21] + 2.032*t3776*t7878*var3[26];
  p_output1[82]=-2.032*t7869*t953*var3[2] - 8.128*t2719*t2969*t932*var3[7] + 2.032*t7869*t953*var3[7] - 12.191999999999998*t3282*t3339*t3609*var3[12] + 8.128*t2719*t2969*t932*var3[12] + 12.191999999999998*t3282*t3339*t3609*var3[17] - 8.128*t2966*t3579*t3856*var3[17] + 8.128*t2966*t3579*t3856*var3[22] - 2.032*t3776*t7878*var3[22] + 2.032*t3776*t7878*var3[27];
  p_output1[83]=-2.032*t7869*t953*var3[3] - 8.128*t2719*t2969*t932*var3[8] + 2.032*t7869*t953*var3[8] - 12.191999999999998*t3282*t3339*t3609*var3[13] + 8.128*t2719*t2969*t932*var3[13] + 12.191999999999998*t3282*t3339*t3609*var3[18] - 8.128*t2966*t3579*t3856*var3[18] + 8.128*t2966*t3579*t3856*var3[23] - 2.032*t3776*t7878*var3[23] + 2.032*t3776*t7878*var3[28];
  p_output1[84]=-2.032*t7869*t953*var3[4] - 8.128*t2719*t2969*t932*var3[9] + 2.032*t7869*t953*var3[9] - 12.191999999999998*t3282*t3339*t3609*var3[14] + 8.128*t2719*t2969*t932*var3[14] + 12.191999999999998*t3282*t3339*t3609*var3[19] - 8.128*t2966*t3579*t3856*var3[19] + 8.128*t2966*t3579*t3856*var3[24] - 2.032*t3776*t7878*var3[24] + 2.032*t3776*t7878*var3[29];
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
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
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "Jd2yd_position_RightSS2.hh"

namespace SymFunction
{

void Jd2yd_position_RightSS2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
