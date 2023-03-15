/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:35:12 GMT-08:00
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
  double t1403;
  double t844;
  double t875;
  double t1445;
  double t2163;
  double t80;
  double t2709;
  double t2800;
  double t2945;
  double t1393;
  double t1449;
  double t1644;
  double t2012;
  double t3091;
  double t3426;
  double t3769;
  double t3779;
  double t3988;
  double t4216;
  double t4231;
  double t4325;
  double t4585;
  double t4617;
  double t4648;
  double t4675;
  double t4680;
  double t4564;
  double t4747;
  double t4754;
  double t4818;
  double t4887;
  double t4992;
  double t5008;
  double t5021;
  double t5024;
  double t5043;
  double t4387;
  double t4414;
  double t4424;
  double t5171;
  double t5197;
  double t5201;
  double t5211;
  double t4441;
  double t4446;
  double t5111;
  double t5113;
  double t5135;
  double t5140;
  double t5157;
  double t4825;
  double t5045;
  double t5063;
  double t5092;
  double t5093;
  double t5105;
  double t5280;
  double t5285;
  double t5296;
  double t5306;
  double t5491;
  double t5492;
  double t5496;
  double t5498;
  double t5501;
  double t5340;
  double t5344;
  double t5405;
  double t5407;
  double t5410;
  double t5471;
  double t5472;
  double t5636;
  double t5641;
  double t5645;
  double t5647;
  double t5671;
  double t5674;
  double t5521;
  double t5530;
  double t5531;
  double t5548;
  double t5569;
  double t5571;
  double t5575;
  double t5583;
  double t5585;
  double t5593;
  double t5602;
  double t5604;
  double t5609;
  double t5620;
  double t5628;
  double t5629;
  double t5634;
  double t5661;
  double t5697;
  double t5706;
  double t5863;
  double t5876;
  double t5893;
  double t5894;
  double t5721;
  double t3446;
  double t4344;
  double t4440;
  double t4457;
  double t4512;
  double t5433;
  double t5435;
  double t5420;
  double t5429;
  double t5443;
  double t5455;
  double t5432;
  double t5434;
  double t5440;
  double t5456;
  double t5462;
  double t5648;
  double t5676;
  double t5687;
  double t5707;
  double t5717;
  double t5725;
  double t6188;
  double t5825;
  double t5835;
  double t5836;
  double t5806;
  double t5807;
  double t5815;
  double t5820;
  double t6191;
  double t6192;
  double t6205;
  double t6208;
  double t6228;
  double t6235;
  double t6236;
  double t6238;
  double t5892;
  double t5897;
  double t5899;
  double t6243;
  double t5914;
  double t5930;
  double t5966;
  double t6042;
  double t6045;
  double t6053;
  double t5474;
  double t5477;
  double t5483;
  double t5309;
  double t5322;
  double t5325;
  double t5082;
  double t5106;
  double t5109;
  double t6092;
  double t6094;
  double t6096;
  double t6166;
  double t6168;
  double t6177;
  double t6241;
  double t6247;
  double t6269;
  double t5692;
  double t5737;
  double t5762;
  double t6323;
  double t6324;
  double t6331;
  double t5911;
  double t5982;
  double t6016;
  double t6060;
  double t6061;
  double t6063;
  double t6385;
  double t6405;
  double t5159;
  double t5224;
  double t5262;
  double t6106;
  double t6108;
  double t6109;
  double t6439;
  double t6447;
  double t6458;
  double t6125;
  double t6133;
  double t6134;
  double t6193;
  double t5536;
  double t6496;
  double t6501;
  double t6505;
  double t6291;
  double t6316;
  double t6318;
  double t5821;
  double t5848;
  double t5855;
  double t6557;
  double t6559;
  double t6565;
  double t6571;
  double t6581;
  double t6065;
  double t6066;
  double t6071;
  double t6689;
  double t6703;
  double t6708;
  double t6719;
  double t6725;
  double t5266;
  double t6116;
  double t6475;
  double t6480;
  double t6738;
  double t6740;
  double t6859;
  double t6866;
  double t6076;
  double t6374;
  double t6712;
  double t6718;
  double t6840;
  double t6845;
  t1403 = Cos(var2[5]);
  t844 = Cos(var2[6]);
  t875 = Sin(var2[5]);
  t1445 = Sin(var2[6]);
  t2163 = Cos(var2[2]);
  t80 = Sin(var2[2]);
  t2709 = t1403*t844;
  t2800 = -1.*t875*t1445;
  t2945 = t2709 + t2800;
  t1393 = -1.*t844*t875;
  t1449 = -1.*t1403*t1445;
  t1644 = t1393 + t1449;
  t2012 = t80*t1644;
  t3091 = t2163*t2945;
  t3426 = t2012 + t3091;
  t3769 = t844*t875;
  t3779 = t1403*t1445;
  t3988 = t3769 + t3779;
  t4216 = t2163*t3988;
  t4231 = t80*t2945;
  t4325 = t4216 + t4231;
  t4585 = -1.*t844;
  t4617 = 1. + t4585;
  t4648 = -0.9063*t4617;
  t4675 = -1.078185*t844;
  t4680 = t4648 + t4675;
  t4564 = 0.4999*t875;
  t4747 = t4680*t875;
  t4754 = -0.17188499999999995*t1403*t1445;
  t4818 = t4564 + t4747 + t4754;
  t4887 = -1.*t1403;
  t4992 = 1. + t4887;
  t5008 = -0.4999*t4992;
  t5021 = t1403*t4680;
  t5024 = 0.17188499999999995*t875*t1445;
  t5043 = t5008 + t5021 + t5024;
  t4387 = t2163*t1644;
  t4414 = -1.*t80*t2945;
  t4424 = t4387 + t4414;
  t5171 = 0.4999*t1445;
  t5197 = t4680*t1445;
  t5201 = 0.17188499999999995*t844*t1445;
  t5211 = t5171 + t5197 + t5201;
  t4441 = -1.*t80*t3988;
  t4446 = t4441 + t3091;
  t5111 = 0.4999*t844;
  t5113 = t4680*t844;
  t5135 = Power(t1445,2);
  t5140 = -0.17188499999999995*t5135;
  t5157 = t5111 + t5113 + t5140;
  t4825 = -1.*t4818*t2945;
  t5045 = -1.*t1644*t5043;
  t5063 = t4825 + t5045;
  t5092 = t4818*t3988;
  t5093 = t2945*t5043;
  t5105 = t5092 + t5093;
  t5280 = -1.*var1[4];
  t5285 = var3[6] + t5280;
  t5296 = -1.*var1[3];
  t5306 = var3[5] + t5296;
  t5491 = -1.*t1403*t844;
  t5492 = t875*t1445;
  t5496 = t5491 + t5492;
  t5498 = t80*t5496;
  t5501 = t4387 + t5498;
  t5340 = -1.*var1[0];
  t5344 = var3[0] + t5340;
  t5405 = -1.*var1[1];
  t5407 = var3[1] + t5405;
  t5410 = -1.*t80*t1644;
  t5471 = -1.*var1[2];
  t5472 = var3[2] + t5471;
  t5636 = -0.4999*t875;
  t5641 = -1.*t4680*t875;
  t5645 = 0.17188499999999995*t1403*t1445;
  t5647 = t5636 + t5641 + t5645;
  t5671 = 0.4999*t1403;
  t5674 = t5671 + t5021 + t5024;
  t5521 = -0.14647352159999996*t5285*t5501;
  t5530 = 0.85216*t5211*t3426;
  t5531 = 0.85216*t5157*t5501;
  t5548 = 1.70432*t3426*t4325;
  t5569 = 1.70432*t3426*t5501;
  t5571 = t5548 + t5569;
  t5575 = t5344*t5571;
  t5583 = 0.85216*t3426*t4446;
  t5585 = 0.85216*t4424*t4325;
  t5593 = t2163*t5496;
  t5602 = t5410 + t5593;
  t5604 = 0.85216*t3426*t5602;
  t5609 = 0.85216*t4424*t5501;
  t5620 = t5583 + t5585 + t5604 + t5609;
  t5628 = t5407*t5620;
  t5629 = 0.85216*t3426*t5063;
  t5634 = t4818*t2945;
  t5661 = t1644*t5043;
  t5697 = 0.85216*t5105*t5501;
  t5706 = -1.*t1644*t4818;
  t5863 = 0.17188499999999995*t844*t875;
  t5876 = t5863 + t5645;
  t5893 = -0.17188499999999995*t1403*t844;
  t5894 = t5893 + t5024;
  t5721 = -1.*t5043*t5496;
  t3446 = Power(t3426,2);
  t4344 = Power(t4325,2);
  t4440 = -0.85216*t3426*t4424;
  t4457 = -0.85216*t4446*t4325;
  t4512 = t4440 + t4457;
  t5433 = Power(t4446,2);
  t5435 = Power(t4424,2);
  t5420 = -1.*t2163*t2945;
  t5429 = t5410 + t5420;
  t5443 = -1.*t2163*t3988;
  t5455 = t5443 + t4414;
  t5432 = 0.85216*t5429*t3426;
  t5434 = 0.85216*t5433;
  t5440 = 0.85216*t5435;
  t5456 = 0.85216*t5455*t4325;
  t5462 = t5432 + t5434 + t5440 + t5456;
  t5648 = t5647*t2945;
  t5676 = t3988*t5674;
  t5687 = t5634 + t5648 + t5661 + t5676;
  t5707 = -1.*t1644*t5647;
  t5717 = -1.*t2945*t5674;
  t5725 = t5706 + t5707 + t5717 + t5721;
  t6188 = -0.14647352159999996*t5285*t5602;
  t5825 = Power(t844,2);
  t5835 = 0.17188499999999995*t5825;
  t5836 = 0. + t5111 + t5113 + t5835;
  t5806 = -0.4999*t1445;
  t5807 = -1.*t4680*t1445;
  t5815 = -0.17188499999999995*t844*t1445;
  t5820 = t5806 + t5807 + t5815;
  t6191 = 0.85216*t5211*t4424;
  t6192 = 0.85216*t5157*t5602;
  t6205 = 1.70432*t4446*t4424;
  t6208 = 1.70432*t4424*t5602;
  t6228 = t6205 + t6208;
  t6235 = t5407*t6228;
  t6236 = t5344*t5620;
  t6238 = 0.85216*t4424*t5063;
  t5892 = t5876*t2945;
  t5897 = t3988*t5894;
  t5899 = t5634 + t5892 + t5661 + t5897;
  t6243 = 0.85216*t5105*t5602;
  t5914 = -1.*t1644*t5876;
  t5930 = -1.*t2945*t5894;
  t5966 = t5706 + t5914 + t5930 + t5721;
  t6042 = 0.85216*t3426*t4424;
  t6045 = 0.85216*t4446*t4325;
  t6053 = t6042 + t6045;
  t5474 = 0.85216*t4446*t5063;
  t5477 = 0.85216*t4424*t5105;
  t5483 = t5474 + t5477;
  t5309 = 0.85216*t5211*t4446;
  t5322 = 0.85216*t5157*t4424;
  t5325 = t5309 + t5322;
  t5082 = -0.85216*t4325*t5063;
  t5106 = -0.85216*t3426*t5105;
  t5109 = t5082 + t5106;
  t6092 = -0.85216*t4446*t5063;
  t6094 = -0.85216*t4424*t5105;
  t6096 = t6092 + t6094;
  t6166 = 0.85216*t5455*t5063;
  t6168 = 0.85216*t5429*t5105;
  t6177 = t6166 + t6168;
  t6241 = 0.85216*t4424*t5687;
  t6247 = 0.85216*t4446*t5725;
  t6269 = t6238 + t6241 + t6243 + t6247;
  t5692 = 0.85216*t3426*t5687;
  t5737 = 0.85216*t4325*t5725;
  t5762 = t5629 + t5692 + t5697 + t5737;
  t6323 = 0.85216*t4424*t5899;
  t6324 = 0.85216*t4446*t5966;
  t6331 = t6238 + t6323 + t6243 + t6324;
  t5911 = 0.85216*t3426*t5899;
  t5982 = 0.85216*t4325*t5966;
  t6016 = t5629 + t5911 + t5697 + t5982;
  t6060 = 0.85216*t4325*t5063;
  t6061 = 0.85216*t3426*t5105;
  t6063 = t6060 + t6061;
  t6385 = Power(t5063,2);
  t6405 = Power(t5105,2);
  t5159 = -0.85216*t5157*t3426;
  t5224 = -0.85216*t5211*t4325;
  t5262 = t5159 + t5224;
  t6106 = -0.85216*t5211*t4446;
  t6108 = -0.85216*t5157*t4424;
  t6109 = t6106 + t6108;
  t6439 = -0.85216*t5211*t5063;
  t6447 = -0.85216*t5157*t5105;
  t6458 = -0.019286 + t6439 + t6447;
  t6125 = 0.85216*t5157*t5429;
  t6133 = 0.85216*t5211*t5455;
  t6134 = t6125 + t6133;
  t6193 = t6191 + t6192;
  t5536 = t5530 + t5531;
  t6496 = 0.85216*t5157*t5687;
  t6501 = 0.85216*t5211*t5725;
  t6505 = t6496 + t6501;
  t6291 = 0.85216*t5836*t4446;
  t6316 = 0.85216*t5820*t4424;
  t6318 = t6291 + t6316 + t6191 + t6192;
  t5821 = 0.85216*t5820*t3426;
  t5848 = 0.85216*t5836*t4325;
  t5855 = t5821 + t5530 + t5848 + t5531;
  t6557 = 0.85216*t5836*t5063;
  t6559 = 0.85216*t5820*t5105;
  t6565 = 0.85216*t5157*t5899;
  t6571 = 0.85216*t5211*t5966;
  t6581 = t6557 + t6559 + t6565 + t6571;
  t6065 = 0.85216*t5157*t3426;
  t6066 = 0.85216*t5211*t4325;
  t6071 = t6065 + t6066;
  t6689 = 0.85216*t5211*t5063;
  t6703 = 0.85216*t5157*t5105;
  t6708 = 0.019286 + t6689 + t6703;
  t6719 = Power(t5211,2);
  t6725 = Power(t5157,2);
  t5266 = 0.14647352159999996*t3426;
  t6116 = 0.14647352159999996*t4424;
  t6475 = 0.14647352159999996*t5105;
  t6480 = -0.019286 + t6475;
  t6738 = 0.14647352159999996*t5157;
  t6740 = -0.019286 + t6738;
  t6859 = -0.14647352159999996*t5407*t5602;
  t6866 = -0.14647352159999996*t5344*t5501;
  t6076 = -0.14647352159999996*t3426;
  t6374 = -0.14647352159999996*t4424;
  t6712 = -0.14647352159999996*t5105;
  t6718 = 0.019286 + t6712;
  t6840 = -0.14647352159999996*t5157;
  t6845 = 0.019286 + t6840;
  p_output1[0]=-0.85216*t3446 - 0.85216*t4344;
  p_output1[1]=t4512;
  p_output1[2]=t5109;
  p_output1[3]=t5262;
  p_output1[4]=t5266;
  p_output1[5]=-0.14647352159999996*t4424*t5285 + t5306*t5325 + (1.70432*t3426*t4424 + 1.70432*t4325*t4446)*t5344 + t5407*t5462 + t5472*t5483;
  p_output1[6]=t5521 + t5306*t5536 + t5575 + t5628 + t5472*t5762;
  p_output1[7]=t5521 + t5575 + t5628 + t5306*t5855 + t5472*t6016;
  p_output1[8]=0.85216*t3446 + 0.85216*t4344;
  p_output1[9]=t6053;
  p_output1[10]=t6063;
  p_output1[11]=t6071;
  p_output1[12]=t6076;
  p_output1[13]=t4512;
  p_output1[14]=-0.85216*t5433 - 0.85216*t5435;
  p_output1[15]=t6096;
  p_output1[16]=t6109;
  p_output1[17]=t6116;
  p_output1[18]=-0.14647352159999996*t5285*t5429 + t5407*(1.70432*t4424*t5429 + 1.70432*t4446*t5455) + t5344*t5462 + t5306*t6134 + t5472*t6177;
  p_output1[19]=t6188 + t5306*t6193 + t6235 + t6236 + t5472*t6269;
  p_output1[20]=t6188 + t6235 + t6236 + t5306*t6318 + t5472*t6331;
  p_output1[21]=t6053;
  p_output1[22]=t5434 + t5440;
  p_output1[23]=t5483;
  p_output1[24]=t5325;
  p_output1[25]=t6374;
  p_output1[26]=t5109;
  p_output1[27]=t6096;
  p_output1[28]=-0.019286 - 0.85216*t6385 - 0.85216*t6405;
  p_output1[29]=t6458;
  p_output1[30]=t6480;
  p_output1[31]=t5344*t5483 + t5407*t6177;
  p_output1[32]=-0.14647352159999996*t5285*t5687 + t5472*(1.70432*t5105*t5687 + 1.70432*t5063*t5725) + t5344*t5762 + t5407*t6269 + t5306*t6505;
  p_output1[33]=-0.14647352159999996*t5285*t5899 + t5472*(1.70432*t5105*t5899 + 1.70432*t5063*t5966) + t5344*t6016 + t5407*t6331 + t5306*t6581;
  p_output1[34]=t6063;
  p_output1[35]=t5483;
  p_output1[36]=0.019286 + 0.85216*t6385 + 0.85216*t6405;
  p_output1[37]=t6708;
  p_output1[38]=t6718;
  p_output1[39]=t5262;
  p_output1[40]=t6109;
  p_output1[41]=t6458;
  p_output1[42]=-0.019286 - 0.85216*t6719 - 0.85216*t6725;
  p_output1[43]=t6740;
  p_output1[44]=t5325*t5344 + t5407*t6134;
  p_output1[45]=t5344*t5536 + t5407*t6193 + t5472*t6505;
  p_output1[46]=-0.14647352159999996*t5285*t5820 + t5306*(1.70432*t5157*t5820 + 1.70432*t5211*t5836) + t5344*t5855 + t5407*t6318 + t5472*t6581;
  p_output1[47]=t6071;
  p_output1[48]=t5325;
  p_output1[49]=t6708;
  p_output1[50]=0.019286 + 0.85216*t6719 + 0.85216*t6725;
  p_output1[51]=t6845;
  p_output1[52]=t5266;
  p_output1[53]=t6116;
  p_output1[54]=t6480;
  p_output1[55]=t6740;
  p_output1[56]=-0.04446260126021599;
  p_output1[57]=-0.14647352159999996*t4424*t5344 - 0.14647352159999996*t5407*t5429;
  p_output1[58]=-0.14647352159999996*t5472*t5687 + t6859 + t6866;
  p_output1[59]=-0.14647352159999996*t5306*t5820 - 0.14647352159999996*t5472*t5899 + t6859 + t6866;
  p_output1[60]=t6076;
  p_output1[61]=t6374;
  p_output1[62]=t6718;
  p_output1[63]=t6845;
  p_output1[64]=0.04446260126021599;
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 65, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMap5_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void J_dxDiscreteMap5_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
