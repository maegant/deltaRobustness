/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:09 GMT-08:00
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
  double t453;
  double t999;
  double t1197;
  double t1233;
  double t1734;
  double t1921;
  double t2020;
  double t2150;
  double t2869;
  double t2960;
  double t3087;
  double t4673;
  double t4742;
  double t6025;
  double t6891;
  double t7520;
  double t7534;
  double t7679;
  double t7680;
  double t7681;
  double t7682;
  double t7697;
  double t7702;
  double t7709;
  double t7711;
  double t7715;
  double t7717;
  double t7729;
  double t7731;
  double t7732;
  double t7789;
  double t7795;
  double t7796;
  double t7802;
  double t7803;
  double t7804;
  double t7805;
  double t7806;
  double t7807;
  double t7808;
  double t7809;
  double t7810;
  double t7812;
  double t7842;
  double t7843;
  double t7844;
  double t7847;
  double t7848;
  double t7855;
  double t7859;
  double t7860;
  double t7861;
  double t7862;
  double t7864;
  double t7866;
  double t7867;
  double t7909;
  double t7913;
  double t7917;
  double t7923;
  double t7929;
  double t7931;
  double t7932;
  double t7934;
  double t7935;
  double t7937;
  double t7939;
  double t7940;
  double t7941;
  double t3292;
  double t3715;
  double t4333;
  double t4997;
  double t5050;
  double t5069;
  double t6901;
  double t7132;
  double t7433;
  double t7549;
  double t7629;
  double t7641;
  double t7673;
  double t7675;
  double t7735;
  double t7736;
  double t7739;
  double t7744;
  double t7751;
  double t7753;
  double t7762;
  double t7763;
  double t7764;
  double t7772;
  double t7773;
  double t7775;
  double t7779;
  double t7780;
  double t7784;
  double t7786;
  double t7787;
  double t7813;
  double t7815;
  double t7816;
  double t7817;
  double t7818;
  double t7820;
  double t7821;
  double t7824;
  double t7825;
  double t7826;
  double t7829;
  double t7830;
  double t7831;
  double t7832;
  double t7835;
  double t7838;
  double t7839;
  double t7868;
  double t7872;
  double t7873;
  double t7874;
  double t7877;
  double t7878;
  double t7883;
  double t7885;
  double t7886;
  double t7892;
  double t7893;
  double t7895;
  double t7901;
  double t7904;
  double t7905;
  double t7907;
  double t7908;
  double t7942;
  double t7944;
  double t7946;
  double t8047;
  double t8056;
  double t8048;
  double t8049;
  double t8050;
  double t8051;
  double t8052;
  double t8053;
  double t8054;
  double t8055;
  double t8057;
  double t8058;
  double t8059;
  double t8060;
  double t8061;
  double t8062;
  double t8063;
  double t8064;
  double t8065;
  double t8066;
  double t8067;
  double t8068;
  double t8069;
  double t8070;
  double t8071;
  double t8072;
  double t8073;
  double t8074;
  double t8075;
  double t8076;
  double t8077;
  double t8078;
  double t8079;
  double t8080;
  double t8081;
  double t8082;
  double t8083;
  double t8084;
  double t8085;
  double t8086;
  double t8087;
  double t8088;
  double t8089;
  double t8090;
  double t8091;
  double t8093;
  t453 = -1.*var4[1];
  t999 = var4[0] + t453;
  t1197 = Power(t999,-2);
  t1233 = 1/t999;
  t1734 = 0.8731249999999999*var1[2];
  t1921 = 0.8731249999999999*var1[5];
  t2020 = 0.46672499999999995*var1[6];
  t2150 = t453 + t1734 + t1921 + t2020;
  t2869 = -1.*t1233*t2150;
  t2960 = 1. + t2869;
  t3087 = Power(t2960,3);
  t4673 = Power(t999,-3);
  t4742 = Power(t2960,2);
  t6025 = Power(t999,-4);
  t6891 = Power(t2150,2);
  t7520 = Power(t999,-5);
  t7534 = Power(t2150,3);
  t7679 = 15.246945312499998*var3[0]*t1197*t3087;
  t7680 = -30.493890624999995*var3[4]*t1197*t3087;
  t7681 = 15.246945312499998*var3[8]*t1197*t3087;
  t7682 = 45.740835937499995*var3[4]*t4673*t4742*t2150;
  t7697 = -91.48167187499999*var3[8]*t4673*t4742*t2150;
  t7702 = 45.740835937499995*var3[12]*t4673*t4742*t2150;
  t7709 = 45.740835937499995*var3[8]*t6025*t2960*t6891;
  t7711 = -91.48167187499999*var3[12]*t6025*t2960*t6891;
  t7715 = 45.740835937499995*var3[16]*t6025*t2960*t6891;
  t7717 = 15.246945312499998*var3[12]*t7520*t7534;
  t7729 = -30.493890624999995*var3[16]*t7520*t7534;
  t7731 = 15.246945312499998*var3[20]*t7520*t7534;
  t7732 = t7679 + t7680 + t7681 + t7682 + t7697 + t7702 + t7709 + t7711 + t7715 + t7717 + t7729 + t7731;
  t7789 = 15.246945312499998*var3[1]*t1197*t3087;
  t7795 = -30.493890624999995*var3[5]*t1197*t3087;
  t7796 = 15.246945312499998*var3[9]*t1197*t3087;
  t7802 = 45.740835937499995*var3[5]*t4673*t4742*t2150;
  t7803 = -91.48167187499999*var3[9]*t4673*t4742*t2150;
  t7804 = 45.740835937499995*var3[13]*t4673*t4742*t2150;
  t7805 = 45.740835937499995*var3[9]*t6025*t2960*t6891;
  t7806 = -91.48167187499999*var3[13]*t6025*t2960*t6891;
  t7807 = 45.740835937499995*var3[17]*t6025*t2960*t6891;
  t7808 = 15.246945312499998*var3[13]*t7520*t7534;
  t7809 = -30.493890624999995*var3[17]*t7520*t7534;
  t7810 = 15.246945312499998*var3[21]*t7520*t7534;
  t7812 = t7789 + t7795 + t7796 + t7802 + t7803 + t7804 + t7805 + t7806 + t7807 + t7808 + t7809 + t7810;
  t7842 = 15.246945312499998*var3[2]*t1197*t3087;
  t7843 = -30.493890624999995*var3[6]*t1197*t3087;
  t7844 = 15.246945312499998*var3[10]*t1197*t3087;
  t7847 = 45.740835937499995*var3[6]*t4673*t4742*t2150;
  t7848 = -91.48167187499999*var3[10]*t4673*t4742*t2150;
  t7855 = 45.740835937499995*var3[14]*t4673*t4742*t2150;
  t7859 = 45.740835937499995*var3[10]*t6025*t2960*t6891;
  t7860 = -91.48167187499999*var3[14]*t6025*t2960*t6891;
  t7861 = 45.740835937499995*var3[18]*t6025*t2960*t6891;
  t7862 = 15.246945312499998*var3[14]*t7520*t7534;
  t7864 = -30.493890624999995*var3[18]*t7520*t7534;
  t7866 = 15.246945312499998*var3[22]*t7520*t7534;
  t7867 = t7842 + t7843 + t7844 + t7847 + t7848 + t7855 + t7859 + t7860 + t7861 + t7862 + t7864 + t7866;
  t7909 = 15.246945312499998*var3[3]*t1197*t3087;
  t7913 = -30.493890624999995*var3[7]*t1197*t3087;
  t7917 = 15.246945312499998*var3[11]*t1197*t3087;
  t7923 = 45.740835937499995*var3[7]*t4673*t4742*t2150;
  t7929 = -91.48167187499999*var3[11]*t4673*t4742*t2150;
  t7931 = 45.740835937499995*var3[15]*t4673*t4742*t2150;
  t7932 = 45.740835937499995*var3[11]*t6025*t2960*t6891;
  t7934 = -91.48167187499999*var3[15]*t6025*t2960*t6891;
  t7935 = 45.740835937499995*var3[19]*t6025*t2960*t6891;
  t7937 = 15.246945312499998*var3[15]*t7520*t7534;
  t7939 = -30.493890624999995*var3[19]*t7520*t7534;
  t7940 = 15.246945312499998*var3[23]*t7520*t7534;
  t7941 = t7909 + t7913 + t7917 + t7923 + t7929 + t7931 + t7932 + t7934 + t7935 + t7937 + t7939 + t7940;
  t3292 = 8.150185312499998*var3[0]*t1197*t3087;
  t3715 = -16.300370624999996*var3[4]*t1197*t3087;
  t4333 = 8.150185312499998*var3[8]*t1197*t3087;
  t4997 = 24.450555937499995*var3[4]*t4673*t4742*t2150;
  t5050 = -48.90111187499999*var3[8]*t4673*t4742*t2150;
  t5069 = 24.450555937499995*var3[12]*t4673*t4742*t2150;
  t6901 = 24.450555937499995*var3[8]*t6025*t2960*t6891;
  t7132 = -48.90111187499999*var3[12]*t6025*t2960*t6891;
  t7433 = 24.450555937499995*var3[16]*t6025*t2960*t6891;
  t7549 = 8.150185312499998*var3[12]*t7520*t7534;
  t7629 = -16.300370624999996*var3[16]*t7520*t7534;
  t7641 = 8.150185312499998*var3[20]*t7520*t7534;
  t7673 = t3292 + t3715 + t4333 + t4997 + t5050 + t5069 + t6901 + t7132 + t7433 + t7549 + t7629 + t7641;
  t7675 = var2[6]*t7673;
  t7735 = var2[2]*t7732;
  t7736 = var2[5]*t7732;
  t7739 = t7675 + t7735 + t7736;
  t7744 = 8.150185312499998*var3[1]*t1197*t3087;
  t7751 = -16.300370624999996*var3[5]*t1197*t3087;
  t7753 = 8.150185312499998*var3[9]*t1197*t3087;
  t7762 = 24.450555937499995*var3[5]*t4673*t4742*t2150;
  t7763 = -48.90111187499999*var3[9]*t4673*t4742*t2150;
  t7764 = 24.450555937499995*var3[13]*t4673*t4742*t2150;
  t7772 = 24.450555937499995*var3[9]*t6025*t2960*t6891;
  t7773 = -48.90111187499999*var3[13]*t6025*t2960*t6891;
  t7775 = 24.450555937499995*var3[17]*t6025*t2960*t6891;
  t7779 = 8.150185312499998*var3[13]*t7520*t7534;
  t7780 = -16.300370624999996*var3[17]*t7520*t7534;
  t7784 = 8.150185312499998*var3[21]*t7520*t7534;
  t7786 = t7744 + t7751 + t7753 + t7762 + t7763 + t7764 + t7772 + t7773 + t7775 + t7779 + t7780 + t7784;
  t7787 = var2[6]*t7786;
  t7813 = var2[2]*t7812;
  t7815 = var2[5]*t7812;
  t7816 = t7787 + t7813 + t7815;
  t7817 = 8.150185312499998*var3[2]*t1197*t3087;
  t7818 = -16.300370624999996*var3[6]*t1197*t3087;
  t7820 = 8.150185312499998*var3[10]*t1197*t3087;
  t7821 = 24.450555937499995*var3[6]*t4673*t4742*t2150;
  t7824 = -48.90111187499999*var3[10]*t4673*t4742*t2150;
  t7825 = 24.450555937499995*var3[14]*t4673*t4742*t2150;
  t7826 = 24.450555937499995*var3[10]*t6025*t2960*t6891;
  t7829 = -48.90111187499999*var3[14]*t6025*t2960*t6891;
  t7830 = 24.450555937499995*var3[18]*t6025*t2960*t6891;
  t7831 = 8.150185312499998*var3[14]*t7520*t7534;
  t7832 = -16.300370624999996*var3[18]*t7520*t7534;
  t7835 = 8.150185312499998*var3[22]*t7520*t7534;
  t7838 = t7817 + t7818 + t7820 + t7821 + t7824 + t7825 + t7826 + t7829 + t7830 + t7831 + t7832 + t7835;
  t7839 = var2[6]*t7838;
  t7868 = var2[2]*t7867;
  t7872 = var2[5]*t7867;
  t7873 = t7839 + t7868 + t7872;
  t7874 = 8.150185312499998*var3[3]*t1197*t3087;
  t7877 = -16.300370624999996*var3[7]*t1197*t3087;
  t7878 = 8.150185312499998*var3[11]*t1197*t3087;
  t7883 = 24.450555937499995*var3[7]*t4673*t4742*t2150;
  t7885 = -48.90111187499999*var3[11]*t4673*t4742*t2150;
  t7886 = 24.450555937499995*var3[15]*t4673*t4742*t2150;
  t7892 = 24.450555937499995*var3[11]*t6025*t2960*t6891;
  t7893 = -48.90111187499999*var3[15]*t6025*t2960*t6891;
  t7895 = 24.450555937499995*var3[19]*t6025*t2960*t6891;
  t7901 = 8.150185312499998*var3[15]*t7520*t7534;
  t7904 = -16.300370624999996*var3[19]*t7520*t7534;
  t7905 = 8.150185312499998*var3[23]*t7520*t7534;
  t7907 = t7874 + t7877 + t7878 + t7883 + t7885 + t7886 + t7892 + t7893 + t7895 + t7901 + t7904 + t7905;
  t7908 = var2[6]*t7907;
  t7942 = var2[2]*t7941;
  t7944 = var2[5]*t7941;
  t7946 = t7908 + t7942 + t7944;
  t8047 = Power(t2960,4);
  t8056 = Power(t2150,4);
  t8048 = -4.365625*var3[0]*t1233*t8047;
  t8049 = 4.365625*var3[4]*t1233*t8047;
  t8050 = -17.4625*var3[4]*t1197*t3087*t2150;
  t8051 = 17.4625*var3[8]*t1197*t3087*t2150;
  t8052 = -26.193749999999998*var3[8]*t4673*t4742*t6891;
  t8053 = 26.193749999999998*var3[12]*t4673*t4742*t6891;
  t8054 = -17.4625*var3[12]*t6025*t2960*t7534;
  t8055 = 17.4625*var3[16]*t6025*t2960*t7534;
  t8057 = -4.365625*var3[16]*t7520*t8056;
  t8058 = 4.365625*var3[20]*t7520*t8056;
  t8059 = t8048 + t8049 + t8050 + t8051 + t8052 + t8053 + t8054 + t8055 + t8057 + t8058;
  t8060 = -4.365625*var3[1]*t1233*t8047;
  t8061 = 4.365625*var3[5]*t1233*t8047;
  t8062 = -17.4625*var3[5]*t1197*t3087*t2150;
  t8063 = 17.4625*var3[9]*t1197*t3087*t2150;
  t8064 = -26.193749999999998*var3[9]*t4673*t4742*t6891;
  t8065 = 26.193749999999998*var3[13]*t4673*t4742*t6891;
  t8066 = -17.4625*var3[13]*t6025*t2960*t7534;
  t8067 = 17.4625*var3[17]*t6025*t2960*t7534;
  t8068 = -4.365625*var3[17]*t7520*t8056;
  t8069 = 4.365625*var3[21]*t7520*t8056;
  t8070 = t8060 + t8061 + t8062 + t8063 + t8064 + t8065 + t8066 + t8067 + t8068 + t8069;
  t8071 = -4.365625*var3[2]*t1233*t8047;
  t8072 = 4.365625*var3[6]*t1233*t8047;
  t8073 = -17.4625*var3[6]*t1197*t3087*t2150;
  t8074 = 17.4625*var3[10]*t1197*t3087*t2150;
  t8075 = -26.193749999999998*var3[10]*t4673*t4742*t6891;
  t8076 = 26.193749999999998*var3[14]*t4673*t4742*t6891;
  t8077 = -17.4625*var3[14]*t6025*t2960*t7534;
  t8078 = 17.4625*var3[18]*t6025*t2960*t7534;
  t8079 = -4.365625*var3[18]*t7520*t8056;
  t8080 = 4.365625*var3[22]*t7520*t8056;
  t8081 = t8071 + t8072 + t8073 + t8074 + t8075 + t8076 + t8077 + t8078 + t8079 + t8080;
  t8082 = -4.365625*var3[3]*t1233*t8047;
  t8083 = 4.365625*var3[7]*t1233*t8047;
  t8084 = -17.4625*var3[7]*t1197*t3087*t2150;
  t8085 = 17.4625*var3[11]*t1197*t3087*t2150;
  t8086 = -26.193749999999998*var3[11]*t4673*t4742*t6891;
  t8087 = 26.193749999999998*var3[15]*t4673*t4742*t6891;
  t8088 = -17.4625*var3[15]*t6025*t2960*t7534;
  t8089 = 17.4625*var3[19]*t6025*t2960*t7534;
  t8090 = -4.365625*var3[19]*t7520*t8056;
  t8091 = 4.365625*var3[23]*t7520*t8056;
  t8093 = t8082 + t8083 + t8084 + t8085 + t8086 + t8087 + t8088 + t8089 + t8090 + t8091;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=t7739;
  p_output1[9]=t7816;
  p_output1[10]=t7873;
  p_output1[11]=t7946;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=t7739;
  p_output1[21]=t7816;
  p_output1[22]=t7873;
  p_output1[23]=t7946;
  p_output1[24]=t7673*var2[2] + t7673*var2[5] + var2[6]*(4.356644512499999*t1197*t3087*var3[0] - 8.713289024999998*t1197*t3087*var3[4] + 13.069933537499997*t2150*t4673*t4742*var3[4] + 4.356644512499999*t1197*t3087*var3[8] - 26.139867074999994*t2150*t4673*t4742*var3[8] + 13.069933537499997*t2960*t6025*t6891*var3[8] + 13.069933537499997*t2150*t4673*t4742*var3[12] - 26.139867074999994*t2960*t6025*t6891*var3[12] + 4.356644512499999*t7520*t7534*var3[12] + 13.069933537499997*t2960*t6025*t6891*var3[16] - 8.713289024999998*t7520*t7534*var3[16] + 4.356644512499999*t7520*t7534*var3[20]);
  p_output1[25]=t7786*var2[2] + t7786*var2[5] + var2[6]*(4.356644512499999*t1197*t3087*var3[1] - 8.713289024999998*t1197*t3087*var3[5] + 13.069933537499997*t2150*t4673*t4742*var3[5] + 4.356644512499999*t1197*t3087*var3[9] - 26.139867074999994*t2150*t4673*t4742*var3[9] + 13.069933537499997*t2960*t6025*t6891*var3[9] + 13.069933537499997*t2150*t4673*t4742*var3[13] - 26.139867074999994*t2960*t6025*t6891*var3[13] + 4.356644512499999*t7520*t7534*var3[13] + 13.069933537499997*t2960*t6025*t6891*var3[17] - 8.713289024999998*t7520*t7534*var3[17] + 4.356644512499999*t7520*t7534*var3[21]);
  p_output1[26]=t7838*var2[2] + t7838*var2[5] + var2[6]*(4.356644512499999*t1197*t3087*var3[2] - 8.713289024999998*t1197*t3087*var3[6] + 13.069933537499997*t2150*t4673*t4742*var3[6] + 4.356644512499999*t1197*t3087*var3[10] - 26.139867074999994*t2150*t4673*t4742*var3[10] + 13.069933537499997*t2960*t6025*t6891*var3[10] + 13.069933537499997*t2150*t4673*t4742*var3[14] - 26.139867074999994*t2960*t6025*t6891*var3[14] + 4.356644512499999*t7520*t7534*var3[14] + 13.069933537499997*t2960*t6025*t6891*var3[18] - 8.713289024999998*t7520*t7534*var3[18] + 4.356644512499999*t7520*t7534*var3[22]);
  p_output1[27]=t7907*var2[2] + t7907*var2[5] + var2[6]*(4.356644512499999*t1197*t3087*var3[3] - 8.713289024999998*t1197*t3087*var3[7] + 13.069933537499997*t2150*t4673*t4742*var3[7] + 4.356644512499999*t1197*t3087*var3[11] - 26.139867074999994*t2150*t4673*t4742*var3[11] + 13.069933537499997*t2960*t6025*t6891*var3[11] + 13.069933537499997*t2150*t4673*t4742*var3[15] - 26.139867074999994*t2960*t6025*t6891*var3[15] + 4.356644512499999*t7520*t7534*var3[15] + 13.069933537499997*t2960*t6025*t6891*var3[19] - 8.713289024999998*t7520*t7534*var3[19] + 4.356644512499999*t7520*t7534*var3[23]);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t8059;
  p_output1[37]=t8070;
  p_output1[38]=t8081;
  p_output1[39]=t8093;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=t8059;
  p_output1[49]=t8070;
  p_output1[50]=t8081;
  p_output1[51]=t8093;
  p_output1[52]=-2.3336249999999996*t1233*t8047*var3[0] - 9.334499999999998*t1197*t2150*t3087*var3[4] + 2.3336249999999996*t1233*t8047*var3[4] + 9.334499999999998*t1197*t2150*t3087*var3[8] - 14.00175*t4673*t4742*t6891*var3[8] + 14.00175*t4673*t4742*t6891*var3[12] - 9.334499999999998*t2960*t6025*t7534*var3[12] + 9.334499999999998*t2960*t6025*t7534*var3[16] - 2.3336249999999996*t7520*t8056*var3[16] + 2.3336249999999996*t7520*t8056*var3[20];
  p_output1[53]=-2.3336249999999996*t1233*t8047*var3[1] - 9.334499999999998*t1197*t2150*t3087*var3[5] + 2.3336249999999996*t1233*t8047*var3[5] + 9.334499999999998*t1197*t2150*t3087*var3[9] - 14.00175*t4673*t4742*t6891*var3[9] + 14.00175*t4673*t4742*t6891*var3[13] - 9.334499999999998*t2960*t6025*t7534*var3[13] + 9.334499999999998*t2960*t6025*t7534*var3[17] - 2.3336249999999996*t7520*t8056*var3[17] + 2.3336249999999996*t7520*t8056*var3[21];
  p_output1[54]=-2.3336249999999996*t1233*t8047*var3[2] - 9.334499999999998*t1197*t2150*t3087*var3[6] + 2.3336249999999996*t1233*t8047*var3[6] + 9.334499999999998*t1197*t2150*t3087*var3[10] - 14.00175*t4673*t4742*t6891*var3[10] + 14.00175*t4673*t4742*t6891*var3[14] - 9.334499999999998*t2960*t6025*t7534*var3[14] + 9.334499999999998*t2960*t6025*t7534*var3[18] - 2.3336249999999996*t7520*t8056*var3[18] + 2.3336249999999996*t7520*t8056*var3[22];
  p_output1[55]=-2.3336249999999996*t1233*t8047*var3[3] - 9.334499999999998*t1197*t2150*t3087*var3[7] + 2.3336249999999996*t1233*t8047*var3[7] + 9.334499999999998*t1197*t2150*t3087*var3[11] - 14.00175*t4673*t4742*t6891*var3[11] + 14.00175*t4673*t4742*t6891*var3[15] - 9.334499999999998*t2960*t6025*t7534*var3[15] + 9.334499999999998*t2960*t6025*t7534*var3[19] - 2.3336249999999996*t7520*t8056*var3[19] + 2.3336249999999996*t7520*t8056*var3[23];
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "Jd2yd_position_RightSS.hh"

namespace SymFunction
{

void Jd2yd_position_RightSS_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
