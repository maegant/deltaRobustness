/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:29 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t541;
  double t154;
  double t271;
  double t572;
  double t970;
  double t419;
  double t618;
  double t878;
  double t102;
  double t1008;
  double t1079;
  double t1161;
  double t1739;
  double t947;
  double t1322;
  double t1515;
  double t87;
  double t1908;
  double t1931;
  double t2007;
  double t2475;
  double t2501;
  double t2518;
  double t2356;
  double t2683;
  double t2260;
  double t2393;
  double t3449;
  double t3564;
  double t3634;
  double t3720;
  double t3760;
  double t4011;
  double t4098;
  double t3993;
  double t4154;
  double t4197;
  double t4214;
  double t4281;
  double t4284;
  double t4289;
  double t4351;
  double t4354;
  double t2011;
  double t2871;
  double t2917;
  double t4979;
  double t4994;
  double t5059;
  double t5060;
  double t5124;
  double t5129;
  double t4749;
  double t4865;
  double t4871;
  double t4902;
  double t5152;
  double t5161;
  double t5253;
  double t5254;
  double t5290;
  double t5299;
  double t5387;
  double t5407;
  double t5419;
  double t5423;
  double t5436;
  double t5523;
  double t5538;
  double t2622;
  double t2819;
  double t2841;
  double t3003;
  double t3164;
  double t5631;
  double t5687;
  double t5689;
  double t5505;
  double t5515;
  double t5518;
  double t5540;
  double t5581;
  double t5585;
  double t4626;
  double t5200;
  double t5384;
  double t5386;
  double t5548;
  double t5561;
  double t5474;
  double t5478;
  double t5490;
  double t5491;
  double t5629;
  double t5650;
  double t5893;
  double t5901;
  double t5910;
  double t5912;
  double t5916;
  double t5919;
  double t5975;
  double t5981;
  double t5986;
  double t6002;
  double t6004;
  double t5885;
  double t5891;
  double t5961;
  double t5965;
  double t6095;
  double t6116;
  double t6118;
  double t6120;
  double t6122;
  double t6134;
  double t6135;
  double t6136;
  double t6139;
  double t6140;
  double t6141;
  double t6005;
  double t6007;
  double t6017;
  double t6027;
  double t6035;
  double t6072;
  double t5936;
  double t5937;
  double t5958;
  double t5904;
  double t5923;
  double t5925;
  double t5928;
  double t5960;
  double t5994;
  double t5995;
  double t5997;
  double t6001;
  double t6090;
  double t5732;
  double t6344;
  double t6346;
  double t6286;
  double t6290;
  double t6296;
  double t6304;
  double t6283;
  double t6331;
  double t6334;
  double t6345;
  double t6348;
  double t6354;
  double t6361;
  double t6363;
  double t6364;
  double t6369;
  double t6370;
  double t6450;
  double t6452;
  double t6453;
  double t6152;
  double t6156;
  double t6168;
  double t6169;
  double t6412;
  double t6415;
  double t6194;
  double t6206;
  double t6231;
  double t6246;
  double t6250;
  double t6259;
  double t6260;
  double t6261;
  double t6263;
  double t6273;
  double t6144;
  double t6145;
  double t6150;
  double t6153;
  double t6154;
  double t6170;
  double t6175;
  double t6179;
  double t6183;
  double t6276;
  double t6439;
  double t6444;
  double t6448;
  double t6454;
  double t6457;
  double t6458;
  double t6459;
  double t6460;
  double t6471;
  double t6479;
  double t6485;
  double t6488;
  double t6490;
  double t6492;
  double t6497;
  double t6502;
  double t6507;
  double t6518;
  double t6520;
  double t6531;
  double t6542;
  double t6682;
  double t6703;
  double t4485;
  double t4562;
  double t1690;
  double t2022;
  double t6248;
  double t6252;
  double t6255;
  double t5461;
  double t5496;
  double t5568;
  double t5655;
  double t5677;
  double t6607;
  double t6611;
  double t6620;
  double t6212;
  double t6228;
  double t6240;
  double t6596;
  double t6601;
  double t6604;
  double t6558;
  double t6561;
  double t6574;
  double t6575;
  double t6580;
  double t6581;
  double t6586;
  double t6594;
  double t6912;
  double t6920;
  double t6866;
  double t6867;
  double t7053;
  double t6986;
  double t6993;
  double t7018;
  double t7083;
  double t7069;
  double t7078;
  double t7023;
  double t7079;
  double t7085;
  double t7089;
  double t7090;
  double t7095;
  double t5774;
  double t5786;
  double t5789;
  double t5791;
  double t5823;
  double t6884;
  double t6887;
  double t7262;
  double t7263;
  double t7264;
  double t7265;
  double t6955;
  double t6935;
  double t6936;
  double t6938;
  double t6391;
  double t6396;
  double t6379;
  double t6380;
  double t7253;
  double t7254;
  double t7257;
  double t7261;
  double t7266;
  double t7267;
  double t7270;
  double t7377;
  double t7391;
  double t7406;
  double t7407;
  double t6966;
  double t6967;
  double t7333;
  double t7336;
  double t7340;
  double t7345;
  double t7366;
  double t7367;
  double t7370;
  double t7285;
  double t7299;
  double t7302;
  double t7305;
  double t7307;
  double t7317;
  double t7318;
  double t6734;
  double t6736;
  double t6745;
  double t6753;
  double t6754;
  double t6756;
  double t7441;
  double t7442;
  double t7443;
  double t7446;
  double t7450;
  double t7455;
  double t7457;
  double t7460;
  double t7462;
  double t7475;
  double t7476;
  double t7477;
  double t7478;
  double t7481;
  double t7482;
  double t7488;
  double t7495;
  double t7161;
  double t7163;
  double t7028;
  double t7032;
  double t7128;
  double t7139;
  double t7145;
  double t7148;
  double t7150;
  double t7348;
  double t7361;
  double t7368;
  double t7539;
  double t7546;
  double t7552;
  double t7328;
  double t7335;
  double t7337;
  double t7533;
  double t7534;
  double t7536;
  double t7505;
  double t7507;
  double t7515;
  double t7647;
  double t7648;
  t541 = Cos(var1[7]);
  t154 = Cos(var1[8]);
  t271 = Sin(var1[7]);
  t572 = Sin(var1[8]);
  t970 = Cos(var1[6]);
  t419 = -1.*t154*t271;
  t618 = -1.*t541*t572;
  t878 = t419 + t618;
  t102 = Sin(var1[6]);
  t1008 = t541*t154;
  t1079 = -1.*t271*t572;
  t1161 = t1008 + t1079;
  t1739 = Cos(var1[2]);
  t947 = t102*t878;
  t1322 = t970*t1161;
  t1515 = t947 + t1322;
  t87 = Sin(var1[2]);
  t1908 = t970*t878;
  t1931 = -1.*t102*t1161;
  t2007 = t1908 + t1931;
  t2475 = -1.*t102*t878;
  t2501 = -1.*t970*t1161;
  t2518 = t2475 + t2501;
  t2356 = -1.*t87*t2007;
  t2683 = -1.*t1739*t2007;
  t2260 = -1.*t1739*t1515;
  t2393 = t2260 + t2356;
  t3449 = -1.*t541*t154;
  t3564 = t271*t572;
  t3634 = t3449 + t3564;
  t3720 = t970*t3634;
  t3760 = t2475 + t3720;
  t4011 = t102*t3634;
  t4098 = t1908 + t4011;
  t3993 = -1.*t87*t3760;
  t4154 = -1.*t1739*t4098;
  t4197 = t3993 + t4154;
  t4214 = var2[1]*t4197;
  t4281 = t1739*t3760;
  t4284 = -1.*t87*t4098;
  t4289 = t4281 + t4284;
  t4351 = var2[0]*t4289;
  t4354 = t4214 + t4351;
  t2011 = t1739*t2007;
  t2871 = t1739*t2518;
  t2917 = t2871 + t2356;
  t4979 = -1.*t154;
  t4994 = 1. + t4979;
  t5059 = -1.3127*t4994;
  t5060 = -1.3127*t154;
  t5124 = -0.06*t572;
  t5129 = t5059 + t5060 + t5124;
  t4749 = -1.*t541;
  t4865 = 1. + t4749;
  t4871 = -0.9063*t4865;
  t4902 = -0.06*t154*t271;
  t5152 = t541*t5129;
  t5161 = t4871 + t4902 + t5152;
  t5253 = 0.06*t541*t154;
  t5254 = 0.9063*t271;
  t5290 = t271*t5129;
  t5299 = t5253 + t5254 + t5290;
  t5387 = t154*t271;
  t5407 = t541*t572;
  t5419 = t5387 + t5407;
  t5423 = -1.*t102*t5419;
  t5436 = t5423 + t1322;
  t5523 = t970*t5161;
  t5538 = -1.*t102*t5299;
  t2622 = -1.*t87*t2518;
  t2819 = t2622 + t2683;
  t2841 = var2[1]*t2819;
  t3003 = var2[0]*t2917;
  t3164 = t2841 + t3003;
  t5631 = t102*t1161;
  t5687 = -1.*t970*t878;
  t5689 = t5687 + t5631;
  t5505 = -1.*t970;
  t5515 = 1. + t5505;
  t5518 = -0.4999*t5515;
  t5540 = t5518 + t5523 + t5538;
  t5581 = 0.4999*t970;
  t5585 = t5581 + t5523 + t5538;
  t4626 = -0.4999*t102;
  t5200 = -1.*t102*t5161;
  t5384 = -1.*t970*t5299;
  t5386 = t4626 + t5200 + t5384;
  t5548 = -1.*t970*t5419;
  t5561 = t5548 + t1931;
  t5474 = 0.4999*t102;
  t5478 = t102*t5161;
  t5490 = t970*t5299;
  t5491 = t5474 + t5478 + t5490;
  t5629 = t970*t5419;
  t5650 = t5629 + t5631;
  t5893 = 0.9063*t541;
  t5901 = t5893 + t4902 + t5152;
  t5910 = -0.06*t541*t154;
  t5912 = -0.9063*t271;
  t5916 = -1.*t271*t5129;
  t5919 = t5910 + t5912 + t5916;
  t5975 = -1.*t102*t5901;
  t5981 = t970*t5919;
  t5986 = t5975 + t5981;
  t6002 = -1.*t102*t3634;
  t6004 = t5687 + t6002;
  t5885 = t5540*t2518;
  t5891 = t5585*t1515;
  t5961 = t5386*t2007;
  t5965 = t5491*t2007;
  t6095 = -0.06*t154;
  t6116 = 0. + t6095;
  t6118 = t6116*t271;
  t6120 = -0.06*t541*t572;
  t6122 = t6118 + t6120;
  t6134 = -1.*t102*t6122;
  t6135 = t541*t6116;
  t6136 = 0.06*t271*t572;
  t6139 = t6135 + t6136;
  t6140 = t970*t6139;
  t6141 = t6134 + t6140;
  t6005 = t1739*t6004;
  t6007 = t3993 + t6005;
  t6017 = var2[1]*t6007;
  t6027 = t87*t6004;
  t6035 = t4281 + t6027;
  t6072 = var2[0]*t6035;
  t5936 = t970*t5901;
  t5937 = t102*t5919;
  t5958 = t5936 + t5937;
  t5904 = -1.*t970*t5901;
  t5923 = -1.*t102*t5919;
  t5925 = t5904 + t5923;
  t5928 = t5925*t5436;
  t5960 = t5958*t5436;
  t5994 = t5986*t5561;
  t5995 = t5986*t5650;
  t5997 = t5885 + t5891 + t5928 + t5960 + t5961 + t5965 + t5994 + t5995;
  t6001 = var2[2]*t5997;
  t6090 = t6001 + t6017 + t6072;
  t5732 = t102*t5419;
  t6344 = t5732 + t3720;
  t6346 = t5629 + t6002;
  t6286 = -0.9063*t541;
  t6290 = 0.06*t154*t271;
  t6296 = -1.*t541*t5129;
  t6304 = t6286 + t6290 + t6296;
  t6283 = t5299*t878;
  t6331 = 0.4999*t3634;
  t6334 = t5161*t3634;
  t6345 = -1.*t87*t6344;
  t6348 = t1739*t6346;
  t6354 = t6345 + t6348;
  t6361 = var2[1]*t6354;
  t6363 = t1739*t6344;
  t6364 = t87*t6346;
  t6369 = t6363 + t6364;
  t6370 = var2[0]*t6369;
  t6450 = -1.*t6116*t271;
  t6452 = 0.06*t541*t572;
  t6453 = t6450 + t6452;
  t6152 = -1.*t102*t6139;
  t6156 = t970*t6122;
  t6168 = t102*t6139;
  t6169 = t6156 + t6168;
  t6412 = t5540*t3760;
  t6415 = t5491*t4098;
  t6194 = 0.4999*t878;
  t6206 = t5161*t878;
  t6231 = t5299*t1161;
  t6246 = t5491*t1515;
  t6250 = t5540*t2007;
  t6259 = t87*t3760;
  t6260 = t1739*t4098;
  t6261 = t6259 + t6260;
  t6263 = var3[0]*t6261;
  t6273 = var3[1]*t4289;
  t6144 = t5561*t6141;
  t6145 = t5650*t6141;
  t6150 = -1.*t970*t6122;
  t6153 = t6150 + t6152;
  t6154 = t5436*t6153;
  t6170 = t5436*t6169;
  t6175 = t5885 + t5891 + t5961 + t5965 + t6144 + t6145 + t6154 + t6170;
  t6179 = var2[2]*t6175;
  t6183 = t6179 + t6017 + t6072;
  t6276 = var2[2]*t4354;
  t6439 = t5919*t878;
  t6444 = t5901*t1161;
  t6448 = t6122*t1161;
  t6454 = t6453*t1161;
  t6457 = t878*t6139;
  t6458 = t5419*t6139;
  t6459 = t6439 + t6283 + t6444 + t6448 + t6454 + t6457 + t6458 + t6331 + t6334;
  t6460 = var2[6]*t6459;
  t6471 = t5958*t1515;
  t6479 = t5986*t2007;
  t6485 = t2007*t6141;
  t6488 = t102*t6453;
  t6490 = t6488 + t6140;
  t6492 = t5650*t6490;
  t6497 = t970*t6453;
  t6502 = t6497 + t6152;
  t6507 = t5436*t6502;
  t6518 = t1515*t6169;
  t6520 = t6471 + t6479 + t6485 + t6492 + t6507 + t6518 + t6412 + t6415;
  t6531 = var2[2]*t6520;
  t6542 = t6460 + t6361 + t6370 + t6531;
  t6682 = t6290 + t6452;
  t6703 = t5910 + t6136;
  t4485 = t87*t2518;
  t4562 = t4485 + t2011;
  t1690 = -1.*t87*t1515;
  t2022 = t1690 + t2011;
  t6248 = t5986*t5436;
  t6252 = t5958*t5650;
  t6255 = t6246 + t6248 + t6250 + t6252;
  t5461 = t5386*t5436;
  t5496 = t5491*t5436;
  t5568 = t5540*t5561;
  t5655 = t5585*t5650;
  t5677 = t5461 + t5496 + t5568 + t5655;
  t6607 = t5436*t6141;
  t6611 = t5650*t6169;
  t6620 = t6246 + t6250 + t6607 + t6611;
  t6212 = t5901*t5419;
  t6228 = t5919*t1161;
  t6240 = t6194 + t6206 + t6212 + t6228 + t6231;
  t6596 = t6122*t5419;
  t6601 = t1161*t6139;
  t6604 = t6194 + t6206 + t6596 + t6231 + t6601;
  t6558 = t6116*t154;
  t6561 = Power(t154,2);
  t6574 = 0.06*t6561;
  t6575 = -0.9063*t572;
  t6580 = -1.*t5129*t572;
  t6581 = Power(t572,2);
  t6586 = -0.06*t6581;
  t6594 = t6558 + t6574 + t6575 + t6580 + t6586;
  t6912 = var2[0]*t6261;
  t6920 = var2[1]*t4289;
  t6866 = var2[0]*t2022;
  t6867 = var2[1]*t2393;
  t7053 = t6866 + t6867;
  t6986 = -1.*t87*t5436;
  t6993 = -1.*t1739*t5650;
  t7018 = t6986 + t6993;
  t7083 = -1.*t1739*t5436;
  t7069 = t1739*t5561;
  t7078 = t6986 + t7069;
  t7023 = t1739*t5436;
  t7079 = var2[0]*t7078;
  t7085 = -1.*t87*t5561;
  t7089 = t7083 + t7085;
  t7090 = var2[1]*t7089;
  t7095 = t7079 + t7090;
  t5774 = t5732 + t2501;
  t5786 = -0.4999*t970;
  t5789 = -1.*t970*t5161;
  t5791 = t102*t5299;
  t5823 = t5786 + t5789 + t5791;
  t6884 = var2[0]*t4562;
  t6887 = var2[1]*t2917;
  t7262 = -1.*t5386*t3760;
  t7263 = -1.*t5491*t3760;
  t7264 = -1.*t5540*t6004;
  t7265 = -1.*t5585*t4098;
  t6955 = 0.4999*t1161;
  t6935 = t1739*t1515;
  t6936 = t87*t2007;
  t6938 = t6935 + t6936;
  t6391 = t102*t6304;
  t6396 = t6391 + t5981;
  t6379 = t970*t6304;
  t6380 = t6379 + t5923;
  t7253 = -1.*t5986*t2518;
  t7254 = -1.*t5986*t1515;
  t7257 = -1.*t5925*t2007;
  t7261 = -1.*t5958*t2007;
  t7266 = t7253 + t7254 + t7257 + t7261 + t7262 + t7263 + t7264 + t7265;
  t7267 = var2[2]*t7266;
  t7270 = t6884 + t6887 + t7267;
  t7377 = -1.*t5161*t5419;
  t7391 = -1.*t5299*t3634;
  t7406 = -1.*t5491*t6344;
  t7407 = -1.*t5540*t6346;
  t6966 = 0.9063*t154;
  t6967 = t154*t5129;
  t7333 = -1.*t5299*t878;
  t7336 = -1.*t5161*t3634;
  t7340 = var3[1]*t2022;
  t7345 = var3[0]*t6938;
  t7366 = -1.*t5540*t3760;
  t7367 = -1.*t5491*t4098;
  t7370 = var2[2]*t7053;
  t7285 = -1.*t2518*t6141;
  t7299 = -1.*t1515*t6141;
  t7302 = -1.*t2007*t6153;
  t7305 = -1.*t2007*t6169;
  t7307 = t7285 + t7299 + t7302 + t7305 + t7262 + t7263 + t7264 + t7265;
  t7317 = var2[2]*t7307;
  t7318 = t6884 + t6887 + t7317;
  t6734 = t102*t6682;
  t6736 = t970*t6703;
  t6745 = t6734 + t6736;
  t6753 = t970*t6682;
  t6754 = -1.*t102*t6703;
  t6756 = t6753 + t6754;
  t7441 = -1.*t5901*t878;
  t7442 = -1.*t878*t6122;
  t7443 = -1.*t878*t6453;
  t7446 = -1.*t1161*t6139;
  t7450 = -1.*t5919*t3634;
  t7455 = -1.*t6139*t3634;
  t7457 = t6194 + t7441 + t7442 + t7443 + t7377 + t7446 + t7450 + t7391 + t7455;
  t7460 = var2[6]*t7457;
  t7462 = -1.*t1515*t6490;
  t7475 = -1.*t2007*t6502;
  t7476 = -1.*t5986*t3760;
  t7477 = -1.*t6141*t3760;
  t7478 = -1.*t5958*t4098;
  t7481 = -1.*t6169*t4098;
  t7482 = t7462 + t7475 + t7476 + t7477 + t7406 + t7407 + t7478 + t7481;
  t7488 = var2[2]*t7482;
  t7495 = t7460 + t6912 + t6920 + t7488;
  t7161 = t87*t5561;
  t7163 = t7023 + t7161;
  t7028 = -1.*t87*t5650;
  t7032 = t7023 + t7028;
  t7128 = -1.*t5540*t2518;
  t7139 = -1.*t5585*t1515;
  t7145 = -1.*t5386*t2007;
  t7148 = -1.*t5491*t2007;
  t7150 = t7128 + t7139 + t7145 + t7148;
  t7348 = -1.*t5958*t1515;
  t7361 = -1.*t5986*t2007;
  t7368 = t7348 + t7361 + t7366 + t7367;
  t7539 = -1.*t2007*t6141;
  t7546 = -1.*t1515*t6169;
  t7552 = t7539 + t7546 + t7366 + t7367;
  t7328 = -1.*t5919*t878;
  t7335 = -1.*t5901*t1161;
  t7337 = t7328 + t7333 + t6955 + t7335 + t7336;
  t7533 = -1.*t6122*t1161;
  t7534 = -1.*t878*t6139;
  t7536 = t7333 + t6955 + t7533 + t7534 + t7336;
  t7505 = t6116*t572;
  t7507 = 0.12*t154*t572;
  t7515 = t6966 + t6967 + t7505 + t7507;
  t7647 = var2[1]*t2022;
  t7648 = var2[0]*t6938;
  p_output1[0]=(t2393*var2[0] + (t2683 + t1515*t87)*var2[1])*var2[2] + t3164*var2[6] + t4354*var2[7] + t4354*var2[8] + t2022*var3[0] + t2393*var3[1];
  p_output1[1]=t3164*var2[2] + ((t2871 + t5689*t87)*var2[0] + (t2622 + t1739*t5689)*var2[1] + (2.*t5386*t5561 + t5491*t5561 + 2.*t5436*t5585 + t5386*t5650 + t5540*t5774 + t5436*t5823)*var2[2])*var2[6] + t6090*var2[7] + t6183*var2[8] + t4562*var3[0] + t2917*var3[1] + t5677*var3[2];
  p_output1[2]=t6263 + t6273 + t6276 + t6090*var2[6] + (t6361 + t6370 + (2.*t1515*t5958 + 2.*t2007*t5986 + t5436*t6380 + t5650*t6396 + t6412 + t6415)*var2[2] + (2.*t1161*t5901 + t5419*t5919 + t6283 + t1161*t6304 + t6331 + t6334 + 2.*t5919*t878)*var2[6])*var2[7] + t6542*var2[8] + t6255*var3[2] + t6240*var3[6];
  p_output1[3]=t6263 + t6273 + t6276 + t6183*var2[6] + t6542*var2[7] + (t6361 + t6370 + (2.*t2007*t6141 + 2.*t1515*t6169 + t6412 + t6415 + t5650*t6745 + t5436*t6756)*var2[2] + (2.*t1161*t6122 + t6283 + t6331 + t6334 + t1161*t6682 + t5419*t6703 + 2.*t6139*t878)*var2[6] + (-0.9063*t154 - 1.*t154*t5129 - 0.18*t154*t572 - 2.*t572*t6116)*var2[7])*var2[8] + t6620*var3[2] + t6604*var3[6] + t6594*var3[7];
  p_output1[4]=t2022*var2[2] + t4562*var2[6] + t6261*var2[7] + t6261*var2[8];
  p_output1[5]=t2393*var2[2] + t2917*var2[6] + t4289*var2[7] + t4289*var2[8];
  p_output1[6]=t6866 + t6867 + t5677*var2[6] + t6255*var2[7] + t6620*var2[8];
  p_output1[7]=t6884 + t6887 + t5677*var2[2] + t6240*var2[7] + t6604*var2[8];
  p_output1[8]=t6912 + t6920 + t6255*var2[2] + t6240*var2[6] + t6594*var2[8];
  p_output1[9]=t6912 + t6920 + t6620*var2[2] + t6604*var2[6] + t6594*var2[7];
  p_output1[10]=t6938;
  p_output1[11]=t2022;
  p_output1[12]=t5436*t5540 + t5491*t5650;
  p_output1[13]=t1161*t5161 + t5299*t5419 + t6955;
  p_output1[14]=0.06*t154*t572 + t6966 + t6967;
  p_output1[15]=(t7018*var2[0] + (t7083 + t5650*t87)*var2[1])*var2[2] + t7095*var2[6] + t7053*var2[7] + t7053*var2[8] + t7032*var3[0] + t7018*var3[1];
  p_output1[16]=t7095*var2[2] + ((t7069 + t5774*t87)*var2[0] + (t1739*t5774 + t7085)*var2[1] + (-1.*t1515*t5386 - 2.*t2518*t5386 - 1.*t2518*t5491 - 2.*t2007*t5585 - 1.*t5540*t5689 - 1.*t2007*t5823)*var2[2])*var2[6] + t7270*var2[7] + t7318*var2[8] + t7163*var3[0] + t7078*var3[1] + t7150*var3[2];
  p_output1[17]=t7340 + t7345 + t7370 + t7270*var2[6] + (t6912 + t6920 + (-2.*t4098*t5958 - 2.*t3760*t5986 - 1.*t2007*t6380 - 1.*t1515*t6396 + t7406 + t7407)*var2[2] + (-1.*t1161*t5919 - 2.*t3634*t5919 + t6194 + t7377 + t7391 - 2.*t5901*t878 - 1.*t6304*t878)*var2[6])*var2[7] + t7495*var2[8] + t7368*var3[2] + t7337*var3[6];
  p_output1[18]=t7340 + t7345 + t7370 + t7318*var2[6] + t7495*var2[7] + (t6912 + t6920 + (-2.*t3760*t6141 - 2.*t4098*t6169 - 1.*t1515*t6745 - 1.*t2007*t6756 + t7406 + t7407)*var2[2] + (-2.*t3634*t6139 + t6194 - 1.*t1161*t6703 + t7377 + t7391 - 2.*t6122*t878 - 1.*t6682*t878)*var2[6] + (2.*t154*t6116 + 0.12*t6561 + t6575 + t6580 + t6586)*var2[7])*var2[8] + t7552*var3[2] + t7536*var3[6] + t7515*var3[7];
  p_output1[19]=t7032*var2[2] + t7163*var2[6] + t6938*var2[7] + t6938*var2[8];
  p_output1[20]=t7018*var2[2] + t7078*var2[6] + t2022*var2[7] + t2022*var2[8];
  p_output1[21]=t7032*var2[0] + t7018*var2[1] + t7150*var2[6] + t7368*var2[7] + t7552*var2[8];
  p_output1[22]=t7163*var2[0] + t7078*var2[1] + t7150*var2[2] + t7337*var2[7] + t7536*var2[8];
  p_output1[23]=t7647 + t7648 + t7368*var2[2] + t7337*var2[6] + t7515*var2[8];
  p_output1[24]=t7647 + t7648 + t7552*var2[2] + t7536*var2[6] + t7515*var2[7];
  p_output1[25]=t1739*t5650 + t5436*t87;
  p_output1[26]=t7032;
  p_output1[27]=-1.*t1515*t5491 - 1.*t2007*t5540;
  p_output1[28]=-1.*t1161*t5299 + 0.4999*t5419 - 1.*t5161*t878;
  p_output1[29]=0.9063*t572 + t5129*t572 - 0.06*t6561;
  p_output1[30]=-0.06;
  p_output1[31]=1.;
  p_output1[32]=1.;
  p_output1[33]=1.;
  p_output1[34]=1.;
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 35, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightSole_RightSS1.hh"

namespace RightSS1
{

void J_ddh_RightSole_RightSS1_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
