/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:24 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5)
{
  double t501;
  double t658;
  double t752;
  double t753;
  double t762;
  double t851;
  double t877;
  double t884;
  double t1173;
  double t1225;
  double t1279;
  double t1366;
  double t1472;
  double t1785;
  double t1832;
  double t2065;
  double t2066;
  double t2265;
  double t2275;
  double t2284;
  double t2341;
  double t2357;
  double t2358;
  double t2370;
  double t2410;
  double t2412;
  double t2420;
  double t2446;
  double t2485;
  double t2511;
  double t2713;
  double t2822;
  double t2831;
  double t2864;
  double t2892;
  double t2923;
  double t2963;
  double t2979;
  double t2995;
  double t3012;
  double t3064;
  double t3067;
  double t3171;
  double t2712;
  double t3200;
  double t3229;
  double t3236;
  double t3267;
  double t3390;
  double t3277;
  double t3293;
  double t3311;
  double t3347;
  double t3359;
  double t3370;
  double t3373;
  double t3386;
  double t3402;
  double t3433;
  double t4358;
  double t4416;
  double t4517;
  double t4571;
  double t4637;
  double t4747;
  double t4752;
  double t4758;
  double t4774;
  double t4805;
  double t4818;
  double t4819;
  double t4856;
  double t5044;
  double t5049;
  double t5077;
  double t5115;
  double t5130;
  double t5155;
  double t5219;
  double t5221;
  double t5226;
  double t5231;
  double t5249;
  double t5251;
  double t5256;
  double t5034;
  double t5280;
  double t5329;
  double t5344;
  double t5448;
  double t5458;
  double t5484;
  double t5527;
  double t5544;
  double t5546;
  double t5555;
  double t5560;
  double t5565;
  double t5571;
  double t5573;
  double t5942;
  double t5962;
  double t5970;
  double t5977;
  double t5989;
  double t6006;
  double t6012;
  double t6018;
  double t6020;
  double t6031;
  double t6058;
  double t6059;
  double t6076;
  double t6119;
  double t6151;
  double t6158;
  double t6160;
  double t6162;
  double t6163;
  double t6167;
  double t6171;
  double t6173;
  double t6202;
  double t6217;
  double t6237;
  double t6244;
  double t6108;
  double t6265;
  double t6267;
  double t6268;
  double t6318;
  double t6348;
  double t6376;
  double t6402;
  double t6414;
  double t6417;
  double t6451;
  double t6455;
  double t6481;
  double t6482;
  double t6487;
  double t6908;
  double t6918;
  double t6932;
  double t6933;
  double t6934;
  double t6948;
  double t6960;
  double t6961;
  double t6963;
  double t6967;
  double t6968;
  double t6970;
  double t6973;
  double t7043;
  double t7044;
  double t7045;
  double t7048;
  double t7055;
  double t7057;
  double t7067;
  double t7084;
  double t7094;
  double t7098;
  double t7117;
  double t7122;
  double t7123;
  double t7011;
  double t7126;
  double t7141;
  double t7144;
  double t7168;
  double t7169;
  double t7170;
  double t7183;
  double t7190;
  double t7191;
  double t7192;
  double t7213;
  double t7215;
  double t7226;
  double t7230;
  double t7512;
  double t7518;
  double t7544;
  double t7548;
  double t7552;
  double t7557;
  double t7570;
  double t7571;
  double t7577;
  double t7578;
  double t7581;
  double t7582;
  double t7583;
  double t7598;
  double t7600;
  double t7602;
  double t7610;
  double t7613;
  double t7614;
  double t7617;
  double t7622;
  double t7627;
  double t7640;
  double t7641;
  double t7645;
  double t7646;
  double t7597;
  double t7651;
  double t7657;
  double t7665;
  double t7670;
  double t7679;
  double t7680;
  double t7683;
  double t7689;
  double t7692;
  double t7693;
  double t7698;
  double t7700;
  double t7703;
  double t7705;
  t501 = -1.*var5[1];
  t658 = var5[0] + t501;
  t752 = Power(t658,-2);
  t753 = 1/t658;
  t762 = 0.8128*var1[2];
  t851 = 0.8128*var1[6];
  t877 = 0.4064*var1[7];
  t884 = 0. + t501 + t762 + t851 + t877;
  t1173 = -1.*t753*t884;
  t1225 = 1. + t1173;
  t1279 = Power(t1225,3);
  t1366 = Power(t658,-3);
  t1472 = Power(t1225,2);
  t1785 = Power(t658,-4);
  t1832 = Power(t884,2);
  t2065 = Power(t658,-5);
  t2066 = Power(t884,3);
  t2265 = 6.6064384*var4[0]*t752*t1279;
  t2275 = -13.2128768*var4[5]*t752*t1279;
  t2284 = 6.6064384*var4[10]*t752*t1279;
  t2341 = 19.8193152*var4[5]*t1366*t1472*t884;
  t2357 = -39.6386304*var4[10]*t1366*t1472*t884;
  t2358 = 19.8193152*var4[15]*t1366*t1472*t884;
  t2370 = 19.8193152*var4[10]*t1785*t1225*t1832;
  t2410 = -39.6386304*var4[15]*t1785*t1225*t1832;
  t2412 = 19.8193152*var4[20]*t1785*t1225*t1832;
  t2420 = 6.6064384*var4[15]*t2065*t2066;
  t2446 = -13.2128768*var4[20]*t2065*t2066;
  t2485 = 6.6064384*var4[25]*t2065*t2066;
  t2511 = t2265 + t2275 + t2284 + t2341 + t2357 + t2358 + t2370 + t2410 + t2412 + t2420 + t2446 + t2485;
  t2713 = 13.2128768*var4[0]*t752*t1279;
  t2822 = -26.4257536*var4[5]*t752*t1279;
  t2831 = 13.2128768*var4[10]*t752*t1279;
  t2864 = 39.6386304*var4[5]*t1366*t1472*t884;
  t2892 = -79.2772608*var4[10]*t1366*t1472*t884;
  t2923 = 39.6386304*var4[15]*t1366*t1472*t884;
  t2963 = 39.6386304*var4[10]*t1785*t1225*t1832;
  t2979 = -79.2772608*var4[15]*t1785*t1225*t1832;
  t2995 = 39.6386304*var4[20]*t1785*t1225*t1832;
  t3012 = 13.2128768*var4[15]*t2065*t2066;
  t3064 = -26.4257536*var4[20]*t2065*t2066;
  t3067 = 13.2128768*var4[25]*t2065*t2066;
  t3171 = t2713 + t2822 + t2831 + t2864 + t2892 + t2923 + t2963 + t2979 + t2995 + t3012 + t3064 + t3067;
  t2712 = -1.*var2[7]*t2511;
  t3200 = -1.*var2[2]*t3171;
  t3229 = -1.*var2[6]*t3171;
  t3236 = t2712 + t3200 + t3229;
  t3267 = Power(t1225,4);
  t3390 = Power(t884,4);
  t3277 = 4.064*var4[0]*t753*t3267;
  t3293 = -4.064*var4[5]*t753*t3267;
  t3311 = 16.256*var4[5]*t752*t1279*t884;
  t3347 = -16.256*var4[10]*t752*t1279*t884;
  t3359 = 24.383999999999997*var4[10]*t1366*t1472*t1832;
  t3370 = -24.383999999999997*var4[15]*t1366*t1472*t1832;
  t3373 = 16.256*var4[15]*t1785*t1225*t2066;
  t3386 = -16.256*var4[20]*t1785*t1225*t2066;
  t3402 = 4.064*var4[20]*t2065*t3390;
  t3433 = -4.064*var4[25]*t2065*t3390;
  t4358 = 6.6064384*var4[1]*t752*t1279;
  t4416 = -13.2128768*var4[6]*t752*t1279;
  t4517 = 6.6064384*var4[11]*t752*t1279;
  t4571 = 19.8193152*var4[6]*t1366*t1472*t884;
  t4637 = -39.6386304*var4[11]*t1366*t1472*t884;
  t4747 = 19.8193152*var4[16]*t1366*t1472*t884;
  t4752 = 19.8193152*var4[11]*t1785*t1225*t1832;
  t4758 = -39.6386304*var4[16]*t1785*t1225*t1832;
  t4774 = 19.8193152*var4[21]*t1785*t1225*t1832;
  t4805 = 6.6064384*var4[16]*t2065*t2066;
  t4818 = -13.2128768*var4[21]*t2065*t2066;
  t4819 = 6.6064384*var4[26]*t2065*t2066;
  t4856 = t4358 + t4416 + t4517 + t4571 + t4637 + t4747 + t4752 + t4758 + t4774 + t4805 + t4818 + t4819;
  t5044 = 13.2128768*var4[1]*t752*t1279;
  t5049 = -26.4257536*var4[6]*t752*t1279;
  t5077 = 13.2128768*var4[11]*t752*t1279;
  t5115 = 39.6386304*var4[6]*t1366*t1472*t884;
  t5130 = -79.2772608*var4[11]*t1366*t1472*t884;
  t5155 = 39.6386304*var4[16]*t1366*t1472*t884;
  t5219 = 39.6386304*var4[11]*t1785*t1225*t1832;
  t5221 = -79.2772608*var4[16]*t1785*t1225*t1832;
  t5226 = 39.6386304*var4[21]*t1785*t1225*t1832;
  t5231 = 13.2128768*var4[16]*t2065*t2066;
  t5249 = -26.4257536*var4[21]*t2065*t2066;
  t5251 = 13.2128768*var4[26]*t2065*t2066;
  t5256 = t5044 + t5049 + t5077 + t5115 + t5130 + t5155 + t5219 + t5221 + t5226 + t5231 + t5249 + t5251;
  t5034 = -1.*var2[7]*t4856;
  t5280 = -1.*var2[2]*t5256;
  t5329 = -1.*var2[6]*t5256;
  t5344 = t5034 + t5280 + t5329;
  t5448 = 4.064*var4[1]*t753*t3267;
  t5458 = -4.064*var4[6]*t753*t3267;
  t5484 = 16.256*var4[6]*t752*t1279*t884;
  t5527 = -16.256*var4[11]*t752*t1279*t884;
  t5544 = 24.383999999999997*var4[11]*t1366*t1472*t1832;
  t5546 = -24.383999999999997*var4[16]*t1366*t1472*t1832;
  t5555 = 16.256*var4[16]*t1785*t1225*t2066;
  t5560 = -16.256*var4[21]*t1785*t1225*t2066;
  t5565 = 4.064*var4[21]*t2065*t3390;
  t5571 = -4.064*var4[26]*t2065*t3390;
  t5573 = t5448 + t5458 + t5484 + t5527 + t5544 + t5546 + t5555 + t5560 + t5565 + t5571;
  t5942 = 6.6064384*var4[2]*t752*t1279;
  t5962 = -13.2128768*var4[7]*t752*t1279;
  t5970 = 6.6064384*var4[12]*t752*t1279;
  t5977 = 19.8193152*var4[7]*t1366*t1472*t884;
  t5989 = -39.6386304*var4[12]*t1366*t1472*t884;
  t6006 = 19.8193152*var4[17]*t1366*t1472*t884;
  t6012 = 19.8193152*var4[12]*t1785*t1225*t1832;
  t6018 = -39.6386304*var4[17]*t1785*t1225*t1832;
  t6020 = 19.8193152*var4[22]*t1785*t1225*t1832;
  t6031 = 6.6064384*var4[17]*t2065*t2066;
  t6058 = -13.2128768*var4[22]*t2065*t2066;
  t6059 = 6.6064384*var4[27]*t2065*t2066;
  t6076 = t5942 + t5962 + t5970 + t5977 + t5989 + t6006 + t6012 + t6018 + t6020 + t6031 + t6058 + t6059;
  t6119 = 13.2128768*var4[2]*t752*t1279;
  t6151 = -26.4257536*var4[7]*t752*t1279;
  t6158 = 13.2128768*var4[12]*t752*t1279;
  t6160 = 39.6386304*var4[7]*t1366*t1472*t884;
  t6162 = -79.2772608*var4[12]*t1366*t1472*t884;
  t6163 = 39.6386304*var4[17]*t1366*t1472*t884;
  t6167 = 39.6386304*var4[12]*t1785*t1225*t1832;
  t6171 = -79.2772608*var4[17]*t1785*t1225*t1832;
  t6173 = 39.6386304*var4[22]*t1785*t1225*t1832;
  t6202 = 13.2128768*var4[17]*t2065*t2066;
  t6217 = -26.4257536*var4[22]*t2065*t2066;
  t6237 = 13.2128768*var4[27]*t2065*t2066;
  t6244 = t6119 + t6151 + t6158 + t6160 + t6162 + t6163 + t6167 + t6171 + t6173 + t6202 + t6217 + t6237;
  t6108 = -1.*var2[7]*t6076;
  t6265 = -1.*var2[2]*t6244;
  t6267 = -1.*var2[6]*t6244;
  t6268 = t6108 + t6265 + t6267;
  t6318 = 4.064*var4[2]*t753*t3267;
  t6348 = -4.064*var4[7]*t753*t3267;
  t6376 = 16.256*var4[7]*t752*t1279*t884;
  t6402 = -16.256*var4[12]*t752*t1279*t884;
  t6414 = 24.383999999999997*var4[12]*t1366*t1472*t1832;
  t6417 = -24.383999999999997*var4[17]*t1366*t1472*t1832;
  t6451 = 16.256*var4[17]*t1785*t1225*t2066;
  t6455 = -16.256*var4[22]*t1785*t1225*t2066;
  t6481 = 4.064*var4[22]*t2065*t3390;
  t6482 = -4.064*var4[27]*t2065*t3390;
  t6487 = t6318 + t6348 + t6376 + t6402 + t6414 + t6417 + t6451 + t6455 + t6481 + t6482;
  t6908 = 6.6064384*var4[3]*t752*t1279;
  t6918 = -13.2128768*var4[8]*t752*t1279;
  t6932 = 6.6064384*var4[13]*t752*t1279;
  t6933 = 19.8193152*var4[8]*t1366*t1472*t884;
  t6934 = -39.6386304*var4[13]*t1366*t1472*t884;
  t6948 = 19.8193152*var4[18]*t1366*t1472*t884;
  t6960 = 19.8193152*var4[13]*t1785*t1225*t1832;
  t6961 = -39.6386304*var4[18]*t1785*t1225*t1832;
  t6963 = 19.8193152*var4[23]*t1785*t1225*t1832;
  t6967 = 6.6064384*var4[18]*t2065*t2066;
  t6968 = -13.2128768*var4[23]*t2065*t2066;
  t6970 = 6.6064384*var4[28]*t2065*t2066;
  t6973 = t6908 + t6918 + t6932 + t6933 + t6934 + t6948 + t6960 + t6961 + t6963 + t6967 + t6968 + t6970;
  t7043 = 13.2128768*var4[3]*t752*t1279;
  t7044 = -26.4257536*var4[8]*t752*t1279;
  t7045 = 13.2128768*var4[13]*t752*t1279;
  t7048 = 39.6386304*var4[8]*t1366*t1472*t884;
  t7055 = -79.2772608*var4[13]*t1366*t1472*t884;
  t7057 = 39.6386304*var4[18]*t1366*t1472*t884;
  t7067 = 39.6386304*var4[13]*t1785*t1225*t1832;
  t7084 = -79.2772608*var4[18]*t1785*t1225*t1832;
  t7094 = 39.6386304*var4[23]*t1785*t1225*t1832;
  t7098 = 13.2128768*var4[18]*t2065*t2066;
  t7117 = -26.4257536*var4[23]*t2065*t2066;
  t7122 = 13.2128768*var4[28]*t2065*t2066;
  t7123 = t7043 + t7044 + t7045 + t7048 + t7055 + t7057 + t7067 + t7084 + t7094 + t7098 + t7117 + t7122;
  t7011 = -1.*var2[7]*t6973;
  t7126 = -1.*var2[2]*t7123;
  t7141 = -1.*var2[6]*t7123;
  t7144 = t7011 + t7126 + t7141;
  t7168 = 4.064*var4[3]*t753*t3267;
  t7169 = -4.064*var4[8]*t753*t3267;
  t7170 = 16.256*var4[8]*t752*t1279*t884;
  t7183 = -16.256*var4[13]*t752*t1279*t884;
  t7190 = 24.383999999999997*var4[13]*t1366*t1472*t1832;
  t7191 = -24.383999999999997*var4[18]*t1366*t1472*t1832;
  t7192 = 16.256*var4[18]*t1785*t1225*t2066;
  t7213 = -16.256*var4[23]*t1785*t1225*t2066;
  t7215 = 4.064*var4[23]*t2065*t3390;
  t7226 = -4.064*var4[28]*t2065*t3390;
  t7230 = t7168 + t7169 + t7170 + t7183 + t7190 + t7191 + t7192 + t7213 + t7215 + t7226;
  t7512 = 6.6064384*var4[4]*t752*t1279;
  t7518 = -13.2128768*var4[9]*t752*t1279;
  t7544 = 6.6064384*var4[14]*t752*t1279;
  t7548 = 19.8193152*var4[9]*t1366*t1472*t884;
  t7552 = -39.6386304*var4[14]*t1366*t1472*t884;
  t7557 = 19.8193152*var4[19]*t1366*t1472*t884;
  t7570 = 19.8193152*var4[14]*t1785*t1225*t1832;
  t7571 = -39.6386304*var4[19]*t1785*t1225*t1832;
  t7577 = 19.8193152*var4[24]*t1785*t1225*t1832;
  t7578 = 6.6064384*var4[19]*t2065*t2066;
  t7581 = -13.2128768*var4[24]*t2065*t2066;
  t7582 = 6.6064384*var4[29]*t2065*t2066;
  t7583 = t7512 + t7518 + t7544 + t7548 + t7552 + t7557 + t7570 + t7571 + t7577 + t7578 + t7581 + t7582;
  t7598 = 13.2128768*var4[4]*t752*t1279;
  t7600 = -26.4257536*var4[9]*t752*t1279;
  t7602 = 13.2128768*var4[14]*t752*t1279;
  t7610 = 39.6386304*var4[9]*t1366*t1472*t884;
  t7613 = -79.2772608*var4[14]*t1366*t1472*t884;
  t7614 = 39.6386304*var4[19]*t1366*t1472*t884;
  t7617 = 39.6386304*var4[14]*t1785*t1225*t1832;
  t7622 = -79.2772608*var4[19]*t1785*t1225*t1832;
  t7627 = 39.6386304*var4[24]*t1785*t1225*t1832;
  t7640 = 13.2128768*var4[19]*t2065*t2066;
  t7641 = -26.4257536*var4[24]*t2065*t2066;
  t7645 = 13.2128768*var4[29]*t2065*t2066;
  t7646 = t7598 + t7600 + t7602 + t7610 + t7613 + t7614 + t7617 + t7622 + t7627 + t7640 + t7641 + t7645;
  t7597 = -1.*var2[7]*t7583;
  t7651 = -1.*var2[2]*t7646;
  t7657 = -1.*var2[6]*t7646;
  t7665 = t7597 + t7651 + t7657;
  t7670 = 4.064*var4[4]*t753*t3267;
  t7679 = -4.064*var4[9]*t753*t3267;
  t7680 = 16.256*var4[9]*t752*t1279*t884;
  t7683 = -16.256*var4[14]*t752*t1279*t884;
  t7689 = 24.383999999999997*var4[14]*t1366*t1472*t1832;
  t7692 = -24.383999999999997*var4[19]*t1366*t1472*t1832;
  t7693 = 16.256*var4[19]*t1785*t1225*t2066;
  t7698 = -16.256*var4[24]*t1785*t1225*t2066;
  t7700 = 4.064*var4[24]*t2065*t3390;
  t7703 = -4.064*var4[29]*t2065*t3390;
  t7705 = t7670 + t7679 + t7680 + t7683 + t7689 + t7692 + t7693 + t7698 + t7700 + t7703;
  p_output1[0]=t3236*var2[2] + t3236*var2[6] + (t3277 + t3293 + t3311 + t3347 + t3359 + t3370 + t3373 + t3386 + t3402 + t3433)*var3[2] + (1. + t3277 + t3293 + t3311 + t3347 + t3359 + t3370 + t3373 + t3386 + t3402 + t3433)*var3[6] + var3[7]*(2.032*t3267*t753*var4[0] - 2.032*t3267*t753*var4[5] + 8.128*t1279*t752*t884*var4[5] + 12.191999999999998*t1366*t1472*t1832*var4[10] - 8.128*t1279*t752*t884*var4[10] - 12.191999999999998*t1366*t1472*t1832*var4[15] + 8.128*t1225*t1785*t2066*var4[15] - 8.128*t1225*t1785*t2066*var4[20] + 2.032*t2065*t3390*var4[20] - 2.032*t2065*t3390*var4[25]) + var2[7]*(-1.*t2511*var2[2] - 1.*t2511*var2[6] - 1.*var2[7]*(3.3032192*t1279*t752*var4[0] - 6.6064384*t1279*t752*var4[5] + 9.9096576*t1366*t1472*t884*var4[5] + 9.9096576*t1225*t1785*t1832*var4[10] + 3.3032192*t1279*t752*var4[10] - 19.8193152*t1366*t1472*t884*var4[10] - 19.8193152*t1225*t1785*t1832*var4[15] + 3.3032192*t2065*t2066*var4[15] + 9.9096576*t1366*t1472*t884*var4[15] + 9.9096576*t1225*t1785*t1832*var4[20] - 6.6064384*t2065*t2066*var4[20] + 3.3032192*t2065*t2066*var4[25]));
  p_output1[1]=t5344*var2[2] + t5344*var2[6] + t5573*var3[2] + t5573*var3[6] + var3[7]*(1. + 2.032*t3267*t753*var4[1] - 2.032*t3267*t753*var4[6] + 8.128*t1279*t752*t884*var4[6] + 12.191999999999998*t1366*t1472*t1832*var4[11] - 8.128*t1279*t752*t884*var4[11] - 12.191999999999998*t1366*t1472*t1832*var4[16] + 8.128*t1225*t1785*t2066*var4[16] - 8.128*t1225*t1785*t2066*var4[21] + 2.032*t2065*t3390*var4[21] - 2.032*t2065*t3390*var4[26]) + var2[7]*(-1.*t4856*var2[2] - 1.*t4856*var2[6] - 1.*var2[7]*(3.3032192*t1279*t752*var4[1] - 6.6064384*t1279*t752*var4[6] + 9.9096576*t1366*t1472*t884*var4[6] + 9.9096576*t1225*t1785*t1832*var4[11] + 3.3032192*t1279*t752*var4[11] - 19.8193152*t1366*t1472*t884*var4[11] - 19.8193152*t1225*t1785*t1832*var4[16] + 3.3032192*t2065*t2066*var4[16] + 9.9096576*t1366*t1472*t884*var4[16] + 9.9096576*t1225*t1785*t1832*var4[21] - 6.6064384*t2065*t2066*var4[21] + 3.3032192*t2065*t2066*var4[26]));
  p_output1[2]=t6268*var2[2] + t6268*var2[6] + t6487*var3[2] + var3[3] + t6487*var3[6] + var3[7]*(2.032*t3267*t753*var4[2] - 2.032*t3267*t753*var4[7] + 8.128*t1279*t752*t884*var4[7] + 12.191999999999998*t1366*t1472*t1832*var4[12] - 8.128*t1279*t752*t884*var4[12] - 12.191999999999998*t1366*t1472*t1832*var4[17] + 8.128*t1225*t1785*t2066*var4[17] - 8.128*t1225*t1785*t2066*var4[22] + 2.032*t2065*t3390*var4[22] - 2.032*t2065*t3390*var4[27]) + var2[7]*(-1.*t6076*var2[2] - 1.*t6076*var2[6] - 1.*var2[7]*(3.3032192*t1279*t752*var4[2] - 6.6064384*t1279*t752*var4[7] + 9.9096576*t1366*t1472*t884*var4[7] + 9.9096576*t1225*t1785*t1832*var4[12] + 3.3032192*t1279*t752*var4[12] - 19.8193152*t1366*t1472*t884*var4[12] - 19.8193152*t1225*t1785*t1832*var4[17] + 3.3032192*t2065*t2066*var4[17] + 9.9096576*t1366*t1472*t884*var4[17] + 9.9096576*t1225*t1785*t1832*var4[22] - 6.6064384*t2065*t2066*var4[22] + 3.3032192*t2065*t2066*var4[27]));
  p_output1[3]=t7144*var2[2] + t7144*var2[6] + t7230*var3[2] + var3[4] + t7230*var3[6] + var3[7]*(2.032*t3267*t753*var4[3] - 2.032*t3267*t753*var4[8] + 8.128*t1279*t752*t884*var4[8] + 12.191999999999998*t1366*t1472*t1832*var4[13] - 8.128*t1279*t752*t884*var4[13] - 12.191999999999998*t1366*t1472*t1832*var4[18] + 8.128*t1225*t1785*t2066*var4[18] - 8.128*t1225*t1785*t2066*var4[23] + 2.032*t2065*t3390*var4[23] - 2.032*t2065*t3390*var4[28]) + var2[7]*(-1.*t6973*var2[2] - 1.*t6973*var2[6] - 1.*var2[7]*(3.3032192*t1279*t752*var4[3] - 6.6064384*t1279*t752*var4[8] + 9.9096576*t1366*t1472*t884*var4[8] + 9.9096576*t1225*t1785*t1832*var4[13] + 3.3032192*t1279*t752*var4[13] - 19.8193152*t1366*t1472*t884*var4[13] - 19.8193152*t1225*t1785*t1832*var4[18] + 3.3032192*t2065*t2066*var4[18] + 9.9096576*t1366*t1472*t884*var4[18] + 9.9096576*t1225*t1785*t1832*var4[23] - 6.6064384*t2065*t2066*var4[23] + 3.3032192*t2065*t2066*var4[28]));
  p_output1[4]=t7665*var2[2] + t7665*var2[6] + t7705*var3[2] + var3[5] + t7705*var3[6] + var3[7]*(2.032*t3267*t753*var4[4] - 2.032*t3267*t753*var4[9] + 8.128*t1279*t752*t884*var4[9] + 12.191999999999998*t1366*t1472*t1832*var4[14] - 8.128*t1279*t752*t884*var4[14] - 12.191999999999998*t1366*t1472*t1832*var4[19] + 8.128*t1225*t1785*t2066*var4[19] - 8.128*t1225*t1785*t2066*var4[24] + 2.032*t2065*t3390*var4[24] - 2.032*t2065*t3390*var4[29]) + var2[7]*(-1.*t7583*var2[2] - 1.*t7583*var2[6] - 1.*var2[7]*(3.3032192*t1279*t752*var4[4] - 6.6064384*t1279*t752*var4[9] + 9.9096576*t1366*t1472*t884*var4[9] + 9.9096576*t1225*t1785*t1832*var4[14] + 3.3032192*t1279*t752*var4[14] - 19.8193152*t1366*t1472*t884*var4[14] - 19.8193152*t1225*t1785*t1832*var4[19] + 3.3032192*t2065*t2066*var4[19] + 9.9096576*t1366*t1472*t884*var4[19] + 9.9096576*t1225*t1785*t1832*var4[24] - 6.6064384*t2065*t2066*var4[24] + 3.3032192*t2065*t2066*var4[29]));
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

  double *var1,*var2,*var3,*var4,*var5;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 5)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Five input(s) required (var1,var2,var3,var4,var5).");
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
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5);


}

#else // MATLAB_MEX_FILE

#include "d2y_position_RightSS2.hh"

namespace RightSS2
{

void d2y_position_RightSS2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5);

}

}

#endif // MATLAB_MEX_FILE
