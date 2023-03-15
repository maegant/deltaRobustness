/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:35 GMT-08:00
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
  double t1452;
  double t186;
  double t402;
  double t1455;
  double t1747;
  double t68;
  double t1847;
  double t2054;
  double t2089;
  double t1182;
  double t1533;
  double t1595;
  double t1704;
  double t2094;
  double t2136;
  double t2957;
  double t3005;
  double t3114;
  double t3462;
  double t3617;
  double t3727;
  double t4479;
  double t4565;
  double t4613;
  double t4627;
  double t4676;
  double t4436;
  double t4801;
  double t4861;
  double t4862;
  double t4982;
  double t5179;
  double t5188;
  double t5194;
  double t5289;
  double t5296;
  double t3899;
  double t3951;
  double t4021;
  double t5900;
  double t5917;
  double t5922;
  double t5944;
  double t4218;
  double t4253;
  double t5709;
  double t5717;
  double t5721;
  double t5749;
  double t5855;
  double t4948;
  double t5369;
  double t5427;
  double t5478;
  double t5543;
  double t5582;
  double t6088;
  double t6154;
  double t6185;
  double t6190;
  double t6552;
  double t6554;
  double t6558;
  double t6559;
  double t6561;
  double t6275;
  double t6301;
  double t6399;
  double t6421;
  double t6434;
  double t6488;
  double t6494;
  double t6720;
  double t6723;
  double t6724;
  double t6727;
  double t6752;
  double t6753;
  double t6566;
  double t6571;
  double t6574;
  double t6592;
  double t6594;
  double t6595;
  double t6596;
  double t6601;
  double t6611;
  double t6620;
  double t6632;
  double t6635;
  double t6640;
  double t6646;
  double t6651;
  double t6652;
  double t6684;
  double t6742;
  double t6777;
  double t6778;
  double t6880;
  double t6881;
  double t6887;
  double t6889;
  double t6811;
  double t2193;
  double t3740;
  double t4180;
  double t4257;
  double t4391;
  double t6452;
  double t6458;
  double t6437;
  double t6440;
  double t6465;
  double t6471;
  double t6448;
  double t6456;
  double t6459;
  double t6472;
  double t6482;
  double t6741;
  double t6759;
  double t6767;
  double t6781;
  double t6806;
  double t6819;
  double t7122;
  double t6867;
  double t6868;
  double t6871;
  double t6843;
  double t6845;
  double t6847;
  double t6862;
  double t7144;
  double t7156;
  double t7161;
  double t7164;
  double t7166;
  double t7170;
  double t7171;
  double t7172;
  double t6884;
  double t6891;
  double t6892;
  double t7183;
  double t6901;
  double t6903;
  double t6905;
  double t6938;
  double t6963;
  double t6966;
  double t6505;
  double t6531;
  double t6532;
  double t6231;
  double t6248;
  double t6257;
  double t5475;
  double t5669;
  double t5705;
  double t7007;
  double t7008;
  double t7010;
  double t7107;
  double t7108;
  double t7117;
  double t7181;
  double t7187;
  double t7189;
  double t6770;
  double t6830;
  double t6831;
  double t7226;
  double t7227;
  double t7230;
  double t6894;
  double t6909;
  double t6922;
  double t6967;
  double t6968;
  double t6970;
  double t7255;
  double t7266;
  double t5899;
  double t6010;
  double t6032;
  double t7018;
  double t7023;
  double t7037;
  double t7317;
  double t7319;
  double t7322;
  double t7068;
  double t7073;
  double t7079;
  double t7157;
  double t6581;
  double t7372;
  double t7375;
  double t7380;
  double t7205;
  double t7206;
  double t7213;
  double t6864;
  double t6875;
  double t6877;
  double t7415;
  double t7417;
  double t7420;
  double t7425;
  double t7430;
  double t6975;
  double t6976;
  double t6981;
  double t7536;
  double t7537;
  double t7552;
  double t7560;
  double t7569;
  double t6081;
  double t7044;
  double t7339;
  double t7347;
  double t7573;
  double t7577;
  double t7622;
  double t7627;
  double t6982;
  double t7250;
  double t7557;
  double t7559;
  double t7611;
  double t7612;
  t1452 = Cos(var2[6]);
  t186 = Cos(var2[7]);
  t402 = Sin(var2[6]);
  t1455 = Sin(var2[7]);
  t1747 = Cos(var2[2]);
  t68 = Sin(var2[2]);
  t1847 = t1452*t186;
  t2054 = -1.*t402*t1455;
  t2089 = t1847 + t2054;
  t1182 = -1.*t186*t402;
  t1533 = -1.*t1452*t1455;
  t1595 = t1182 + t1533;
  t1704 = t68*t1595;
  t2094 = t1747*t2089;
  t2136 = t1704 + t2094;
  t2957 = t186*t402;
  t3005 = t1452*t1455;
  t3114 = t2957 + t3005;
  t3462 = t1747*t3114;
  t3617 = t68*t2089;
  t3727 = t3462 + t3617;
  t4479 = -1.*t186;
  t4565 = 1. + t4479;
  t4613 = -0.9063*t4565;
  t4627 = -1.0567*t186;
  t4676 = t4613 + t4627;
  t4436 = 0.4999*t402;
  t4801 = t4676*t402;
  t4861 = -0.15039999999999998*t1452*t1455;
  t4862 = t4436 + t4801 + t4861;
  t4982 = -1.*t1452;
  t5179 = 1. + t4982;
  t5188 = -0.4999*t5179;
  t5194 = t1452*t4676;
  t5289 = 0.15039999999999998*t402*t1455;
  t5296 = t5188 + t5194 + t5289;
  t3899 = t1747*t1595;
  t3951 = -1.*t68*t2089;
  t4021 = t3899 + t3951;
  t5900 = 0.4999*t1455;
  t5917 = t4676*t1455;
  t5922 = 0.15039999999999998*t186*t1455;
  t5944 = t5900 + t5917 + t5922;
  t4218 = -1.*t68*t3114;
  t4253 = t4218 + t2094;
  t5709 = 0.4999*t186;
  t5717 = t4676*t186;
  t5721 = Power(t1455,2);
  t5749 = -0.15039999999999998*t5721;
  t5855 = t5709 + t5717 + t5749;
  t4948 = -1.*t4862*t2089;
  t5369 = -1.*t1595*t5296;
  t5427 = t4948 + t5369;
  t5478 = t4862*t3114;
  t5543 = t2089*t5296;
  t5582 = t5478 + t5543;
  t6088 = -1.*var1[4];
  t6154 = var3[7] + t6088;
  t6185 = -1.*var1[3];
  t6190 = var3[6] + t6185;
  t6552 = -1.*t1452*t186;
  t6554 = t402*t1455;
  t6558 = t6552 + t6554;
  t6559 = t68*t6558;
  t6561 = t3899 + t6559;
  t6275 = -1.*var1[0];
  t6301 = var3[0] + t6275;
  t6399 = -1.*var1[1];
  t6421 = var3[1] + t6399;
  t6434 = -1.*t68*t1595;
  t6488 = -1.*var1[2];
  t6494 = var3[2] + t6488;
  t6720 = -0.4999*t402;
  t6723 = -1.*t4676*t402;
  t6724 = 0.15039999999999998*t1452*t1455;
  t6727 = t6720 + t6723 + t6724;
  t6752 = 0.4999*t1452;
  t6753 = t6752 + t5194 + t5289;
  t6566 = -0.5399209599999999*t6154*t6561;
  t6571 = 3.5899*t5944*t2136;
  t6574 = 3.5899*t5855*t6561;
  t6592 = 7.1798*t2136*t3727;
  t6594 = 7.1798*t2136*t6561;
  t6595 = t6592 + t6594;
  t6596 = t6301*t6595;
  t6601 = 3.5899*t2136*t4253;
  t6611 = 3.5899*t4021*t3727;
  t6620 = t1747*t6558;
  t6632 = t6434 + t6620;
  t6635 = 3.5899*t2136*t6632;
  t6640 = 3.5899*t4021*t6561;
  t6646 = t6601 + t6611 + t6635 + t6640;
  t6651 = t6421*t6646;
  t6652 = 3.5899*t2136*t5427;
  t6684 = t4862*t2089;
  t6742 = t1595*t5296;
  t6777 = 3.5899*t5582*t6561;
  t6778 = -1.*t1595*t4862;
  t6880 = 0.15039999999999998*t186*t402;
  t6881 = t6880 + t6724;
  t6887 = -0.15039999999999998*t1452*t186;
  t6889 = t6887 + t5289;
  t6811 = -1.*t5296*t6558;
  t2193 = Power(t2136,2);
  t3740 = Power(t3727,2);
  t4180 = -3.5899*t2136*t4021;
  t4257 = -3.5899*t4253*t3727;
  t4391 = t4180 + t4257;
  t6452 = Power(t4253,2);
  t6458 = Power(t4021,2);
  t6437 = -1.*t1747*t2089;
  t6440 = t6434 + t6437;
  t6465 = -1.*t1747*t3114;
  t6471 = t6465 + t3951;
  t6448 = 3.5899*t6440*t2136;
  t6456 = 3.5899*t6452;
  t6459 = 3.5899*t6458;
  t6472 = 3.5899*t6471*t3727;
  t6482 = t6448 + t6456 + t6459 + t6472;
  t6741 = t6727*t2089;
  t6759 = t3114*t6753;
  t6767 = t6684 + t6741 + t6742 + t6759;
  t6781 = -1.*t1595*t6727;
  t6806 = -1.*t2089*t6753;
  t6819 = t6778 + t6781 + t6806 + t6811;
  t7122 = -0.5399209599999999*t6154*t6632;
  t6867 = Power(t186,2);
  t6868 = 0.15039999999999998*t6867;
  t6871 = 0. + t5709 + t5717 + t6868;
  t6843 = -0.4999*t1455;
  t6845 = -1.*t4676*t1455;
  t6847 = -0.15039999999999998*t186*t1455;
  t6862 = t6843 + t6845 + t6847;
  t7144 = 3.5899*t5944*t4021;
  t7156 = 3.5899*t5855*t6632;
  t7161 = 7.1798*t4253*t4021;
  t7164 = 7.1798*t4021*t6632;
  t7166 = t7161 + t7164;
  t7170 = t6421*t7166;
  t7171 = t6301*t6646;
  t7172 = 3.5899*t4021*t5427;
  t6884 = t6881*t2089;
  t6891 = t3114*t6889;
  t6892 = t6684 + t6884 + t6742 + t6891;
  t7183 = 3.5899*t5582*t6632;
  t6901 = -1.*t1595*t6881;
  t6903 = -1.*t2089*t6889;
  t6905 = t6778 + t6901 + t6903 + t6811;
  t6938 = 3.5899*t2136*t4021;
  t6963 = 3.5899*t4253*t3727;
  t6966 = t6938 + t6963;
  t6505 = 3.5899*t4253*t5427;
  t6531 = 3.5899*t4021*t5582;
  t6532 = t6505 + t6531;
  t6231 = 3.5899*t5944*t4253;
  t6248 = 3.5899*t5855*t4021;
  t6257 = t6231 + t6248;
  t5475 = -3.5899*t3727*t5427;
  t5669 = -3.5899*t2136*t5582;
  t5705 = t5475 + t5669;
  t7007 = -3.5899*t4253*t5427;
  t7008 = -3.5899*t4021*t5582;
  t7010 = t7007 + t7008;
  t7107 = 3.5899*t6471*t5427;
  t7108 = 3.5899*t6440*t5582;
  t7117 = t7107 + t7108;
  t7181 = 3.5899*t4021*t6767;
  t7187 = 3.5899*t4253*t6819;
  t7189 = t7172 + t7181 + t7183 + t7187;
  t6770 = 3.5899*t2136*t6767;
  t6830 = 3.5899*t3727*t6819;
  t6831 = t6652 + t6770 + t6777 + t6830;
  t7226 = 3.5899*t4021*t6892;
  t7227 = 3.5899*t4253*t6905;
  t7230 = t7172 + t7226 + t7183 + t7227;
  t6894 = 3.5899*t2136*t6892;
  t6909 = 3.5899*t3727*t6905;
  t6922 = t6652 + t6894 + t6777 + t6909;
  t6967 = 3.5899*t3727*t5427;
  t6968 = 3.5899*t2136*t5582;
  t6970 = t6967 + t6968;
  t7255 = Power(t5427,2);
  t7266 = Power(t5582,2);
  t5899 = -3.5899*t5855*t2136;
  t6010 = -3.5899*t5944*t3727;
  t6032 = t5899 + t6010;
  t7018 = -3.5899*t5944*t4253;
  t7023 = -3.5899*t5855*t4021;
  t7037 = t7018 + t7023;
  t7317 = -3.5899*t5944*t5427;
  t7319 = -3.5899*t5855*t5582;
  t7322 = -0.0378 + t7317 + t7319;
  t7068 = 3.5899*t5855*t6440;
  t7073 = 3.5899*t5944*t6471;
  t7079 = t7068 + t7073;
  t7157 = t7144 + t7156;
  t6581 = t6571 + t6574;
  t7372 = 3.5899*t5855*t6767;
  t7375 = 3.5899*t5944*t6819;
  t7380 = t7372 + t7375;
  t7205 = 3.5899*t6871*t4253;
  t7206 = 3.5899*t6862*t4021;
  t7213 = t7205 + t7206 + t7144 + t7156;
  t6864 = 3.5899*t6862*t2136;
  t6875 = 3.5899*t6871*t3727;
  t6877 = t6864 + t6571 + t6875 + t6574;
  t7415 = 3.5899*t6871*t5427;
  t7417 = 3.5899*t6862*t5582;
  t7420 = 3.5899*t5855*t6892;
  t7425 = 3.5899*t5944*t6905;
  t7430 = t7415 + t7417 + t7420 + t7425;
  t6975 = 3.5899*t5855*t2136;
  t6976 = 3.5899*t5944*t3727;
  t6981 = t6975 + t6976;
  t7536 = 3.5899*t5944*t5427;
  t7537 = 3.5899*t5855*t5582;
  t7552 = 0.0378 + t7536 + t7537;
  t7560 = Power(t5944,2);
  t7569 = Power(t5855,2);
  t6081 = 0.5399209599999999*t2136;
  t7044 = 0.5399209599999999*t4021;
  t7339 = 0.5399209599999999*t5582;
  t7347 = -0.0378 + t7339;
  t7573 = 0.5399209599999999*t5855;
  t7577 = -0.0378 + t7573;
  t7622 = -0.5399209599999999*t6421*t6632;
  t7627 = -0.5399209599999999*t6301*t6561;
  t6982 = -0.5399209599999999*t2136;
  t7250 = -0.5399209599999999*t4021;
  t7557 = -0.5399209599999999*t5582;
  t7559 = 0.0378 + t7557;
  t7611 = -0.5399209599999999*t5855;
  t7612 = 0.0378 + t7611;
  p_output1[0]=-3.5899*t2193 - 3.5899*t3740;
  p_output1[1]=t4391;
  p_output1[2]=t5705;
  p_output1[3]=t6032;
  p_output1[4]=t6081;
  p_output1[5]=-0.5399209599999999*t4021*t6154 + t6190*t6257 + (7.1798*t2136*t4021 + 7.1798*t3727*t4253)*t6301 + t6421*t6482 + t6494*t6532;
  p_output1[6]=t6566 + t6190*t6581 + t6596 + t6651 + t6494*t6831;
  p_output1[7]=t6566 + t6596 + t6651 + t6190*t6877 + t6494*t6922;
  p_output1[8]=3.5899*t2193 + 3.5899*t3740;
  p_output1[9]=t6966;
  p_output1[10]=t6970;
  p_output1[11]=t6981;
  p_output1[12]=t6982;
  p_output1[13]=t4391;
  p_output1[14]=-3.5899*t6452 - 3.5899*t6458;
  p_output1[15]=t7010;
  p_output1[16]=t7037;
  p_output1[17]=t7044;
  p_output1[18]=-0.5399209599999999*t6154*t6440 + t6421*(7.1798*t4021*t6440 + 7.1798*t4253*t6471) + t6301*t6482 + t6190*t7079 + t6494*t7117;
  p_output1[19]=t7122 + t6190*t7157 + t7170 + t7171 + t6494*t7189;
  p_output1[20]=t7122 + t7170 + t7171 + t6190*t7213 + t6494*t7230;
  p_output1[21]=t6966;
  p_output1[22]=t6456 + t6459;
  p_output1[23]=t6532;
  p_output1[24]=t6257;
  p_output1[25]=t7250;
  p_output1[26]=t5705;
  p_output1[27]=t7010;
  p_output1[28]=-0.0378 - 3.5899*t7255 - 3.5899*t7266;
  p_output1[29]=t7322;
  p_output1[30]=t7347;
  p_output1[31]=t6301*t6532 + t6421*t7117;
  p_output1[32]=-0.5399209599999999*t6154*t6767 + t6494*(7.1798*t5582*t6767 + 7.1798*t5427*t6819) + t6301*t6831 + t6421*t7189 + t6190*t7380;
  p_output1[33]=-0.5399209599999999*t6154*t6892 + t6494*(7.1798*t5582*t6892 + 7.1798*t5427*t6905) + t6301*t6922 + t6421*t7230 + t6190*t7430;
  p_output1[34]=t6970;
  p_output1[35]=t6532;
  p_output1[36]=0.0378 + 3.5899*t7255 + 3.5899*t7266;
  p_output1[37]=t7552;
  p_output1[38]=t7559;
  p_output1[39]=t6032;
  p_output1[40]=t7037;
  p_output1[41]=t7322;
  p_output1[42]=-0.0378 - 3.5899*t7560 - 3.5899*t7569;
  p_output1[43]=t7577;
  p_output1[44]=t6257*t6301 + t6421*t7079;
  p_output1[45]=t6301*t6581 + t6421*t7157 + t6494*t7380;
  p_output1[46]=-0.5399209599999999*t6154*t6862 + t6190*(7.1798*t5855*t6862 + 7.1798*t5944*t6871) + t6301*t6877 + t6421*t7213 + t6494*t7430;
  p_output1[47]=t6981;
  p_output1[48]=t6257;
  p_output1[49]=t7552;
  p_output1[50]=0.0378 + 3.5899*t7560 + 3.5899*t7569;
  p_output1[51]=t7612;
  p_output1[52]=t6081;
  p_output1[53]=t7044;
  p_output1[54]=t7347;
  p_output1[55]=t7577;
  p_output1[56]=-0.11900411238399997;
  p_output1[57]=-0.5399209599999999*t4021*t6301 - 0.5399209599999999*t6421*t6440;
  p_output1[58]=-0.5399209599999999*t6494*t6767 + t7622 + t7627;
  p_output1[59]=-0.5399209599999999*t6190*t6862 - 0.5399209599999999*t6494*t6892 + t7622 + t7627;
  p_output1[60]=t6982;
  p_output1[61]=t7250;
  p_output1[62]=t7559;
  p_output1[63]=t7612;
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

#include "J_dxDiscreteMap6_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void J_dxDiscreteMap6_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
