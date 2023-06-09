/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:29:21 GMT-08:00
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
  double t1759;
  double t1187;
  double t1553;
  double t1784;
  double t1855;
  double t1631;
  double t1808;
  double t1811;
  double t443;
  double t1896;
  double t1902;
  double t1913;
  double t2087;
  double t1950;
  double t245;
  double t2254;
  double t2256;
  double t2266;
  double t2185;
  double t2190;
  double t2191;
  double t2195;
  double t2201;
  double t2214;
  double t1814;
  double t2031;
  double t2069;
  double t2093;
  double t2129;
  double t2150;
  double t2159;
  double t2162;
  double t2278;
  double t2397;
  double t2456;
  double t2477;
  double t2487;
  double t2595;
  double t2598;
  double t2684;
  double t3095;
  double t3105;
  double t3127;
  double t3146;
  double t3149;
  double t3235;
  double t2942;
  double t2943;
  double t2986;
  double t3011;
  double t3445;
  double t3455;
  double t3465;
  double t3501;
  double t3537;
  double t3587;
  double t3753;
  double t3756;
  double t3757;
  double t3628;
  double t3661;
  double t3691;
  double t4143;
  double t4148;
  double t4167;
  double t4177;
  double t4191;
  double t4226;
  double t4099;
  double t4106;
  double t4109;
  double t4112;
  double t2179;
  double t2217;
  double t2231;
  double t2242;
  double t2782;
  double t2793;
  double t2831;
  double t2861;
  double t2870;
  double t4391;
  double t4468;
  double t4512;
  double t4538;
  double t3050;
  double t3074;
  double t3237;
  double t3248;
  double t4634;
  double t4647;
  double t4663;
  double t4699;
  double t4709;
  double t3270;
  double t3306;
  double t3363;
  double t3373;
  double t3946;
  double t4018;
  double t4872;
  double t4885;
  double t4944;
  double t5055;
  double t4127;
  double t4240;
  double t4243;
  double t4250;
  double t4259;
  double t4296;
  double t5381;
  double t5395;
  double t5396;
  double t5406;
  double t5334;
  double t5374;
  double t5511;
  double t5521;
  double t5524;
  double t5675;
  double t5677;
  double t5683;
  double t5696;
  double t5651;
  double t5653;
  double t5528;
  double t5535;
  double t5540;
  double t5547;
  double t5586;
  double t5592;
  double t5596;
  double t5898;
  double t5902;
  double t5903;
  double t6009;
  double t6028;
  double t6034;
  double t5979;
  double t5990;
  double t5992;
  double t5497;
  double t5505;
  double t6092;
  double t6093;
  double t5604;
  double t5624;
  double t5626;
  double t5649;
  double t5704;
  double t5796;
  double t6153;
  double t6165;
  double t6166;
  double t6169;
  double t6175;
  double t6182;
  double t5810;
  double t5827;
  double t5845;
  double t5850;
  double t5864;
  double t5884;
  double t5886;
  double t5888;
  double t5891;
  double t5904;
  double t5905;
  double t5907;
  double t5909;
  double t5921;
  double t5925;
  double t5928;
  double t5934;
  double t5941;
  double t5955;
  double t5959;
  double t5971;
  double t6004;
  double t6042;
  double t6226;
  double t6235;
  double t6236;
  double t6248;
  double t6258;
  double t6264;
  double t6048;
  double t6051;
  double t3489;
  double t3884;
  double t6379;
  double t6380;
  double t6383;
  double t6387;
  double t6395;
  double t6411;
  double t6412;
  double t6413;
  double t6348;
  double t6354;
  double t6355;
  double t6313;
  double t6321;
  double t6325;
  double t4631;
  double t4714;
  double t4716;
  double t4734;
  double t4759;
  double t4782;
  double t4813;
  double t4834;
  double t4850;
  double t4864;
  double t4899;
  double t4918;
  double t4923;
  double t4931;
  double t5081;
  double t5087;
  double t5090;
  double t5107;
  double t5108;
  double t5202;
  double t5214;
  double t5216;
  double t5235;
  double t5237;
  double t5240;
  double t5283;
  double t5300;
  double t5307;
  double t5314;
  double t5380;
  double t5409;
  double t5416;
  double t5418;
  double t5424;
  double t5426;
  double t5427;
  double t5444;
  double t5450;
  double t5465;
  double t5468;
  double t5477;
  double t5479;
  double t5481;
  double t5489;
  double t5495;
  double t6439;
  double t6440;
  double t6452;
  double t6453;
  double t6466;
  double t6467;
  double t6471;
  double t6492;
  double t6670;
  double t6675;
  double t6679;
  double t6681;
  double t5670;
  double t5700;
  double t5711;
  double t5738;
  double t5804;
  double t5823;
  double t6805;
  double t6810;
  double t6815;
  double t6816;
  double t6002;
  double t6039;
  double t6040;
  double t6043;
  double t6046;
  double t6055;
  double t6943;
  double t6945;
  double t6946;
  double t6798;
  double t6799;
  double t6103;
  double t6111;
  double t6112;
  double t6115;
  double t6118;
  double t6122;
  double t6125;
  double t6130;
  double t6139;
  double t6140;
  double t6825;
  double t6833;
  double t6167;
  double t6186;
  double t6192;
  double t6203;
  double t6210;
  double t6215;
  double t6855;
  double t6861;
  double t6862;
  double t6864;
  double t6867;
  double t6876;
  double t6879;
  double t6880;
  double t6881;
  double t6883;
  double t6884;
  double t6887;
  double t6895;
  double t6901;
  double t6902;
  double t6913;
  double t6925;
  double t6930;
  double t6931;
  double t6935;
  double t6938;
  double t6940;
  double t6941;
  double t6958;
  double t6959;
  double t6239;
  double t6269;
  double t6270;
  double t6977;
  double t7000;
  double t6274;
  double t6285;
  double t6286;
  double t7071;
  double t7074;
  double t7075;
  double t7014;
  double t7015;
  double t7017;
  double t7019;
  double t7170;
  double t7173;
  double t7176;
  double t7178;
  double t7182;
  double t7195;
  double t7196;
  double t7216;
  double t7220;
  double t7223;
  double t7147;
  double t7148;
  double t7149;
  double t7130;
  double t7136;
  double t7138;
  double t5607;
  double t5611;
  double t5714;
  double t5824;
  double t5835;
  double t5836;
  double t6041;
  double t6056;
  double t6059;
  double t6078;
  double t6080;
  double t6082;
  double t6826;
  double t6830;
  double t6852;
  double t6853;
  double t6856;
  double t6857;
  double t6952;
  double t6955;
  double t6963;
  double t6967;
  double t6968;
  double t6972;
  double t6976;
  double t7001;
  double t7002;
  double t7003;
  double t7005;
  double t7010;
  double t7020;
  double t7022;
  double t7026;
  double t7027;
  double t7030;
  double t7036;
  double t7272;
  double t7273;
  double t7274;
  double t7276;
  double t7245;
  double t7250;
  double t7251;
  double t7253;
  double t7257;
  double t6364;
  double t7392;
  double t7393;
  double t7384;
  double t7386;
  double t7242;
  double t7259;
  double t7260;
  double t7269;
  double t7283;
  double t7290;
  double t7454;
  double t7455;
  double t7456;
  double t7314;
  double t7325;
  double t7330;
  double t7331;
  double t7338;
  double t7339;
  double t7340;
  double t7341;
  double t7343;
  double t7345;
  double t7349;
  double t7350;
  double t7358;
  double t7363;
  double t7366;
  double t7370;
  double t7371;
  double t7372;
  double t7373;
  double t7375;
  double t7378;
  double t7379;
  double t7380;
  double t7381;
  double t7423;
  double t7426;
  double t7499;
  double t7500;
  double t7505;
  double t7506;
  double t7401;
  double t7405;
  double t7555;
  double t7556;
  double t7557;
  double t7558;
  double t7561;
  double t7563;
  double t7564;
  double t7565;
  double t7567;
  double t7568;
  double t7543;
  double t7544;
  double t7545;
  double t7546;
  double t7547;
  double t7536;
  double t7537;
  double t7538;
  double t7585;
  double t7587;
  double t7601;
  double t7602;
  double t7604;
  double t7607;
  double t7608;
  double t7609;
  double t7578;
  double t7586;
  double t7588;
  double t7589;
  double t7592;
  double t7595;
  double t7596;
  double t7606;
  double t7610;
  double t7613;
  double t7615;
  double t7616;
  double t7617;
  double t7637;
  double t7638;
  double t7639;
  double t7443;
  double t7446;
  double t7448;
  double t7466;
  double t7666;
  double t7473;
  double t7477;
  double t7483;
  double t7487;
  double t7493;
  double t7494;
  double t7685;
  double t7686;
  double t7689;
  double t7690;
  double t7519;
  double t7522;
  double t7659;
  double t7434;
  double t7660;
  double t7438;
  double t7445;
  double t7663;
  double t7449;
  double t7665;
  double t7668;
  double t7458;
  double t7669;
  double t7670;
  double t7467;
  double t7673;
  double t7674;
  double t7675;
  double t7474;
  double t7676;
  double t7479;
  double t7679;
  double t7484;
  double t7682;
  double t7492;
  double t7683;
  double t7498;
  double t7508;
  double t7684;
  double t7688;
  double t7691;
  double t7692;
  double t7695;
  double t7697;
  double t7521;
  double t7698;
  double t7523;
  double t7699;
  double t7535;
  double t7550;
  double t7551;
  double t7552;
  double t7553;
  double t7562;
  double t7572;
  double t7744;
  double t7745;
  double t7746;
  double t7740;
  double t7741;
  double t7742;
  double t7736;
  double t7737;
  double t7738;
  double t7577;
  t1759 = Cos(var1[7]);
  t1187 = Cos(var1[8]);
  t1553 = Sin(var1[7]);
  t1784 = Sin(var1[8]);
  t1855 = Cos(var1[6]);
  t1631 = t1187*t1553;
  t1808 = t1759*t1784;
  t1811 = t1631 + t1808;
  t443 = Sin(var1[6]);
  t1896 = t1759*t1187;
  t1902 = -1.*t1553*t1784;
  t1913 = t1896 + t1902;
  t2087 = Cos(var1[2]);
  t1950 = t1855*t1913;
  t245 = Sin(var1[2]);
  t2254 = -1.*t1187*t1553;
  t2256 = -1.*t1759*t1784;
  t2266 = t2254 + t2256;
  t2185 = -1.*t1187;
  t2190 = 1. + t2185;
  t2191 = -1.3127*t2190;
  t2195 = -1.3127*t1187;
  t2201 = -0.06*t1784;
  t2214 = t2191 + t2195 + t2201;
  t1814 = -1.*t443*t1811;
  t2031 = t1814 + t1950;
  t2069 = -1.*t245*t2031;
  t2093 = t1855*t1811;
  t2129 = t443*t1913;
  t2150 = t2093 + t2129;
  t2159 = -1.*t2087*t2150;
  t2162 = t2069 + t2159;
  t2278 = t443*t2266;
  t2397 = t2278 + t1950;
  t2456 = -1.*t2087*t2397;
  t2477 = t1855*t2266;
  t2487 = -1.*t443*t1913;
  t2595 = t2477 + t2487;
  t2598 = -1.*t245*t2595;
  t2684 = t2456 + t2598;
  t3095 = -1.*t1759;
  t3105 = 1. + t3095;
  t3127 = -0.9063*t3105;
  t3146 = -0.06*t1187*t1553;
  t3149 = t1759*t2214;
  t3235 = t3127 + t3146 + t3149;
  t2942 = 0.06*t1759*t1187;
  t2943 = 0.9063*t1553;
  t2986 = t1553*t2214;
  t3011 = t2942 + t2943 + t2986;
  t3445 = -1.*t245*t2397;
  t3455 = t2087*t2595;
  t3465 = t3445 + t3455;
  t3501 = t2087*t2397;
  t3537 = t245*t2595;
  t3587 = t3501 + t3537;
  t3753 = t2087*t2031;
  t3756 = -1.*t245*t2150;
  t3757 = t3753 + t3756;
  t3628 = t245*t2031;
  t3661 = t2087*t2150;
  t3691 = t3628 + t3661;
  t4143 = -1.*t1855;
  t4148 = 1. + t4143;
  t4167 = -0.4999*t4148;
  t4177 = t1855*t3235;
  t4191 = -1.*t443*t3011;
  t4226 = t4167 + t4177 + t4191;
  t4099 = 0.4999*t443;
  t4106 = t443*t3235;
  t4109 = t1855*t3011;
  t4112 = t4099 + t4106 + t4109;
  t2179 = 0.9063*t1187;
  t2217 = t1187*t2214;
  t2231 = 0.06*t1187*t1784;
  t2242 = t2179 + t2217 + t2231;
  t2782 = Power(t1187,2);
  t2793 = -0.06*t2782;
  t2831 = 0.9063*t1784;
  t2861 = t2214*t1784;
  t2870 = t2793 + t2831 + t2861;
  t4391 = -1.*t1855*t1811;
  t4468 = t4391 + t2487;
  t4512 = t2087*t4468;
  t4538 = t2069 + t4512;
  t3050 = t3011*t1811;
  t3074 = 0.4999*t1913;
  t3237 = t3235*t1913;
  t3248 = t3050 + t3074 + t3237;
  t4634 = -1.*t443*t2266;
  t4647 = -1.*t1855*t1913;
  t4663 = t4634 + t4647;
  t4699 = t2087*t4663;
  t4709 = t4699 + t2598;
  t3270 = -1.*t3235*t2266;
  t3306 = 0.4999*t1811;
  t3363 = -1.*t3011*t1913;
  t3373 = t3270 + t3306 + t3363;
  t3946 = -1.*t2087*t2595;
  t4018 = -1.*t2087*t2031;
  t4872 = t245*t4663;
  t4885 = t4872 + t3455;
  t4944 = t245*t4468;
  t5055 = t3753 + t4944;
  t4127 = -1.*t4112*t2397;
  t4240 = -1.*t4226*t2595;
  t4243 = t4127 + t4240;
  t4250 = t4226*t2031;
  t4259 = t4112*t2150;
  t4296 = t4250 + t4259;
  t5381 = -0.4999*t443;
  t5395 = -1.*t443*t3235;
  t5396 = -1.*t1855*t3011;
  t5406 = t5381 + t5395 + t5396;
  t5334 = 0.4999*t1855;
  t5374 = t5334 + t4177 + t4191;
  t5511 = -1.*t1759*t1187;
  t5521 = t1553*t1784;
  t5524 = t5511 + t5521;
  t5675 = -0.06*t1759*t1187;
  t5677 = -0.9063*t1553;
  t5683 = -1.*t1553*t2214;
  t5696 = t5675 + t5677 + t5683;
  t5651 = 0.9063*t1759;
  t5653 = t5651 + t3146 + t3149;
  t5528 = t1855*t5524;
  t5535 = t4634 + t5528;
  t5540 = t2087*t5535;
  t5547 = t443*t5524;
  t5586 = t2477 + t5547;
  t5592 = -1.*t245*t5586;
  t5596 = t5540 + t5592;
  t5898 = t245*t5535;
  t5902 = t2087*t5586;
  t5903 = t5898 + t5902;
  t6009 = t1855*t5653;
  t6028 = t443*t5696;
  t6034 = t6009 + t6028;
  t5979 = -1.*t443*t5653;
  t5990 = t1855*t5696;
  t5992 = t5979 + t5990;
  t5497 = -0.03428571*var2[8]*t3465;
  t5505 = 1.142857*t2870*t3465;
  t6092 = -0.06*t1187;
  t6093 = 0. + t6092;
  t5604 = 1.142857*t2242*t5596;
  t5624 = 1.142857*t3373*t3465;
  t5626 = 0.4999*t2266;
  t5649 = t3235*t2266;
  t5704 = t3011*t1913;
  t5796 = -1.*t3011*t2266;
  t6153 = t6093*t1553;
  t6165 = -0.06*t1759*t1784;
  t6166 = t6153 + t6165;
  t6169 = t1759*t6093;
  t6175 = 0.06*t1553*t1784;
  t6182 = t6169 + t6175;
  t5810 = -1.*t3235*t5524;
  t5827 = 1.142857*t3248*t5596;
  t5845 = 1.142857*t3587*t2162;
  t5850 = 1.142857*t2684*t3691;
  t5864 = 2.285714*t3465*t3757;
  t5884 = -1.*t245*t5535;
  t5886 = -1.*t2087*t5586;
  t5888 = t5884 + t5886;
  t5891 = 1.142857*t3587*t5888;
  t5904 = 1.142857*t2684*t5903;
  t5905 = 2.285714*t3465*t5596;
  t5907 = t5845 + t5850 + t5864 + t5891 + t5904 + t5905;
  t5909 = 0.5*var2[1]*t5907;
  t5921 = 2.285714*t3465*t3691;
  t5925 = 2.285714*t3587*t3757;
  t5928 = 2.285714*t3465*t5903;
  t5934 = 2.285714*t3587*t5596;
  t5941 = t5921 + t5925 + t5928 + t5934;
  t5955 = 0.5*var2[0]*t5941;
  t5959 = 1.142857*t3465*t4243;
  t5971 = t4112*t2397;
  t6004 = t4226*t2595;
  t6042 = 1.142857*t4296*t5596;
  t6226 = -1.*t443*t6166;
  t6235 = t1855*t6182;
  t6236 = t6226 + t6235;
  t6248 = t1855*t6166;
  t6258 = t443*t6182;
  t6264 = t6248 + t6258;
  t6048 = -1.*t4226*t5535;
  t6051 = -1.*t4112*t5586;
  t3489 = Power(t3465,2);
  t3884 = Power(t3757,2);
  t6379 = 1.142857*t3489;
  t6380 = 1.142857*t2684*t3587;
  t6383 = 1.142857*t2162*t3691;
  t6387 = 1.142857*t3884;
  t6395 = t6379 + t6380 + t6383 + t6387;
  t6411 = 1.142857*t4243*t3757;
  t6412 = 1.142857*t3465*t4296;
  t6413 = t6411 + t6412;
  t6348 = 1.142857*t3248*t3465;
  t6354 = 1.142857*t3373*t3757;
  t6355 = t6348 + t6354;
  t6313 = 1.142857*t2242*t3465;
  t6321 = 1.142857*t2870*t3757;
  t6325 = t6313 + t6321;
  t4631 = -0.03428571*var2[8]*t4538;
  t4714 = 1.142857*t2242*t4709;
  t4716 = 1.142857*t2870*t4538;
  t4734 = t4714 + t4716;
  t4759 = 0.5*var2[7]*t4734;
  t4782 = 1.142857*t3248*t4709;
  t4813 = 1.142857*t3373*t4538;
  t4834 = t4782 + t4813;
  t4850 = 0.5*var2[6]*t4834;
  t4864 = 2.285714*t3465*t4709;
  t4899 = 1.142857*t4885*t2684;
  t4918 = -1.*t245*t4663;
  t4923 = t4918 + t3946;
  t4931 = 1.142857*t4923*t3587;
  t5081 = 1.142857*t5055*t2162;
  t5087 = -1.*t245*t4468;
  t5090 = t4018 + t5087;
  t5107 = 1.142857*t5090*t3691;
  t5108 = 2.285714*t4538*t3757;
  t5202 = t4864 + t4899 + t4931 + t5081 + t5107 + t5108;
  t5214 = 0.5*var2[1]*t5202;
  t5216 = 2.285714*t4885*t3465;
  t5235 = 2.285714*t4709*t3587;
  t5237 = 2.285714*t4538*t3691;
  t5240 = 2.285714*t5055*t3757;
  t5283 = t5216 + t5235 + t5237 + t5240;
  t5300 = 0.5*var2[0]*t5283;
  t5307 = 1.142857*t4243*t4538;
  t5314 = -1.*t4226*t4663;
  t5380 = -1.*t5374*t2397;
  t5409 = -1.*t5406*t2595;
  t5416 = -1.*t4112*t2595;
  t5418 = t5314 + t5380 + t5409 + t5416;
  t5424 = 1.142857*t5418*t3757;
  t5426 = 1.142857*t4709*t4296;
  t5427 = t5406*t2031;
  t5444 = t4112*t2031;
  t5450 = t4226*t4468;
  t5465 = t5374*t2150;
  t5468 = t5427 + t5444 + t5450 + t5465;
  t5477 = 1.142857*t3465*t5468;
  t5479 = t5307 + t5424 + t5426 + t5477;
  t5481 = 0.5*var2[2]*t5479;
  t5489 = t4631 + t4759 + t4850 + t5214 + t5300 + t5481;
  t5495 = var2[0]*t5489;
  t6439 = t443*t1811;
  t6440 = t6439 + t4647;
  t6452 = t245*t6440;
  t6453 = t6452 + t4512;
  t6466 = -1.*t1855*t2266;
  t6467 = t6466 + t2129;
  t6471 = t245*t6467;
  t6492 = t4699 + t6471;
  t6670 = -0.4999*t1855;
  t6675 = -1.*t1855*t3235;
  t6679 = t443*t3011;
  t6681 = t6670 + t6675 + t6679;
  t5670 = t5653*t1811;
  t5700 = t5696*t1913;
  t5711 = t5626 + t5649 + t5670 + t5700 + t5704;
  t5738 = -1.*t5696*t2266;
  t5804 = -1.*t5653*t1913;
  t5823 = t5738 + t5796 + t3074 + t5804 + t5810;
  t6805 = -1.*t443*t5524;
  t6810 = t6466 + t6805;
  t6815 = t245*t6810;
  t6816 = t5540 + t6815;
  t6002 = t5992*t2031;
  t6039 = t6034*t2150;
  t6040 = t5971 + t6002 + t6004 + t6039;
  t6043 = -1.*t6034*t2397;
  t6046 = -1.*t5992*t2595;
  t6055 = t6043 + t6046 + t6048 + t6051;
  t6943 = -1.*t1855*t5653;
  t6945 = -1.*t443*t5696;
  t6946 = t6943 + t6945;
  t6798 = -0.03428571*var2[8]*t4885;
  t6799 = 1.142857*t2870*t4885;
  t6103 = t6093*t1187;
  t6111 = 0.06*t2782;
  t6112 = -0.9063*t1784;
  t6115 = -1.*t2214*t1784;
  t6118 = Power(t1784,2);
  t6122 = -0.06*t6118;
  t6125 = t6103 + t6111 + t6112 + t6115 + t6122;
  t6130 = t6093*t1784;
  t6139 = 0.12*t1187*t1784;
  t6140 = t2179 + t2217 + t6130 + t6139;
  t6825 = 1.142857*t2242*t6816;
  t6833 = 1.142857*t3373*t4885;
  t6167 = t6166*t1811;
  t6186 = t1913*t6182;
  t6192 = t5626 + t5649 + t6167 + t5704 + t6186;
  t6203 = -1.*t6166*t1913;
  t6210 = -1.*t2266*t6182;
  t6215 = t5796 + t3074 + t6203 + t6210 + t5810;
  t6855 = 1.142857*t3248*t6816;
  t6861 = 2.285714*t3587*t5055;
  t6862 = 2.285714*t4885*t3691;
  t6864 = 2.285714*t3587*t6816;
  t6867 = 2.285714*t4885*t5903;
  t6876 = t6861 + t6862 + t6864 + t6867;
  t6879 = 0.5*var2[0]*t6876;
  t6880 = 1.142857*t3587*t4538;
  t6881 = 1.142857*t3465*t5055;
  t6883 = 1.142857*t4709*t3691;
  t6884 = 1.142857*t4885*t3757;
  t6887 = t2087*t6810;
  t6895 = t5884 + t6887;
  t6901 = 1.142857*t3587*t6895;
  t6902 = 1.142857*t3465*t6816;
  t6913 = 1.142857*t4709*t5903;
  t6925 = 1.142857*t4885*t5596;
  t6930 = t6880 + t6881 + t6883 + t6884 + t6901 + t6902 + t6913 + t6925;
  t6931 = 0.5*var2[1]*t6930;
  t6935 = 1.142857*t3587*t5418;
  t6938 = 1.142857*t4885*t4243;
  t6940 = t4226*t4663;
  t6941 = t5374*t2397;
  t6958 = t5406*t2595;
  t6959 = t4112*t2595;
  t6239 = t2031*t6236;
  t6269 = t2150*t6264;
  t6270 = t5971 + t6004 + t6239 + t6269;
  t6977 = 1.142857*t4296*t6816;
  t7000 = 1.142857*t5468*t5903;
  t6274 = -1.*t2595*t6236;
  t6285 = -1.*t2397*t6264;
  t6286 = t6274 + t6285 + t6048 + t6051;
  t7071 = -1.*t1855*t6166;
  t7074 = -1.*t443*t6182;
  t7075 = t7071 + t7074;
  t7014 = -1.*t5406*t5535;
  t7015 = -1.*t4112*t5535;
  t7017 = -1.*t4226*t6810;
  t7019 = -1.*t5374*t5586;
  t7170 = 1.142857*t4885*t3465;
  t7173 = 1.142857*t4709*t3587;
  t7176 = 1.142857*t4538*t3691;
  t7178 = 1.142857*t5055*t3757;
  t7182 = t7170 + t7173 + t7176 + t7178;
  t7195 = 1.142857*t4243*t5055;
  t7196 = 1.142857*t5418*t3691;
  t7216 = 1.142857*t4885*t4296;
  t7220 = 1.142857*t3587*t5468;
  t7223 = t7195 + t7196 + t7216 + t7220;
  t7147 = 1.142857*t3248*t4885;
  t7148 = 1.142857*t3373*t5055;
  t7149 = t7147 + t7148;
  t7130 = 1.142857*t2242*t4885;
  t7136 = 1.142857*t2870*t5055;
  t7138 = t7130 + t7136;
  t5607 = t5505 + t5604;
  t5611 = 0.5*var2[7]*t5607;
  t5714 = 1.142857*t5711*t3465;
  t5824 = 1.142857*t5823*t3757;
  t5835 = t5624 + t5714 + t5824 + t5827;
  t5836 = 0.5*var2[6]*t5835;
  t6041 = 1.142857*t3465*t6040;
  t6056 = 1.142857*t3757*t6055;
  t6059 = t5959 + t6041 + t6042 + t6056;
  t6078 = 0.5*var2[2]*t6059;
  t6080 = t5497 + t5611 + t5836 + t5909 + t5955 + t6078;
  t6082 = var2[0]*t6080;
  t6826 = t6799 + t6825;
  t6830 = 0.5*var2[7]*t6826;
  t6852 = 1.142857*t5711*t4885;
  t6853 = 1.142857*t5823*t5055;
  t6856 = t6833 + t6852 + t6853 + t6855;
  t6857 = 0.5*var2[6]*t6856;
  t6952 = t6946*t2031;
  t6955 = t6034*t2031;
  t6963 = t5992*t4468;
  t6967 = t5992*t2150;
  t6968 = t6940 + t6941 + t6952 + t6955 + t6958 + t6959 + t6963 + t6967;
  t6972 = 1.142857*t3587*t6968;
  t6976 = 1.142857*t4885*t6040;
  t7001 = 1.142857*t5055*t6055;
  t7002 = -1.*t5992*t4663;
  t7003 = -1.*t5992*t2397;
  t7005 = -1.*t6946*t2595;
  t7010 = -1.*t6034*t2595;
  t7020 = t7002 + t7003 + t7005 + t7010 + t7014 + t7015 + t7017 + t7019;
  t7022 = 1.142857*t3691*t7020;
  t7026 = t6935 + t6938 + t6972 + t6976 + t6977 + t7000 + t7001 + t7022;
  t7027 = 0.5*var2[2]*t7026;
  t7030 = t6798 + t6830 + t6857 + t6879 + t6931 + t7027;
  t7036 = var2[0]*t7030;
  t7272 = -0.9063*t1759;
  t7273 = 0.06*t1187*t1553;
  t7274 = -1.*t1759*t2214;
  t7276 = t7272 + t7273 + t7274;
  t7245 = t6439 + t5528;
  t7250 = t2087*t7245;
  t7251 = t2093 + t6805;
  t7253 = t245*t7251;
  t7257 = t7250 + t7253;
  t6364 = 2.285714*t3465*t3587;
  t7392 = t1855*t7276;
  t7393 = t7392 + t6945;
  t7384 = t443*t7276;
  t7386 = t7384 + t5990;
  t7242 = -0.03428571*var2[8]*t5903;
  t7259 = 1.142857*t2242*t7257;
  t7260 = 1.142857*t2870*t5903;
  t7269 = t3011*t2266;
  t7283 = 0.4999*t5524;
  t7290 = t3235*t5524;
  t7454 = -1.*t6093*t1553;
  t7455 = 0.06*t1759*t1784;
  t7456 = t7454 + t7455;
  t7314 = -1.*t3235*t1811;
  t7325 = -1.*t3011*t5524;
  t7330 = 1.142857*t3248*t7257;
  t7331 = 1.142857*t3373*t5903;
  t7338 = Power(t3587,2);
  t7339 = 2.285714*t7338;
  t7340 = 2.285714*t3587*t7257;
  t7341 = 2.285714*t3691*t5903;
  t7343 = Power(t5903,2);
  t7345 = 2.285714*t7343;
  t7349 = t7339 + t7340 + t7341 + t7345;
  t7350 = 0.5*var2[0]*t7349;
  t7358 = -1.*t245*t7245;
  t7363 = t2087*t7251;
  t7366 = t7358 + t7363;
  t7370 = 1.142857*t3587*t7366;
  t7371 = 1.142857*t3465*t7257;
  t7372 = 1.142857*t3757*t5903;
  t7373 = 1.142857*t3691*t5596;
  t7375 = 2.285714*t5903*t5596;
  t7378 = t6364 + t7370 + t7371 + t7372 + t7373 + t7375;
  t7379 = 0.5*var2[1]*t7378;
  t7380 = 1.142857*t4296*t7257;
  t7381 = 1.142857*t4243*t5903;
  t7423 = t4226*t5535;
  t7426 = t4112*t5586;
  t7499 = t443*t7456;
  t7500 = t7499 + t6235;
  t7505 = t1855*t7456;
  t7506 = t7505 + t7074;
  t7401 = -1.*t4112*t7245;
  t7405 = -1.*t4226*t7251;
  t7555 = 1.142857*t3465*t3691;
  t7556 = 1.142857*t3587*t3757;
  t7557 = 1.142857*t3465*t5903;
  t7558 = 1.142857*t3587*t5596;
  t7561 = t7555 + t7556 + t7557 + t7558;
  t7563 = 1.142857*t3587*t4243;
  t7564 = 1.142857*t3587*t6040;
  t7565 = 1.142857*t4296*t5903;
  t7567 = 1.142857*t3691*t6055;
  t7568 = t7563 + t7564 + t7565 + t7567;
  t7543 = 1.142857*t3373*t3587;
  t7544 = 1.142857*t5711*t3587;
  t7545 = 1.142857*t5823*t3691;
  t7546 = 1.142857*t3248*t5903;
  t7547 = t7543 + t7544 + t7545 + t7546;
  t7536 = 1.142857*t2870*t3587;
  t7537 = 1.142857*t2242*t5903;
  t7538 = t7536 + t7537;
  t7585 = t3146 + t6165;
  t7587 = t5675 + t6175;
  t7601 = -1.*t443*t7585;
  t7602 = t1855*t7587;
  t7604 = t7601 + t7602;
  t7607 = t1855*t7585;
  t7608 = t443*t7587;
  t7609 = t7607 + t7608;
  t7578 = 0. + t6112 + t6115 + t6122;
  t7586 = t7585*t1811;
  t7588 = t1913*t7587;
  t7589 = t5626 + t5649 + t7586 + t5704 + t7588;
  t7592 = -1.*t7585*t1913;
  t7595 = -1.*t2266*t7587;
  t7596 = t5796 + t3074 + t7592 + t7595 + t5810;
  t7606 = t2031*t7604;
  t7610 = t2150*t7609;
  t7613 = t5971 + t6004 + t7606 + t7610;
  t7615 = -1.*t2595*t7604;
  t7616 = -1.*t2397*t7609;
  t7617 = t7615 + t7616 + t6048 + t6051;
  t7637 = -1.*t1855*t7585;
  t7638 = -1.*t443*t7587;
  t7639 = t7637 + t7638;
  t7443 = 1.142857*t5823*t3587;
  t7446 = t5696*t2266;
  t7448 = t5653*t1913;
  t7466 = -1.*t5653*t2266;
  t7666 = t7273 + t7455;
  t7473 = -1.*t5696*t5524;
  t7477 = 1.142857*t5711*t5903;
  t7483 = 1.142857*t6040*t5903;
  t7487 = 1.142857*t3587*t6055;
  t7493 = t6034*t2397;
  t7494 = t5992*t2595;
  t7685 = t443*t7666;
  t7686 = t7685 + t7602;
  t7689 = t1855*t7666;
  t7690 = t7689 + t7638;
  t7519 = -1.*t5992*t5535;
  t7522 = -1.*t6034*t5586;
  t7659 = 1.142857*t2242*t3587;
  t7434 = 1.142857*t6140*t3587;
  t7660 = 1.142857*t7578*t5903;
  t7438 = 1.142857*t6125*t5903;
  t7445 = 1.142857*t6215*t3587;
  t7663 = 1.142857*t7596*t3587;
  t7449 = t6166*t1913;
  t7665 = t7585*t1913;
  t7668 = t7666*t1913;
  t7458 = t2266*t6182;
  t7669 = t2266*t7587;
  t7670 = t1811*t7587;
  t7467 = -1.*t2266*t6166;
  t7673 = -1.*t2266*t7585;
  t7674 = -1.*t2266*t7666;
  t7675 = -1.*t1913*t7587;
  t7474 = -1.*t6182*t5524;
  t7676 = -1.*t7587*t5524;
  t7479 = 1.142857*t6192*t5903;
  t7679 = 1.142857*t7589*t5903;
  t7484 = 1.142857*t6270*t5903;
  t7682 = 1.142857*t7613*t5903;
  t7492 = 1.142857*t3587*t6286;
  t7683 = 1.142857*t3587*t7617;
  t7498 = t2595*t6236;
  t7508 = t2397*t6264;
  t7684 = t2595*t7604;
  t7688 = t2150*t7686;
  t7691 = t2031*t7690;
  t7692 = t2397*t7609;
  t7695 = -1.*t2397*t7686;
  t7697 = -1.*t2595*t7690;
  t7521 = -1.*t6236*t5535;
  t7698 = -1.*t7604*t5535;
  t7523 = -1.*t6264*t5586;
  t7699 = -1.*t7609*t5586;
  t7535 = -0.03428571*var2[8]*t3587;
  t7550 = 2.285714*t3587*t3691;
  t7551 = 2.285714*t3587*t5903;
  t7552 = t7550 + t7551;
  t7553 = var2[0]*t7552;
  t7562 = 0.5*var2[1]*t7561;
  t7572 = 0.5*var2[0]*t7561;
  t7744 = 1.142857*t3587*t7613;
  t7745 = 1.142857*t3691*t7617;
  t7746 = t7563 + t7744 + t7565 + t7745;
  t7740 = 1.142857*t7589*t3587;
  t7741 = 1.142857*t7596*t3691;
  t7742 = t7543 + t7740 + t7741 + t7546;
  t7736 = 1.142857*t7578*t3587;
  t7737 = 1.142857*t2242*t3691;
  t7738 = t7536 + t7736 + t7737 + t7537;
  t7577 = -0.03428571*var2[0]*t3587;
  p_output1[0]=var2[0]*(0.5*(2.285714*t3489 + 2.285714*t2684*t3587 + 2.285714*t2162*t3691 + 2.285714*t3884)*var2[0] + 0.5*(3.428571*t2684*t3465 + 3.428571*t2162*t3757 + 1.142857*t3587*(t2397*t245 + t3946) + 1.142857*t3691*(t2150*t245 + t4018))*var2[1] + 0.5*(1.142857*t2162*t4243 + 1.142857*t2684*t4296)*var2[2] + 0.5*(1.142857*t2684*t3248 + 1.142857*t2162*t3373)*var2[6] + 0.5*(1.142857*t2242*t2684 + 1.142857*t2162*t2870)*var2[7] - 0.03428571*t2162*var2[8]);
  p_output1[1]=t5495;
  p_output1[2]=t6082;
  p_output1[3]=var2[0]*(t5497 + t5909 + t5955 + 0.5*(t5959 + t6042 + 1.142857*t3465*t6270 + 1.142857*t3757*t6286)*var2[2] + 0.5*(t5624 + t5827 + 1.142857*t3465*t6192 + 1.142857*t3757*t6215)*var2[6] + 0.5*(t5505 + t5604 + 1.142857*t3465*t6125 + 1.142857*t3757*t6140)*var2[7]);
  p_output1[4]=(2.285714*t3691*t3757 + t6364)*var2[0] + 0.5*t6395*var2[1] + 0.5*t6413*var2[2] + 0.5*t6355*var2[6] + 0.5*t6325*var2[7] - 0.03428571*t3757*var2[8];
  p_output1[5]=0.5*t6395*var2[0];
  p_output1[6]=0.5*t6413*var2[0];
  p_output1[7]=0.5*t6355*var2[0];
  p_output1[8]=0.5*t6325*var2[0];
  p_output1[9]=-0.03428571*t3757*var2[0];
  p_output1[10]=t5495;
  p_output1[11]=var2[0]*(0.5*(2.285714*Power(t4885,2) + 2.285714*Power(t5055,2) + 2.285714*t3691*t6453 + 2.285714*t3587*t6492)*var2[0] + 0.5*(2.285714*t4709*t4885 + 2.285714*t4538*t5055 + 1.142857*t3691*(t5087 + t2087*t6440) + 1.142857*t3757*t6453 + 1.142857*t3587*(t4918 + t2087*t6467) + 1.142857*t3465*t6492)*var2[1] + 0.5*(2.285714*t5055*t5418 + 2.285714*t4885*t5468 + 1.142857*t4243*t6453 + 1.142857*t4296*t6492 + 1.142857*t3587*(t4112*t4468 + 2.*t2031*t5374 + t2150*t5406 + 2.*t4468*t5406 + t4226*t6440 + t2031*t6681) + 1.142857*t3691*(-1.*t4112*t4663 - 2.*t2595*t5374 - 1.*t2397*t5406 - 2.*t4663*t5406 - 1.*t4226*t6467 - 1.*t2595*t6681))*var2[2] + 0.5*(1.142857*t3373*t6453 + 1.142857*t3248*t6492)*var2[6] + 0.5*(1.142857*t2870*t6453 + 1.142857*t2242*t6492)*var2[7] - 0.03428571*t6453*var2[8]);
  p_output1[12]=t7036;
  p_output1[13]=var2[0]*(t6798 + t6879 + t6931 + 0.5*(1.142857*t4885*t6270 + 1.142857*t5055*t6286 + t6935 + t6938 + t6977 + t7000 + 1.142857*t3587*(t2150*t6236 + t4468*t6236 + t2031*t6264 + t6940 + t6941 + t6958 + t6959 + t2031*t7075) + 1.142857*t3691*(-1.*t2397*t6236 - 1.*t4663*t6236 - 1.*t2595*t6264 + t7014 + t7015 + t7017 + t7019 - 1.*t2595*t7075))*var2[2] + 0.5*(1.142857*t4885*t6192 + 1.142857*t5055*t6215 + t6833 + t6855)*var2[6] + 0.5*(1.142857*t4885*t6125 + 1.142857*t5055*t6140 + t6799 + t6825)*var2[7]);
  p_output1[14]=(2.285714*t3587*t4885 + 2.285714*t3691*t5055)*var2[0] + 0.5*t7182*var2[1] + 0.5*t7223*var2[2] + 0.5*t7149*var2[6] + 0.5*t7138*var2[7] - 0.03428571*t5055*var2[8];
  p_output1[15]=0.5*t7182*var2[0];
  p_output1[16]=0.5*t7223*var2[0];
  p_output1[17]=0.5*t7149*var2[0];
  p_output1[18]=0.5*t7138*var2[0];
  p_output1[19]=-0.03428571*t5055*var2[0];
  p_output1[20]=t6082;
  p_output1[21]=t7036;
  p_output1[22]=var2[0]*(t7242 + t7350 + t7379 + 0.5*(2.285714*t5903*t6040 + 2.285714*t3587*t6055 + t7380 + t7381 + 1.142857*t3691*(-2.*t5535*t5992 - 2.*t5586*t6034 - 1.*t2397*t7386 - 1.*t2595*t7393 + t7401 + t7405) + 1.142857*t3587*(2.*t2595*t5992 + 2.*t2397*t6034 + t2150*t7386 + t2031*t7393 + t7423 + t7426))*var2[2] + 0.5*(2.285714*t3587*t5823 + 2.285714*t5711*t5903 + 1.142857*t3587*(2.*t1913*t5653 + t1811*t5696 + 2.*t2266*t5696 + t7269 + t1913*t7276 + t7283 + t7290) + 1.142857*t3691*(t5626 - 2.*t2266*t5653 - 1.*t1913*t5696 - 2.*t5524*t5696 - 1.*t2266*t7276 + t7314 + t7325) + t7330 + t7331)*var2[6] + 0.5*(t7259 + t7260)*var2[7]);
  p_output1[23]=var2[0]*(t7242 + t7350 + t7379 + 0.5*(t7380 + t7381 + t7483 + t7484 + t7487 + t7492 + 1.142857*t3587*(t7423 + t7426 + t7493 + t7494 + t7498 + t2150*t7500 + t2031*t7506 + t7508) + 1.142857*t3691*(t7401 + t7405 - 1.*t2397*t7500 - 1.*t2595*t7506 + t7519 + t7521 + t7522 + t7523))*var2[2] + 0.5*(t7330 + t7331 + t7443 + t7445 + 1.142857*t3587*(t1811*t6182 + t7269 + t7283 + t7290 + t7446 + t7448 + t7449 + t1913*t7456 + t7458) + 1.142857*t3691*(t5626 - 1.*t1913*t6182 + t7314 + t7325 - 1.*t2266*t7456 + t7466 + t7467 + t7473 + t7474) + t7477 + t7479)*var2[6] + 0.5*(t7259 + t7260 + t7434 + t7438)*var2[7]);
  p_output1[24]=t7535 + t7553 + t7562 + 0.5*t7568*var2[2] + 0.5*t7547*var2[6] + 0.5*t7538*var2[7];
  p_output1[25]=t7572;
  p_output1[26]=0.5*t7568*var2[0];
  p_output1[27]=0.5*t7547*var2[0];
  p_output1[28]=0.5*t7538*var2[0];
  p_output1[29]=t7577;
  p_output1[30]=var2[0]*(t5497 + t5909 + t5955 + 0.5*(t5959 + t6042 + 1.142857*t3465*t7613 + 1.142857*t3757*t7617)*var2[2] + 0.5*(t5624 + t5827 + 1.142857*t3465*t7589 + 1.142857*t3757*t7596)*var2[6] + 0.5*(1.142857*t2242*t3757 + t5505 + t5604 + 1.142857*t3465*t7578)*var2[7]);
  p_output1[31]=var2[0]*(t6798 + t6879 + t6931 + 0.5*(t6935 + t6938 + t6977 + t7000 + 1.142857*t4885*t7613 + 1.142857*t5055*t7617 + 1.142857*t3587*(t6940 + t6941 + t6958 + t6959 + t2150*t7604 + t4468*t7604 + t2031*t7609 + t2031*t7639) + 1.142857*t3691*(t7014 + t7015 + t7017 + t7019 - 1.*t2397*t7604 - 1.*t4663*t7604 - 1.*t2595*t7609 - 1.*t2595*t7639))*var2[2] + 0.5*(t6833 + t6855 + 1.142857*t4885*t7589 + 1.142857*t5055*t7596)*var2[6] + 0.5*(1.142857*t2242*t5055 + t6799 + t6825 + 1.142857*t4885*t7578)*var2[7]);
  p_output1[32]=var2[0]*(t7242 + t7350 + t7379 + 0.5*(t7380 + t7381 + t7483 + t7487 + t7682 + t7683 + 1.142857*t3587*(t7423 + t7426 + t7493 + t7494 + t7684 + t7688 + t7691 + t7692) + 1.142857*t3691*(t7401 + t7405 + t7519 + t7522 + t7695 + t7697 + t7698 + t7699))*var2[2] + 0.5*(t7330 + t7331 + t7443 + t7477 + t7663 + 1.142857*t3587*(t7269 + t7283 + t7290 + t7446 + t7448 + t7665 + t7668 + t7669 + t7670) + 1.142857*t3691*(t5626 + t7314 + t7325 + t7466 + t7473 + t7673 + t7674 + t7675 + t7676) + t7679)*var2[6] + 0.5*(t7259 + t7260 + t7659 + t7660)*var2[7]);
  p_output1[33]=var2[0]*(t7242 + t7350 + t7379 + 0.5*(t7380 + t7381 + t7484 + t7492 + t7682 + t7683 + 1.142857*t3587*(t7423 + t7426 + t7498 + t7508 + t7684 + t7688 + t7691 + t7692) + 1.142857*t3691*(t7401 + t7405 + t7521 + t7523 + t7695 + t7697 + t7698 + t7699))*var2[2] + 0.5*(t7330 + t7331 + t7445 + t7479 + t7663 + 1.142857*t3587*(t7269 + t7283 + t7290 + t7449 + t7458 + t7665 + t7668 + t7669 + t7670) + 1.142857*t3691*(t5626 + t7314 + t7325 + t7467 + t7474 + t7673 + t7674 + t7675 + t7676) + t7679)*var2[6] + 0.5*(1.142857*t3587*(-0.9063*t1187 - 0.12*t1187*t1784 - 1.*t1187*t2214 - 1.*t1784*t6093) + 1.142857*t3691*t6125 + t7259 + t7260 + t7434 + t7438 + t7659 + t7660)*var2[7]);
  p_output1[34]=t7535 + t7553 + t7562 + 0.5*t7746*var2[2] + 0.5*t7742*var2[6] + 0.5*t7738*var2[7];
  p_output1[35]=t7572;
  p_output1[36]=0.5*t7746*var2[0];
  p_output1[37]=0.5*t7742*var2[0];
  p_output1[38]=0.5*t7738*var2[0];
  p_output1[39]=t7577;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L7_J1_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L7_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
