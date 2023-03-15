/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:31:27 GMT-08:00
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
  double t361;
  double t301;
  double t310;
  double t413;
  double t855;
  double t337;
  double t526;
  double t586;
  double t230;
  double t872;
  double t881;
  double t950;
  double t1833;
  double t1862;
  double t1873;
  double t1526;
  double t1929;
  double t1120;
  double t2223;
  double t1881;
  double t1948;
  double t1366;
  double t1581;
  double t2091;
  double t2105;
  double t2052;
  double t2054;
  double t654;
  double t1312;
  double t2467;
  double t2483;
  double t2220;
  double t2799;
  double t2873;
  double t2875;
  double t2634;
  double t2670;
  double t2681;
  double t2907;
  double t2939;
  double t2943;
  double t2974;
  double t3044;
  double t3057;
  double t3067;
  double t3085;
  double t3107;
  double t3158;
  double t2420;
  double t3351;
  double t3379;
  double t3400;
  double t3434;
  double t3444;
  double t3490;
  double t3519;
  double t3539;
  double t3590;
  double t3331;
  double t3598;
  double t3625;
  double t3635;
  double t3742;
  double t3980;
  double t3988;
  double t4006;
  double t4044;
  double t4047;
  double t3750;
  double t3786;
  double t3830;
  double t3869;
  double t3898;
  double t3908;
  double t3917;
  double t4157;
  double t2441;
  double t2237;
  double t4284;
  double t4308;
  double t4334;
  double t4350;
  double t4379;
  double t4443;
  double t4454;
  double t4502;
  double t4517;
  double t4540;
  double t4542;
  double t4431;
  double t4591;
  double t4593;
  double t4604;
  double t4609;
  double t4721;
  double t4619;
  double t4623;
  double t4658;
  double t4854;
  double t4889;
  double t4895;
  double t4898;
  double t4912;
  double t4929;
  double t4887;
  double t4960;
  double t4971;
  double t4991;
  double t5028;
  double t5073;
  double t5085;
  double t5113;
  double t5126;
  double t5167;
  double t5005;
  double t5194;
  double t5198;
  double t5244;
  double t5245;
  double t5304;
  double t5392;
  double t5408;
  double t5412;
  double t5428;
  double t5499;
  double t5518;
  double t5354;
  double t5370;
  double t5468;
  double t5688;
  double t5728;
  double t5898;
  double t5900;
  double t5917;
  double t5925;
  double t5822;
  double t5442;
  double t5542;
  double t5557;
  double t5597;
  double t5758;
  double t5774;
  double t5826;
  double t5850;
  double t5859;
  double t6183;
  double t6220;
  double t6248;
  double t6263;
  double t6048;
  double t5904;
  double t5929;
  double t5941;
  double t6114;
  double t6294;
  double t6306;
  double t5967;
  double t5981;
  double t5986;
  double t6394;
  double t6574;
  double t6604;
  double t6464;
  double t5955;
  double t5994;
  double t5999;
  double t6547;
  double t6556;
  double t6561;
  double t6633;
  double t6684;
  double t6685;
  double t6690;
  double t6720;
  double t6723;
  double t6728;
  double t6734;
  double t6787;
  double t6791;
  double t6815;
  double t6824;
  double t6849;
  double t6856;
  double t6884;
  double t6900;
  double t6904;
  double t6925;
  double t7363;
  double t7401;
  double t7264;
  double t7331;
  double t7346;
  double t7373;
  double t7408;
  double t7431;
  double t7477;
  double t7486;
  double t7502;
  double t7652;
  double t7659;
  double t7660;
  double t7662;
  double t7677;
  double t7692;
  double t7700;
  double t7701;
  double t7719;
  double t7773;
  double t7781;
  double t7792;
  double t7910;
  double t7926;
  double t7927;
  double t7797;
  double t7811;
  double t7850;
  double t7888;
  double t8116;
  double t8117;
  double t7890;
  double t8179;
  double t8158;
  double t8157;
  double t8194;
  double t8257;
  double t8259;
  double t8247;
  double t8249;
  double t8251;
  double t8260;
  double t8265;
  double t8266;
  double t8271;
  double t8287;
  double t8290;
  double t8293;
  double t8295;
  double t8296;
  double t8308;
  t361 = Cos(var1[5]);
  t301 = Cos(var1[6]);
  t310 = Sin(var1[5]);
  t413 = Sin(var1[6]);
  t855 = Cos(var1[2]);
  t337 = -1.*t301*t310;
  t526 = -1.*t361*t413;
  t586 = t337 + t526;
  t230 = Sin(var1[2]);
  t872 = t361*t301;
  t881 = -1.*t310*t413;
  t950 = t872 + t881;
  t1833 = t301*t310;
  t1862 = t361*t413;
  t1873 = t1833 + t1862;
  t1526 = -1.*t230*t950;
  t1929 = t855*t950;
  t1120 = -1.*t855*t950;
  t2223 = t230*t950;
  t1881 = -1.*t230*t1873;
  t1948 = t1881 + t1929;
  t1366 = t855*t586;
  t1581 = t1366 + t1526;
  t2091 = t230*t586;
  t2105 = t2091 + t1929;
  t2052 = -1.*t855*t1873;
  t2054 = t2052 + t1526;
  t654 = -1.*t230*t586;
  t1312 = t654 + t1120;
  t2467 = t855*t1873;
  t2483 = t2467 + t2223;
  t2220 = -1.*t855*t586;
  t2799 = -1.*t361*t301;
  t2873 = t310*t413;
  t2875 = t2799 + t2873;
  t2634 = 1.70432*t1948*t1581;
  t2670 = 0.85216*t2105*t2054;
  t2681 = 0.85216*t1312*t2483;
  t2907 = t855*t2875;
  t2939 = t654 + t2907;
  t2943 = 1.70432*t1581*t2939;
  t2974 = -1.*t230*t2875;
  t3044 = t2220 + t2974;
  t3057 = 0.85216*t2105*t3044;
  t3067 = t230*t2875;
  t3085 = t1366 + t3067;
  t3107 = 0.85216*t1312*t3085;
  t3158 = t2634 + t2670 + t2681 + t2943 + t3057 + t3107;
  t2420 = t230*t1873;
  t3351 = 1.70432*t2105*t1581;
  t3379 = 0.85216*t2483*t2939;
  t3400 = t2420 + t2907;
  t3434 = 0.85216*t1581*t3400;
  t3444 = t2467 + t2974;
  t3490 = 0.85216*t2105*t3444;
  t3519 = 0.85216*t1948*t3085;
  t3539 = 1.70432*t2939*t3085;
  t3590 = t3351 + t3379 + t3434 + t3490 + t3519 + t3539;
  t3331 = -0.5*var2[2]*t3158;
  t3598 = -0.5*var2[5]*t3590;
  t3625 = -0.5*var2[6]*t3590;
  t3635 = t3331 + t3598 + t3625;
  t3742 = var2[1]*t3635;
  t3980 = 0.85216*t2105*t1948;
  t3988 = 0.85216*t1581*t2483;
  t4006 = 0.85216*t2105*t2939;
  t4044 = 0.85216*t1581*t3085;
  t4047 = t3980 + t3988 + t4006 + t4044;
  t3750 = 0.85216*t1312*t2105;
  t3786 = Power(t1948,2);
  t3830 = 0.85216*t3786;
  t3869 = Power(t1581,2);
  t3898 = 0.85216*t3869;
  t3908 = 0.85216*t2054*t2483;
  t3917 = t3750 + t3830 + t3898 + t3908;
  t4157 = -0.5*var2[1]*t4047;
  t2441 = t2420 + t1120;
  t2237 = t2220 + t2223;
  t4284 = 1.70432*t1312*t1948;
  t4308 = 1.70432*t1581*t2054;
  t4334 = 1.70432*t1312*t2939;
  t4350 = 1.70432*t1581*t3044;
  t4379 = t4284 + t4308 + t4334 + t4350;
  t4443 = 1.70432*t3869;
  t4454 = 1.70432*t1948*t2939;
  t4502 = Power(t2939,2);
  t4517 = 1.70432*t4502;
  t4540 = 1.70432*t1581*t3444;
  t4542 = t4443 + t4454 + t4517 + t4540;
  t4431 = -0.5*var2[2]*t4379;
  t4591 = -0.5*var2[5]*t4542;
  t4593 = -0.5*var2[6]*t4542;
  t4604 = t4431 + t4591 + t4593;
  t4609 = var2[1]*t4604;
  t4721 = t2634 + t2943;
  t4619 = 1.70432*t1312*t1581;
  t4623 = 1.70432*t1948*t2054;
  t4658 = t4619 + t4623;
  t4854 = -0.5*var2[1]*t4721;
  t4889 = -1.*t301;
  t4895 = 1. + t4889;
  t4898 = -0.9063*t4895;
  t4912 = -1.078185*t301;
  t4929 = t4898 + t4912;
  t4887 = 0.4999*t310;
  t4960 = t4929*t310;
  t4971 = -0.17188499999999995*t361*t413;
  t4991 = t4887 + t4960 + t4971;
  t5028 = -1.*t361;
  t5073 = 1. + t5028;
  t5085 = -0.4999*t5073;
  t5113 = t361*t4929;
  t5126 = 0.17188499999999995*t310*t413;
  t5167 = t5085 + t5113 + t5126;
  t5005 = -1.*t4991*t950;
  t5194 = -1.*t586*t5167;
  t5198 = t5005 + t5194;
  t5244 = t4991*t1873;
  t5245 = t950*t5167;
  t5304 = t5244 + t5245;
  t5392 = -0.4999*t310;
  t5408 = -1.*t4929*t310;
  t5412 = 0.17188499999999995*t361*t413;
  t5428 = t5392 + t5408 + t5412;
  t5499 = 0.4999*t361;
  t5518 = t5499 + t5113 + t5126;
  t5354 = 0.85216*t1312*t5198;
  t5370 = t4991*t950;
  t5468 = t586*t5167;
  t5688 = 0.85216*t5304*t3044;
  t5728 = -1.*t586*t4991;
  t5898 = 0.17188499999999995*t301*t310;
  t5900 = t5898 + t5412;
  t5917 = -0.17188499999999995*t361*t301;
  t5925 = t5917 + t5126;
  t5822 = -1.*t5167*t2875;
  t5442 = t5428*t950;
  t5542 = t1873*t5518;
  t5557 = t5370 + t5442 + t5468 + t5542;
  t5597 = 0.85216*t1312*t5557;
  t5758 = -1.*t586*t5428;
  t5774 = -1.*t950*t5518;
  t5826 = t5728 + t5758 + t5774 + t5822;
  t5850 = 0.85216*t2054*t5826;
  t5859 = t5354 + t5597 + t5688 + t5850;
  t6183 = -0.4999*t361;
  t6220 = -1.*t361*t4929;
  t6248 = -0.17188499999999995*t310*t413;
  t6263 = t6183 + t6220 + t6248;
  t6048 = 0.85216*t5198*t2939;
  t5904 = t5900*t950;
  t5929 = t1873*t5925;
  t5941 = t5370 + t5904 + t5468 + t5929;
  t6114 = 0.85216*t5304*t3444;
  t6294 = -1.*t1873*t5167;
  t6306 = -1.*t4991*t2875;
  t5967 = -1.*t586*t5900;
  t5981 = -1.*t950*t5925;
  t5986 = t5728 + t5967 + t5981 + t5822;
  t6394 = t586*t4991;
  t6574 = 0.17188499999999995*t361*t301;
  t6604 = t6574 + t6248;
  t6464 = t5167*t2875;
  t5955 = 0.85216*t1312*t5941;
  t5994 = 0.85216*t2054*t5986;
  t5999 = t5354 + t5955 + t5688 + t5994;
  t6547 = 0.85216*t5557*t2939;
  t6556 = 0.85216*t5941*t2939;
  t6561 = -1.*t5900*t950;
  t6633 = -1.*t586*t6604;
  t6684 = -1.*t586*t5518;
  t6685 = -1.*t586*t5925;
  t6690 = -1.*t5428*t2875;
  t6720 = -1.*t5900*t2875;
  t6723 = t6561 + t6633 + t6294 + t6684 + t6685 + t6306 + t6690 + t6720;
  t6728 = 0.85216*t1948*t6723;
  t6734 = 0.85216*t1581*t5826;
  t6787 = 0.85216*t1581*t5986;
  t6791 = t586*t5428;
  t6815 = t586*t5900;
  t6824 = t5900*t1873;
  t6849 = t950*t6604;
  t6856 = t950*t5518;
  t6884 = t950*t5925;
  t6900 = t6394 + t6791 + t6815 + t6824 + t6849 + t6856 + t6884 + t6464;
  t6904 = 0.85216*t1581*t6900;
  t6925 = t6048 + t6547 + t6556 + t6114 + t6728 + t6734 + t6787 + t6904;
  t7363 = 0.85216*t1581*t5198;
  t7401 = 0.85216*t5304*t2939;
  t7264 = 0.85216*t2054*t5198;
  t7331 = 0.85216*t1312*t5304;
  t7346 = t7264 + t7331;
  t7373 = 0.85216*t1581*t5557;
  t7408 = 0.85216*t1948*t5826;
  t7431 = t7363 + t7373 + t7401 + t7408;
  t7477 = 0.85216*t1581*t5941;
  t7486 = 0.85216*t1948*t5986;
  t7502 = t7363 + t7477 + t7401 + t7486;
  t7652 = 0.4999*t413;
  t7659 = t4929*t413;
  t7660 = 0.17188499999999995*t301*t413;
  t7662 = t7652 + t7659 + t7660;
  t7677 = 0.4999*t301;
  t7692 = t4929*t301;
  t7700 = Power(t413,2);
  t7701 = -0.17188499999999995*t7700;
  t7719 = t7677 + t7692 + t7701;
  t7773 = 0.85216*t7662*t1312;
  t7781 = 0.85216*t7719*t3044;
  t7792 = t7773 + t7781;
  t7910 = Power(t301,2);
  t7926 = 0.17188499999999995*t7910;
  t7927 = t7677 + t7692 + t7926;
  t7797 = -0.4999*t413;
  t7811 = -1.*t4929*t413;
  t7850 = -0.17188499999999995*t301*t413;
  t7888 = t7797 + t7811 + t7850;
  t8116 = 0.85216*t7662*t2939;
  t8117 = 0.85216*t7719*t3444;
  t7890 = 0.85216*t7888*t1312;
  t8179 = 0. + t7677 + t7692 + t7926;
  t8158 = 0.85216*t7888*t2939;
  t8157 = 0.85216*t7927*t1581;
  t8194 = 0.85216*t8179*t1581;
  t8257 = 0.85216*t7662*t1581;
  t8259 = 0.85216*t7719*t2939;
  t8247 = 0.85216*t7719*t1312;
  t8249 = 0.85216*t7662*t2054;
  t8251 = t8247 + t8249;
  t8260 = t8257 + t8259;
  t8265 = 0.85216*t7927*t1948;
  t8266 = 0.85216*t7888*t1581;
  t8271 = t8265 + t8266 + t8257 + t8259;
  t8287 = 0.07323676079999998*var2[2]*t3044;
  t8290 = 0.07323676079999998*var2[5]*t3444;
  t8293 = 0.07323676079999998*var2[6]*t3444;
  t8295 = t8287 + t8290 + t8293;
  t8296 = var2[1]*t8295;
  t8308 = 0.07323676079999998*var2[1]*t2939;
  p_output1[0]=var2[1]*(-0.5*(2.55648*t1312*t1581 + 2.55648*t1948*t2054 + 0.85216*t2105*t2237 + 0.85216*t2441*t2483)*var2[2] - 0.5*t3158*var2[5] - 0.5*t3158*var2[6]);
  p_output1[1]=t3742;
  p_output1[2]=t3742;
  p_output1[3]=-0.5*t3917*var2[2] - 0.5*t4047*var2[5] - 0.5*t4047*var2[6];
  p_output1[4]=-0.5*t3917*var2[1];
  p_output1[5]=t4157;
  p_output1[6]=t4157;
  p_output1[7]=var2[1]*(-0.5*(1.70432*Power(t1312,2) + 1.70432*Power(t2054,2) + 1.70432*t1581*t2237 + 1.70432*t1948*t2441)*var2[2] - 0.5*t4379*var2[5] - 0.5*t4379*var2[6]);
  p_output1[8]=t4609;
  p_output1[9]=t4609;
  p_output1[10]=-0.5*t4658*var2[2] - 0.5*t4721*var2[5] - 0.5*t4721*var2[6];
  p_output1[11]=-0.5*t4658*var2[1];
  p_output1[12]=t4854;
  p_output1[13]=t4854;
  p_output1[14]=var2[1]*(-0.5*(0.85216*t2441*t5198 + 0.85216*t2237*t5304)*var2[2] - 0.5*t5859*var2[5] - 0.5*t5999*var2[6]);
  p_output1[15]=var2[1]*(-0.5*t5859*var2[2] - 0.5*(1.70432*t2939*t5557 + 1.70432*t1581*t5826 + t6048 + t6114 + 0.85216*t1948*(-2.*t2875*t5428 - 2.*t5518*t586 - 1.*t586*t6263 + t6294 + t6306 - 1.*t5428*t950) + 0.85216*t1581*(t1873*t5428 + 2.*t5428*t586 + t6394 + t6464 + 2.*t5518*t950 + t6263*t950))*var2[5] - 0.5*t6925*var2[6]);
  p_output1[16]=var2[1]*(-0.5*t5999*var2[2] - 0.5*t6925*var2[5] - 0.5*(1.70432*t2939*t5941 + 1.70432*t1581*t5986 + t6048 + t6114 + 0.85216*t1948*(-2.*t2875*t5900 - 2.*t586*t5925 + t6294 + t6306 + t6561 + t6633) + 0.85216*t1581*(2.*t586*t5900 + t6394 + t6464 + t6824 + t6849 + 2.*t5925*t950))*var2[6]);
  p_output1[17]=-0.5*t7346*var2[2] - 0.5*t7431*var2[5] - 0.5*t7502*var2[6];
  p_output1[18]=-0.5*t7346*var2[1];
  p_output1[19]=-0.5*t7431*var2[1];
  p_output1[20]=-0.5*t7502*var2[1];
  p_output1[21]=var2[1]*(-0.5*(0.85216*t2441*t7662 + 0.85216*t2237*t7719)*var2[2] - 0.5*t7792*var2[5] - 0.5*(t7773 + t7781 + t7890 + 0.85216*t2054*t7927)*var2[6]);
  p_output1[22]=var2[1]*(-0.5*t7792*var2[2] - 0.5*(t8116 + t8117)*var2[5] - 0.5*(t8116 + t8117 + t8157 + t8158)*var2[6]);
  p_output1[23]=var2[1]*(-0.5*(t7773 + t7781 + t7890 + 0.85216*t2054*t8179)*var2[2] - 0.5*(t8116 + t8117 + t8158 + t8194)*var2[5] - 0.5*(0.85216*t1948*t7888 + 1.70432*t2939*t7888 + 0.85216*t1581*(0. - 0.4999*t301 - 1.*t301*t4929 - 0.17188499999999995*t7910) + t8116 + t8117 + t8157 + t8194)*var2[6]);
  p_output1[24]=-0.5*t8251*var2[2] - 0.5*t8260*var2[5] - 0.5*t8271*var2[6];
  p_output1[25]=-0.5*t8251*var2[1];
  p_output1[26]=-0.5*t8260*var2[1];
  p_output1[27]=-0.5*t8271*var2[1];
  p_output1[28]=var2[1]*(0.07323676079999998*t2237*var2[2] + 0.07323676079999998*t3044*var2[5] + 0.07323676079999998*t3044*var2[6]);
  p_output1[29]=t8296;
  p_output1[30]=t8296;
  p_output1[31]=0.07323676079999998*t1312*var2[2] + 0.07323676079999998*t2939*var2[5] + 0.07323676079999998*t2939*var2[6];
  p_output1[32]=0.07323676079999998*t1312*var2[1];
  p_output1[33]=t8308;
  p_output1[34]=t8308;
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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

#include "J_Ce1_vec_L5_J2_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L5_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
