/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:35:09 GMT-08:00
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
  double t685;
  double t242;
  double t588;
  double t718;
  double t1574;
  double t145;
  double t2012;
  double t2340;
  double t2893;
  double t649;
  double t761;
  double t959;
  double t1403;
  double t2945;
  double t4073;
  double t4304;
  double t4344;
  double t4349;
  double t4357;
  double t4376;
  double t4387;
  double t4710;
  double t4746;
  double t4747;
  double t4754;
  double t4765;
  double t4703;
  double t4818;
  double t4825;
  double t4837;
  double t4860;
  double t4862;
  double t4887;
  double t4890;
  double t4992;
  double t5000;
  double t4484;
  double t4495;
  double t4512;
  double t5138;
  double t5140;
  double t5157;
  double t5159;
  double t4628;
  double t4648;
  double t5093;
  double t5105;
  double t5106;
  double t5109;
  double t5111;
  double t4849;
  double t5013;
  double t5021;
  double t5043;
  double t5054;
  double t5063;
  double t5207;
  double t5211;
  double t5236;
  double t5262;
  double t5442;
  double t5443;
  double t5452;
  double t5455;
  double t5456;
  double t5295;
  double t5296;
  double t5329;
  double t5332;
  double t5335;
  double t5426;
  double t5429;
  double t5569;
  double t5570;
  double t5571;
  double t5573;
  double t5585;
  double t5589;
  double t5462;
  double t5463;
  double t5471;
  double t5483;
  double t5486;
  double t5490;
  double t5491;
  double t5492;
  double t5496;
  double t5498;
  double t5501;
  double t5521;
  double t5530;
  double t5531;
  double t5536;
  double t5537;
  double t5548;
  double t5583;
  double t5609;
  double t5614;
  double t5697;
  double t5701;
  double t5707;
  double t5713;
  double t5619;
  double t4153;
  double t4440;
  double t4617;
  double t4675;
  double t4680;
  double t5352;
  double t5360;
  double t5336;
  double t5340;
  double t5403;
  double t5405;
  double t5344;
  double t5355;
  double t5367;
  double t5407;
  double t5410;
  double t5575;
  double t5593;
  double t5602;
  double t5615;
  double t5616;
  double t5620;
  double t6092;
  double t5661;
  double t5671;
  double t5674;
  double t5641;
  double t5644;
  double t5645;
  double t5647;
  double t6094;
  double t6096;
  double t6109;
  double t6116;
  double t6118;
  double t6133;
  double t6134;
  double t6135;
  double t5706;
  double t5717;
  double t5721;
  double t6143;
  double t5734;
  double t5736;
  double t5737;
  double t5821;
  double t5825;
  double t5835;
  double t5432;
  double t5433;
  double t5434;
  double t5266;
  double t5280;
  double t5285;
  double t5024;
  double t5082;
  double t5092;
  double t5914;
  double t5930;
  double t5966;
  double t6071;
  double t6076;
  double t6078;
  double t6140;
  double t6146;
  double t6147;
  double t5604;
  double t5628;
  double t5629;
  double t6191;
  double t6192;
  double t6193;
  double t5725;
  double t5762;
  double t5765;
  double t5836;
  double t5848;
  double t5856;
  double t6235;
  double t6238;
  double t5135;
  double t5171;
  double t5197;
  double t5982;
  double t6016;
  double t6018;
  double t6247;
  double t6269;
  double t6270;
  double t6037;
  double t6042;
  double t6045;
  double t6106;
  double t5474;
  double t6324;
  double t6331;
  double t6342;
  double t6177;
  double t6180;
  double t6187;
  double t5648;
  double t5676;
  double t5687;
  double t6447;
  double t6458;
  double t6475;
  double t6480;
  double t6484;
  double t5863;
  double t5876;
  double t5892;
  double t6525;
  double t6528;
  double t6535;
  double t6559;
  double t6571;
  double t5201;
  double t6029;
  double t6273;
  double t6291;
  double t6622;
  double t6642;
  double t6784;
  double t6788;
  double t5893;
  double t6228;
  double t6536;
  double t6557;
  double t6740;
  double t6749;
  t685 = Cos(var2[3]);
  t242 = Cos(var2[4]);
  t588 = Sin(var2[3]);
  t718 = Sin(var2[4]);
  t1574 = Cos(var2[2]);
  t145 = Sin(var2[2]);
  t2012 = t685*t242;
  t2340 = -1.*t588*t718;
  t2893 = t2012 + t2340;
  t649 = -1.*t242*t588;
  t761 = -1.*t685*t718;
  t959 = t649 + t761;
  t1403 = t145*t959;
  t2945 = t1574*t2893;
  t4073 = t1403 + t2945;
  t4304 = t242*t588;
  t4344 = t685*t718;
  t4349 = t4304 + t4344;
  t4357 = t1574*t4349;
  t4376 = t145*t2893;
  t4387 = t4357 + t4376;
  t4710 = -1.*t242;
  t4746 = 1. + t4710;
  t4747 = -0.9063*t4746;
  t4754 = -1.078185*t242;
  t4765 = t4747 + t4754;
  t4703 = 0.4999*t588;
  t4818 = t4765*t588;
  t4825 = -0.17188499999999995*t685*t718;
  t4837 = t4703 + t4818 + t4825;
  t4860 = -1.*t685;
  t4862 = 1. + t4860;
  t4887 = -0.4999*t4862;
  t4890 = t685*t4765;
  t4992 = 0.17188499999999995*t588*t718;
  t5000 = t4887 + t4890 + t4992;
  t4484 = t1574*t959;
  t4495 = -1.*t145*t2893;
  t4512 = t4484 + t4495;
  t5138 = 0.4999*t718;
  t5140 = t4765*t718;
  t5157 = 0.17188499999999995*t242*t718;
  t5159 = t5138 + t5140 + t5157;
  t4628 = -1.*t145*t4349;
  t4648 = t4628 + t2945;
  t5093 = 0.4999*t242;
  t5105 = t4765*t242;
  t5106 = Power(t718,2);
  t5109 = -0.17188499999999995*t5106;
  t5111 = t5093 + t5105 + t5109;
  t4849 = -1.*t4837*t2893;
  t5013 = -1.*t959*t5000;
  t5021 = t4849 + t5013;
  t5043 = t4837*t4349;
  t5054 = t2893*t5000;
  t5063 = t5043 + t5054;
  t5207 = -1.*var1[6];
  t5211 = var3[4] + t5207;
  t5236 = -1.*var1[5];
  t5262 = var3[3] + t5236;
  t5442 = -1.*t685*t242;
  t5443 = t588*t718;
  t5452 = t5442 + t5443;
  t5455 = t145*t5452;
  t5456 = t4484 + t5455;
  t5295 = -1.*var1[0];
  t5296 = var3[0] + t5295;
  t5329 = -1.*var1[1];
  t5332 = var3[1] + t5329;
  t5335 = -1.*t145*t959;
  t5426 = -1.*var1[2];
  t5429 = var3[2] + t5426;
  t5569 = -0.4999*t588;
  t5570 = -1.*t4765*t588;
  t5571 = 0.17188499999999995*t685*t718;
  t5573 = t5569 + t5570 + t5571;
  t5585 = 0.4999*t685;
  t5589 = t5585 + t4890 + t4992;
  t5462 = -0.14647352159999996*t5211*t5456;
  t5463 = 0.85216*t5159*t4073;
  t5471 = 0.85216*t5111*t5456;
  t5483 = 1.70432*t4073*t4387;
  t5486 = 1.70432*t4073*t5456;
  t5490 = t5483 + t5486;
  t5491 = t5296*t5490;
  t5492 = 0.85216*t4073*t4648;
  t5496 = 0.85216*t4512*t4387;
  t5498 = t1574*t5452;
  t5501 = t5335 + t5498;
  t5521 = 0.85216*t4073*t5501;
  t5530 = 0.85216*t4512*t5456;
  t5531 = t5492 + t5496 + t5521 + t5530;
  t5536 = t5332*t5531;
  t5537 = 0.85216*t4073*t5021;
  t5548 = t4837*t2893;
  t5583 = t959*t5000;
  t5609 = 0.85216*t5063*t5456;
  t5614 = -1.*t959*t4837;
  t5697 = 0.17188499999999995*t242*t588;
  t5701 = t5697 + t5571;
  t5707 = -0.17188499999999995*t685*t242;
  t5713 = t5707 + t4992;
  t5619 = -1.*t5000*t5452;
  t4153 = Power(t4073,2);
  t4440 = Power(t4387,2);
  t4617 = -0.85216*t4073*t4512;
  t4675 = -0.85216*t4648*t4387;
  t4680 = t4617 + t4675;
  t5352 = Power(t4648,2);
  t5360 = Power(t4512,2);
  t5336 = -1.*t1574*t2893;
  t5340 = t5335 + t5336;
  t5403 = -1.*t1574*t4349;
  t5405 = t5403 + t4495;
  t5344 = 0.85216*t5340*t4073;
  t5355 = 0.85216*t5352;
  t5367 = 0.85216*t5360;
  t5407 = 0.85216*t5405*t4387;
  t5410 = t5344 + t5355 + t5367 + t5407;
  t5575 = t5573*t2893;
  t5593 = t4349*t5589;
  t5602 = t5548 + t5575 + t5583 + t5593;
  t5615 = -1.*t959*t5573;
  t5616 = -1.*t2893*t5589;
  t5620 = t5614 + t5615 + t5616 + t5619;
  t6092 = -0.14647352159999996*t5211*t5501;
  t5661 = Power(t242,2);
  t5671 = 0.17188499999999995*t5661;
  t5674 = 0. + t5093 + t5105 + t5671;
  t5641 = -0.4999*t718;
  t5644 = -1.*t4765*t718;
  t5645 = -0.17188499999999995*t242*t718;
  t5647 = t5641 + t5644 + t5645;
  t6094 = 0.85216*t5159*t4512;
  t6096 = 0.85216*t5111*t5501;
  t6109 = 1.70432*t4648*t4512;
  t6116 = 1.70432*t4512*t5501;
  t6118 = t6109 + t6116;
  t6133 = t5332*t6118;
  t6134 = t5296*t5531;
  t6135 = 0.85216*t4512*t5021;
  t5706 = t5701*t2893;
  t5717 = t4349*t5713;
  t5721 = t5548 + t5706 + t5583 + t5717;
  t6143 = 0.85216*t5063*t5501;
  t5734 = -1.*t959*t5701;
  t5736 = -1.*t2893*t5713;
  t5737 = t5614 + t5734 + t5736 + t5619;
  t5821 = 0.85216*t4073*t4512;
  t5825 = 0.85216*t4648*t4387;
  t5835 = t5821 + t5825;
  t5432 = 0.85216*t4648*t5021;
  t5433 = 0.85216*t4512*t5063;
  t5434 = t5432 + t5433;
  t5266 = 0.85216*t5159*t4648;
  t5280 = 0.85216*t5111*t4512;
  t5285 = t5266 + t5280;
  t5024 = -0.85216*t4387*t5021;
  t5082 = -0.85216*t4073*t5063;
  t5092 = t5024 + t5082;
  t5914 = -0.85216*t4648*t5021;
  t5930 = -0.85216*t4512*t5063;
  t5966 = t5914 + t5930;
  t6071 = 0.85216*t5405*t5021;
  t6076 = 0.85216*t5340*t5063;
  t6078 = t6071 + t6076;
  t6140 = 0.85216*t4512*t5602;
  t6146 = 0.85216*t4648*t5620;
  t6147 = t6135 + t6140 + t6143 + t6146;
  t5604 = 0.85216*t4073*t5602;
  t5628 = 0.85216*t4387*t5620;
  t5629 = t5537 + t5604 + t5609 + t5628;
  t6191 = 0.85216*t4512*t5721;
  t6192 = 0.85216*t4648*t5737;
  t6193 = t6135 + t6191 + t6143 + t6192;
  t5725 = 0.85216*t4073*t5721;
  t5762 = 0.85216*t4387*t5737;
  t5765 = t5537 + t5725 + t5609 + t5762;
  t5836 = 0.85216*t4387*t5021;
  t5848 = 0.85216*t4073*t5063;
  t5856 = t5836 + t5848;
  t6235 = Power(t5021,2);
  t6238 = Power(t5063,2);
  t5135 = -0.85216*t5111*t4073;
  t5171 = -0.85216*t5159*t4387;
  t5197 = t5135 + t5171;
  t5982 = -0.85216*t5159*t4648;
  t6016 = -0.85216*t5111*t4512;
  t6018 = t5982 + t6016;
  t6247 = -0.85216*t5159*t5021;
  t6269 = -0.85216*t5111*t5063;
  t6270 = -0.019286 + t6247 + t6269;
  t6037 = 0.85216*t5111*t5340;
  t6042 = 0.85216*t5159*t5405;
  t6045 = t6037 + t6042;
  t6106 = t6094 + t6096;
  t5474 = t5463 + t5471;
  t6324 = 0.85216*t5111*t5602;
  t6331 = 0.85216*t5159*t5620;
  t6342 = t6324 + t6331;
  t6177 = 0.85216*t5674*t4648;
  t6180 = 0.85216*t5647*t4512;
  t6187 = t6177 + t6180 + t6094 + t6096;
  t5648 = 0.85216*t5647*t4073;
  t5676 = 0.85216*t5674*t4387;
  t5687 = t5648 + t5463 + t5676 + t5471;
  t6447 = 0.85216*t5674*t5021;
  t6458 = 0.85216*t5647*t5063;
  t6475 = 0.85216*t5111*t5721;
  t6480 = 0.85216*t5159*t5737;
  t6484 = t6447 + t6458 + t6475 + t6480;
  t5863 = 0.85216*t5111*t4073;
  t5876 = 0.85216*t5159*t4387;
  t5892 = t5863 + t5876;
  t6525 = 0.85216*t5159*t5021;
  t6528 = 0.85216*t5111*t5063;
  t6535 = 0.019286 + t6525 + t6528;
  t6559 = Power(t5159,2);
  t6571 = Power(t5111,2);
  t5201 = 0.14647352159999996*t4073;
  t6029 = 0.14647352159999996*t4512;
  t6273 = 0.14647352159999996*t5063;
  t6291 = -0.019286 + t6273;
  t6622 = 0.14647352159999996*t5111;
  t6642 = -0.019286 + t6622;
  t6784 = -0.14647352159999996*t5332*t5501;
  t6788 = -0.14647352159999996*t5296*t5456;
  t5893 = -0.14647352159999996*t4073;
  t6228 = -0.14647352159999996*t4512;
  t6536 = -0.14647352159999996*t5063;
  t6557 = 0.019286 + t6536;
  t6740 = -0.14647352159999996*t5111;
  t6749 = 0.019286 + t6740;
  p_output1[0]=-0.85216*t4153 - 0.85216*t4440;
  p_output1[1]=t4680;
  p_output1[2]=t5092;
  p_output1[3]=t5197;
  p_output1[4]=t5201;
  p_output1[5]=-0.14647352159999996*t4512*t5211 + t5262*t5285 + (1.70432*t4073*t4512 + 1.70432*t4387*t4648)*t5296 + t5332*t5410 + t5429*t5434;
  p_output1[6]=t5462 + t5262*t5474 + t5491 + t5536 + t5429*t5629;
  p_output1[7]=t5462 + t5491 + t5536 + t5262*t5687 + t5429*t5765;
  p_output1[8]=0.85216*t4153 + 0.85216*t4440;
  p_output1[9]=t5835;
  p_output1[10]=t5856;
  p_output1[11]=t5892;
  p_output1[12]=t5893;
  p_output1[13]=t4680;
  p_output1[14]=-0.85216*t5352 - 0.85216*t5360;
  p_output1[15]=t5966;
  p_output1[16]=t6018;
  p_output1[17]=t6029;
  p_output1[18]=-0.14647352159999996*t5211*t5340 + t5332*(1.70432*t4512*t5340 + 1.70432*t4648*t5405) + t5296*t5410 + t5262*t6045 + t5429*t6078;
  p_output1[19]=t6092 + t5262*t6106 + t6133 + t6134 + t5429*t6147;
  p_output1[20]=t6092 + t6133 + t6134 + t5262*t6187 + t5429*t6193;
  p_output1[21]=t5835;
  p_output1[22]=t5355 + t5367;
  p_output1[23]=t5434;
  p_output1[24]=t5285;
  p_output1[25]=t6228;
  p_output1[26]=t5092;
  p_output1[27]=t5966;
  p_output1[28]=-0.019286 - 0.85216*t6235 - 0.85216*t6238;
  p_output1[29]=t6270;
  p_output1[30]=t6291;
  p_output1[31]=t5296*t5434 + t5332*t6078;
  p_output1[32]=-0.14647352159999996*t5211*t5602 + t5429*(1.70432*t5063*t5602 + 1.70432*t5021*t5620) + t5296*t5629 + t5332*t6147 + t5262*t6342;
  p_output1[33]=-0.14647352159999996*t5211*t5721 + t5429*(1.70432*t5063*t5721 + 1.70432*t5021*t5737) + t5296*t5765 + t5332*t6193 + t5262*t6484;
  p_output1[34]=t5856;
  p_output1[35]=t5434;
  p_output1[36]=0.019286 + 0.85216*t6235 + 0.85216*t6238;
  p_output1[37]=t6535;
  p_output1[38]=t6557;
  p_output1[39]=t5197;
  p_output1[40]=t6018;
  p_output1[41]=t6270;
  p_output1[42]=-0.019286 - 0.85216*t6559 - 0.85216*t6571;
  p_output1[43]=t6642;
  p_output1[44]=t5285*t5296 + t5332*t6045;
  p_output1[45]=t5296*t5474 + t5332*t6106 + t5429*t6342;
  p_output1[46]=-0.14647352159999996*t5211*t5647 + t5262*(1.70432*t5111*t5647 + 1.70432*t5159*t5674) + t5296*t5687 + t5332*t6187 + t5429*t6484;
  p_output1[47]=t5892;
  p_output1[48]=t5285;
  p_output1[49]=t6535;
  p_output1[50]=0.019286 + 0.85216*t6559 + 0.85216*t6571;
  p_output1[51]=t6749;
  p_output1[52]=t5201;
  p_output1[53]=t6029;
  p_output1[54]=t6291;
  p_output1[55]=t6642;
  p_output1[56]=-0.04446260126021599;
  p_output1[57]=-0.14647352159999996*t4512*t5296 - 0.14647352159999996*t5332*t5340;
  p_output1[58]=-0.14647352159999996*t5429*t5602 + t6784 + t6788;
  p_output1[59]=-0.14647352159999996*t5262*t5647 - 0.14647352159999996*t5429*t5721 + t6784 + t6788;
  p_output1[60]=t5893;
  p_output1[61]=t6228;
  p_output1[62]=t6557;
  p_output1[63]=t6749;
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

#include "J_dxDiscreteMap3_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void J_dxDiscreteMap3_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
