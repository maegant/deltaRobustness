/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:44 GMT-08:00
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
  double t141;
  double t64;
  double t97;
  double t148;
  double t211;
  double t125;
  double t177;
  double t208;
  double t28;
  double t212;
  double t216;
  double t251;
  double t554;
  double t210;
  double t386;
  double t505;
  double t9;
  double t555;
  double t599;
  double t620;
  double t542;
  double t676;
  double t750;
  double t753;
  double t757;
  double t925;
  double t926;
  double t938;
  double t951;
  double t960;
  double t977;
  double t988;
  double t964;
  double t990;
  double t1012;
  double t1016;
  double t1038;
  double t1039;
  double t1112;
  double t1119;
  double t1171;
  double t1175;
  double t628;
  double t655;
  double t1215;
  double t1242;
  double t1264;
  double t767;
  double t784;
  double t817;
  double t833;
  double t840;
  double t855;
  double t872;
  double t876;
  double t1327;
  double t1336;
  double t1342;
  double t1527;
  double t1546;
  double t1563;
  double t1610;
  double t1617;
  double t1637;
  double t1435;
  double t1442;
  double t1457;
  double t1474;
  double t1642;
  double t1656;
  double t1678;
  double t1686;
  double t1699;
  double t1706;
  double t1736;
  double t1738;
  double t1397;
  double t1668;
  double t1707;
  double t1726;
  double t1866;
  double t1868;
  double t2249;
  double t2253;
  double t2265;
  double t2266;
  double t2274;
  double t2280;
  double t2283;
  double t2284;
  double t2285;
  double t1764;
  double t1772;
  double t1784;
  double t1792;
  double t2398;
  double t2430;
  double t2432;
  double t2442;
  double t2452;
  double t1993;
  double t2004;
  double t2014;
  double t2048;
  double t2071;
  double t1826;
  double t1873;
  double t2185;
  double t2190;
  double t2191;
  double t2213;
  double t2217;
  double t2227;
  double t2604;
  double t2609;
  double t2610;
  double t2619;
  double t2631;
  double t2638;
  double t2640;
  double t2642;
  double t2647;
  double t2674;
  double t2677;
  double t2462;
  double t2469;
  double t2482;
  double t2507;
  double t2521;
  double t2534;
  double t2544;
  double t2564;
  double t2890;
  double t2893;
  double t2911;
  double t2923;
  double t2930;
  double t2838;
  double t2846;
  double t2295;
  double t2299;
  double t2314;
  double t2338;
  double t2349;
  double t2351;
  double t2362;
  double t2369;
  double t2377;
  double t2381;
  double t2573;
  double t2583;
  double t2595;
  double t2601;
  double t2977;
  double t2986;
  double t2993;
  double t3006;
  double t2973;
  double t3040;
  double t3090;
  double t3113;
  double t3121;
  double t3126;
  double t3147;
  double t3149;
  double t3166;
  double t3171;
  double t3186;
  double t3458;
  double t3465;
  double t3468;
  double t2740;
  double t3320;
  double t3328;
  double t3347;
  double t3355;
  double t2793;
  double t2794;
  double t2800;
  double t3970;
  double t4000;
  double t4001;
  double t4024;
  double t4031;
  double t4035;
  double t3885;
  double t3888;
  double t3889;
  double t3912;
  double t3938;
  double t3939;
  double t3951;
  double t3963;
  double t4059;
  double t4068;
  double t4073;
  double t4103;
  double t4114;
  double t3428;
  double t3503;
  double t4358;
  double t4233;
  double t3713;
  double t3747;
  double t4250;
  double t4259;
  double t4264;
  double t3439;
  double t4350;
  double t4367;
  double t4377;
  double t3534;
  double t4378;
  double t4395;
  double t4406;
  double t4420;
  double t4425;
  double t4427;
  double t4447;
  double t3733;
  double t4457;
  double t3803;
  double t4460;
  double t3890;
  double t3906;
  double t4877;
  double t4880;
  double t4885;
  double t4899;
  double t4814;
  double t4817;
  double t4834;
  double t4044;
  double t4049;
  double t4730;
  double t4768;
  double t4789;
  t141 = Cos(var1[4]);
  t64 = Cos(var1[5]);
  t97 = Sin(var1[4]);
  t148 = Sin(var1[5]);
  t211 = Cos(var1[3]);
  t125 = t64*t97;
  t177 = t141*t148;
  t208 = t125 + t177;
  t28 = Sin(var1[3]);
  t212 = t141*t64;
  t216 = -1.*t97*t148;
  t251 = t212 + t216;
  t554 = Cos(var1[2]);
  t210 = -1.*t28*t208;
  t386 = t211*t251;
  t505 = t210 + t386;
  t9 = Sin(var1[2]);
  t555 = t211*t208;
  t599 = t28*t251;
  t620 = t555 + t599;
  t542 = -1.*t9*t505;
  t676 = -1.*t554*t505;
  t750 = -1.*t211*t208;
  t753 = -1.*t28*t251;
  t757 = t750 + t753;
  t925 = -1.*t64*t97;
  t926 = -1.*t141*t148;
  t938 = t925 + t926;
  t951 = t28*t938;
  t960 = t951 + t386;
  t977 = t211*t938;
  t988 = t977 + t753;
  t964 = -1.*t9*t960;
  t990 = t554*t988;
  t1012 = t964 + t990;
  t1016 = -0.03428571*var2[0]*t1012;
  t1038 = -1.*t554*t960;
  t1039 = -1.*t9*t988;
  t1112 = t1038 + t1039;
  t1119 = -0.03428571*var2[1]*t1112;
  t1171 = t1016 + t1119;
  t1175 = var2[5]*t1171;
  t628 = -1.*t554*t620;
  t655 = t542 + t628;
  t1215 = t554*t505;
  t1242 = -1.*t9*t620;
  t1264 = t1215 + t1242;
  t767 = t554*t757;
  t784 = t542 + t767;
  t817 = -0.03428571*var2[0]*t784;
  t833 = -1.*t9*t757;
  t840 = t676 + t833;
  t855 = -0.03428571*var2[1]*t840;
  t872 = t817 + t855;
  t876 = var2[5]*t872;
  t1327 = t28*t208;
  t1336 = -1.*t211*t251;
  t1342 = t1327 + t1336;
  t1527 = -1.*t64;
  t1546 = 1. + t1527;
  t1563 = -1.3127*t1546;
  t1610 = -1.3127*t64;
  t1617 = -0.06*t148;
  t1637 = t1563 + t1610 + t1617;
  t1435 = -1.*t141;
  t1442 = 1. + t1435;
  t1457 = -0.9063*t1442;
  t1474 = -0.06*t64*t97;
  t1642 = t141*t1637;
  t1656 = t1457 + t1474 + t1642;
  t1678 = 0.06*t141*t64;
  t1686 = 0.9063*t97;
  t1699 = t97*t1637;
  t1706 = t1678 + t1686 + t1699;
  t1736 = -1.*t28*t938;
  t1738 = t1736 + t1336;
  t1397 = -0.4999*t28;
  t1668 = -1.*t28*t1656;
  t1707 = -1.*t211*t1706;
  t1726 = t1397 + t1668 + t1707;
  t1866 = t211*t1656;
  t1868 = -1.*t28*t1706;
  t2249 = 0.9063*t141;
  t2253 = t2249 + t1474 + t1642;
  t2265 = -1.*t28*t2253;
  t2266 = -0.06*t141*t64;
  t2274 = -0.9063*t97;
  t2280 = -1.*t97*t1637;
  t2283 = t2266 + t2274 + t2280;
  t2284 = t211*t2283;
  t2285 = t2265 + t2284;
  t1764 = 0.4999*t28;
  t1772 = t28*t1656;
  t1784 = t211*t1706;
  t1792 = t1764 + t1772 + t1784;
  t2398 = -1.*t141*t64;
  t2430 = t97*t148;
  t2432 = t2398 + t2430;
  t2442 = t211*t2432;
  t2452 = t1736 + t2442;
  t1993 = -1.*t211;
  t2004 = 1. + t1993;
  t2014 = -0.4999*t2004;
  t2048 = t2014 + t1866 + t1868;
  t2071 = -1.*t211*t938;
  t1826 = 0.4999*t211;
  t1873 = t1826 + t1866 + t1868;
  t2185 = t9*t1738;
  t2190 = t2185 + t990;
  t2191 = -0.03428571*var2[0]*t2190;
  t2213 = t554*t1738;
  t2217 = t2213 + t1039;
  t2227 = -0.03428571*var2[1]*t2217;
  t2604 = -0.06*t64;
  t2609 = 0. + t2604;
  t2610 = t2609*t97;
  t2619 = -0.06*t141*t148;
  t2631 = t2610 + t2619;
  t2638 = -1.*t28*t2631;
  t2640 = t141*t2609;
  t2642 = 0.06*t97*t148;
  t2647 = t2640 + t2642;
  t2674 = t211*t2647;
  t2677 = t2638 + t2674;
  t2462 = -1.*t1726*t2452;
  t2469 = -1.*t1792*t2452;
  t2482 = -1.*t28*t2432;
  t2507 = t2071 + t2482;
  t2521 = -1.*t2048*t2507;
  t2534 = t28*t2432;
  t2544 = t977 + t2534;
  t2564 = -1.*t1873*t2544;
  t2890 = -1.*t2048*t1738;
  t2893 = -1.*t1873*t960;
  t2911 = -1.*t1726*t988;
  t2923 = -1.*t1792*t988;
  t2930 = t2890 + t2893 + t2911 + t2923;
  t2838 = t9*t757;
  t2846 = t1215 + t2838;
  t2295 = -1.*t2285*t1738;
  t2299 = -1.*t2285*t960;
  t2314 = -1.*t211*t2253;
  t2338 = -1.*t28*t2283;
  t2349 = t2314 + t2338;
  t2351 = -1.*t2349*t988;
  t2362 = t211*t2253;
  t2369 = t28*t2283;
  t2377 = t2362 + t2369;
  t2381 = -1.*t2377*t988;
  t2573 = t2295 + t2299 + t2351 + t2381 + t2462 + t2469 + t2521 + t2564;
  t2583 = -0.03428571*var2[2]*t2573;
  t2595 = t2191 + t2227 + t2583;
  t2601 = var2[5]*t2595;
  t2977 = -0.9063*t141;
  t2986 = 0.06*t64*t97;
  t2993 = -1.*t141*t1637;
  t3006 = t2977 + t2986 + t2993;
  t2973 = 0.4999*t938;
  t3040 = -1.*t1656*t208;
  t3090 = -1.*t1706*t2432;
  t3113 = t9*t2452;
  t3121 = t554*t2544;
  t3126 = t3113 + t3121;
  t3147 = -0.03428571*var2[0]*t3126;
  t3149 = t554*t2452;
  t3166 = -1.*t9*t2544;
  t3171 = t3149 + t3166;
  t3186 = -0.03428571*var2[1]*t3171;
  t3458 = -1.*t2609*t97;
  t3465 = 0.06*t141*t148;
  t3468 = t3458 + t3465;
  t2740 = -1.*t28*t2647;
  t3320 = t1327 + t2442;
  t3328 = -1.*t1792*t3320;
  t3347 = t555 + t2482;
  t3355 = -1.*t2048*t3347;
  t2793 = t211*t2631;
  t2794 = t28*t2647;
  t2800 = t2793 + t2794;
  t3970 = -1.*t2283*t938;
  t4000 = -1.*t1706*t938;
  t4001 = 0.4999*t251;
  t4024 = -1.*t2253*t251;
  t4031 = -1.*t1656*t2432;
  t4035 = t3970 + t4000 + t4001 + t4024 + t4031;
  t3885 = t554*t960;
  t3888 = t9*t988;
  t3889 = t3885 + t3888;
  t3912 = -1.*t2377*t960;
  t3938 = -1.*t2285*t988;
  t3939 = -1.*t2048*t2452;
  t3951 = -1.*t1792*t2544;
  t3963 = t3912 + t3938 + t3939 + t3951;
  t4059 = t1474 + t2619;
  t4068 = -1.*t28*t4059;
  t4073 = t2266 + t2642;
  t4103 = t211*t4073;
  t4114 = t4068 + t4103;
  t3428 = -1.*t2253*t938;
  t3503 = -1.*t2283*t2432;
  t4358 = t2986 + t3465;
  t4233 = -1.*t28*t4073;
  t3713 = -1.*t2285*t2452;
  t3747 = -1.*t2377*t2544;
  t4250 = t211*t4059;
  t4259 = t28*t4073;
  t4264 = t4250 + t4259;
  t3439 = -1.*t938*t2631;
  t4350 = -1.*t938*t4059;
  t4367 = -1.*t938*t4358;
  t4377 = -1.*t251*t4073;
  t3534 = -1.*t2647*t2432;
  t4378 = -1.*t4073*t2432;
  t4395 = t28*t4358;
  t4406 = t4395 + t4103;
  t4420 = -1.*t960*t4406;
  t4425 = t211*t4358;
  t4427 = t4425 + t4233;
  t4447 = -1.*t988*t4427;
  t3733 = -1.*t2677*t2452;
  t4457 = -1.*t4114*t2452;
  t3803 = -1.*t2800*t2544;
  t4460 = -1.*t4264*t2544;
  t3890 = -0.03428571*var2[5]*t3889;
  t3906 = -0.03428571*var2[5]*t1012;
  t4877 = 0.9063*t64;
  t4880 = t64*t1637;
  t4885 = 0.06*t64*t148;
  t4899 = t4877 + t4880 + t4885;
  t4814 = -1.*t4059*t251;
  t4817 = -1.*t938*t4073;
  t4834 = t4000 + t4001 + t4814 + t4817 + t4031;
  t4044 = -0.03428571*var2[1]*t1012;
  t4049 = -0.03428571*var2[0]*t3889;
  t4730 = -1.*t988*t4114;
  t4768 = -1.*t960*t4264;
  t4789 = t4730 + t4768 + t3939 + t3951;
  p_output1[0]=(-0.03428571*t655*var2[0] - 0.03428571*(t676 + t620*t9)*var2[1])*var2[5];
  p_output1[1]=t876;
  p_output1[2]=t1175;
  p_output1[3]=t1175;
  p_output1[4]=-0.03428571*t1264*var2[5];
  p_output1[5]=-0.03428571*t655*var2[5];
  p_output1[6]=-0.03428571*t1264*var2[0] - 0.03428571*t655*var2[1];
  p_output1[7]=t876;
  p_output1[8]=(-0.03428571*(t767 + t1342*t9)*var2[0] - 0.03428571*(t1342*t554 + t833)*var2[1] - 0.03428571*(-2.*t1726*t1738 - 1.*t1738*t1792 - 1.*t2048*(t2071 + t599) - 1.*t1726*t960 - 2.*t1873*t988 - 1.*(-0.4999*t211 - 1.*t1656*t211 + t1706*t28)*t988)*var2[2])*var2[5];
  p_output1[9]=t2601;
  p_output1[10]=(t2191 + t2227 - 0.03428571*(t2462 + t2469 + t2521 + t2564 - 1.*t1738*t2677 - 1.*t2677*t960 - 1.*(-1.*t211*t2631 + t2740)*t988 - 1.*t2800*t988)*var2[2])*var2[5];
  p_output1[11]=-0.03428571*t2846*var2[5];
  p_output1[12]=-0.03428571*t784*var2[5];
  p_output1[13]=-0.03428571*t2930*var2[5];
  p_output1[14]=-0.03428571*t2846*var2[0] - 0.03428571*t784*var2[1] - 0.03428571*t2930*var2[2];
  p_output1[15]=t1175;
  p_output1[16]=t2601;
  p_output1[17]=(t3147 + t3186 - 0.03428571*(-2.*t2285*t2452 - 2.*t2377*t2544 + t3328 + t3355 - 1.*(t2284 + t28*t3006)*t960 - 1.*(t2338 + t211*t3006)*t988)*var2[2] - 0.03428571*(-2.*t2283*t2432 - 1.*t2283*t251 + t2973 + t3040 + t3090 - 2.*t2253*t938 - 1.*t3006*t938)*var2[3])*var2[5];
  p_output1[18]=(t3147 + t3186 - 0.03428571*(t3328 + t3355 + t3713 + t3733 + t3747 + t3803 - 1.*(t2674 + t28*t3468)*t960 - 1.*(t2740 + t211*t3468)*t988)*var2[2] - 0.03428571*(-1.*t251*t2647 + t2973 + t3040 + t3090 + t3428 + t3439 + t3503 + t3534 - 1.*t3468*t938)*var2[3])*var2[5];
  p_output1[19]=t3890;
  p_output1[20]=t3906;
  p_output1[21]=-0.03428571*t3963*var2[5];
  p_output1[22]=-0.03428571*t4035*var2[5];
  p_output1[23]=t4044 + t4049 - 0.03428571*t3963*var2[2] - 0.03428571*t4035*var2[3];
  p_output1[24]=t1175;
  p_output1[25]=(t2191 + t2227 - 0.03428571*(t2462 + t2469 + t2521 + t2564 - 1.*t1738*t4114 - 1.*t4114*t960 - 1.*(-1.*t211*t4059 + t4233)*t988 - 1.*t4264*t988)*var2[2])*var2[5];
  p_output1[26]=(t3147 + t3186 - 0.03428571*(t3328 + t3355 + t3713 + t3747 + t4420 + t4447 + t4457 + t4460)*var2[2] - 0.03428571*(t2973 + t3040 + t3090 + t3428 + t3503 + t4350 + t4367 + t4377 + t4378)*var2[3])*var2[5];
  p_output1[27]=(t3147 + t3186 - 0.03428571*(t3328 + t3355 + t3733 + t3803 + t4420 + t4447 + t4457 + t4460)*var2[2] - 0.03428571*(t2973 + t3040 + t3090 + t3439 + t3534 + t4350 + t4367 + t4377 + t4378)*var2[3] - 0.03428571*(-0.9063*t148 - 0.06*Power(t148,2) - 1.*t148*t1637 + t2609*t64 + 0.06*Power(t64,2))*var2[4])*var2[5];
  p_output1[28]=t3890;
  p_output1[29]=t3906;
  p_output1[30]=-0.03428571*t4789*var2[5];
  p_output1[31]=-0.03428571*t4834*var2[5];
  p_output1[32]=-0.03428571*t4899*var2[5];
  p_output1[33]=t4044 + t4049 - 0.03428571*t4789*var2[2] - 0.03428571*t4834*var2[3] - 0.03428571*t4899*var2[4];
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

#include "J_Ce3_vec_L4_J6_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L4_J6_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
