/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:46 GMT-08:00
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
  double t916;
  double t600;
  double t785;
  double t1066;
  double t529;
  double t911;
  double t1139;
  double t1384;
  double t1400;
  double t1579;
  double t1582;
  double t1666;
  double t1783;
  double t1874;
  double t1883;
  double t2079;
  double t2114;
  double t2214;
  double t2312;
  double t2345;
  double t3194;
  double t2904;
  double t2940;
  double t3150;
  double t3184;
  double t3222;
  double t3674;
  double t3945;
  double t3772;
  double t3883;
  double t3577;
  double t3751;
  double t3370;
  double t3467;
  double t4103;
  double t4143;
  double t4390;
  double t4391;
  double t4396;
  double t4405;
  double t4525;
  double t4576;
  double t4634;
  double t4639;
  double t4670;
  double t4696;
  double t2637;
  double t2668;
  double t2720;
  double t2796;
  double t2039;
  double t2457;
  double t2475;
  double t2522;
  double t2524;
  double t4820;
  double t4831;
  double t4835;
  double t4838;
  double t4841;
  double t3899;
  double t5096;
  double t5131;
  double t4423;
  double t4697;
  double t4722;
  double t4745;
  double t4767;
  double t4772;
  double t5320;
  double t5323;
  double t5326;
  double t5333;
  double t5411;
  double t5413;
  double t4843;
  double t4844;
  double t4853;
  double t4878;
  double t4884;
  double t4925;
  double t4941;
  double t4945;
  double t5017;
  double t5037;
  double t5145;
  double t5148;
  double t5158;
  double t5195;
  double t5217;
  double t5223;
  double t5281;
  double t5286;
  double t5291;
  double t5295;
  double t5311;
  double t5409;
  double t5470;
  double t5519;
  double t5858;
  double t5877;
  double t5897;
  double t5901;
  double t5541;
  double t4291;
  double t4313;
  double t6281;
  double t6284;
  double t6290;
  double t6297;
  double t6300;
  double t6314;
  double t6369;
  double t6375;
  double t6066;
  double t6096;
  double t6217;
  double t4858;
  double t4873;
  double t5397;
  double t5420;
  double t5449;
  double t5457;
  double t5528;
  double t5535;
  double t5552;
  double t5566;
  double t5567;
  double t5582;
  double t5594;
  double t5610;
  double t4049;
  double t6426;
  double t6258;
  double t6689;
  double t6692;
  double t6708;
  double t6714;
  double t6440;
  double t5620;
  double t5737;
  double t5751;
  double t6466;
  double t5777;
  double t5779;
  double t5800;
  double t5807;
  double t6478;
  double t6492;
  double t6493;
  double t6546;
  double t6559;
  double t6571;
  double t6593;
  double t6594;
  double t6597;
  double t6601;
  double t6615;
  double t6618;
  double t6629;
  double t6637;
  double t6652;
  double t6657;
  double t6658;
  double t6668;
  double t6671;
  double t5893;
  double t5902;
  double t5906;
  double t6716;
  double t6731;
  double t5915;
  double t5922;
  double t5923;
  double t6776;
  double t6948;
  double t6963;
  double t6821;
  double t7196;
  double t7199;
  double t7202;
  double t7203;
  double t7207;
  double t7211;
  double t7217;
  double t7235;
  double t7240;
  double t7241;
  double t7156;
  double t7165;
  double t7166;
  double t5815;
  double t5910;
  double t5930;
  double t5998;
  double t6011;
  double t7254;
  double t6935;
  double t6940;
  double t6943;
  double t6944;
  double t6966;
  double t6979;
  double t7007;
  double t7015;
  double t7018;
  double t7035;
  double t7041;
  double t7042;
  double t7047;
  double t7049;
  double t7051;
  double t7062;
  double t7063;
  double t7065;
  double t7072;
  double t7075;
  double t7077;
  double t7102;
  double t7115;
  double t7269;
  double t6928;
  double t7143;
  double t7177;
  double t7188;
  double t7190;
  double t7193;
  double t7210;
  double t7248;
  double t7437;
  double t7453;
  double t7455;
  double t7398;
  double t7406;
  double t7413;
  double t7253;
  t916 = Cos(var1[5]);
  t600 = Cos(var1[6]);
  t785 = Sin(var1[5]);
  t1066 = Sin(var1[6]);
  t529 = Sin(var1[2]);
  t911 = -1.*t600*t785;
  t1139 = -1.*t916*t1066;
  t1384 = t911 + t1139;
  t1400 = -1.*t529*t1384;
  t1579 = Cos(var1[2]);
  t1582 = t916*t600;
  t1666 = -1.*t785*t1066;
  t1783 = t1582 + t1666;
  t1874 = -1.*t1579*t1783;
  t1883 = t1400 + t1874;
  t2079 = -1.*t600;
  t2114 = 1. + t2079;
  t2214 = -0.9063*t2114;
  t2312 = -1.078185*t600;
  t2345 = t2214 + t2312;
  t3194 = -1.*t529*t1783;
  t2904 = t600*t785;
  t2940 = t916*t1066;
  t3150 = t2904 + t2940;
  t3184 = -1.*t1579*t3150;
  t3222 = t3184 + t3194;
  t3674 = t1579*t1783;
  t3945 = t529*t1783;
  t3772 = t529*t1384;
  t3883 = t3772 + t3674;
  t3577 = -1.*t529*t3150;
  t3751 = t3577 + t3674;
  t3370 = t1579*t1384;
  t3467 = t3370 + t3194;
  t4103 = t1579*t3150;
  t4143 = t4103 + t3945;
  t4390 = 0.4999*t785;
  t4391 = t2345*t785;
  t4396 = -0.17188499999999995*t916*t1066;
  t4405 = t4390 + t4391 + t4396;
  t4525 = -1.*t916;
  t4576 = 1. + t4525;
  t4634 = -0.4999*t4576;
  t4639 = t916*t2345;
  t4670 = 0.17188499999999995*t785*t1066;
  t4696 = t4634 + t4639 + t4670;
  t2637 = 0.4999*t1066;
  t2668 = t2345*t1066;
  t2720 = 0.17188499999999995*t600*t1066;
  t2796 = t2637 + t2668 + t2720;
  t2039 = 0.4999*t600;
  t2457 = t2345*t600;
  t2475 = Power(t1066,2);
  t2522 = -0.17188499999999995*t2475;
  t2524 = t2039 + t2457 + t2522;
  t4820 = -1.*t916*t600;
  t4831 = t785*t1066;
  t4835 = t4820 + t4831;
  t4838 = t1579*t4835;
  t4841 = t1400 + t4838;
  t3899 = -1.*t1579*t1384;
  t5096 = t529*t4835;
  t5131 = t3370 + t5096;
  t4423 = -1.*t4405*t1783;
  t4697 = -1.*t1384*t4696;
  t4722 = t4423 + t4697;
  t4745 = t4405*t3150;
  t4767 = t1783*t4696;
  t4772 = t4745 + t4767;
  t5320 = -0.4999*t785;
  t5323 = -1.*t2345*t785;
  t5326 = 0.17188499999999995*t916*t1066;
  t5333 = t5320 + t5323 + t5326;
  t5411 = 0.4999*t916;
  t5413 = t5411 + t4639 + t4670;
  t4843 = -0.07323676079999998*var2[6]*t4841;
  t4844 = 0.85216*t2796*t3467;
  t4853 = 0.85216*t2524*t4841;
  t4878 = 1.70432*t3751*t3467;
  t4884 = 0.85216*t3883*t3222;
  t4925 = 0.85216*t1883*t4143;
  t4941 = 1.70432*t3467*t4841;
  t4945 = -1.*t529*t4835;
  t5017 = t3899 + t4945;
  t5037 = 0.85216*t3883*t5017;
  t5145 = 0.85216*t1883*t5131;
  t5148 = t4878 + t4884 + t4925 + t4941 + t5037 + t5145;
  t5158 = 0.5*var2[1]*t5148;
  t5195 = 1.70432*t3883*t3751;
  t5217 = 1.70432*t3467*t4143;
  t5223 = 1.70432*t3883*t4841;
  t5281 = 1.70432*t3467*t5131;
  t5286 = t5195 + t5217 + t5223 + t5281;
  t5291 = 0.5*var2[0]*t5286;
  t5295 = 0.85216*t3467*t4722;
  t5311 = t4405*t1783;
  t5409 = t1384*t4696;
  t5470 = 0.85216*t4772*t4841;
  t5519 = -1.*t1384*t4405;
  t5858 = 0.17188499999999995*t600*t785;
  t5877 = t5858 + t5326;
  t5897 = -0.17188499999999995*t916*t600;
  t5901 = t5897 + t4670;
  t5541 = -1.*t4696*t4835;
  t4291 = Power(t3751,2);
  t4313 = Power(t3467,2);
  t6281 = 0.85216*t1883*t3883;
  t6284 = 0.85216*t4291;
  t6290 = 0.85216*t4313;
  t6297 = 0.85216*t3222*t4143;
  t6300 = t6281 + t6284 + t6290 + t6297;
  t6314 = 0.85216*t3751*t4722;
  t6369 = 0.85216*t3467*t4772;
  t6375 = t6314 + t6369;
  t6066 = 0.85216*t2796*t3751;
  t6096 = 0.85216*t2524*t3467;
  t6217 = t6066 + t6096;
  t4858 = t4844 + t4853;
  t4873 = 0.5*var2[5]*t4858;
  t5397 = t5333*t1783;
  t5420 = t3150*t5413;
  t5449 = t5311 + t5397 + t5409 + t5420;
  t5457 = 0.85216*t3467*t5449;
  t5528 = -1.*t1384*t5333;
  t5535 = -1.*t1783*t5413;
  t5552 = t5519 + t5528 + t5535 + t5541;
  t5566 = 0.85216*t3751*t5552;
  t5567 = t5295 + t5457 + t5470 + t5566;
  t5582 = 0.5*var2[2]*t5567;
  t5594 = t4843 + t4873 + t5158 + t5291 + t5582;
  t5610 = var2[0]*t5594;
  t4049 = t529*t3150;
  t6426 = t4049 + t4838;
  t6258 = 1.70432*t3883*t3467;
  t6689 = -0.4999*t916;
  t6692 = -1.*t916*t2345;
  t6708 = -0.17188499999999995*t785*t1066;
  t6714 = t6689 + t6692 + t6708;
  t6440 = -0.07323676079999998*var2[6]*t6426;
  t5620 = Power(t600,2);
  t5737 = 0.17188499999999995*t5620;
  t5751 = 0. + t2039 + t2457 + t5737;
  t6466 = 0.85216*t2524*t6426;
  t5777 = -0.4999*t1066;
  t5779 = -1.*t2345*t1066;
  t5800 = -0.17188499999999995*t600*t1066;
  t5807 = t5777 + t5779 + t5800;
  t6478 = 0.85216*t2796*t5131;
  t6492 = 0.85216*t4143*t4841;
  t6493 = 0.85216*t3467*t6426;
  t6546 = t4103 + t4945;
  t6559 = 0.85216*t3883*t6546;
  t6571 = 0.85216*t3751*t5131;
  t6593 = 1.70432*t4841*t5131;
  t6594 = t6258 + t6492 + t6493 + t6559 + t6571 + t6593;
  t6597 = 0.5*var2[1]*t6594;
  t6601 = Power(t3883,2);
  t6615 = 1.70432*t6601;
  t6618 = 1.70432*t3883*t6426;
  t6629 = 1.70432*t4143*t5131;
  t6637 = Power(t5131,2);
  t6652 = 1.70432*t6637;
  t6657 = t6615 + t6618 + t6629 + t6652;
  t6658 = 0.5*var2[0]*t6657;
  t6668 = 0.85216*t4772*t6426;
  t6671 = 0.85216*t4722*t5131;
  t5893 = t5877*t1783;
  t5902 = t3150*t5901;
  t5906 = t5311 + t5893 + t5409 + t5902;
  t6716 = -1.*t3150*t4696;
  t6731 = -1.*t4405*t4835;
  t5915 = -1.*t1384*t5877;
  t5922 = -1.*t1783*t5901;
  t5923 = t5519 + t5915 + t5922 + t5541;
  t6776 = t1384*t4405;
  t6948 = 0.17188499999999995*t916*t600;
  t6963 = t6948 + t6708;
  t6821 = t4696*t4835;
  t7196 = 0.85216*t3883*t3751;
  t7199 = 0.85216*t3467*t4143;
  t7202 = 0.85216*t3883*t4841;
  t7203 = 0.85216*t3467*t5131;
  t7207 = t7196 + t7199 + t7202 + t7203;
  t7211 = 0.85216*t3883*t4722;
  t7217 = 0.85216*t3883*t5449;
  t7235 = 0.85216*t4772*t5131;
  t7240 = 0.85216*t4143*t5552;
  t7241 = t7211 + t7217 + t7235 + t7240;
  t7156 = 0.85216*t2796*t3883;
  t7165 = 0.85216*t2524*t5131;
  t7166 = t7156 + t7165;
  t5815 = 0.85216*t5807*t3467;
  t5910 = 0.85216*t3467*t5906;
  t5930 = 0.85216*t3751*t5923;
  t5998 = t5295 + t5910 + t5470 + t5930;
  t6011 = 0.5*var2[2]*t5998;
  t7254 = t2039 + t2457 + t5737;
  t6935 = 0.85216*t5807*t5131;
  t6940 = 0.85216*t5449*t5131;
  t6943 = 0.85216*t5906*t5131;
  t6944 = -1.*t5877*t1783;
  t6966 = -1.*t1384*t6963;
  t6979 = -1.*t1384*t5413;
  t7007 = -1.*t1384*t5901;
  t7015 = -1.*t5333*t4835;
  t7018 = -1.*t5877*t4835;
  t7035 = t6944 + t6966 + t6716 + t6979 + t7007 + t6731 + t7015 + t7018;
  t7041 = 0.85216*t4143*t7035;
  t7042 = 0.85216*t3883*t5552;
  t7047 = 0.85216*t3883*t5923;
  t7049 = t1384*t5333;
  t7051 = t1384*t5877;
  t7062 = t5877*t3150;
  t7063 = t1783*t6963;
  t7065 = t1783*t5413;
  t7072 = t1783*t5901;
  t7075 = t6776 + t7049 + t7051 + t7062 + t7063 + t7065 + t7072 + t6821;
  t7077 = 0.85216*t3883*t7075;
  t7102 = t6668 + t6671 + t6940 + t6943 + t7041 + t7042 + t7047 + t7077;
  t7115 = 0.5*var2[2]*t7102;
  t7269 = 0.85216*t7254*t3883;
  t6928 = 0.85216*t5751*t3883;
  t7143 = -0.07323676079999998*var2[6]*t5131;
  t7177 = 1.70432*t3883*t4143;
  t7188 = 1.70432*t3883*t5131;
  t7190 = t7177 + t7188;
  t7193 = var2[0]*t7190;
  t7210 = 0.5*var2[1]*t7207;
  t7248 = 0.5*var2[0]*t7207;
  t7437 = 0.85216*t3883*t5906;
  t7453 = 0.85216*t4143*t5923;
  t7455 = t7211 + t7437 + t7235 + t7453;
  t7398 = 0.85216*t5807*t3883;
  t7406 = 0.85216*t7254*t4143;
  t7413 = t7398 + t7156 + t7406 + t7165;
  t7253 = -0.07323676079999998*var2[0]*t5131;
  p_output1[0]=var2[0]*(0.5*(1.70432*t1883*t3883 + 1.70432*t3222*t4143 + 1.70432*t4291 + 1.70432*t4313)*var2[0] + 0.5*(2.55648*t1883*t3467 + 2.55648*t3222*t3751 + 0.85216*t3883*(t3899 + t3945) + 0.85216*(t1874 + t4049)*t4143)*var2[1] + 0.5*(0.85216*t3222*t4722 + 0.85216*t1883*t4772)*var2[2] + 0.5*(0.85216*t1883*t2524 + 0.85216*t2796*t3222)*var2[5] - 0.07323676079999998*t1883*var2[6]);
  p_output1[1]=t5610;
  p_output1[2]=var2[0]*(t4843 + t5158 + t5291 + t6011 + 0.5*(t4844 + t4853 + 0.85216*t3751*t5751 + t5815)*var2[5]);
  p_output1[3]=(1.70432*t3751*t4143 + t6258)*var2[0] + 0.5*t6300*var2[1] + 0.5*t6375*var2[2] + 0.5*t6217*var2[5] - 0.07323676079999998*t3467*var2[6];
  p_output1[4]=0.5*t6300*var2[0];
  p_output1[5]=0.5*t6375*var2[0];
  p_output1[6]=0.5*t6217*var2[0];
  p_output1[7]=-0.07323676079999998*t3467*var2[0];
  p_output1[8]=t5610;
  p_output1[9]=var2[0]*(t6440 + t6597 + t6658 + 0.5*(1.70432*t5131*t5449 + 1.70432*t3883*t5552 + t6668 + t6671 + 0.85216*t4143*(-1.*t1783*t5333 - 2.*t4835*t5333 - 2.*t1384*t5413 - 1.*t1384*t6714 + t6716 + t6731) + 0.85216*t3883*(2.*t1384*t5333 + t3150*t5333 + 2.*t1783*t5413 + t1783*t6714 + t6776 + t6821))*var2[2] + 0.5*(t6466 + t6478)*var2[5]);
  p_output1[10]=var2[0]*(t6440 + t6597 + t6658 + t7115 + 0.5*(t6466 + t6478 + t6928 + t6935)*var2[5]);
  p_output1[11]=t7143 + t7193 + t7210 + 0.5*t7241*var2[2] + 0.5*t7166*var2[5];
  p_output1[12]=t7248;
  p_output1[13]=0.5*t7241*var2[0];
  p_output1[14]=0.5*t7166*var2[0];
  p_output1[15]=t7253;
  p_output1[16]=var2[0]*(t4843 + t5158 + t5291 + t6011 + 0.5*(t4844 + t4853 + t5815 + 0.85216*t3751*t7254)*var2[5]);
  p_output1[17]=var2[0]*(t6440 + t6597 + t6658 + t7115 + 0.5*(t6466 + t6478 + t6935 + t7269)*var2[5]);
  p_output1[18]=var2[0]*(t6440 + t6597 + t6658 + 0.5*(1.70432*t5131*t5906 + 1.70432*t3883*t5923 + t6668 + t6671 + 0.85216*t4143*(-2.*t4835*t5877 - 2.*t1384*t5901 + t6716 + t6731 + t6944 + t6966) + 0.85216*t3883*(2.*t1384*t5877 + 2.*t1783*t5901 + t6776 + t6821 + t7062 + t7063))*var2[2] + 0.5*(0.85216*t4143*t5807 + 1.70432*t5131*t5807 + 0.85216*t3883*(0. - 0.17188499999999995*t5620 - 0.4999*t600 - 1.*t2345*t600) + t6466 + t6478 + t6928 + t7269)*var2[5]);
  p_output1[19]=t7143 + t7193 + t7210 + 0.5*t7455*var2[2] + 0.5*t7413*var2[5];
  p_output1[20]=t7248;
  p_output1[21]=0.5*t7455*var2[0];
  p_output1[22]=0.5*t7413*var2[0];
  p_output1[23]=t7253;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 24, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L5_J1_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L5_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
