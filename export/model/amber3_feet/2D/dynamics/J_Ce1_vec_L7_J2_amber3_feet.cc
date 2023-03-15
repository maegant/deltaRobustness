/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:25:29 GMT-08:00
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
  double t249;
  double t222;
  double t225;
  double t272;
  double t495;
  double t227;
  double t365;
  double t366;
  double t215;
  double t612;
  double t780;
  double t790;
  double t930;
  double t214;
  double t969;
  double t999;
  double t1000;
  double t1242;
  double t1296;
  double t1338;
  double t1094;
  double t484;
  double t906;
  double t907;
  double t1379;
  double t1594;
  double t1595;
  double t1625;
  double t1626;
  double t1628;
  double t1645;
  double t1728;
  double t1808;
  double t1909;
  double t1927;
  double t1772;
  double t1639;
  double t928;
  double t1126;
  double t1451;
  double t1462;
  double t1544;
  double t1556;
  double t1572;
  double t1586;
  double t1945;
  double t1968;
  double t2075;
  double t2083;
  double t2027;
  double t2055;
  double t2064;
  double t1993;
  double t2255;
  double t2256;
  double t2313;
  double t2329;
  double t2330;
  double t2350;
  double t2379;
  double t2233;
  double t2241;
  double t2249;
  double t2334;
  double t2387;
  double t2390;
  double t2392;
  double t2408;
  double t2409;
  double t2410;
  double t2470;
  double t2483;
  double t2494;
  double t2505;
  double t2516;
  double t2527;
  double t1422;
  double t1448;
  double t1359;
  double t1403;
  double t2070;
  double t2072;
  double t1729;
  double t1763;
  double t1514;
  double t2612;
  double t2615;
  double t2003;
  double t2715;
  double t2716;
  double t1416;
  double t1510;
  double t1555;
  double t1588;
  double t1983;
  double t2007;
  double t2068;
  double t2095;
  double t2113;
  double t2901;
  double t2953;
  double t2847;
  double t2881;
  double t2885;
  double t2893;
  double t2954;
  double t2958;
  double t2961;
  double t2979;
  double t2990;
  double t2994;
  double t2996;
  double t3019;
  double t3034;
  double t3154;
  double t3186;
  double t3149;
  double t3168;
  double t3187;
  double t3198;
  double t3199;
  double t3226;
  double t3253;
  double t3254;
  double t3262;
  double t3278;
  double t3287;
  double t3288;
  double t3340;
  double t3116;
  double t3138;
  double t3341;
  double t3343;
  double t3349;
  double t3351;
  double t3506;
  double t3518;
  double t3536;
  double t3544;
  double t3559;
  double t3413;
  double t3420;
  double t3445;
  double t3458;
  double t3461;
  double t3466;
  double t3482;
  double t3353;
  double t3362;
  double t3364;
  double t3381;
  double t3386;
  double t3612;
  double t2129;
  double t2133;
  double t2184;
  double t2205;
  double t3809;
  double t3812;
  double t3866;
  double t3867;
  double t3870;
  double t2616;
  double t2622;
  double t2739;
  double t2743;
  double t3629;
  double t3630;
  double t3641;
  double t3647;
  double t3665;
  double t4021;
  double t4034;
  double t4061;
  double t4111;
  double t4174;
  double t4217;
  double t4221;
  double t4241;
  double t4253;
  double t4257;
  double t4285;
  double t4198;
  double t4201;
  double t4292;
  double t4296;
  double t4313;
  double t4330;
  double t4404;
  double t4357;
  double t4365;
  double t4369;
  double t4343;
  double t4463;
  double t4588;
  double t4592;
  double t4594;
  double t4601;
  double t4603;
  double t4604;
  double t4517;
  double t4546;
  double t4558;
  double t4581;
  double t4630;
  double t4639;
  double t4641;
  double t4645;
  double t4650;
  double t4653;
  double t4694;
  double t4699;
  double t4707;
  double t4711;
  double t4713;
  double t4719;
  double t4490;
  double t4640;
  double t4671;
  double t4674;
  double t4679;
  double t4720;
  double t4728;
  double t4741;
  double t4746;
  double t4759;
  double t4818;
  double t4858;
  double t4872;
  double t4878;
  double t4799;
  double t4800;
  double t5006;
  double t5011;
  double t5017;
  double t5018;
  double t5020;
  double t5021;
  double t5059;
  double t5065;
  double t5067;
  double t5015;
  double t5034;
  double t5035;
  double t4993;
  double t4999;
  double t5055;
  double t5135;
  double t5137;
  double t5158;
  double t5160;
  double t5085;
  double t5138;
  double t5162;
  double t5166;
  double t5176;
  double t5185;
  double t5203;
  double t5093;
  double t5121;
  double t4792;
  double t4810;
  double t4898;
  double t4914;
  double t4919;
  double t5267;
  double t5275;
  double t5276;
  double t5285;
  double t4934;
  double t4945;
  double t4949;
  double t4950;
  double t4953;
  double t4782;
  double t4924;
  double t4933;
  double t4963;
  double t4972;
  double t5040;
  double t5078;
  double t5080;
  double t5090;
  double t5091;
  double t5122;
  double t5444;
  double t5448;
  double t5452;
  double t5420;
  double t5435;
  double t5437;
  double t5443;
  double t5457;
  double t5461;
  double t5175;
  double t5222;
  double t5223;
  double t5522;
  double t5525;
  double t5226;
  double t5227;
  double t5233;
  double t5595;
  double t5596;
  double t5607;
  double t5545;
  double t5555;
  double t5556;
  double t5560;
  double t5081;
  double t5123;
  double t5124;
  double t5698;
  double t5699;
  double t5700;
  double t5701;
  double t5706;
  double t5707;
  double t5702;
  double t5703;
  double t5455;
  double t5456;
  double t5465;
  double t5469;
  double t5489;
  double t5516;
  double t5518;
  double t5532;
  double t5535;
  double t5539;
  double t5541;
  double t5544;
  double t5565;
  double t5570;
  double t5571;
  double t5688;
  double t5696;
  double t5823;
  double t5827;
  double t5754;
  double t5764;
  double t5832;
  double t5840;
  double t5847;
  double t5851;
  double t5712;
  double t5714;
  double t5966;
  double t5982;
  double t5997;
  double t6000;
  double t6008;
  double t6012;
  double t6006;
  double t6016;
  double t6018;
  double t6025;
  double t6029;
  double t6031;
  double t6022;
  double t6037;
  double t6042;
  double t6045;
  double t6047;
  double t6060;
  double t6104;
  double t6118;
  double t6119;
  double t5800;
  double t5802;
  double t5819;
  double t5820;
  double t6291;
  double t6295;
  double t6297;
  double t6305;
  double t6307;
  double t6308;
  double t5886;
  double t5897;
  double t6234;
  double t5801;
  double t6267;
  double t5808;
  double t6284;
  double t6311;
  double t5821;
  double t5841;
  double t5859;
  double t5860;
  double t5870;
  double t5874;
  double t6336;
  double t5887;
  double t6354;
  double t5904;
  double t6484;
  double t6489;
  double t6449;
  double t6454;
  double t6461;
  double t6463;
  double t6473;
  double t6474;
  double t6477;
  double t6478;
  double t6485;
  double t6496;
  double t6500;
  double t6512;
  double t6514;
  double t6528;
  double t6596;
  double t6599;
  double t6602;
  double t6604;
  double t6607;
  double t6609;
  double t6619;
  double t6621;
  double t6641;
  double t6642;
  double t6644;
  double t6659;
  double t6671;
  double t6675;
  double t6694;
  double t6605;
  double t6622;
  double t6626;
  double t6650;
  double t6656;
  double t6660;
  double t6669;
  double t6672;
  double t6678;
  double t6814;
  double t6701;
  double t6705;
  double t6706;
  double t6724;
  double t6729;
  double t6736;
  double t6824;
  double t6815;
  double t6817;
  double t6834;
  double t6668;
  double t6690;
  double t6696;
  double t6866;
  double t6906;
  double t6907;
  double t6935;
  double t6943;
  double t6960;
  double t6963;
  double t7088;
  double t7091;
  double t7092;
  double t7095;
  double t7096;
  double t7098;
  double t6979;
  double t6992;
  double t6998;
  double t7016;
  double t7022;
  double t7039;
  double t7132;
  double t6980;
  double t7134;
  double t6999;
  double t7002;
  double t7142;
  double t7003;
  double t7007;
  double t7160;
  double t7018;
  double t7019;
  double t7020;
  double t7168;
  double t7029;
  double t7184;
  double t7043;
  double t7241;
  double t7257;
  double t7224;
  double t7229;
  double t7231;
  double t7206;
  double t7209;
  double t7213;
  double t7244;
  double t7247;
  double t7262;
  double t7266;
  double t7279;
  double t7285;
  double t7311;
  double t7321;
  double t7326;
  double t7328;
  double t7334;
  double t7336;
  double t7341;
  double t7342;
  double t7343;
  double t7374;
  double t7375;
  double t7331;
  double t7350;
  double t7362;
  double t7459;
  double t7413;
  double t7418;
  double t7419;
  double t7421;
  double t7424;
  double t7467;
  double t7469;
  double t7409;
  double t7512;
  double t7518;
  double t7550;
  double t7551;
  double t7561;
  double t7563;
  double t7573;
  double t7575;
  double t7526;
  double t7602;
  double t7531;
  double t7615;
  double t7701;
  double t7708;
  double t7691;
  double t7692;
  double t7696;
  double t7683;
  double t7685;
  double t7687;
  double t7709;
  double t7712;
  double t7716;
  double t7717;
  double t7764;
  double t7766;
  double t7770;
  double t7771;
  double t7774;
  double t7785;
  double t7815;
  t249 = Cos(var1[7]);
  t222 = Cos(var1[8]);
  t225 = Sin(var1[7]);
  t272 = Sin(var1[8]);
  t495 = Cos(var1[6]);
  t227 = -1.*t222*t225;
  t365 = -1.*t249*t272;
  t366 = t227 + t365;
  t215 = Sin(var1[6]);
  t612 = t249*t222;
  t780 = -1.*t225*t272;
  t790 = t612 + t780;
  t930 = Cos(var1[2]);
  t214 = Sin(var1[2]);
  t969 = t495*t366;
  t999 = -1.*t215*t790;
  t1000 = t969 + t999;
  t1242 = -1.*t215*t366;
  t1296 = -1.*t495*t790;
  t1338 = t1242 + t1296;
  t1094 = t930*t1000;
  t484 = t215*t366;
  t906 = t495*t790;
  t907 = t484 + t906;
  t1379 = -1.*t214*t1000;
  t1594 = t222*t225;
  t1595 = t249*t272;
  t1625 = t1594 + t1595;
  t1626 = -1.*t215*t1625;
  t1628 = t1626 + t906;
  t1645 = -1.*t495*t1625;
  t1728 = t1645 + t999;
  t1808 = t495*t1625;
  t1909 = t215*t790;
  t1927 = t1808 + t1909;
  t1772 = -1.*t214*t1628;
  t1639 = t930*t1628;
  t928 = -1.*t214*t907;
  t1126 = t928 + t1094;
  t1451 = -1.*t930*t907;
  t1462 = t1451 + t1379;
  t1544 = -1.*t930*t1000;
  t1556 = t930*t907;
  t1572 = t214*t1000;
  t1586 = t1556 + t1572;
  t1945 = -1.*t930*t1927;
  t1968 = t1772 + t1945;
  t2075 = -1.*t214*t1927;
  t2083 = t1639 + t2075;
  t2027 = t214*t1628;
  t2055 = t930*t1927;
  t2064 = t2027 + t2055;
  t1993 = -1.*t930*t1628;
  t2255 = -1.*t249*t222;
  t2256 = t225*t272;
  t2313 = t2255 + t2256;
  t2329 = t495*t2313;
  t2330 = t1242 + t2329;
  t2350 = t215*t2313;
  t2379 = t969 + t2350;
  t2233 = 1.142857*t1586*t1968;
  t2241 = 1.142857*t1462*t2064;
  t2249 = 2.285714*t1126*t2083;
  t2334 = -1.*t214*t2330;
  t2387 = -1.*t930*t2379;
  t2390 = t2334 + t2387;
  t2392 = 1.142857*t1586*t2390;
  t2408 = t214*t2330;
  t2409 = t930*t2379;
  t2410 = t2408 + t2409;
  t2470 = 1.142857*t1462*t2410;
  t2483 = t930*t2330;
  t2494 = -1.*t214*t2379;
  t2505 = t2483 + t2494;
  t2516 = 2.285714*t1126*t2505;
  t2527 = t2233 + t2241 + t2249 + t2392 + t2470 + t2516;
  t1422 = t214*t1338;
  t1448 = t1422 + t1094;
  t1359 = t930*t1338;
  t1403 = t1359 + t1379;
  t2070 = t930*t1728;
  t2072 = t1772 + t2070;
  t1729 = t214*t1728;
  t1763 = t1639 + t1729;
  t1514 = -1.*t214*t1338;
  t2612 = -1.*t495*t366;
  t2615 = t2612 + t1909;
  t2003 = -1.*t214*t1728;
  t2715 = t215*t1625;
  t2716 = t2715 + t1296;
  t1416 = 2.285714*t1126*t1403;
  t1510 = 1.142857*t1448*t1462;
  t1555 = t1514 + t1544;
  t1588 = 1.142857*t1555*t1586;
  t1983 = 1.142857*t1763*t1968;
  t2007 = t1993 + t2003;
  t2068 = 1.142857*t2007*t2064;
  t2095 = 2.285714*t2072*t2083;
  t2113 = t1416 + t1510 + t1588 + t1983 + t2068 + t2095;
  t2901 = -1.*t215*t2313;
  t2953 = t2612 + t2901;
  t2847 = 1.142857*t1586*t2072;
  t2881 = 1.142857*t1126*t1763;
  t2885 = 1.142857*t1403*t2064;
  t2893 = 1.142857*t1448*t2083;
  t2954 = t930*t2953;
  t2958 = t2334 + t2954;
  t2961 = 1.142857*t1586*t2958;
  t2979 = t214*t2953;
  t2990 = t2483 + t2979;
  t2994 = 1.142857*t1126*t2990;
  t2996 = 1.142857*t1403*t2410;
  t3019 = 1.142857*t1448*t2505;
  t3034 = t2847 + t2881 + t2885 + t2893 + t2961 + t2994 + t2996 + t3019;
  t3154 = t2715 + t2329;
  t3186 = t1808 + t2901;
  t3149 = 2.285714*t1126*t1586;
  t3168 = -1.*t214*t3154;
  t3187 = t930*t3186;
  t3198 = t3168 + t3187;
  t3199 = 1.142857*t1586*t3198;
  t3226 = t930*t3154;
  t3253 = t214*t3186;
  t3254 = t3226 + t3253;
  t3262 = 1.142857*t1126*t3254;
  t3278 = 1.142857*t2083*t2410;
  t3287 = 1.142857*t2064*t2505;
  t3288 = 2.285714*t2410*t2505;
  t3340 = t3149 + t3199 + t3262 + t3278 + t3287 + t3288;
  t3116 = -0.5*var2[6]*t3034;
  t3138 = -0.5*var2[2]*t2527;
  t3341 = -0.5*var2[7]*t3340;
  t3343 = -0.5*var2[8]*t3340;
  t3349 = t3116 + t3138 + t3341 + t3343;
  t3351 = var2[1]*t3349;
  t3506 = 1.142857*t1126*t2064;
  t3518 = 1.142857*t1586*t2083;
  t3536 = 1.142857*t1126*t2410;
  t3544 = 1.142857*t1586*t2505;
  t3559 = t3506 + t3518 + t3536 + t3544;
  t3413 = Power(t1126,2);
  t3420 = 1.142857*t3413;
  t3445 = 1.142857*t1462*t1586;
  t3458 = 1.142857*t1968*t2064;
  t3461 = Power(t2083,2);
  t3466 = 1.142857*t3461;
  t3482 = t3420 + t3445 + t3458 + t3466;
  t3353 = 1.142857*t1448*t1126;
  t3362 = 1.142857*t1403*t1586;
  t3364 = 1.142857*t2072*t2064;
  t3381 = 1.142857*t1763*t2083;
  t3386 = t3353 + t3362 + t3364 + t3381;
  t3612 = -0.5*var2[1]*t3559;
  t2129 = t214*t907;
  t2133 = t2129 + t1544;
  t2184 = t214*t1927;
  t2205 = t1993 + t2184;
  t3809 = 2.285714*t1126*t1968;
  t3812 = 2.285714*t1462*t2083;
  t3866 = 2.285714*t1126*t2390;
  t3867 = 2.285714*t1462*t2505;
  t3870 = t3809 + t3812 + t3866 + t3867;
  t2616 = t930*t2615;
  t2622 = t1514 + t2616;
  t2739 = t930*t2716;
  t2743 = t2739 + t2003;
  t3629 = 2.285714*t1555*t1126;
  t3630 = 2.285714*t1403*t1462;
  t3641 = 2.285714*t2072*t1968;
  t3647 = 2.285714*t2007*t2083;
  t3665 = t3629 + t3630 + t3641 + t3647;
  t4021 = 2.285714*t1126*t2072;
  t4034 = 2.285714*t1403*t2083;
  t4061 = 2.285714*t1126*t2958;
  t4111 = 2.285714*t1403*t2505;
  t4174 = t4021 + t4034 + t4061 + t4111;
  t4217 = 2.285714*t3413;
  t4221 = 2.285714*t1126*t3198;
  t4241 = 2.285714*t2083*t2505;
  t4253 = Power(t2505,2);
  t4257 = 2.285714*t4253;
  t4285 = t4217 + t4221 + t4241 + t4257;
  t4198 = -0.5*var2[6]*t4174;
  t4201 = -0.5*var2[2]*t3870;
  t4292 = -0.5*var2[7]*t4285;
  t4296 = -0.5*var2[8]*t4285;
  t4313 = t4198 + t4201 + t4292 + t4296;
  t4330 = var2[1]*t4313;
  t4404 = t2249 + t2516;
  t4357 = 2.285714*t1126*t1462;
  t4365 = 2.285714*t1968*t2083;
  t4369 = t4357 + t4365;
  t4343 = t1416 + t2095;
  t4463 = -0.5*var2[1]*t4404;
  t4588 = -1.*t222;
  t4592 = 1. + t4588;
  t4594 = -1.3127*t4592;
  t4601 = -1.3127*t222;
  t4603 = -0.06*t272;
  t4604 = t4594 + t4601 + t4603;
  t4517 = -1.*t249;
  t4546 = 1. + t4517;
  t4558 = -0.9063*t4546;
  t4581 = -0.06*t222*t225;
  t4630 = t249*t4604;
  t4639 = t4558 + t4581 + t4630;
  t4641 = 0.06*t249*t222;
  t4645 = 0.9063*t225;
  t4650 = t225*t4604;
  t4653 = t4641 + t4645 + t4650;
  t4694 = -1.*t495;
  t4699 = 1. + t4694;
  t4707 = -0.4999*t4699;
  t4711 = t495*t4639;
  t4713 = -1.*t215*t4653;
  t4719 = t4707 + t4711 + t4713;
  t4490 = 0.4999*t215;
  t4640 = t215*t4639;
  t4671 = t495*t4653;
  t4674 = t4490 + t4640 + t4671;
  t4679 = -1.*t4674*t907;
  t4720 = -1.*t4719*t1000;
  t4728 = t4679 + t4720;
  t4741 = t4719*t1628;
  t4746 = t4674*t1927;
  t4759 = t4741 + t4746;
  t4818 = -0.4999*t215;
  t4858 = -1.*t215*t4639;
  t4872 = -1.*t495*t4653;
  t4878 = t4818 + t4858 + t4872;
  t4799 = 0.4999*t495;
  t4800 = t4799 + t4711 + t4713;
  t5006 = 0.9063*t249;
  t5011 = t5006 + t4581 + t4630;
  t5017 = -0.06*t249*t222;
  t5018 = -0.9063*t225;
  t5020 = -1.*t225*t4604;
  t5021 = t5017 + t5018 + t5020;
  t5059 = t495*t5011;
  t5065 = t215*t5021;
  t5067 = t5059 + t5065;
  t5015 = -1.*t215*t5011;
  t5034 = t495*t5021;
  t5035 = t5015 + t5034;
  t4993 = 1.142857*t1462*t4728;
  t4999 = t4674*t907;
  t5055 = t4719*t1000;
  t5135 = -0.06*t249*t272;
  t5137 = t4581 + t5135;
  t5158 = 0.06*t225*t272;
  t5160 = t5017 + t5158;
  t5085 = 1.142857*t4759*t2390;
  t5138 = -1.*t215*t5137;
  t5162 = t495*t5160;
  t5166 = t5138 + t5162;
  t5176 = t495*t5137;
  t5185 = t215*t5160;
  t5203 = t5176 + t5185;
  t5093 = -1.*t4719*t2330;
  t5121 = -1.*t4674*t2379;
  t4792 = -1.*t4719*t1338;
  t4810 = -1.*t4800*t907;
  t4898 = -1.*t4878*t1000;
  t4914 = -1.*t4674*t1000;
  t4919 = t4792 + t4810 + t4898 + t4914;
  t5267 = -0.4999*t495;
  t5275 = -1.*t495*t4639;
  t5276 = t215*t4653;
  t5285 = t5267 + t5275 + t5276;
  t4934 = t4878*t1628;
  t4945 = t4674*t1628;
  t4949 = t4719*t1728;
  t4950 = t4800*t1927;
  t4953 = t4934 + t4945 + t4949 + t4950;
  t4782 = 1.142857*t4728*t2007;
  t4924 = 1.142857*t4919*t1968;
  t4933 = 1.142857*t1555*t4759;
  t4963 = 1.142857*t1462*t4953;
  t4972 = t4782 + t4924 + t4933 + t4963;
  t5040 = t5035*t1628;
  t5078 = t5067*t1927;
  t5080 = t4999 + t5040 + t5055 + t5078;
  t5090 = -1.*t5067*t907;
  t5091 = -1.*t5035*t1000;
  t5122 = t5090 + t5091 + t5093 + t5121;
  t5444 = -1.*t495*t5011;
  t5448 = -1.*t215*t5021;
  t5452 = t5444 + t5448;
  t5420 = 1.142857*t1126*t4919;
  t5435 = 1.142857*t1403*t4728;
  t5437 = t4719*t1338;
  t5443 = t4800*t907;
  t5457 = t4878*t1000;
  t5461 = t4674*t1000;
  t5175 = t1628*t5166;
  t5222 = t1927*t5203;
  t5223 = t4999 + t5055 + t5175 + t5222;
  t5522 = 1.142857*t4759*t2958;
  t5525 = 1.142857*t4953*t2505;
  t5226 = -1.*t1000*t5166;
  t5227 = -1.*t907*t5203;
  t5233 = t5226 + t5227 + t5093 + t5121;
  t5595 = -1.*t495*t5137;
  t5596 = -1.*t215*t5160;
  t5607 = t5595 + t5596;
  t5545 = -1.*t4878*t2330;
  t5555 = -1.*t4674*t2330;
  t5556 = -1.*t4719*t2953;
  t5560 = -1.*t4800*t2379;
  t5081 = 1.142857*t1462*t5080;
  t5123 = 1.142857*t1968*t5122;
  t5124 = t4993 + t5081 + t5085 + t5123;
  t5698 = -0.9063*t249;
  t5699 = 0.06*t222*t225;
  t5700 = -1.*t249*t4604;
  t5701 = t5698 + t5699 + t5700;
  t5706 = t495*t5701;
  t5707 = t5706 + t5448;
  t5702 = t215*t5701;
  t5703 = t5702 + t5034;
  t5455 = t5452*t1628;
  t5456 = t5067*t1628;
  t5465 = t5035*t1728;
  t5469 = t5035*t1927;
  t5489 = t5437 + t5443 + t5455 + t5456 + t5457 + t5461 + t5465 + t5469;
  t5516 = 1.142857*t1126*t5489;
  t5518 = 1.142857*t1403*t5080;
  t5532 = 1.142857*t2072*t5122;
  t5535 = -1.*t5035*t1338;
  t5539 = -1.*t5035*t907;
  t5541 = -1.*t5452*t1000;
  t5544 = -1.*t5067*t1000;
  t5565 = t5535 + t5539 + t5541 + t5544 + t5545 + t5555 + t5556 + t5560;
  t5570 = 1.142857*t2083*t5565;
  t5571 = t5420 + t5435 + t5516 + t5518 + t5522 + t5525 + t5532 + t5570;
  t5688 = 1.142857*t4759*t3198;
  t5696 = 1.142857*t4728*t2505;
  t5823 = 0.06*t249*t272;
  t5827 = t5699 + t5823;
  t5754 = t4719*t2330;
  t5764 = t4674*t2379;
  t5832 = t215*t5827;
  t5840 = t5832 + t5162;
  t5847 = t495*t5827;
  t5851 = t5847 + t5596;
  t5712 = -1.*t4674*t3154;
  t5714 = -1.*t4719*t3186;
  t5966 = -0.06*t222;
  t5982 = 0. + t5966;
  t5997 = t5982*t225;
  t6000 = t5997 + t5135;
  t6008 = t249*t5982;
  t6012 = t6008 + t5158;
  t6006 = -1.*t215*t6000;
  t6016 = t495*t6012;
  t6018 = t6006 + t6016;
  t6025 = t495*t6000;
  t6029 = t215*t6012;
  t6031 = t6025 + t6029;
  t6022 = t1628*t6018;
  t6037 = t1927*t6031;
  t6042 = t4999 + t5055 + t6022 + t6037;
  t6045 = -1.*t1000*t6018;
  t6047 = -1.*t907*t6031;
  t6060 = t6045 + t6047 + t5093 + t5121;
  t6104 = -1.*t495*t6000;
  t6118 = -1.*t215*t6012;
  t6119 = t6104 + t6118;
  t5800 = 1.142857*t5080*t2505;
  t5802 = 1.142857*t1126*t5122;
  t5819 = t5067*t907;
  t5820 = t5035*t1000;
  t6291 = -1.*t5982*t225;
  t6295 = t6291 + t5823;
  t6297 = t215*t6295;
  t6305 = t6297 + t6016;
  t6307 = t495*t6295;
  t6308 = t6307 + t6118;
  t5886 = -1.*t5035*t2330;
  t5897 = -1.*t5067*t2379;
  t6234 = 1.142857*t6042*t2505;
  t5801 = 1.142857*t5223*t2505;
  t6267 = 1.142857*t1126*t6060;
  t5808 = 1.142857*t1126*t5233;
  t6284 = t1000*t6018;
  t6311 = t907*t6031;
  t5821 = t1000*t5166;
  t5841 = t1927*t5840;
  t5859 = t1628*t5851;
  t5860 = t907*t5203;
  t5870 = -1.*t907*t5840;
  t5874 = -1.*t1000*t5851;
  t6336 = -1.*t6018*t2330;
  t5887 = -1.*t5166*t2330;
  t6354 = -1.*t6031*t2379;
  t5904 = -1.*t5203*t2379;
  t6484 = 1.142857*t1126*t4728;
  t6489 = 1.142857*t4759*t2505;
  t6449 = 1.142857*t4728*t1968;
  t6454 = 1.142857*t1462*t4759;
  t6461 = t6449 + t6454;
  t6463 = 1.142857*t4728*t2072;
  t6473 = 1.142857*t4919*t2083;
  t6474 = 1.142857*t1403*t4759;
  t6477 = 1.142857*t1126*t4953;
  t6478 = t6463 + t6473 + t6474 + t6477;
  t6485 = 1.142857*t1126*t5080;
  t6496 = 1.142857*t2083*t5122;
  t6500 = t6484 + t6485 + t6489 + t6496;
  t6512 = 1.142857*t1126*t5223;
  t6514 = 1.142857*t2083*t5233;
  t6528 = t6484 + t6512 + t6489 + t6514;
  t6596 = t4653*t1625;
  t6599 = 0.4999*t790;
  t6602 = t4639*t790;
  t6604 = t6596 + t6599 + t6602;
  t6607 = -1.*t4639*t366;
  t6609 = 0.4999*t1625;
  t6619 = -1.*t4653*t790;
  t6621 = t6607 + t6609 + t6619;
  t6641 = 1.142857*t6621*t1462;
  t6642 = 0.4999*t366;
  t6644 = t4639*t366;
  t6659 = t4653*t790;
  t6671 = -1.*t4653*t366;
  t6675 = -1.*t4639*t2313;
  t6694 = 1.142857*t6604*t2390;
  t6605 = 1.142857*t6604*t1555;
  t6622 = 1.142857*t6621*t2007;
  t6626 = t6605 + t6622;
  t6650 = t5011*t1625;
  t6656 = t5021*t790;
  t6660 = t6642 + t6644 + t6650 + t6656 + t6659;
  t6669 = -1.*t5021*t366;
  t6672 = -1.*t5011*t790;
  t6678 = t6669 + t6671 + t6599 + t6672 + t6675;
  t6814 = 1.142857*t6621*t1403;
  t6701 = t5137*t1625;
  t6705 = t790*t5160;
  t6706 = t6642 + t6644 + t6701 + t6659 + t6705;
  t6724 = -1.*t5137*t790;
  t6729 = -1.*t366*t5160;
  t6736 = t6671 + t6599 + t6724 + t6729 + t6675;
  t6824 = 1.142857*t6604*t2958;
  t6815 = 1.142857*t6660*t1403;
  t6817 = 1.142857*t6678*t2072;
  t6834 = t6814 + t6815 + t6817 + t6824;
  t6668 = 1.142857*t6660*t1462;
  t6690 = 1.142857*t6678*t1968;
  t6696 = t6641 + t6668 + t6690 + t6694;
  t6866 = t4653*t366;
  t6906 = 0.4999*t2313;
  t6907 = t4639*t2313;
  t6935 = -1.*t4639*t1625;
  t6943 = -1.*t4653*t2313;
  t6960 = 1.142857*t6604*t3198;
  t6963 = 1.142857*t6621*t2505;
  t7088 = t6000*t1625;
  t7091 = t790*t6012;
  t7092 = t6642 + t6644 + t7088 + t6659 + t7091;
  t7095 = -1.*t6000*t790;
  t7096 = -1.*t366*t6012;
  t7098 = t6671 + t6599 + t7095 + t7096 + t6675;
  t6979 = 1.142857*t6678*t1126;
  t6992 = t5021*t366;
  t6998 = t5011*t790;
  t7016 = -1.*t5011*t366;
  t7022 = -1.*t5021*t2313;
  t7039 = 1.142857*t6660*t2505;
  t7132 = 1.142857*t7098*t1126;
  t6980 = 1.142857*t6736*t1126;
  t7134 = t6000*t790;
  t6999 = t5137*t790;
  t7002 = t5827*t790;
  t7142 = t366*t6012;
  t7003 = t366*t5160;
  t7007 = t1625*t5160;
  t7160 = -1.*t366*t6000;
  t7018 = -1.*t366*t5137;
  t7019 = -1.*t366*t5827;
  t7020 = -1.*t790*t5160;
  t7168 = -1.*t6012*t2313;
  t7029 = -1.*t5160*t2313;
  t7184 = 1.142857*t7092*t2505;
  t7043 = 1.142857*t6706*t2505;
  t7241 = 1.142857*t6621*t1126;
  t7257 = 1.142857*t6604*t2505;
  t7224 = 1.142857*t6604*t1462;
  t7229 = 1.142857*t6621*t1968;
  t7231 = t7224 + t7229;
  t7206 = 1.142857*t6604*t1403;
  t7209 = 1.142857*t6621*t2072;
  t7213 = t7206 + t7209;
  t7244 = 1.142857*t6660*t1126;
  t7247 = 1.142857*t6678*t2083;
  t7262 = t7241 + t7244 + t7247 + t7257;
  t7266 = 1.142857*t6706*t1126;
  t7279 = 1.142857*t6736*t2083;
  t7285 = t7241 + t7266 + t7279 + t7257;
  t7311 = 0.9063*t222;
  t7321 = t222*t4604;
  t7326 = 0.06*t222*t272;
  t7328 = t7311 + t7321 + t7326;
  t7334 = Power(t222,2);
  t7336 = -0.06*t7334;
  t7341 = 0.9063*t272;
  t7342 = t4604*t272;
  t7343 = t7336 + t7341 + t7342;
  t7374 = 1.142857*t7343*t1462;
  t7375 = 1.142857*t7328*t2390;
  t7331 = 1.142857*t7328*t1555;
  t7350 = 1.142857*t7343*t2007;
  t7362 = t7331 + t7350;
  t7459 = 1.142857*t7343*t1403;
  t7413 = -0.9063*t272;
  t7418 = -1.*t4604*t272;
  t7419 = Power(t272,2);
  t7421 = -0.06*t7419;
  t7424 = 0. + t7413 + t7418 + t7421;
  t7467 = 1.142857*t7328*t2958;
  t7469 = t7459 + t7467;
  t7409 = t7374 + t7375;
  t7512 = 1.142857*t7328*t3198;
  t7518 = 1.142857*t7343*t2505;
  t7550 = t5982*t222;
  t7551 = 0.06*t7334;
  t7561 = t7550 + t7551 + t7413 + t7418 + t7421;
  t7563 = t5982*t272;
  t7573 = 0.12*t222*t272;
  t7575 = t7311 + t7321 + t7563 + t7573;
  t7526 = 1.142857*t7328*t1126;
  t7602 = 1.142857*t7575*t1126;
  t7531 = 1.142857*t7424*t2505;
  t7615 = 1.142857*t7561*t2505;
  t7701 = 1.142857*t7343*t1126;
  t7708 = 1.142857*t7328*t2505;
  t7691 = 1.142857*t7328*t1462;
  t7692 = 1.142857*t7343*t1968;
  t7696 = t7691 + t7692;
  t7683 = 1.142857*t7328*t1403;
  t7685 = 1.142857*t7343*t2072;
  t7687 = t7683 + t7685;
  t7709 = t7701 + t7708;
  t7712 = 1.142857*t7424*t1126;
  t7716 = 1.142857*t7328*t2083;
  t7717 = t7701 + t7712 + t7716 + t7708;
  t7764 = 0.03428571*var2[6]*t1403;
  t7766 = 0.03428571*var2[2]*t1462;
  t7770 = 0.03428571*var2[7]*t2505;
  t7771 = 0.03428571*var2[8]*t2505;
  t7774 = t7764 + t7766 + t7770 + t7771;
  t7785 = var2[1]*t7774;
  t7815 = 0.03428571*var2[1]*t1126;
  p_output1[0]=var2[1]*(-0.5*(3.428571*t1126*t1462 + 3.428571*t1968*t2083 + 1.142857*t1586*t2133 + 1.142857*t2064*t2205)*var2[2] - 0.5*t2113*var2[6] - 0.5*t2527*var2[7] - 0.5*t2527*var2[8]);
  p_output1[1]=var2[1]*(-0.5*t2113*var2[2] - 0.5*(2.285714*t1403*t1448 + 2.285714*t1763*t2072 + 1.142857*t1126*(t1359 + t214*t2615) + 1.142857*t1586*t2622 + 1.142857*t2083*(t2070 + t214*t2716) + 1.142857*t2064*t2743)*var2[6] - 0.5*t3034*var2[7] - 0.5*t3034*var2[8]);
  p_output1[2]=t3351;
  p_output1[3]=t3351;
  p_output1[4]=-0.5*t3482*var2[2] - 0.5*t3386*var2[6] - 0.5*t3559*var2[7] - 0.5*t3559*var2[8];
  p_output1[5]=-0.5*t3482*var2[1];
  p_output1[6]=-0.5*t3386*var2[1];
  p_output1[7]=t3612;
  p_output1[8]=t3612;
  p_output1[9]=var2[1]*(-0.5*(2.285714*Power(t1462,2) + 2.285714*Power(t1968,2) + 2.285714*t1126*t2133 + 2.285714*t2083*t2205)*var2[2] - 0.5*t3665*var2[6] - 0.5*t3870*var2[7] - 0.5*t3870*var2[8]);
  p_output1[10]=var2[1]*(-0.5*t3665*var2[2] - 0.5*(2.285714*Power(t1403,2) + 2.285714*Power(t2072,2) + 2.285714*t1126*t2622 + 2.285714*t2083*t2743)*var2[6] - 0.5*t4174*var2[7] - 0.5*t4174*var2[8]);
  p_output1[11]=t4330;
  p_output1[12]=t4330;
  p_output1[13]=-0.5*t4369*var2[2] - 0.5*t4343*var2[6] - 0.5*t4404*var2[7] - 0.5*t4404*var2[8];
  p_output1[14]=-0.5*t4369*var2[1];
  p_output1[15]=-0.5*t4343*var2[1];
  p_output1[16]=t4463;
  p_output1[17]=t4463;
  p_output1[18]=var2[1]*(-0.5*(1.142857*t2205*t4728 + 1.142857*t2133*t4759)*var2[2] - 0.5*t4972*var2[6] - 0.5*t5124*var2[7] - 0.5*(t4993 + t5085 + 1.142857*t1462*t5223 + 1.142857*t1968*t5233)*var2[8]);
  p_output1[19]=var2[1]*(-0.5*t4972*var2[2] - 0.5*(1.142857*t2743*t4728 + 1.142857*t2622*t4759 + 2.285714*t2072*t4919 + 2.285714*t1403*t4953 + 1.142857*t1126*(t1728*t4674 + t2716*t4719 + 2.*t1628*t4800 + 2.*t1728*t4878 + t1927*t4878 + t1628*t5285) + 1.142857*t2083*(-1.*t1338*t4674 - 1.*t2615*t4719 - 2.*t1000*t4800 - 2.*t1338*t4878 - 1.*t1000*t5285 - 1.*t4878*t907))*var2[6] - 0.5*t5571*var2[7] - 0.5*(1.142857*t1403*t5223 + 1.142857*t2072*t5233 + t5420 + t5435 + t5522 + t5525 + 1.142857*t1126*(t1728*t5166 + t1927*t5166 + t1628*t5203 + t5437 + t5443 + t5457 + t5461 + t1628*t5607) + 1.142857*t2083*(-1.*t1338*t5166 - 1.*t1000*t5203 + t5545 + t5555 + t5556 + t5560 - 1.*t1000*t5607 - 1.*t5166*t907))*var2[8]);
  p_output1[20]=var2[1]*(-0.5*t5124*var2[2] - 0.5*t5571*var2[6] - 0.5*(2.285714*t2505*t5080 + 2.285714*t1126*t5122 + t5688 + t5696 + 1.142857*t1126*(2.*t1000*t5035 + t1927*t5703 + t1628*t5707 + t5754 + t5764 + 2.*t5067*t907) + 1.142857*t2083*(-2.*t2330*t5035 - 2.*t2379*t5067 - 1.*t1000*t5707 + t5712 + t5714 - 1.*t5703*t907))*var2[7] - 0.5*(t5688 + t5696 + t5800 + t5801 + t5802 + t5808 + 1.142857*t1126*(t5754 + t5764 + t5819 + t5820 + t5821 + t5841 + t5859 + t5860) + 1.142857*t2083*(t5712 + t5714 + t5870 + t5874 + t5886 + t5887 + t5897 + t5904))*var2[8]);
  p_output1[21]=var2[1]*(-0.5*(t4993 + t5085 + 1.142857*t1462*t6042 + 1.142857*t1968*t6060)*var2[2] - 0.5*(t5420 + t5435 + t5522 + t5525 + 1.142857*t1403*t6042 + 1.142857*t2072*t6060 + 1.142857*t1126*(t5437 + t5443 + t5457 + t5461 + t1728*t6018 + t1927*t6018 + t1628*t6031 + t1628*t6119) + 1.142857*t2083*(t5545 + t5555 + t5556 + t5560 - 1.*t1338*t6018 - 1.*t1000*t6031 - 1.*t1000*t6119 - 1.*t6018*t907))*var2[6] - 0.5*(t5688 + t5696 + t5800 + t5802 + t6234 + t6267 + 1.142857*t1126*(t5754 + t5764 + t5819 + t5820 + t6284 + t1927*t6305 + t1628*t6308 + t6311) + 1.142857*t2083*(t5712 + t5714 + t5886 + t5897 - 1.*t1000*t6308 + t6336 + t6354 - 1.*t6305*t907))*var2[7] - 0.5*(t5688 + t5696 + t5801 + t5808 + t6234 + t6267 + 1.142857*t1126*(t5754 + t5764 + t5821 + t5841 + t5859 + t5860 + t6284 + t6311) + 1.142857*t2083*(t5712 + t5714 + t5870 + t5874 + t5887 + t5904 + t6336 + t6354))*var2[8]);
  p_output1[22]=-0.5*t6461*var2[2] - 0.5*t6478*var2[6] - 0.5*t6500*var2[7] - 0.5*t6528*var2[8];
  p_output1[23]=-0.5*t6461*var2[1];
  p_output1[24]=-0.5*t6478*var2[1];
  p_output1[25]=-0.5*t6500*var2[1];
  p_output1[26]=-0.5*t6528*var2[1];
  p_output1[27]=var2[1]*(-0.5*(1.142857*t2133*t6604 + 1.142857*t2205*t6621)*var2[2] - 0.5*t6626*var2[6] - 0.5*t6696*var2[7] - 0.5*(t6641 + t6694 + 1.142857*t1462*t6706 + 1.142857*t1968*t6736)*var2[8]);
  p_output1[28]=var2[1]*(-0.5*t6626*var2[2] - 0.5*(1.142857*t2622*t6604 + 1.142857*t2743*t6621)*var2[6] - 0.5*t6834*var2[7] - 0.5*(1.142857*t1403*t6706 + 1.142857*t2072*t6736 + t6814 + t6824)*var2[8]);
  p_output1[29]=var2[1]*(-0.5*t6696*var2[2] - 0.5*t6834*var2[6] - 0.5*(2.285714*t2505*t6660 + 2.285714*t1126*t6678 + t6960 + t6963 + 1.142857*t2083*(-2.*t366*t5011 - 2.*t2313*t5021 - 1.*t366*t5701 + t6642 + t6935 + t6943 - 1.*t5021*t790) + 1.142857*t1126*(t1625*t5021 + 2.*t366*t5021 + t6866 + t6906 + t6907 + 2.*t5011*t790 + t5701*t790))*var2[7] - 0.5*(t6960 + t6963 + t6979 + t6980 + 1.142857*t1126*(t6866 + t6906 + t6907 + t6992 + t6998 + t6999 + t7002 + t7003 + t7007) + 1.142857*t2083*(t6642 + t6935 + t6943 + t7016 + t7018 + t7019 + t7020 + t7022 + t7029) + t7039 + t7043)*var2[8]);
  p_output1[30]=var2[1]*(-0.5*(t6641 + t6694 + 1.142857*t1462*t7092 + 1.142857*t1968*t7098)*var2[2] - 0.5*(t6814 + t6824 + 1.142857*t1403*t7092 + 1.142857*t2072*t7098)*var2[6] - 0.5*(t6960 + t6963 + t6979 + t7039 + t7132 + t7184 + 1.142857*t2083*(-1.*t366*t6295 + t6642 + t6935 + t6943 + t7016 + t7022 + t7160 + t7168 - 1.*t6012*t790) + 1.142857*t1126*(t1625*t6012 + t6866 + t6906 + t6907 + t6992 + t6998 + t7134 + t7142 + t6295*t790))*var2[7] - 0.5*(t6960 + t6963 + t6980 + t7043 + t7132 + 1.142857*t1126*(t6866 + t6906 + t6907 + t6999 + t7002 + t7003 + t7007 + t7134 + t7142) + 1.142857*t2083*(t6642 + t6935 + t6943 + t7018 + t7019 + t7020 + t7029 + t7160 + t7168) + t7184)*var2[8]);
  p_output1[31]=-0.5*t7231*var2[2] - 0.5*t7213*var2[6] - 0.5*t7262*var2[7] - 0.5*t7285*var2[8];
  p_output1[32]=-0.5*t7231*var2[1];
  p_output1[33]=-0.5*t7213*var2[1];
  p_output1[34]=-0.5*t7262*var2[1];
  p_output1[35]=-0.5*t7285*var2[1];
  p_output1[36]=var2[1]*(-0.5*(1.142857*t2133*t7328 + 1.142857*t2205*t7343)*var2[2] - 0.5*t7362*var2[6] - 0.5*t7409*var2[7] - 0.5*(1.142857*t1968*t7328 + t7374 + t7375 + 1.142857*t1462*t7424)*var2[8]);
  p_output1[37]=var2[1]*(-0.5*t7362*var2[2] - 0.5*(1.142857*t2622*t7328 + 1.142857*t2743*t7343)*var2[6] - 0.5*t7469*var2[7] - 0.5*(1.142857*t2072*t7328 + 1.142857*t1403*t7424 + t7459 + t7467)*var2[8]);
  p_output1[38]=var2[1]*(-0.5*t7409*var2[2] - 0.5*t7469*var2[6] - 0.5*(t7512 + t7518)*var2[7] - 0.5*(t7512 + t7518 + t7526 + t7531)*var2[8]);
  p_output1[39]=var2[1]*(-0.5*(t7374 + t7375 + 1.142857*t1462*t7561 + 1.142857*t1968*t7575)*var2[2] - 0.5*(t7459 + t7467 + 1.142857*t1403*t7561 + 1.142857*t2072*t7575)*var2[6] - 0.5*(t7512 + t7518 + t7602 + t7615)*var2[7] - 0.5*(1.142857*t1126*(-0.9063*t222 - 0.12*t222*t272 - 1.*t222*t4604 - 1.*t272*t5982) + t7512 + t7518 + t7526 + t7531 + 1.142857*t2083*t7561 + t7602 + t7615)*var2[8]);
  p_output1[40]=-0.5*t7696*var2[2] - 0.5*t7687*var2[6] - 0.5*t7709*var2[7] - 0.5*t7717*var2[8];
  p_output1[41]=-0.5*t7696*var2[1];
  p_output1[42]=-0.5*t7687*var2[1];
  p_output1[43]=-0.5*t7709*var2[1];
  p_output1[44]=-0.5*t7717*var2[1];
  p_output1[45]=var2[1]*(0.03428571*t2205*var2[2] + 0.03428571*t2007*var2[6] + 0.03428571*t1462*var2[7] + 0.03428571*t1462*var2[8]);
  p_output1[46]=var2[1]*(0.03428571*t2007*var2[2] + 0.03428571*t2743*var2[6] + 0.03428571*t1403*var2[7] + 0.03428571*t1403*var2[8]);
  p_output1[47]=t7785;
  p_output1[48]=t7785;
  p_output1[49]=0.03428571*t1968*var2[2] + 0.03428571*t2072*var2[6] + 0.03428571*t1126*var2[7] + 0.03428571*t1126*var2[8];
  p_output1[50]=0.03428571*t1968*var2[1];
  p_output1[51]=0.03428571*t2072*var2[1];
  p_output1[52]=t7815;
  p_output1[53]=t7815;
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 54, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L7_J2_amber3_feet.hh"

namespace RightSS1
{

void J_Ce1_vec_L7_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
