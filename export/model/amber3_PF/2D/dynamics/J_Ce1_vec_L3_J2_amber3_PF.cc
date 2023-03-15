/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:31:04 GMT-08:00
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
  double t123;
  double t104;
  double t112;
  double t168;
  double t996;
  double t122;
  double t581;
  double t766;
  double t58;
  double t1027;
  double t1033;
  double t1190;
  double t1885;
  double t1903;
  double t2048;
  double t1655;
  double t2189;
  double t1241;
  double t2541;
  double t2117;
  double t2220;
  double t1363;
  double t1746;
  double t2419;
  double t2424;
  double t2276;
  double t2300;
  double t914;
  double t1324;
  double t2782;
  double t2811;
  double t2525;
  double t3036;
  double t3085;
  double t3086;
  double t2890;
  double t2950;
  double t3014;
  double t3119;
  double t3200;
  double t3313;
  double t3340;
  double t3357;
  double t3376;
  double t3547;
  double t3564;
  double t3568;
  double t3612;
  double t2560;
  double t3752;
  double t3757;
  double t3764;
  double t3783;
  double t3849;
  double t4044;
  double t4047;
  double t4049;
  double t4082;
  double t3721;
  double t4109;
  double t4193;
  double t4213;
  double t4286;
  double t4637;
  double t4653;
  double t4783;
  double t4792;
  double t4806;
  double t4385;
  double t4397;
  double t4402;
  double t4443;
  double t4454;
  double t4610;
  double t4616;
  double t4957;
  double t2648;
  double t2545;
  double t5216;
  double t5243;
  double t5264;
  double t5304;
  double t5327;
  double t5562;
  double t5597;
  double t5600;
  double t5607;
  double t5652;
  double t5745;
  double t5551;
  double t5772;
  double t5839;
  double t5846;
  double t5859;
  double t5949;
  double t5900;
  double t5917;
  double t5927;
  double t6023;
  double t6031;
  double t6032;
  double t6039;
  double t6057;
  double t6064;
  double t6027;
  double t6099;
  double t6165;
  double t6186;
  double t6196;
  double t6218;
  double t6240;
  double t6255;
  double t6263;
  double t6265;
  double t6194;
  double t6273;
  double t6276;
  double t6306;
  double t6344;
  double t6346;
  double t6450;
  double t6451;
  double t6485;
  double t6510;
  double t6656;
  double t6717;
  double t6382;
  double t6384;
  double t6561;
  double t6734;
  double t6736;
  double t6920;
  double t6926;
  double t6986;
  double t7019;
  double t6842;
  double t6542;
  double t6720;
  double t6727;
  double t6728;
  double t6781;
  double t6836;
  double t6892;
  double t6900;
  double t6912;
  double t7642;
  double t7643;
  double t7652;
  double t7690;
  double t7502;
  double t6969;
  double t7120;
  double t7141;
  double t7597;
  double t7755;
  double t7881;
  double t7160;
  double t7170;
  double t7273;
  double t8039;
  double t8145;
  double t8146;
  double t8086;
  double t7148;
  double t7296;
  double t7345;
  double t8117;
  double t8120;
  double t8129;
  double t8149;
  double t8150;
  double t8153;
  double t8154;
  double t8156;
  double t8157;
  double t8158;
  double t8163;
  double t8164;
  double t8170;
  double t8175;
  double t8176;
  double t8178;
  double t8179;
  double t8180;
  double t8181;
  double t8182;
  double t8184;
  double t8246;
  double t8249;
  double t8230;
  double t8241;
  double t8244;
  double t8247;
  double t8257;
  double t8258;
  double t8260;
  double t8262;
  double t8263;
  double t8275;
  double t8276;
  double t8277;
  double t8278;
  double t8280;
  double t8281;
  double t8282;
  double t8283;
  double t8284;
  double t8291;
  double t8293;
  double t8294;
  double t8303;
  double t8304;
  double t8305;
  double t8296;
  double t8297;
  double t8299;
  double t8300;
  double t8313;
  double t8314;
  double t8301;
  double t8326;
  double t8318;
  double t8317;
  double t8331;
  double t8357;
  double t8358;
  double t8352;
  double t8354;
  double t8355;
  double t8359;
  double t8362;
  double t8363;
  double t8364;
  double t8377;
  double t8379;
  double t8380;
  double t8381;
  double t8383;
  double t8393;
  t123 = Cos(var1[3]);
  t104 = Cos(var1[4]);
  t112 = Sin(var1[3]);
  t168 = Sin(var1[4]);
  t996 = Cos(var1[2]);
  t122 = -1.*t104*t112;
  t581 = -1.*t123*t168;
  t766 = t122 + t581;
  t58 = Sin(var1[2]);
  t1027 = t123*t104;
  t1033 = -1.*t112*t168;
  t1190 = t1027 + t1033;
  t1885 = t104*t112;
  t1903 = t123*t168;
  t2048 = t1885 + t1903;
  t1655 = -1.*t58*t1190;
  t2189 = t996*t1190;
  t1241 = -1.*t996*t1190;
  t2541 = t58*t1190;
  t2117 = -1.*t58*t2048;
  t2220 = t2117 + t2189;
  t1363 = t996*t766;
  t1746 = t1363 + t1655;
  t2419 = t58*t766;
  t2424 = t2419 + t2189;
  t2276 = -1.*t996*t2048;
  t2300 = t2276 + t1655;
  t914 = -1.*t58*t766;
  t1324 = t914 + t1241;
  t2782 = t996*t2048;
  t2811 = t2782 + t2541;
  t2525 = -1.*t996*t766;
  t3036 = -1.*t123*t104;
  t3085 = t112*t168;
  t3086 = t3036 + t3085;
  t2890 = 1.70432*t2220*t1746;
  t2950 = 0.85216*t2424*t2300;
  t3014 = 0.85216*t1324*t2811;
  t3119 = t996*t3086;
  t3200 = t914 + t3119;
  t3313 = 1.70432*t1746*t3200;
  t3340 = -1.*t58*t3086;
  t3357 = t2525 + t3340;
  t3376 = 0.85216*t2424*t3357;
  t3547 = t58*t3086;
  t3564 = t1363 + t3547;
  t3568 = 0.85216*t1324*t3564;
  t3612 = t2890 + t2950 + t3014 + t3313 + t3376 + t3568;
  t2560 = t58*t2048;
  t3752 = 1.70432*t2424*t1746;
  t3757 = 0.85216*t2811*t3200;
  t3764 = t2560 + t3119;
  t3783 = 0.85216*t1746*t3764;
  t3849 = t2782 + t3340;
  t4044 = 0.85216*t2424*t3849;
  t4047 = 0.85216*t2220*t3564;
  t4049 = 1.70432*t3200*t3564;
  t4082 = t3752 + t3757 + t3783 + t4044 + t4047 + t4049;
  t3721 = -0.5*var2[2]*t3612;
  t4109 = -0.5*var2[3]*t4082;
  t4193 = -0.5*var2[4]*t4082;
  t4213 = t3721 + t4109 + t4193;
  t4286 = var2[1]*t4213;
  t4637 = 0.85216*t2424*t2220;
  t4653 = 0.85216*t1746*t2811;
  t4783 = 0.85216*t2424*t3200;
  t4792 = 0.85216*t1746*t3564;
  t4806 = t4637 + t4653 + t4783 + t4792;
  t4385 = 0.85216*t1324*t2424;
  t4397 = Power(t2220,2);
  t4402 = 0.85216*t4397;
  t4443 = Power(t1746,2);
  t4454 = 0.85216*t4443;
  t4610 = 0.85216*t2300*t2811;
  t4616 = t4385 + t4402 + t4454 + t4610;
  t4957 = -0.5*var2[1]*t4806;
  t2648 = t2560 + t1241;
  t2545 = t2525 + t2541;
  t5216 = 1.70432*t1324*t2220;
  t5243 = 1.70432*t1746*t2300;
  t5264 = 1.70432*t1324*t3200;
  t5304 = 1.70432*t1746*t3357;
  t5327 = t5216 + t5243 + t5264 + t5304;
  t5562 = 1.70432*t4443;
  t5597 = 1.70432*t2220*t3200;
  t5600 = Power(t3200,2);
  t5607 = 1.70432*t5600;
  t5652 = 1.70432*t1746*t3849;
  t5745 = t5562 + t5597 + t5607 + t5652;
  t5551 = -0.5*var2[2]*t5327;
  t5772 = -0.5*var2[3]*t5745;
  t5839 = -0.5*var2[4]*t5745;
  t5846 = t5551 + t5772 + t5839;
  t5859 = var2[1]*t5846;
  t5949 = t2890 + t3313;
  t5900 = 1.70432*t1324*t1746;
  t5917 = 1.70432*t2220*t2300;
  t5927 = t5900 + t5917;
  t6023 = -0.5*var2[1]*t5949;
  t6031 = -1.*t104;
  t6032 = 1. + t6031;
  t6039 = -0.9063*t6032;
  t6057 = -1.078185*t104;
  t6064 = t6039 + t6057;
  t6027 = 0.4999*t112;
  t6099 = t6064*t112;
  t6165 = -0.17188499999999995*t123*t168;
  t6186 = t6027 + t6099 + t6165;
  t6196 = -1.*t123;
  t6218 = 1. + t6196;
  t6240 = -0.4999*t6218;
  t6255 = t123*t6064;
  t6263 = 0.17188499999999995*t112*t168;
  t6265 = t6240 + t6255 + t6263;
  t6194 = -1.*t6186*t1190;
  t6273 = -1.*t766*t6265;
  t6276 = t6194 + t6273;
  t6306 = t6186*t2048;
  t6344 = t1190*t6265;
  t6346 = t6306 + t6344;
  t6450 = -0.4999*t112;
  t6451 = -1.*t6064*t112;
  t6485 = 0.17188499999999995*t123*t168;
  t6510 = t6450 + t6451 + t6485;
  t6656 = 0.4999*t123;
  t6717 = t6656 + t6255 + t6263;
  t6382 = 0.85216*t1324*t6276;
  t6384 = t6186*t1190;
  t6561 = t766*t6265;
  t6734 = 0.85216*t6346*t3357;
  t6736 = -1.*t766*t6186;
  t6920 = 0.17188499999999995*t104*t112;
  t6926 = t6920 + t6485;
  t6986 = -0.17188499999999995*t123*t104;
  t7019 = t6986 + t6263;
  t6842 = -1.*t6265*t3086;
  t6542 = t6510*t1190;
  t6720 = t2048*t6717;
  t6727 = t6384 + t6542 + t6561 + t6720;
  t6728 = 0.85216*t1324*t6727;
  t6781 = -1.*t766*t6510;
  t6836 = -1.*t1190*t6717;
  t6892 = t6736 + t6781 + t6836 + t6842;
  t6900 = 0.85216*t2300*t6892;
  t6912 = t6382 + t6728 + t6734 + t6900;
  t7642 = -0.4999*t123;
  t7643 = -1.*t123*t6064;
  t7652 = -0.17188499999999995*t112*t168;
  t7690 = t7642 + t7643 + t7652;
  t7502 = 0.85216*t6276*t3200;
  t6969 = t6926*t1190;
  t7120 = t2048*t7019;
  t7141 = t6384 + t6969 + t6561 + t7120;
  t7597 = 0.85216*t6346*t3849;
  t7755 = -1.*t2048*t6265;
  t7881 = -1.*t6186*t3086;
  t7160 = -1.*t766*t6926;
  t7170 = -1.*t1190*t7019;
  t7273 = t6736 + t7160 + t7170 + t6842;
  t8039 = t766*t6186;
  t8145 = 0.17188499999999995*t123*t104;
  t8146 = t8145 + t7652;
  t8086 = t6265*t3086;
  t7148 = 0.85216*t1324*t7141;
  t7296 = 0.85216*t2300*t7273;
  t7345 = t6382 + t7148 + t6734 + t7296;
  t8117 = 0.85216*t6727*t3200;
  t8120 = 0.85216*t7141*t3200;
  t8129 = -1.*t6926*t1190;
  t8149 = -1.*t766*t8146;
  t8150 = -1.*t766*t6717;
  t8153 = -1.*t766*t7019;
  t8154 = -1.*t6510*t3086;
  t8156 = -1.*t6926*t3086;
  t8157 = t8129 + t8149 + t7755 + t8150 + t8153 + t7881 + t8154 + t8156;
  t8158 = 0.85216*t2220*t8157;
  t8163 = 0.85216*t1746*t6892;
  t8164 = 0.85216*t1746*t7273;
  t8170 = t766*t6510;
  t8175 = t766*t6926;
  t8176 = t6926*t2048;
  t8178 = t1190*t8146;
  t8179 = t1190*t6717;
  t8180 = t1190*t7019;
  t8181 = t8039 + t8170 + t8175 + t8176 + t8178 + t8179 + t8180 + t8086;
  t8182 = 0.85216*t1746*t8181;
  t8184 = t7502 + t8117 + t8120 + t7597 + t8158 + t8163 + t8164 + t8182;
  t8246 = 0.85216*t1746*t6276;
  t8249 = 0.85216*t6346*t3200;
  t8230 = 0.85216*t2300*t6276;
  t8241 = 0.85216*t1324*t6346;
  t8244 = t8230 + t8241;
  t8247 = 0.85216*t1746*t6727;
  t8257 = 0.85216*t2220*t6892;
  t8258 = t8246 + t8247 + t8249 + t8257;
  t8260 = 0.85216*t1746*t7141;
  t8262 = 0.85216*t2220*t7273;
  t8263 = t8246 + t8260 + t8249 + t8262;
  t8275 = 0.4999*t168;
  t8276 = t6064*t168;
  t8277 = 0.17188499999999995*t104*t168;
  t8278 = t8275 + t8276 + t8277;
  t8280 = 0.4999*t104;
  t8281 = t6064*t104;
  t8282 = Power(t168,2);
  t8283 = -0.17188499999999995*t8282;
  t8284 = t8280 + t8281 + t8283;
  t8291 = 0.85216*t8278*t1324;
  t8293 = 0.85216*t8284*t3357;
  t8294 = t8291 + t8293;
  t8303 = Power(t104,2);
  t8304 = 0.17188499999999995*t8303;
  t8305 = t8280 + t8281 + t8304;
  t8296 = -0.4999*t168;
  t8297 = -1.*t6064*t168;
  t8299 = -0.17188499999999995*t104*t168;
  t8300 = t8296 + t8297 + t8299;
  t8313 = 0.85216*t8278*t3200;
  t8314 = 0.85216*t8284*t3849;
  t8301 = 0.85216*t8300*t1324;
  t8326 = 0. + t8280 + t8281 + t8304;
  t8318 = 0.85216*t8300*t3200;
  t8317 = 0.85216*t8305*t1746;
  t8331 = 0.85216*t8326*t1746;
  t8357 = 0.85216*t8278*t1746;
  t8358 = 0.85216*t8284*t3200;
  t8352 = 0.85216*t8284*t1324;
  t8354 = 0.85216*t8278*t2300;
  t8355 = t8352 + t8354;
  t8359 = t8357 + t8358;
  t8362 = 0.85216*t8305*t2220;
  t8363 = 0.85216*t8300*t1746;
  t8364 = t8362 + t8363 + t8357 + t8358;
  t8377 = 0.07323676079999998*var2[2]*t3357;
  t8379 = 0.07323676079999998*var2[3]*t3849;
  t8380 = 0.07323676079999998*var2[4]*t3849;
  t8381 = t8377 + t8379 + t8380;
  t8383 = var2[1]*t8381;
  t8393 = 0.07323676079999998*var2[1]*t3200;
  p_output1[0]=var2[1]*(-0.5*(2.55648*t1324*t1746 + 2.55648*t2220*t2300 + 0.85216*t2424*t2545 + 0.85216*t2648*t2811)*var2[2] - 0.5*t3612*var2[3] - 0.5*t3612*var2[4]);
  p_output1[1]=t4286;
  p_output1[2]=t4286;
  p_output1[3]=-0.5*t4616*var2[2] - 0.5*t4806*var2[3] - 0.5*t4806*var2[4];
  p_output1[4]=-0.5*t4616*var2[1];
  p_output1[5]=t4957;
  p_output1[6]=t4957;
  p_output1[7]=var2[1]*(-0.5*(1.70432*Power(t1324,2) + 1.70432*Power(t2300,2) + 1.70432*t1746*t2545 + 1.70432*t2220*t2648)*var2[2] - 0.5*t5327*var2[3] - 0.5*t5327*var2[4]);
  p_output1[8]=t5859;
  p_output1[9]=t5859;
  p_output1[10]=-0.5*t5927*var2[2] - 0.5*t5949*var2[3] - 0.5*t5949*var2[4];
  p_output1[11]=-0.5*t5927*var2[1];
  p_output1[12]=t6023;
  p_output1[13]=t6023;
  p_output1[14]=var2[1]*(-0.5*(0.85216*t2648*t6276 + 0.85216*t2545*t6346)*var2[2] - 0.5*t6912*var2[3] - 0.5*t7345*var2[4]);
  p_output1[15]=var2[1]*(-0.5*t6912*var2[2] - 0.5*(1.70432*t3200*t6727 + 1.70432*t1746*t6892 + t7502 + t7597 + 0.85216*t2220*(-1.*t1190*t6510 - 2.*t3086*t6510 - 2.*t6717*t766 - 1.*t766*t7690 + t7755 + t7881) + 0.85216*t1746*(t2048*t6510 + 2.*t1190*t6717 + 2.*t6510*t766 + t1190*t7690 + t8039 + t8086))*var2[3] - 0.5*t8184*var2[4]);
  p_output1[16]=var2[1]*(-0.5*t7345*var2[2] - 0.5*t8184*var2[3] - 0.5*(1.70432*t3200*t7141 + 1.70432*t1746*t7273 + t7502 + t7597 + 0.85216*t2220*(-2.*t3086*t6926 - 2.*t7019*t766 + t7755 + t7881 + t8129 + t8149) + 0.85216*t1746*(2.*t1190*t7019 + 2.*t6926*t766 + t8039 + t8086 + t8176 + t8178))*var2[4]);
  p_output1[17]=-0.5*t8244*var2[2] - 0.5*t8258*var2[3] - 0.5*t8263*var2[4];
  p_output1[18]=-0.5*t8244*var2[1];
  p_output1[19]=-0.5*t8258*var2[1];
  p_output1[20]=-0.5*t8263*var2[1];
  p_output1[21]=var2[1]*(-0.5*(0.85216*t2648*t8278 + 0.85216*t2545*t8284)*var2[2] - 0.5*t8294*var2[3] - 0.5*(t8291 + t8293 + t8301 + 0.85216*t2300*t8305)*var2[4]);
  p_output1[22]=var2[1]*(-0.5*t8294*var2[2] - 0.5*(t8313 + t8314)*var2[3] - 0.5*(t8313 + t8314 + t8317 + t8318)*var2[4]);
  p_output1[23]=var2[1]*(-0.5*(t8291 + t8293 + t8301 + 0.85216*t2300*t8326)*var2[2] - 0.5*(t8313 + t8314 + t8318 + t8331)*var2[3] - 0.5*(0.85216*t2220*t8300 + 1.70432*t3200*t8300 + 0.85216*t1746*(0. - 0.4999*t104 - 1.*t104*t6064 - 0.17188499999999995*t8303) + t8313 + t8314 + t8317 + t8331)*var2[4]);
  p_output1[24]=-0.5*t8355*var2[2] - 0.5*t8359*var2[3] - 0.5*t8364*var2[4];
  p_output1[25]=-0.5*t8355*var2[1];
  p_output1[26]=-0.5*t8359*var2[1];
  p_output1[27]=-0.5*t8364*var2[1];
  p_output1[28]=var2[1]*(0.07323676079999998*t2545*var2[2] + 0.07323676079999998*t3357*var2[3] + 0.07323676079999998*t3357*var2[4]);
  p_output1[29]=t8383;
  p_output1[30]=t8383;
  p_output1[31]=0.07323676079999998*t1324*var2[2] + 0.07323676079999998*t3200*var2[3] + 0.07323676079999998*t3200*var2[4];
  p_output1[32]=0.07323676079999998*t1324*var2[1];
  p_output1[33]=t8393;
  p_output1[34]=t8393;
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

#include "J_Ce1_vec_L3_J2_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L3_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
