/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:31 GMT-08:00
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
  double t1084;
  double t708;
  double t811;
  double t1135;
  double t2196;
  double t67;
  double t2691;
  double t2700;
  double t2978;
  double t1045;
  double t1494;
  double t1632;
  double t2149;
  double t3005;
  double t3115;
  double t3763;
  double t3879;
  double t4251;
  double t4257;
  double t4276;
  double t4302;
  double t5075;
  double t5162;
  double t5194;
  double t5279;
  double t5426;
  double t4982;
  double t5427;
  double t5478;
  double t5486;
  double t5503;
  double t5574;
  double t5606;
  double t5721;
  double t5749;
  double t5801;
  double t4565;
  double t4600;
  double t4627;
  double t6189;
  double t6190;
  double t6227;
  double t6231;
  double t4845;
  double t4941;
  double t6081;
  double t6110;
  double t6145;
  double t6154;
  double t6168;
  double t5493;
  double t5830;
  double t5855;
  double t5917;
  double t5922;
  double t5930;
  double t6266;
  double t6272;
  double t6280;
  double t6281;
  double t6492;
  double t6494;
  double t6518;
  double t6531;
  double t6532;
  double t6305;
  double t6309;
  double t6391;
  double t6399;
  double t6409;
  double t6464;
  double t6465;
  double t6611;
  double t6618;
  double t6620;
  double t6629;
  double t6640;
  double t6641;
  double t6537;
  double t6548;
  double t6552;
  double t6561;
  double t6566;
  double t6571;
  double t6574;
  double t6575;
  double t6581;
  double t6583;
  double t6586;
  double t6592;
  double t6594;
  double t6595;
  double t6596;
  double t6601;
  double t6607;
  double t6635;
  double t6652;
  double t6658;
  double t6778;
  double t6780;
  double t6791;
  double t6793;
  double t6717;
  double t3614;
  double t4391;
  double t4767;
  double t4946;
  double t4948;
  double t6437;
  double t6448;
  double t6418;
  double t6421;
  double t6454;
  double t6456;
  double t6434;
  double t6440;
  double t6452;
  double t6458;
  double t6459;
  double t6632;
  double t6643;
  double t6646;
  double t6695;
  double t6708;
  double t6720;
  double t6942;
  double t6744;
  double t6750;
  double t6752;
  double t6733;
  double t6734;
  double t6736;
  double t6741;
  double t6944;
  double t6949;
  double t6967;
  double t6968;
  double t6970;
  double t6975;
  double t6976;
  double t6981;
  double t6781;
  double t6806;
  double t6811;
  double t6990;
  double t6822;
  double t6823;
  double t6830;
  double t6848;
  double t6857;
  double t6858;
  double t6468;
  double t6471;
  double t6482;
  double t6282;
  double t6284;
  double t6290;
  double t5867;
  double t5948;
  double t6010;
  double t6884;
  double t6887;
  double t6889;
  double t6935;
  double t6936;
  double t6938;
  double t6982;
  double t6991;
  double t6995;
  double t6651;
  double t6721;
  double t6723;
  double t7032;
  double t7037;
  double t7044;
  double t6819;
  double t6831;
  double t6835;
  double t6862;
  double t6864;
  double t6867;
  double t7079;
  double t7089;
  double t6185;
  double t6248;
  double t6257;
  double t6891;
  double t6892;
  double t6894;
  double t7103;
  double t7104;
  double t7107;
  double t6905;
  double t6909;
  double t6922;
  double t6963;
  double t6558;
  double t7122;
  double t7127;
  double t7151;
  double t7009;
  double t7018;
  double t7020;
  double t6742;
  double t6753;
  double t6759;
  double t7181;
  double t7183;
  double t7187;
  double t7189;
  double t7195;
  double t6868;
  double t6871;
  double t6875;
  double t7244;
  double t7246;
  double t7248;
  double t7258;
  double t7267;
  double t6265;
  double t6901;
  double t7108;
  double t7111;
  double t7288;
  double t7295;
  double t7420;
  double t7425;
  double t6877;
  double t7073;
  double t7250;
  double t7252;
  double t7400;
  double t7404;
  t1084 = Cos(var2[3]);
  t708 = Cos(var2[4]);
  t811 = Sin(var2[3]);
  t1135 = Sin(var2[4]);
  t2196 = Cos(var2[2]);
  t67 = Sin(var2[2]);
  t2691 = t1084*t708;
  t2700 = -1.*t811*t1135;
  t2978 = t2691 + t2700;
  t1045 = -1.*t708*t811;
  t1494 = -1.*t1084*t1135;
  t1632 = t1045 + t1494;
  t2149 = t67*t1632;
  t3005 = t2196*t2978;
  t3115 = t2149 + t3005;
  t3763 = t708*t811;
  t3879 = t1084*t1135;
  t4251 = t3763 + t3879;
  t4257 = t2196*t4251;
  t4276 = t67*t2978;
  t4302 = t4257 + t4276;
  t5075 = -1.*t708;
  t5162 = 1. + t5075;
  t5194 = -0.9063*t5162;
  t5279 = -1.0567*t708;
  t5426 = t5194 + t5279;
  t4982 = 0.4999*t811;
  t5427 = t5426*t811;
  t5478 = -0.15039999999999998*t1084*t1135;
  t5486 = t4982 + t5427 + t5478;
  t5503 = -1.*t1084;
  t5574 = 1. + t5503;
  t5606 = -0.4999*t5574;
  t5721 = t1084*t5426;
  t5749 = 0.15039999999999998*t811*t1135;
  t5801 = t5606 + t5721 + t5749;
  t4565 = t2196*t1632;
  t4600 = -1.*t67*t2978;
  t4627 = t4565 + t4600;
  t6189 = 0.4999*t1135;
  t6190 = t5426*t1135;
  t6227 = 0.15039999999999998*t708*t1135;
  t6231 = t6189 + t6190 + t6227;
  t4845 = -1.*t67*t4251;
  t4941 = t4845 + t3005;
  t6081 = 0.4999*t708;
  t6110 = t5426*t708;
  t6145 = Power(t1135,2);
  t6154 = -0.15039999999999998*t6145;
  t6168 = t6081 + t6110 + t6154;
  t5493 = -1.*t5486*t2978;
  t5830 = -1.*t1632*t5801;
  t5855 = t5493 + t5830;
  t5917 = t5486*t4251;
  t5922 = t2978*t5801;
  t5930 = t5917 + t5922;
  t6266 = -1.*var1[7];
  t6272 = var3[4] + t6266;
  t6280 = -1.*var1[6];
  t6281 = var3[3] + t6280;
  t6492 = -1.*t1084*t708;
  t6494 = t811*t1135;
  t6518 = t6492 + t6494;
  t6531 = t67*t6518;
  t6532 = t4565 + t6531;
  t6305 = -1.*var1[0];
  t6309 = var3[0] + t6305;
  t6391 = -1.*var1[1];
  t6399 = var3[1] + t6391;
  t6409 = -1.*t67*t1632;
  t6464 = -1.*var1[2];
  t6465 = var3[2] + t6464;
  t6611 = -0.4999*t811;
  t6618 = -1.*t5426*t811;
  t6620 = 0.15039999999999998*t1084*t1135;
  t6629 = t6611 + t6618 + t6620;
  t6640 = 0.4999*t1084;
  t6641 = t6640 + t5721 + t5749;
  t6537 = -0.5399209599999999*t6272*t6532;
  t6548 = 3.5899*t6231*t3115;
  t6552 = 3.5899*t6168*t6532;
  t6561 = 7.1798*t3115*t4302;
  t6566 = 7.1798*t3115*t6532;
  t6571 = t6561 + t6566;
  t6574 = t6309*t6571;
  t6575 = 3.5899*t3115*t4941;
  t6581 = 3.5899*t4627*t4302;
  t6583 = t2196*t6518;
  t6586 = t6409 + t6583;
  t6592 = 3.5899*t3115*t6586;
  t6594 = 3.5899*t4627*t6532;
  t6595 = t6575 + t6581 + t6592 + t6594;
  t6596 = t6399*t6595;
  t6601 = 3.5899*t3115*t5855;
  t6607 = t5486*t2978;
  t6635 = t1632*t5801;
  t6652 = 3.5899*t5930*t6532;
  t6658 = -1.*t1632*t5486;
  t6778 = 0.15039999999999998*t708*t811;
  t6780 = t6778 + t6620;
  t6791 = -0.15039999999999998*t1084*t708;
  t6793 = t6791 + t5749;
  t6717 = -1.*t5801*t6518;
  t3614 = Power(t3115,2);
  t4391 = Power(t4302,2);
  t4767 = -3.5899*t3115*t4627;
  t4946 = -3.5899*t4941*t4302;
  t4948 = t4767 + t4946;
  t6437 = Power(t4941,2);
  t6448 = Power(t4627,2);
  t6418 = -1.*t2196*t2978;
  t6421 = t6409 + t6418;
  t6454 = -1.*t2196*t4251;
  t6456 = t6454 + t4600;
  t6434 = 3.5899*t6421*t3115;
  t6440 = 3.5899*t6437;
  t6452 = 3.5899*t6448;
  t6458 = 3.5899*t6456*t4302;
  t6459 = t6434 + t6440 + t6452 + t6458;
  t6632 = t6629*t2978;
  t6643 = t4251*t6641;
  t6646 = t6607 + t6632 + t6635 + t6643;
  t6695 = -1.*t1632*t6629;
  t6708 = -1.*t2978*t6641;
  t6720 = t6658 + t6695 + t6708 + t6717;
  t6942 = -0.5399209599999999*t6272*t6586;
  t6744 = Power(t708,2);
  t6750 = 0.15039999999999998*t6744;
  t6752 = 0. + t6081 + t6110 + t6750;
  t6733 = -0.4999*t1135;
  t6734 = -1.*t5426*t1135;
  t6736 = -0.15039999999999998*t708*t1135;
  t6741 = t6733 + t6734 + t6736;
  t6944 = 3.5899*t6231*t4627;
  t6949 = 3.5899*t6168*t6586;
  t6967 = 7.1798*t4941*t4627;
  t6968 = 7.1798*t4627*t6586;
  t6970 = t6967 + t6968;
  t6975 = t6399*t6970;
  t6976 = t6309*t6595;
  t6981 = 3.5899*t4627*t5855;
  t6781 = t6780*t2978;
  t6806 = t4251*t6793;
  t6811 = t6607 + t6781 + t6635 + t6806;
  t6990 = 3.5899*t5930*t6586;
  t6822 = -1.*t1632*t6780;
  t6823 = -1.*t2978*t6793;
  t6830 = t6658 + t6822 + t6823 + t6717;
  t6848 = 3.5899*t3115*t4627;
  t6857 = 3.5899*t4941*t4302;
  t6858 = t6848 + t6857;
  t6468 = 3.5899*t4941*t5855;
  t6471 = 3.5899*t4627*t5930;
  t6482 = t6468 + t6471;
  t6282 = 3.5899*t6231*t4941;
  t6284 = 3.5899*t6168*t4627;
  t6290 = t6282 + t6284;
  t5867 = -3.5899*t4302*t5855;
  t5948 = -3.5899*t3115*t5930;
  t6010 = t5867 + t5948;
  t6884 = -3.5899*t4941*t5855;
  t6887 = -3.5899*t4627*t5930;
  t6889 = t6884 + t6887;
  t6935 = 3.5899*t6456*t5855;
  t6936 = 3.5899*t6421*t5930;
  t6938 = t6935 + t6936;
  t6982 = 3.5899*t4627*t6646;
  t6991 = 3.5899*t4941*t6720;
  t6995 = t6981 + t6982 + t6990 + t6991;
  t6651 = 3.5899*t3115*t6646;
  t6721 = 3.5899*t4302*t6720;
  t6723 = t6601 + t6651 + t6652 + t6721;
  t7032 = 3.5899*t4627*t6811;
  t7037 = 3.5899*t4941*t6830;
  t7044 = t6981 + t7032 + t6990 + t7037;
  t6819 = 3.5899*t3115*t6811;
  t6831 = 3.5899*t4302*t6830;
  t6835 = t6601 + t6819 + t6652 + t6831;
  t6862 = 3.5899*t4302*t5855;
  t6864 = 3.5899*t3115*t5930;
  t6867 = t6862 + t6864;
  t7079 = Power(t5855,2);
  t7089 = Power(t5930,2);
  t6185 = -3.5899*t6168*t3115;
  t6248 = -3.5899*t6231*t4302;
  t6257 = t6185 + t6248;
  t6891 = -3.5899*t6231*t4941;
  t6892 = -3.5899*t6168*t4627;
  t6894 = t6891 + t6892;
  t7103 = -3.5899*t6231*t5855;
  t7104 = -3.5899*t6168*t5930;
  t7107 = -0.0378 + t7103 + t7104;
  t6905 = 3.5899*t6168*t6421;
  t6909 = 3.5899*t6231*t6456;
  t6922 = t6905 + t6909;
  t6963 = t6944 + t6949;
  t6558 = t6548 + t6552;
  t7122 = 3.5899*t6168*t6646;
  t7127 = 3.5899*t6231*t6720;
  t7151 = t7122 + t7127;
  t7009 = 3.5899*t6752*t4941;
  t7018 = 3.5899*t6741*t4627;
  t7020 = t7009 + t7018 + t6944 + t6949;
  t6742 = 3.5899*t6741*t3115;
  t6753 = 3.5899*t6752*t4302;
  t6759 = t6742 + t6548 + t6753 + t6552;
  t7181 = 3.5899*t6752*t5855;
  t7183 = 3.5899*t6741*t5930;
  t7187 = 3.5899*t6168*t6811;
  t7189 = 3.5899*t6231*t6830;
  t7195 = t7181 + t7183 + t7187 + t7189;
  t6868 = 3.5899*t6168*t3115;
  t6871 = 3.5899*t6231*t4302;
  t6875 = t6868 + t6871;
  t7244 = 3.5899*t6231*t5855;
  t7246 = 3.5899*t6168*t5930;
  t7248 = 0.0378 + t7244 + t7246;
  t7258 = Power(t6231,2);
  t7267 = Power(t6168,2);
  t6265 = 0.5399209599999999*t3115;
  t6901 = 0.5399209599999999*t4627;
  t7108 = 0.5399209599999999*t5930;
  t7111 = -0.0378 + t7108;
  t7288 = 0.5399209599999999*t6168;
  t7295 = -0.0378 + t7288;
  t7420 = -0.5399209599999999*t6399*t6586;
  t7425 = -0.5399209599999999*t6309*t6532;
  t6877 = -0.5399209599999999*t3115;
  t7073 = -0.5399209599999999*t4627;
  t7250 = -0.5399209599999999*t5930;
  t7252 = 0.0378 + t7250;
  t7400 = -0.5399209599999999*t6168;
  t7404 = 0.0378 + t7400;
  p_output1[0]=-3.5899*t3614 - 3.5899*t4391;
  p_output1[1]=t4948;
  p_output1[2]=t6010;
  p_output1[3]=t6257;
  p_output1[4]=t6265;
  p_output1[5]=-0.5399209599999999*t4627*t6272 + t6281*t6290 + (7.1798*t3115*t4627 + 7.1798*t4302*t4941)*t6309 + t6399*t6459 + t6465*t6482;
  p_output1[6]=t6537 + t6281*t6558 + t6574 + t6596 + t6465*t6723;
  p_output1[7]=t6537 + t6574 + t6596 + t6281*t6759 + t6465*t6835;
  p_output1[8]=3.5899*t3614 + 3.5899*t4391;
  p_output1[9]=t6858;
  p_output1[10]=t6867;
  p_output1[11]=t6875;
  p_output1[12]=t6877;
  p_output1[13]=t4948;
  p_output1[14]=-3.5899*t6437 - 3.5899*t6448;
  p_output1[15]=t6889;
  p_output1[16]=t6894;
  p_output1[17]=t6901;
  p_output1[18]=-0.5399209599999999*t6272*t6421 + t6399*(7.1798*t4627*t6421 + 7.1798*t4941*t6456) + t6309*t6459 + t6281*t6922 + t6465*t6938;
  p_output1[19]=t6942 + t6281*t6963 + t6975 + t6976 + t6465*t6995;
  p_output1[20]=t6942 + t6975 + t6976 + t6281*t7020 + t6465*t7044;
  p_output1[21]=t6858;
  p_output1[22]=t6440 + t6452;
  p_output1[23]=t6482;
  p_output1[24]=t6290;
  p_output1[25]=t7073;
  p_output1[26]=t6010;
  p_output1[27]=t6889;
  p_output1[28]=-0.0378 - 3.5899*t7079 - 3.5899*t7089;
  p_output1[29]=t7107;
  p_output1[30]=t7111;
  p_output1[31]=t6309*t6482 + t6399*t6938;
  p_output1[32]=-0.5399209599999999*t6272*t6646 + t6465*(7.1798*t5930*t6646 + 7.1798*t5855*t6720) + t6309*t6723 + t6399*t6995 + t6281*t7151;
  p_output1[33]=-0.5399209599999999*t6272*t6811 + t6465*(7.1798*t5930*t6811 + 7.1798*t5855*t6830) + t6309*t6835 + t6399*t7044 + t6281*t7195;
  p_output1[34]=t6867;
  p_output1[35]=t6482;
  p_output1[36]=0.0378 + 3.5899*t7079 + 3.5899*t7089;
  p_output1[37]=t7248;
  p_output1[38]=t7252;
  p_output1[39]=t6257;
  p_output1[40]=t6894;
  p_output1[41]=t7107;
  p_output1[42]=-0.0378 - 3.5899*t7258 - 3.5899*t7267;
  p_output1[43]=t7295;
  p_output1[44]=t6290*t6309 + t6399*t6922;
  p_output1[45]=t6309*t6558 + t6399*t6963 + t6465*t7151;
  p_output1[46]=-0.5399209599999999*t6272*t6741 + t6281*(7.1798*t6168*t6741 + 7.1798*t6231*t6752) + t6309*t6759 + t6399*t7020 + t6465*t7195;
  p_output1[47]=t6875;
  p_output1[48]=t6290;
  p_output1[49]=t7248;
  p_output1[50]=0.0378 + 3.5899*t7258 + 3.5899*t7267;
  p_output1[51]=t7404;
  p_output1[52]=t6265;
  p_output1[53]=t6901;
  p_output1[54]=t7111;
  p_output1[55]=t7295;
  p_output1[56]=-0.11900411238399997;
  p_output1[57]=-0.5399209599999999*t4627*t6309 - 0.5399209599999999*t6399*t6421;
  p_output1[58]=-0.5399209599999999*t6465*t6646 + t7420 + t7425;
  p_output1[59]=-0.5399209599999999*t6281*t6741 - 0.5399209599999999*t6465*t6811 + t7420 + t7425;
  p_output1[60]=t6877;
  p_output1[61]=t7073;
  p_output1[62]=t7252;
  p_output1[63]=t7404;
  p_output1[64]=0.11900411238399997;
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
