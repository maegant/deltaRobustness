/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:31:26 GMT-08:00
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
  double t1539;
  double t1253;
  double t1306;
  double t1557;
  double t356;
  double t1470;
  double t1583;
  double t1608;
  double t1718;
  double t1746;
  double t1787;
  double t1791;
  double t2052;
  double t2220;
  double t2237;
  double t2242;
  double t2566;
  double t1948;
  double t2054;
  double t2245;
  double t2300;
  double t2467;
  double t2581;
  double t2681;
  double t2873;
  double t2875;
  double t1701;
  double t3349;
  double t3351;
  double t3371;
  double t3057;
  double t3085;
  double t3400;
  double t3519;
  double t3539;
  double t3590;
  double t3598;
  double t3635;
  double t3700;
  double t3908;
  double t3917;
  double t3928;
  double t3980;
  double t3988;
  double t4044;
  double t4047;
  double t4049;
  double t4072;
  double t3888;
  double t4095;
  double t4118;
  double t4127;
  double t4131;
  double t4232;
  double t4257;
  double t4265;
  double t4157;
  double t4180;
  double t4213;
  double t4388;
  double t1792;
  double t1881;
  double t2645;
  double t2670;
  double t4421;
  double t4604;
  double t4609;
  double t4619;
  double t4623;
  double t4637;
  double t4658;
  double t4667;
  double t4721;
  double t4737;
  double t4854;
  double t4898;
  double t4971;
  double t5028;
  double t5073;
  double t5126;
  double t5132;
  double t4852;
  double t5141;
  double t5154;
  double t5167;
  double t5194;
  double t2420;
  double t2605;
  double t5353;
  double t5354;
  double t5370;
  double t5392;
  double t5396;
  double t5198;
  double t5216;
  double t5244;
  double t5245;
  double t5264;
  double t5453;
  double t5475;
  double t5484;
  double t5499;
  double t5518;
  double t5540;
  double t5468;
  double t5542;
  double t5597;
  double t5600;
  double t5677;
  double t5689;
  double t5728;
  double t5774;
  double t5822;
  double t5823;
  double t5669;
  double t5846;
  double t5850;
  double t5898;
  double t5900;
  double t5904;
  double t5986;
  double t5993;
  double t5994;
  double t5995;
  double t6010;
  double t6015;
  double t5955;
  double t5981;
  double t6004;
  double t6077;
  double t6099;
  double t6276;
  double t6286;
  double t6346;
  double t6354;
  double t6165;
  double t5999;
  double t6027;
  double t6047;
  double t6048;
  double t6100;
  double t6124;
  double t6183;
  double t6248;
  double t6255;
  double t6561;
  double t6576;
  double t6604;
  double t6632;
  double t6507;
  double t6539;
  double t6306;
  double t6370;
  double t6380;
  double t6656;
  double t6691;
  double t6396;
  double t6404;
  double t6422;
  double t6770;
  double t7073;
  double t7083;
  double t6871;
  double t6394;
  double t6432;
  double t6438;
  double t6941;
  double t6956;
  double t7064;
  double t7093;
  double t7094;
  double t7175;
  double t7185;
  double t7195;
  double t7242;
  double t7245;
  double t7249;
  double t7259;
  double t7260;
  double t7264;
  double t7305;
  double t7330;
  double t7331;
  double t7346;
  double t7359;
  double t7363;
  double t7370;
  double t7792;
  double t7797;
  double t7701;
  double t7723;
  double t7738;
  double t7793;
  double t7811;
  double t7849;
  double t7890;
  double t7910;
  double t7916;
  double t8145;
  double t8157;
  double t8158;
  double t8163;
  double t8067;
  double t8103;
  double t8105;
  double t8116;
  double t8117;
  double t8179;
  double t8180;
  double t8181;
  double t8187;
  double t8194;
  double t8199;
  double t8223;
  double t8204;
  double t8208;
  double t8209;
  double t8210;
  double t8228;
  double t8213;
  double t8257;
  double t8246;
  double t8245;
  double t8264;
  double t8295;
  double t8296;
  double t8287;
  double t8290;
  double t8291;
  double t8299;
  double t8301;
  double t8303;
  double t8304;
  double t8320;
  double t8324;
  double t8325;
  double t8326;
  double t8328;
  double t8336;
  t1539 = Cos(var1[5]);
  t1253 = Cos(var1[6]);
  t1306 = Sin(var1[5]);
  t1557 = Sin(var1[6]);
  t356 = Sin(var1[2]);
  t1470 = -1.*t1253*t1306;
  t1583 = -1.*t1539*t1557;
  t1608 = t1470 + t1583;
  t1718 = Cos(var1[2]);
  t1746 = t1539*t1253;
  t1787 = -1.*t1306*t1557;
  t1791 = t1746 + t1787;
  t2052 = t1718*t1791;
  t2220 = t1253*t1306;
  t2237 = t1539*t1557;
  t2242 = t2220 + t2237;
  t2566 = -1.*t356*t1791;
  t1948 = t356*t1608;
  t2054 = t1948 + t2052;
  t2245 = -1.*t356*t2242;
  t2300 = t2245 + t2052;
  t2467 = t1718*t1608;
  t2581 = t2467 + t2566;
  t2681 = t1718*t2242;
  t2873 = t356*t1791;
  t2875 = t2681 + t2873;
  t1701 = -1.*t356*t1608;
  t3349 = -1.*t1539*t1253;
  t3351 = t1306*t1557;
  t3371 = t3349 + t3351;
  t3057 = 1.70432*t2054*t2300;
  t3085 = 1.70432*t2581*t2875;
  t3400 = t1718*t3371;
  t3519 = t1701 + t3400;
  t3539 = 1.70432*t2054*t3519;
  t3590 = t356*t3371;
  t3598 = t2467 + t3590;
  t3635 = 1.70432*t2581*t3598;
  t3700 = t3057 + t3085 + t3539 + t3635;
  t3908 = Power(t2054,2);
  t3917 = 1.70432*t3908;
  t3928 = t356*t2242;
  t3980 = t3928 + t3400;
  t3988 = 1.70432*t2054*t3980;
  t4044 = 1.70432*t2875*t3598;
  t4047 = Power(t3598,2);
  t4049 = 1.70432*t4047;
  t4072 = t3917 + t3988 + t4044 + t4049;
  t3888 = -0.5*var2[2]*t3700;
  t4095 = -0.5*var2[5]*t4072;
  t4118 = -0.5*var2[6]*t4072;
  t4127 = t3888 + t4095 + t4118;
  t4131 = var2[0]*t4127;
  t4232 = 1.70432*t2054*t2875;
  t4257 = 1.70432*t2054*t3598;
  t4265 = t4232 + t4257;
  t4157 = 1.70432*t2054*t2581;
  t4180 = 1.70432*t2300*t2875;
  t4213 = t4157 + t4180;
  t4388 = -0.5*var2[0]*t4265;
  t1792 = -1.*t1718*t1791;
  t1881 = t1701 + t1792;
  t2645 = -1.*t1718*t2242;
  t2670 = t2645 + t2566;
  t4421 = -1.*t1718*t1608;
  t4604 = 1.70432*t2300*t2581;
  t4609 = 0.85216*t2054*t2670;
  t4619 = 0.85216*t1881*t2875;
  t4623 = 1.70432*t2581*t3519;
  t4637 = -1.*t356*t3371;
  t4658 = t4421 + t4637;
  t4667 = 0.85216*t2054*t4658;
  t4721 = 0.85216*t1881*t3598;
  t4737 = t4604 + t4609 + t4619 + t4623 + t4667 + t4721;
  t4854 = 0.85216*t2875*t3519;
  t4898 = 0.85216*t2581*t3980;
  t4971 = t2681 + t4637;
  t5028 = 0.85216*t2054*t4971;
  t5073 = 0.85216*t2300*t3598;
  t5126 = 1.70432*t3519*t3598;
  t5132 = t4157 + t4854 + t4898 + t5028 + t5073 + t5126;
  t4852 = -0.5*var2[2]*t4737;
  t5141 = -0.5*var2[5]*t5132;
  t5154 = -0.5*var2[6]*t5132;
  t5167 = t4852 + t5141 + t5154;
  t5194 = var2[0]*t5167;
  t2420 = Power(t2300,2);
  t2605 = Power(t2581,2);
  t5353 = 0.85216*t2054*t2300;
  t5354 = 0.85216*t2581*t2875;
  t5370 = 0.85216*t2054*t3519;
  t5392 = 0.85216*t2581*t3598;
  t5396 = t5353 + t5354 + t5370 + t5392;
  t5198 = 0.85216*t1881*t2054;
  t5216 = 0.85216*t2420;
  t5244 = 0.85216*t2605;
  t5245 = 0.85216*t2670*t2875;
  t5264 = t5198 + t5216 + t5244 + t5245;
  t5453 = -0.5*var2[0]*t5396;
  t5475 = -1.*t1253;
  t5484 = 1. + t5475;
  t5499 = -0.9063*t5484;
  t5518 = -1.078185*t1253;
  t5540 = t5499 + t5518;
  t5468 = 0.4999*t1306;
  t5542 = t5540*t1306;
  t5597 = -0.17188499999999995*t1539*t1557;
  t5600 = t5468 + t5542 + t5597;
  t5677 = -1.*t1539;
  t5689 = 1. + t5677;
  t5728 = -0.4999*t5689;
  t5774 = t1539*t5540;
  t5822 = 0.17188499999999995*t1306*t1557;
  t5823 = t5728 + t5774 + t5822;
  t5669 = -1.*t5600*t1791;
  t5846 = -1.*t1608*t5823;
  t5850 = t5669 + t5846;
  t5898 = t5600*t2242;
  t5900 = t1791*t5823;
  t5904 = t5898 + t5900;
  t5986 = -0.4999*t1306;
  t5993 = -1.*t5540*t1306;
  t5994 = 0.17188499999999995*t1539*t1557;
  t5995 = t5986 + t5993 + t5994;
  t6010 = 0.4999*t1539;
  t6015 = t6010 + t5774 + t5822;
  t5955 = 0.85216*t2581*t5850;
  t5981 = t5600*t1791;
  t6004 = t1608*t5823;
  t6077 = 0.85216*t5904*t3519;
  t6099 = -1.*t1608*t5600;
  t6276 = 0.17188499999999995*t1253*t1306;
  t6286 = t6276 + t5994;
  t6346 = -0.17188499999999995*t1539*t1253;
  t6354 = t6346 + t5822;
  t6165 = -1.*t5823*t3371;
  t5999 = t5995*t1791;
  t6027 = t2242*t6015;
  t6047 = t5981 + t5999 + t6004 + t6027;
  t6048 = 0.85216*t2581*t6047;
  t6100 = -1.*t1608*t5995;
  t6124 = -1.*t1791*t6015;
  t6183 = t6099 + t6100 + t6124 + t6165;
  t6248 = 0.85216*t2300*t6183;
  t6255 = t5955 + t6048 + t6077 + t6248;
  t6561 = -0.4999*t1539;
  t6576 = -1.*t1539*t5540;
  t6604 = -0.17188499999999995*t1306*t1557;
  t6632 = t6561 + t6576 + t6604;
  t6507 = 0.85216*t5904*t3980;
  t6539 = 0.85216*t5850*t3598;
  t6306 = t6286*t1791;
  t6370 = t2242*t6354;
  t6380 = t5981 + t6306 + t6004 + t6370;
  t6656 = -1.*t2242*t5823;
  t6691 = -1.*t5600*t3371;
  t6396 = -1.*t1608*t6286;
  t6404 = -1.*t1791*t6354;
  t6422 = t6099 + t6396 + t6404 + t6165;
  t6770 = t1608*t5600;
  t7073 = 0.17188499999999995*t1539*t1253;
  t7083 = t7073 + t6604;
  t6871 = t5823*t3371;
  t6394 = 0.85216*t2581*t6380;
  t6432 = 0.85216*t2300*t6422;
  t6438 = t5955 + t6394 + t6077 + t6432;
  t6941 = 0.85216*t6047*t3598;
  t6956 = 0.85216*t6380*t3598;
  t7064 = -1.*t6286*t1791;
  t7093 = -1.*t1608*t7083;
  t7094 = -1.*t1608*t6015;
  t7175 = -1.*t1608*t6354;
  t7185 = -1.*t5995*t3371;
  t7195 = -1.*t6286*t3371;
  t7242 = t7064 + t7093 + t6656 + t7094 + t7175 + t6691 + t7185 + t7195;
  t7245 = 0.85216*t2875*t7242;
  t7249 = 0.85216*t2054*t6183;
  t7259 = 0.85216*t2054*t6422;
  t7260 = t1608*t5995;
  t7264 = t1608*t6286;
  t7305 = t6286*t2242;
  t7330 = t1791*t7083;
  t7331 = t1791*t6015;
  t7346 = t1791*t6354;
  t7359 = t6770 + t7260 + t7264 + t7305 + t7330 + t7331 + t7346 + t6871;
  t7363 = 0.85216*t2054*t7359;
  t7370 = t6507 + t6539 + t6941 + t6956 + t7245 + t7249 + t7259 + t7363;
  t7792 = 0.85216*t2054*t5850;
  t7797 = 0.85216*t5904*t3598;
  t7701 = 0.85216*t2300*t5850;
  t7723 = 0.85216*t2581*t5904;
  t7738 = t7701 + t7723;
  t7793 = 0.85216*t2054*t6047;
  t7811 = 0.85216*t2875*t6183;
  t7849 = t7792 + t7793 + t7797 + t7811;
  t7890 = 0.85216*t2054*t6380;
  t7910 = 0.85216*t2875*t6422;
  t7916 = t7792 + t7890 + t7797 + t7910;
  t8145 = 0.4999*t1557;
  t8157 = t5540*t1557;
  t8158 = 0.17188499999999995*t1253*t1557;
  t8163 = t8145 + t8157 + t8158;
  t8067 = 0.4999*t1253;
  t8103 = t5540*t1253;
  t8105 = Power(t1557,2);
  t8116 = -0.17188499999999995*t8105;
  t8117 = t8067 + t8103 + t8116;
  t8179 = 0.85216*t8163*t2581;
  t8180 = 0.85216*t8117*t3519;
  t8181 = t8179 + t8180;
  t8187 = Power(t1253,2);
  t8194 = 0.17188499999999995*t8187;
  t8199 = t8067 + t8103 + t8194;
  t8223 = 0.85216*t8117*t3980;
  t8204 = -0.4999*t1557;
  t8208 = -1.*t5540*t1557;
  t8209 = -0.17188499999999995*t1253*t1557;
  t8210 = t8204 + t8208 + t8209;
  t8228 = 0.85216*t8163*t3598;
  t8213 = 0.85216*t8210*t2581;
  t8257 = 0. + t8067 + t8103 + t8194;
  t8246 = 0.85216*t8210*t3598;
  t8245 = 0.85216*t8199*t2054;
  t8264 = 0.85216*t8257*t2054;
  t8295 = 0.85216*t8163*t2054;
  t8296 = 0.85216*t8117*t3598;
  t8287 = 0.85216*t8163*t2300;
  t8290 = 0.85216*t8117*t2581;
  t8291 = t8287 + t8290;
  t8299 = t8295 + t8296;
  t8301 = 0.85216*t8210*t2054;
  t8303 = 0.85216*t8199*t2875;
  t8304 = t8301 + t8295 + t8303 + t8296;
  t8320 = 0.07323676079999998*var2[2]*t3519;
  t8324 = 0.07323676079999998*var2[5]*t3980;
  t8325 = 0.07323676079999998*var2[6]*t3980;
  t8326 = t8320 + t8324 + t8325;
  t8328 = var2[0]*t8326;
  t8336 = 0.07323676079999998*var2[0]*t3598;
  p_output1[0]=var2[0]*(-0.5*(1.70432*t1881*t2054 + 1.70432*t2420 + 1.70432*t2605 + 1.70432*t2670*t2875)*var2[2] - 0.5*t3700*var2[5] - 0.5*t3700*var2[6]);
  p_output1[1]=t4131;
  p_output1[2]=t4131;
  p_output1[3]=-0.5*t4213*var2[2] - 0.5*t4265*var2[5] - 0.5*t4265*var2[6];
  p_output1[4]=-0.5*t4213*var2[0];
  p_output1[5]=t4388;
  p_output1[6]=t4388;
  p_output1[7]=var2[0]*(-0.5*(2.55648*t1881*t2581 + 2.55648*t2300*t2670 + 0.85216*t2875*(t1792 + t3928) + 0.85216*t2054*(t2873 + t4421))*var2[2] - 0.5*t4737*var2[5] - 0.5*t4737*var2[6]);
  p_output1[8]=t5194;
  p_output1[9]=t5194;
  p_output1[10]=-0.5*t5264*var2[2] - 0.5*t5396*var2[5] - 0.5*t5396*var2[6];
  p_output1[11]=-0.5*t5264*var2[0];
  p_output1[12]=t5453;
  p_output1[13]=t5453;
  p_output1[14]=var2[0]*(-0.5*(0.85216*t2670*t5850 + 0.85216*t1881*t5904)*var2[2] - 0.5*t6255*var2[5] - 0.5*t6438*var2[6]);
  p_output1[15]=var2[0]*(-0.5*t6255*var2[2] - 0.5*(1.70432*t3598*t6047 + 1.70432*t2054*t6183 + t6507 + t6539 + 0.85216*t2875*(-1.*t1791*t5995 - 2.*t3371*t5995 - 2.*t1608*t6015 - 1.*t1608*t6632 + t6656 + t6691) + 0.85216*t2054*(2.*t1608*t5995 + t2242*t5995 + 2.*t1791*t6015 + t1791*t6632 + t6770 + t6871))*var2[5] - 0.5*t7370*var2[6]);
  p_output1[16]=var2[0]*(-0.5*t6438*var2[2] - 0.5*t7370*var2[5] - 0.5*(1.70432*t3598*t6380 + 1.70432*t2054*t6422 + t6507 + t6539 + 0.85216*t2875*(-2.*t3371*t6286 - 2.*t1608*t6354 + t6656 + t6691 + t7064 + t7093) + 0.85216*t2054*(2.*t1608*t6286 + 2.*t1791*t6354 + t6770 + t6871 + t7305 + t7330))*var2[6]);
  p_output1[17]=-0.5*t7738*var2[2] - 0.5*t7849*var2[5] - 0.5*t7916*var2[6];
  p_output1[18]=-0.5*t7738*var2[0];
  p_output1[19]=-0.5*t7849*var2[0];
  p_output1[20]=-0.5*t7916*var2[0];
  p_output1[21]=var2[0]*(-0.5*(0.85216*t1881*t8117 + 0.85216*t2670*t8163)*var2[2] - 0.5*t8181*var2[5] - 0.5*(t8179 + t8180 + 0.85216*t2300*t8199 + t8213)*var2[6]);
  p_output1[22]=var2[0]*(-0.5*t8181*var2[2] - 0.5*(t8223 + t8228)*var2[5] - 0.5*(t8223 + t8228 + t8245 + t8246)*var2[6]);
  p_output1[23]=var2[0]*(-0.5*(t8179 + t8180 + t8213 + 0.85216*t2300*t8257)*var2[2] - 0.5*(t8223 + t8228 + t8246 + t8264)*var2[5] - 0.5*(0.85216*t2054*(0. - 0.4999*t1253 - 1.*t1253*t5540 - 0.17188499999999995*t8187) + 0.85216*t2875*t8210 + 1.70432*t3598*t8210 + t8223 + t8228 + t8245 + t8264)*var2[6]);
  p_output1[24]=-0.5*t8291*var2[2] - 0.5*t8299*var2[5] - 0.5*t8304*var2[6];
  p_output1[25]=-0.5*t8291*var2[0];
  p_output1[26]=-0.5*t8299*var2[0];
  p_output1[27]=-0.5*t8304*var2[0];
  p_output1[28]=var2[0]*(0.07323676079999998*t1881*var2[2] + 0.07323676079999998*t3519*var2[5] + 0.07323676079999998*t3519*var2[6]);
  p_output1[29]=t8328;
  p_output1[30]=t8328;
  p_output1[31]=0.07323676079999998*t2581*var2[2] + 0.07323676079999998*t3598*var2[5] + 0.07323676079999998*t3598*var2[6];
  p_output1[32]=0.07323676079999998*t2581*var2[0];
  p_output1[33]=t8336;
  p_output1[34]=t8336;
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

#include "J_Ce1_vec_L5_J1_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L5_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
