/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:29:35 GMT-08:00
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
  double t237;
  double t114;
  double t169;
  double t238;
  double t350;
  double t207;
  double t262;
  double t286;
  double t113;
  double t370;
  double t389;
  double t408;
  double t489;
  double t299;
  double t429;
  double t436;
  double t29;
  double t523;
  double t537;
  double t552;
  double t463;
  double t693;
  double t800;
  double t819;
  double t829;
  double t1003;
  double t1051;
  double t1085;
  double t1088;
  double t1115;
  double t1141;
  double t1157;
  double t1129;
  double t1166;
  double t1179;
  double t1186;
  double t1193;
  double t1241;
  double t1252;
  double t1258;
  double t1260;
  double t1277;
  double t569;
  double t631;
  double t1280;
  double t1281;
  double t1303;
  double t835;
  double t844;
  double t865;
  double t866;
  double t898;
  double t902;
  double t920;
  double t952;
  double t1393;
  double t1405;
  double t1412;
  double t1567;
  double t1576;
  double t1581;
  double t1582;
  double t1639;
  double t1652;
  double t1500;
  double t1502;
  double t1504;
  double t1509;
  double t1653;
  double t1659;
  double t1672;
  double t1673;
  double t1692;
  double t1694;
  double t1725;
  double t1749;
  double t1497;
  double t1663;
  double t1697;
  double t1723;
  double t1996;
  double t2013;
  double t2395;
  double t2400;
  double t2413;
  double t2436;
  double t2441;
  double t2445;
  double t2453;
  double t2454;
  double t2460;
  double t1825;
  double t1828;
  double t1862;
  double t1916;
  double t2606;
  double t2615;
  double t2624;
  double t2629;
  double t2630;
  double t2179;
  double t2216;
  double t2231;
  double t2257;
  double t2272;
  double t1992;
  double t2052;
  double t2337;
  double t2343;
  double t2364;
  double t2374;
  double t2380;
  double t2391;
  double t2793;
  double t2798;
  double t2808;
  double t2811;
  double t2820;
  double t2821;
  double t2827;
  double t2832;
  double t2836;
  double t2848;
  double t2884;
  double t2653;
  double t2658;
  double t2684;
  double t2690;
  double t2694;
  double t2699;
  double t2732;
  double t2741;
  double t3137;
  double t3148;
  double t3155;
  double t3156;
  double t3162;
  double t3119;
  double t3123;
  double t2461;
  double t2471;
  double t2472;
  double t2527;
  double t2528;
  double t2559;
  double t2580;
  double t2585;
  double t2586;
  double t2600;
  double t2757;
  double t2760;
  double t2776;
  double t2791;
  double t3278;
  double t3296;
  double t3310;
  double t3315;
  double t3275;
  double t3348;
  double t3380;
  double t3423;
  double t3442;
  double t3454;
  double t3486;
  double t3489;
  double t3497;
  double t3501;
  double t3506;
  double t3678;
  double t3701;
  double t3702;
  double t2958;
  double t3582;
  double t3603;
  double t3620;
  double t3628;
  double t3018;
  double t3023;
  double t3029;
  double t4093;
  double t4132;
  double t4167;
  double t4184;
  double t4207;
  double t4209;
  double t4013;
  double t4023;
  double t4037;
  double t4052;
  double t4055;
  double t4060;
  double t4067;
  double t4075;
  double t4328;
  double t4334;
  double t4337;
  double t4346;
  double t4381;
  double t3660;
  double t3742;
  double t4617;
  double t4470;
  double t3866;
  double t3871;
  double t4529;
  double t4538;
  double t4552;
  double t3663;
  double t4586;
  double t4618;
  double t4644;
  double t3749;
  double t4650;
  double t4709;
  double t4710;
  double t4723;
  double t4728;
  double t4731;
  double t4735;
  double t3868;
  double t4758;
  double t3878;
  double t4763;
  double t4046;
  double t4050;
  double t5029;
  double t5052;
  double t5078;
  double t5082;
  double t5000;
  double t5015;
  double t5020;
  double t4260;
  double t4297;
  double t4955;
  double t4965;
  double t4977;
  t237 = Cos(var1[7]);
  t114 = Cos(var1[8]);
  t169 = Sin(var1[7]);
  t238 = Sin(var1[8]);
  t350 = Cos(var1[6]);
  t207 = t114*t169;
  t262 = t237*t238;
  t286 = t207 + t262;
  t113 = Sin(var1[6]);
  t370 = t237*t114;
  t389 = -1.*t169*t238;
  t408 = t370 + t389;
  t489 = Cos(var1[2]);
  t299 = -1.*t113*t286;
  t429 = t350*t408;
  t436 = t299 + t429;
  t29 = Sin(var1[2]);
  t523 = t350*t286;
  t537 = t113*t408;
  t552 = t523 + t537;
  t463 = -1.*t29*t436;
  t693 = -1.*t489*t436;
  t800 = -1.*t350*t286;
  t819 = -1.*t113*t408;
  t829 = t800 + t819;
  t1003 = -1.*t114*t169;
  t1051 = -1.*t237*t238;
  t1085 = t1003 + t1051;
  t1088 = t113*t1085;
  t1115 = t1088 + t429;
  t1141 = t350*t1085;
  t1157 = t1141 + t819;
  t1129 = -1.*t29*t1115;
  t1166 = t489*t1157;
  t1179 = t1129 + t1166;
  t1186 = -0.03428571*var2[0]*t1179;
  t1193 = -1.*t489*t1115;
  t1241 = -1.*t29*t1157;
  t1252 = t1193 + t1241;
  t1258 = -0.03428571*var2[1]*t1252;
  t1260 = t1186 + t1258;
  t1277 = var2[8]*t1260;
  t569 = -1.*t489*t552;
  t631 = t463 + t569;
  t1280 = t489*t436;
  t1281 = -1.*t29*t552;
  t1303 = t1280 + t1281;
  t835 = t489*t829;
  t844 = t463 + t835;
  t865 = -0.03428571*var2[0]*t844;
  t866 = -1.*t29*t829;
  t898 = t693 + t866;
  t902 = -0.03428571*var2[1]*t898;
  t920 = t865 + t902;
  t952 = var2[8]*t920;
  t1393 = t113*t286;
  t1405 = -1.*t350*t408;
  t1412 = t1393 + t1405;
  t1567 = -1.*t114;
  t1576 = 1. + t1567;
  t1581 = -1.3127*t1576;
  t1582 = -1.3127*t114;
  t1639 = -0.06*t238;
  t1652 = t1581 + t1582 + t1639;
  t1500 = -1.*t237;
  t1502 = 1. + t1500;
  t1504 = -0.9063*t1502;
  t1509 = -0.06*t114*t169;
  t1653 = t237*t1652;
  t1659 = t1504 + t1509 + t1653;
  t1672 = 0.06*t237*t114;
  t1673 = 0.9063*t169;
  t1692 = t169*t1652;
  t1694 = t1672 + t1673 + t1692;
  t1725 = -1.*t113*t1085;
  t1749 = t1725 + t1405;
  t1497 = -0.4999*t113;
  t1663 = -1.*t113*t1659;
  t1697 = -1.*t350*t1694;
  t1723 = t1497 + t1663 + t1697;
  t1996 = t350*t1659;
  t2013 = -1.*t113*t1694;
  t2395 = 0.9063*t237;
  t2400 = t2395 + t1509 + t1653;
  t2413 = -1.*t113*t2400;
  t2436 = -0.06*t237*t114;
  t2441 = -0.9063*t169;
  t2445 = -1.*t169*t1652;
  t2453 = t2436 + t2441 + t2445;
  t2454 = t350*t2453;
  t2460 = t2413 + t2454;
  t1825 = 0.4999*t113;
  t1828 = t113*t1659;
  t1862 = t350*t1694;
  t1916 = t1825 + t1828 + t1862;
  t2606 = -1.*t237*t114;
  t2615 = t169*t238;
  t2624 = t2606 + t2615;
  t2629 = t350*t2624;
  t2630 = t1725 + t2629;
  t2179 = -1.*t350;
  t2216 = 1. + t2179;
  t2231 = -0.4999*t2216;
  t2257 = t2231 + t1996 + t2013;
  t2272 = -1.*t350*t1085;
  t1992 = 0.4999*t350;
  t2052 = t1992 + t1996 + t2013;
  t2337 = t29*t1749;
  t2343 = t2337 + t1166;
  t2364 = -0.03428571*var2[0]*t2343;
  t2374 = t489*t1749;
  t2380 = t2374 + t1241;
  t2391 = -0.03428571*var2[1]*t2380;
  t2793 = -0.06*t114;
  t2798 = 0. + t2793;
  t2808 = t2798*t169;
  t2811 = -0.06*t237*t238;
  t2820 = t2808 + t2811;
  t2821 = -1.*t113*t2820;
  t2827 = t237*t2798;
  t2832 = 0.06*t169*t238;
  t2836 = t2827 + t2832;
  t2848 = t350*t2836;
  t2884 = t2821 + t2848;
  t2653 = -1.*t1723*t2630;
  t2658 = -1.*t1916*t2630;
  t2684 = -1.*t113*t2624;
  t2690 = t2272 + t2684;
  t2694 = -1.*t2257*t2690;
  t2699 = t113*t2624;
  t2732 = t1141 + t2699;
  t2741 = -1.*t2052*t2732;
  t3137 = -1.*t2257*t1749;
  t3148 = -1.*t2052*t1115;
  t3155 = -1.*t1723*t1157;
  t3156 = -1.*t1916*t1157;
  t3162 = t3137 + t3148 + t3155 + t3156;
  t3119 = t29*t829;
  t3123 = t1280 + t3119;
  t2461 = -1.*t2460*t1749;
  t2471 = -1.*t2460*t1115;
  t2472 = -1.*t350*t2400;
  t2527 = -1.*t113*t2453;
  t2528 = t2472 + t2527;
  t2559 = -1.*t2528*t1157;
  t2580 = t350*t2400;
  t2585 = t113*t2453;
  t2586 = t2580 + t2585;
  t2600 = -1.*t2586*t1157;
  t2757 = t2461 + t2471 + t2559 + t2600 + t2653 + t2658 + t2694 + t2741;
  t2760 = -0.03428571*var2[2]*t2757;
  t2776 = t2364 + t2391 + t2760;
  t2791 = var2[8]*t2776;
  t3278 = -0.9063*t237;
  t3296 = 0.06*t114*t169;
  t3310 = -1.*t237*t1652;
  t3315 = t3278 + t3296 + t3310;
  t3275 = 0.4999*t1085;
  t3348 = -1.*t1659*t286;
  t3380 = -1.*t1694*t2624;
  t3423 = t29*t2630;
  t3442 = t489*t2732;
  t3454 = t3423 + t3442;
  t3486 = -0.03428571*var2[0]*t3454;
  t3489 = t489*t2630;
  t3497 = -1.*t29*t2732;
  t3501 = t3489 + t3497;
  t3506 = -0.03428571*var2[1]*t3501;
  t3678 = -1.*t2798*t169;
  t3701 = 0.06*t237*t238;
  t3702 = t3678 + t3701;
  t2958 = -1.*t113*t2836;
  t3582 = t1393 + t2629;
  t3603 = -1.*t1916*t3582;
  t3620 = t523 + t2684;
  t3628 = -1.*t2257*t3620;
  t3018 = t350*t2820;
  t3023 = t113*t2836;
  t3029 = t3018 + t3023;
  t4093 = -1.*t2453*t1085;
  t4132 = -1.*t1694*t1085;
  t4167 = 0.4999*t408;
  t4184 = -1.*t2400*t408;
  t4207 = -1.*t1659*t2624;
  t4209 = t4093 + t4132 + t4167 + t4184 + t4207;
  t4013 = t489*t1115;
  t4023 = t29*t1157;
  t4037 = t4013 + t4023;
  t4052 = -1.*t2586*t1115;
  t4055 = -1.*t2460*t1157;
  t4060 = -1.*t2257*t2630;
  t4067 = -1.*t1916*t2732;
  t4075 = t4052 + t4055 + t4060 + t4067;
  t4328 = t1509 + t2811;
  t4334 = -1.*t113*t4328;
  t4337 = t2436 + t2832;
  t4346 = t350*t4337;
  t4381 = t4334 + t4346;
  t3660 = -1.*t2400*t1085;
  t3742 = -1.*t2453*t2624;
  t4617 = t3296 + t3701;
  t4470 = -1.*t113*t4337;
  t3866 = -1.*t2460*t2630;
  t3871 = -1.*t2586*t2732;
  t4529 = t350*t4328;
  t4538 = t113*t4337;
  t4552 = t4529 + t4538;
  t3663 = -1.*t1085*t2820;
  t4586 = -1.*t1085*t4328;
  t4618 = -1.*t1085*t4617;
  t4644 = -1.*t408*t4337;
  t3749 = -1.*t2836*t2624;
  t4650 = -1.*t4337*t2624;
  t4709 = t113*t4617;
  t4710 = t4709 + t4346;
  t4723 = -1.*t1115*t4710;
  t4728 = t350*t4617;
  t4731 = t4728 + t4470;
  t4735 = -1.*t1157*t4731;
  t3868 = -1.*t2884*t2630;
  t4758 = -1.*t4381*t2630;
  t3878 = -1.*t3029*t2732;
  t4763 = -1.*t4552*t2732;
  t4046 = -0.03428571*var2[8]*t4037;
  t4050 = -0.03428571*var2[8]*t1179;
  t5029 = 0.9063*t114;
  t5052 = t114*t1652;
  t5078 = 0.06*t114*t238;
  t5082 = t5029 + t5052 + t5078;
  t5000 = -1.*t4328*t408;
  t5015 = -1.*t1085*t4337;
  t5020 = t4132 + t4167 + t5000 + t5015 + t4207;
  t4260 = -0.03428571*var2[1]*t1179;
  t4297 = -0.03428571*var2[0]*t4037;
  t4955 = -1.*t1157*t4381;
  t4965 = -1.*t1115*t4552;
  t4977 = t4955 + t4965 + t4060 + t4067;
  p_output1[0]=(-0.03428571*t631*var2[0] - 0.03428571*(t29*t552 + t693)*var2[1])*var2[8];
  p_output1[1]=t952;
  p_output1[2]=t1277;
  p_output1[3]=t1277;
  p_output1[4]=-0.03428571*t1303*var2[8];
  p_output1[5]=-0.03428571*t631*var2[8];
  p_output1[6]=-0.03428571*t1303*var2[0] - 0.03428571*t631*var2[1];
  p_output1[7]=t952;
  p_output1[8]=(-0.03428571*(t1412*t29 + t835)*var2[0] - 0.03428571*(t1412*t489 + t866)*var2[1] - 0.03428571*(-1.*t1115*t1723 - 2.*t1723*t1749 - 1.*t1749*t1916 - 2.*t1157*t2052 - 1.*t1157*(t113*t1694 - 0.4999*t350 - 1.*t1659*t350) - 1.*t2257*(t2272 + t537))*var2[2])*var2[8];
  p_output1[9]=t2791;
  p_output1[10]=(t2364 + t2391 - 0.03428571*(t2653 + t2658 + t2694 + t2741 - 1.*t1115*t2884 - 1.*t1749*t2884 - 1.*t1157*t3029 - 1.*t1157*(t2958 - 1.*t2820*t350))*var2[2])*var2[8];
  p_output1[11]=-0.03428571*t3123*var2[8];
  p_output1[12]=-0.03428571*t844*var2[8];
  p_output1[13]=-0.03428571*t3162*var2[8];
  p_output1[14]=-0.03428571*t3123*var2[0] - 0.03428571*t844*var2[1] - 0.03428571*t3162*var2[2];
  p_output1[15]=t1277;
  p_output1[16]=t2791;
  p_output1[17]=(t3486 + t3506 - 0.03428571*(-2.*t2460*t2630 - 2.*t2586*t2732 - 1.*t1115*(t2454 + t113*t3315) - 1.*t1157*(t2527 + t3315*t350) + t3603 + t3628)*var2[2] - 0.03428571*(-2.*t1085*t2400 - 2.*t2453*t2624 + t3275 - 1.*t1085*t3315 + t3348 + t3380 - 1.*t2453*t408)*var2[6])*var2[8];
  p_output1[18]=(t3486 + t3506 - 0.03428571*(t3603 + t3628 - 1.*t1115*(t2848 + t113*t3702) - 1.*t1157*(t2958 + t350*t3702) + t3866 + t3868 + t3871 + t3878)*var2[2] - 0.03428571*(t3275 + t3348 + t3380 + t3660 + t3663 - 1.*t1085*t3702 + t3742 + t3749 - 1.*t2836*t408)*var2[6])*var2[8];
  p_output1[19]=t4046;
  p_output1[20]=t4050;
  p_output1[21]=-0.03428571*t4075*var2[8];
  p_output1[22]=-0.03428571*t4209*var2[8];
  p_output1[23]=t4260 + t4297 - 0.03428571*t4075*var2[2] - 0.03428571*t4209*var2[6];
  p_output1[24]=t1277;
  p_output1[25]=(t2364 + t2391 - 0.03428571*(t2653 + t2658 + t2694 + t2741 - 1.*t1115*t4381 - 1.*t1749*t4381 - 1.*t1157*(-1.*t350*t4328 + t4470) - 1.*t1157*t4552)*var2[2])*var2[8];
  p_output1[26]=(t3486 + t3506 - 0.03428571*(t3603 + t3628 + t3866 + t3871 + t4723 + t4735 + t4758 + t4763)*var2[2] - 0.03428571*(t3275 + t3348 + t3380 + t3660 + t3742 + t4586 + t4618 + t4644 + t4650)*var2[6])*var2[8];
  p_output1[27]=(t3486 + t3506 - 0.03428571*(t3603 + t3628 + t3868 + t3878 + t4723 + t4735 + t4758 + t4763)*var2[2] - 0.03428571*(t3275 + t3348 + t3380 + t3663 + t3749 + t4586 + t4618 + t4644 + t4650)*var2[6] - 0.03428571*(0.06*Power(t114,2) - 0.9063*t238 - 1.*t1652*t238 - 0.06*Power(t238,2) + t114*t2798)*var2[7])*var2[8];
  p_output1[28]=t4046;
  p_output1[29]=t4050;
  p_output1[30]=-0.03428571*t4977*var2[8];
  p_output1[31]=-0.03428571*t5020*var2[8];
  p_output1[32]=-0.03428571*t5082*var2[8];
  p_output1[33]=t4260 + t4297 - 0.03428571*t4977*var2[2] - 0.03428571*t5020*var2[6] - 0.03428571*t5082*var2[7];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 34, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L7_J9_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L7_J9_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
