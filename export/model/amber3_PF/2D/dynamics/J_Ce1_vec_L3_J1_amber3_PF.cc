/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:31:02 GMT-08:00
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
  double t1435;
  double t656;
  double t723;
  double t1440;
  double t397;
  double t1371;
  double t1448;
  double t1569;
  double t1816;
  double t1885;
  double t2012;
  double t2098;
  double t2328;
  double t2525;
  double t2545;
  double t2695;
  double t3097;
  double t2300;
  double t2419;
  double t2775;
  double t2782;
  double t2950;
  double t3340;
  double t3564;
  double t3568;
  double t3612;
  double t1679;
  double t3812;
  double t3849;
  double t3874;
  double t3757;
  double t3783;
  double t4044;
  double t4047;
  double t4049;
  double t4109;
  double t4193;
  double t4213;
  double t4224;
  double t4783;
  double t4792;
  double t4806;
  double t4949;
  double t4957;
  double t5018;
  double t5027;
  double t5028;
  double t5039;
  double t4724;
  double t5076;
  double t5120;
  double t5132;
  double t5167;
  double t5304;
  double t5327;
  double t5330;
  double t5198;
  double t5216;
  double t5249;
  double t5606;
  double t2137;
  double t2189;
  double t3474;
  double t3547;
  double t5853;
  double t6009;
  double t6015;
  double t6023;
  double t6027;
  double t6033;
  double t6057;
  double t6064;
  double t6099;
  double t6130;
  double t6344;
  double t6382;
  double t6384;
  double t6450;
  double t6485;
  double t6510;
  double t6511;
  double t6311;
  double t6550;
  double t6568;
  double t6656;
  double t6717;
  double t2823;
  double t3357;
  double t6915;
  double t6920;
  double t6986;
  double t7019;
  double t7128;
  double t6720;
  double t6728;
  double t6736;
  double t6842;
  double t6896;
  double t7173;
  double t7334;
  double t7340;
  double t7345;
  double t7346;
  double t7358;
  double t7296;
  double t7370;
  double t7373;
  double t7375;
  double t7438;
  double t7513;
  double t7624;
  double t7652;
  double t7690;
  double t7694;
  double t7391;
  double t7704;
  double t7738;
  double t7888;
  double t7890;
  double t7916;
  double t8082;
  double t8083;
  double t8086;
  double t8089;
  double t8105;
  double t8107;
  double t8067;
  double t8079;
  double t8103;
  double t8129;
  double t8130;
  double t8150;
  double t8152;
  double t8154;
  double t8155;
  double t8140;
  double t8102;
  double t8116;
  double t8117;
  double t8120;
  double t8137;
  double t8139;
  double t8145;
  double t8146;
  double t8148;
  double t8184;
  double t8185;
  double t8187;
  double t8188;
  double t8179;
  double t8180;
  double t8153;
  double t8156;
  double t8157;
  double t8193;
  double t8198;
  double t8160;
  double t8161;
  double t8163;
  double t8206;
  double t8230;
  double t8232;
  double t8214;
  double t8158;
  double t8164;
  double t8166;
  double t8227;
  double t8228;
  double t8229;
  double t8233;
  double t8236;
  double t8237;
  double t8239;
  double t8240;
  double t8241;
  double t8244;
  double t8245;
  double t8246;
  double t8247;
  double t8249;
  double t8253;
  double t8256;
  double t8257;
  double t8258;
  double t8259;
  double t8260;
  double t8261;
  double t8294;
  double t8296;
  double t8290;
  double t8291;
  double t8292;
  double t8295;
  double t8297;
  double t8298;
  double t8300;
  double t8301;
  double t8302;
  double t8315;
  double t8316;
  double t8317;
  double t8318;
  double t8309;
  double t8310;
  double t8311;
  double t8312;
  double t8313;
  double t8325;
  double t8326;
  double t8327;
  double t8329;
  double t8330;
  double t8331;
  double t8345;
  double t8333;
  double t8334;
  double t8335;
  double t8336;
  double t8346;
  double t8337;
  double t8356;
  double t8350;
  double t8349;
  double t8360;
  double t8380;
  double t8381;
  double t8374;
  double t8377;
  double t8378;
  double t8382;
  double t8384;
  double t8385;
  double t8386;
  double t8400;
  double t8401;
  double t8402;
  double t8403;
  double t8404;
  double t8410;
  t1435 = Cos(var1[3]);
  t656 = Cos(var1[4]);
  t723 = Sin(var1[3]);
  t1440 = Sin(var1[4]);
  t397 = Sin(var1[2]);
  t1371 = -1.*t656*t723;
  t1448 = -1.*t1435*t1440;
  t1569 = t1371 + t1448;
  t1816 = Cos(var1[2]);
  t1885 = t1435*t656;
  t2012 = -1.*t723*t1440;
  t2098 = t1885 + t2012;
  t2328 = t1816*t2098;
  t2525 = t656*t723;
  t2545 = t1435*t1440;
  t2695 = t2525 + t2545;
  t3097 = -1.*t397*t2098;
  t2300 = t397*t1569;
  t2419 = t2300 + t2328;
  t2775 = -1.*t397*t2695;
  t2782 = t2775 + t2328;
  t2950 = t1816*t1569;
  t3340 = t2950 + t3097;
  t3564 = t1816*t2695;
  t3568 = t397*t2098;
  t3612 = t3564 + t3568;
  t1679 = -1.*t397*t1569;
  t3812 = -1.*t1435*t656;
  t3849 = t723*t1440;
  t3874 = t3812 + t3849;
  t3757 = 1.70432*t2419*t2782;
  t3783 = 1.70432*t3340*t3612;
  t4044 = t1816*t3874;
  t4047 = t1679 + t4044;
  t4049 = 1.70432*t2419*t4047;
  t4109 = t397*t3874;
  t4193 = t2950 + t4109;
  t4213 = 1.70432*t3340*t4193;
  t4224 = t3757 + t3783 + t4049 + t4213;
  t4783 = Power(t2419,2);
  t4792 = 1.70432*t4783;
  t4806 = t397*t2695;
  t4949 = t4806 + t4044;
  t4957 = 1.70432*t2419*t4949;
  t5018 = 1.70432*t3612*t4193;
  t5027 = Power(t4193,2);
  t5028 = 1.70432*t5027;
  t5039 = t4792 + t4957 + t5018 + t5028;
  t4724 = -0.5*var2[2]*t4224;
  t5076 = -0.5*var2[3]*t5039;
  t5120 = -0.5*var2[4]*t5039;
  t5132 = t4724 + t5076 + t5120;
  t5167 = var2[0]*t5132;
  t5304 = 1.70432*t2419*t3612;
  t5327 = 1.70432*t2419*t4193;
  t5330 = t5304 + t5327;
  t5198 = 1.70432*t2419*t3340;
  t5216 = 1.70432*t2782*t3612;
  t5249 = t5198 + t5216;
  t5606 = -0.5*var2[0]*t5330;
  t2137 = -1.*t1816*t2098;
  t2189 = t1679 + t2137;
  t3474 = -1.*t1816*t2695;
  t3547 = t3474 + t3097;
  t5853 = -1.*t1816*t1569;
  t6009 = 1.70432*t2782*t3340;
  t6015 = 0.85216*t2419*t3547;
  t6023 = 0.85216*t2189*t3612;
  t6027 = 1.70432*t3340*t4047;
  t6033 = -1.*t397*t3874;
  t6057 = t5853 + t6033;
  t6064 = 0.85216*t2419*t6057;
  t6099 = 0.85216*t2189*t4193;
  t6130 = t6009 + t6015 + t6023 + t6027 + t6064 + t6099;
  t6344 = 0.85216*t3612*t4047;
  t6382 = 0.85216*t3340*t4949;
  t6384 = t3564 + t6033;
  t6450 = 0.85216*t2419*t6384;
  t6485 = 0.85216*t2782*t4193;
  t6510 = 1.70432*t4047*t4193;
  t6511 = t5198 + t6344 + t6382 + t6450 + t6485 + t6510;
  t6311 = -0.5*var2[2]*t6130;
  t6550 = -0.5*var2[3]*t6511;
  t6568 = -0.5*var2[4]*t6511;
  t6656 = t6311 + t6550 + t6568;
  t6717 = var2[0]*t6656;
  t2823 = Power(t2782,2);
  t3357 = Power(t3340,2);
  t6915 = 0.85216*t2419*t2782;
  t6920 = 0.85216*t3340*t3612;
  t6986 = 0.85216*t2419*t4047;
  t7019 = 0.85216*t3340*t4193;
  t7128 = t6915 + t6920 + t6986 + t7019;
  t6720 = 0.85216*t2189*t2419;
  t6728 = 0.85216*t2823;
  t6736 = 0.85216*t3357;
  t6842 = 0.85216*t3547*t3612;
  t6896 = t6720 + t6728 + t6736 + t6842;
  t7173 = -0.5*var2[0]*t7128;
  t7334 = -1.*t656;
  t7340 = 1. + t7334;
  t7345 = -0.9063*t7340;
  t7346 = -1.078185*t656;
  t7358 = t7345 + t7346;
  t7296 = 0.4999*t723;
  t7370 = t7358*t723;
  t7373 = -0.17188499999999995*t1435*t1440;
  t7375 = t7296 + t7370 + t7373;
  t7438 = -1.*t1435;
  t7513 = 1. + t7438;
  t7624 = -0.4999*t7513;
  t7652 = t1435*t7358;
  t7690 = 0.17188499999999995*t723*t1440;
  t7694 = t7624 + t7652 + t7690;
  t7391 = -1.*t7375*t2098;
  t7704 = -1.*t1569*t7694;
  t7738 = t7391 + t7704;
  t7888 = t7375*t2695;
  t7890 = t2098*t7694;
  t7916 = t7888 + t7890;
  t8082 = -0.4999*t723;
  t8083 = -1.*t7358*t723;
  t8086 = 0.17188499999999995*t1435*t1440;
  t8089 = t8082 + t8083 + t8086;
  t8105 = 0.4999*t1435;
  t8107 = t8105 + t7652 + t7690;
  t8067 = 0.85216*t3340*t7738;
  t8079 = t7375*t2098;
  t8103 = t1569*t7694;
  t8129 = 0.85216*t7916*t4047;
  t8130 = -1.*t1569*t7375;
  t8150 = 0.17188499999999995*t656*t723;
  t8152 = t8150 + t8086;
  t8154 = -0.17188499999999995*t1435*t656;
  t8155 = t8154 + t7690;
  t8140 = -1.*t7694*t3874;
  t8102 = t8089*t2098;
  t8116 = t2695*t8107;
  t8117 = t8079 + t8102 + t8103 + t8116;
  t8120 = 0.85216*t3340*t8117;
  t8137 = -1.*t1569*t8089;
  t8139 = -1.*t2098*t8107;
  t8145 = t8130 + t8137 + t8139 + t8140;
  t8146 = 0.85216*t2782*t8145;
  t8148 = t8067 + t8120 + t8129 + t8146;
  t8184 = -0.4999*t1435;
  t8185 = -1.*t1435*t7358;
  t8187 = -0.17188499999999995*t723*t1440;
  t8188 = t8184 + t8185 + t8187;
  t8179 = 0.85216*t7916*t4949;
  t8180 = 0.85216*t7738*t4193;
  t8153 = t8152*t2098;
  t8156 = t2695*t8155;
  t8157 = t8079 + t8153 + t8103 + t8156;
  t8193 = -1.*t2695*t7694;
  t8198 = -1.*t7375*t3874;
  t8160 = -1.*t1569*t8152;
  t8161 = -1.*t2098*t8155;
  t8163 = t8130 + t8160 + t8161 + t8140;
  t8206 = t1569*t7375;
  t8230 = 0.17188499999999995*t1435*t656;
  t8232 = t8230 + t8187;
  t8214 = t7694*t3874;
  t8158 = 0.85216*t3340*t8157;
  t8164 = 0.85216*t2782*t8163;
  t8166 = t8067 + t8158 + t8129 + t8164;
  t8227 = 0.85216*t8117*t4193;
  t8228 = 0.85216*t8157*t4193;
  t8229 = -1.*t8152*t2098;
  t8233 = -1.*t1569*t8232;
  t8236 = -1.*t1569*t8107;
  t8237 = -1.*t1569*t8155;
  t8239 = -1.*t8089*t3874;
  t8240 = -1.*t8152*t3874;
  t8241 = t8229 + t8233 + t8193 + t8236 + t8237 + t8198 + t8239 + t8240;
  t8244 = 0.85216*t3612*t8241;
  t8245 = 0.85216*t2419*t8145;
  t8246 = 0.85216*t2419*t8163;
  t8247 = t1569*t8089;
  t8249 = t1569*t8152;
  t8253 = t8152*t2695;
  t8256 = t2098*t8232;
  t8257 = t2098*t8107;
  t8258 = t2098*t8155;
  t8259 = t8206 + t8247 + t8249 + t8253 + t8256 + t8257 + t8258 + t8214;
  t8260 = 0.85216*t2419*t8259;
  t8261 = t8179 + t8180 + t8227 + t8228 + t8244 + t8245 + t8246 + t8260;
  t8294 = 0.85216*t2419*t7738;
  t8296 = 0.85216*t7916*t4193;
  t8290 = 0.85216*t2782*t7738;
  t8291 = 0.85216*t3340*t7916;
  t8292 = t8290 + t8291;
  t8295 = 0.85216*t2419*t8117;
  t8297 = 0.85216*t3612*t8145;
  t8298 = t8294 + t8295 + t8296 + t8297;
  t8300 = 0.85216*t2419*t8157;
  t8301 = 0.85216*t3612*t8163;
  t8302 = t8294 + t8300 + t8296 + t8301;
  t8315 = 0.4999*t1440;
  t8316 = t7358*t1440;
  t8317 = 0.17188499999999995*t656*t1440;
  t8318 = t8315 + t8316 + t8317;
  t8309 = 0.4999*t656;
  t8310 = t7358*t656;
  t8311 = Power(t1440,2);
  t8312 = -0.17188499999999995*t8311;
  t8313 = t8309 + t8310 + t8312;
  t8325 = 0.85216*t8318*t3340;
  t8326 = 0.85216*t8313*t4047;
  t8327 = t8325 + t8326;
  t8329 = Power(t656,2);
  t8330 = 0.17188499999999995*t8329;
  t8331 = t8309 + t8310 + t8330;
  t8345 = 0.85216*t8313*t4949;
  t8333 = -0.4999*t1440;
  t8334 = -1.*t7358*t1440;
  t8335 = -0.17188499999999995*t656*t1440;
  t8336 = t8333 + t8334 + t8335;
  t8346 = 0.85216*t8318*t4193;
  t8337 = 0.85216*t8336*t3340;
  t8356 = 0. + t8309 + t8310 + t8330;
  t8350 = 0.85216*t8336*t4193;
  t8349 = 0.85216*t8331*t2419;
  t8360 = 0.85216*t8356*t2419;
  t8380 = 0.85216*t8318*t2419;
  t8381 = 0.85216*t8313*t4193;
  t8374 = 0.85216*t8318*t2782;
  t8377 = 0.85216*t8313*t3340;
  t8378 = t8374 + t8377;
  t8382 = t8380 + t8381;
  t8384 = 0.85216*t8336*t2419;
  t8385 = 0.85216*t8331*t3612;
  t8386 = t8384 + t8380 + t8385 + t8381;
  t8400 = 0.07323676079999998*var2[2]*t4047;
  t8401 = 0.07323676079999998*var2[3]*t4949;
  t8402 = 0.07323676079999998*var2[4]*t4949;
  t8403 = t8400 + t8401 + t8402;
  t8404 = var2[0]*t8403;
  t8410 = 0.07323676079999998*var2[0]*t4193;
  p_output1[0]=var2[0]*(-0.5*(1.70432*t2189*t2419 + 1.70432*t2823 + 1.70432*t3357 + 1.70432*t3547*t3612)*var2[2] - 0.5*t4224*var2[3] - 0.5*t4224*var2[4]);
  p_output1[1]=t5167;
  p_output1[2]=t5167;
  p_output1[3]=-0.5*t5249*var2[2] - 0.5*t5330*var2[3] - 0.5*t5330*var2[4];
  p_output1[4]=-0.5*t5249*var2[0];
  p_output1[5]=t5606;
  p_output1[6]=t5606;
  p_output1[7]=var2[0]*(-0.5*(2.55648*t2189*t3340 + 2.55648*t2782*t3547 + 0.85216*t3612*(t2137 + t4806) + 0.85216*t2419*(t3568 + t5853))*var2[2] - 0.5*t6130*var2[3] - 0.5*t6130*var2[4]);
  p_output1[8]=t6717;
  p_output1[9]=t6717;
  p_output1[10]=-0.5*t6896*var2[2] - 0.5*t7128*var2[3] - 0.5*t7128*var2[4];
  p_output1[11]=-0.5*t6896*var2[0];
  p_output1[12]=t7173;
  p_output1[13]=t7173;
  p_output1[14]=var2[0]*(-0.5*(0.85216*t3547*t7738 + 0.85216*t2189*t7916)*var2[2] - 0.5*t8148*var2[3] - 0.5*t8166*var2[4]);
  p_output1[15]=var2[0]*(-0.5*t8148*var2[2] - 0.5*(1.70432*t4193*t8117 + 1.70432*t2419*t8145 + t8179 + t8180 + 0.85216*t3612*(-1.*t2098*t8089 - 2.*t3874*t8089 - 2.*t1569*t8107 - 1.*t1569*t8188 + t8193 + t8198) + 0.85216*t2419*(2.*t1569*t8089 + t2695*t8089 + 2.*t2098*t8107 + t2098*t8188 + t8206 + t8214))*var2[3] - 0.5*t8261*var2[4]);
  p_output1[16]=var2[0]*(-0.5*t8166*var2[2] - 0.5*t8261*var2[3] - 0.5*(1.70432*t4193*t8157 + 1.70432*t2419*t8163 + t8179 + t8180 + 0.85216*t3612*(-2.*t3874*t8152 - 2.*t1569*t8155 + t8193 + t8198 + t8229 + t8233) + 0.85216*t2419*(2.*t1569*t8152 + 2.*t2098*t8155 + t8206 + t8214 + t8253 + t8256))*var2[4]);
  p_output1[17]=-0.5*t8292*var2[2] - 0.5*t8298*var2[3] - 0.5*t8302*var2[4];
  p_output1[18]=-0.5*t8292*var2[0];
  p_output1[19]=-0.5*t8298*var2[0];
  p_output1[20]=-0.5*t8302*var2[0];
  p_output1[21]=var2[0]*(-0.5*(0.85216*t2189*t8313 + 0.85216*t3547*t8318)*var2[2] - 0.5*t8327*var2[3] - 0.5*(t8325 + t8326 + 0.85216*t2782*t8331 + t8337)*var2[4]);
  p_output1[22]=var2[0]*(-0.5*t8327*var2[2] - 0.5*(t8345 + t8346)*var2[3] - 0.5*(t8345 + t8346 + t8349 + t8350)*var2[4]);
  p_output1[23]=var2[0]*(-0.5*(t8325 + t8326 + t8337 + 0.85216*t2782*t8356)*var2[2] - 0.5*(t8345 + t8346 + t8350 + t8360)*var2[3] - 0.5*(0.85216*t2419*(0. - 0.4999*t656 - 1.*t656*t7358 - 0.17188499999999995*t8329) + 0.85216*t3612*t8336 + 1.70432*t4193*t8336 + t8345 + t8346 + t8349 + t8360)*var2[4]);
  p_output1[24]=-0.5*t8378*var2[2] - 0.5*t8382*var2[3] - 0.5*t8386*var2[4];
  p_output1[25]=-0.5*t8378*var2[0];
  p_output1[26]=-0.5*t8382*var2[0];
  p_output1[27]=-0.5*t8386*var2[0];
  p_output1[28]=var2[0]*(0.07323676079999998*t2189*var2[2] + 0.07323676079999998*t4047*var2[3] + 0.07323676079999998*t4047*var2[4]);
  p_output1[29]=t8404;
  p_output1[30]=t8404;
  p_output1[31]=0.07323676079999998*t3340*var2[2] + 0.07323676079999998*t4193*var2[3] + 0.07323676079999998*t4193*var2[4];
  p_output1[32]=0.07323676079999998*t3340*var2[0];
  p_output1[33]=t8410;
  p_output1[34]=t8410;
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

#include "J_Ce1_vec_L3_J1_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L3_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
