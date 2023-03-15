/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:31:29 GMT-08:00
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
  double t196;
  double t130;
  double t141;
  double t343;
  double t765;
  double t799;
  double t872;
  double t1102;
  double t1243;
  double t1278;
  double t1312;
  double t1340;
  double t639;
  double t1554;
  double t1581;
  double t1602;
  double t126;
  double t944;
  double t1357;
  double t1366;
  double t1410;
  double t148;
  double t589;
  double t607;
  double t1668;
  double t1746;
  double t1833;
  double t1834;
  double t1860;
  double t1862;
  double t926;
  double t1437;
  double t1929;
  double t1948;
  double t2300;
  double t2339;
  double t2091;
  double t2105;
  double t2223;
  double t2025;
  double t2389;
  double t2420;
  double t2441;
  double t2467;
  double t2581;
  double t2605;
  double t2761;
  double t2873;
  double t2907;
  double t2379;
  double t2387;
  double t2527;
  double t2939;
  double t2943;
  double t2976;
  double t3026;
  double t3027;
  double t3044;
  double t3057;
  double t3171;
  double t3226;
  double t3271;
  double t3305;
  double t3085;
  double t2483;
  double t2634;
  double t2670;
  double t2681;
  double t3067;
  double t3084;
  double t3107;
  double t3122;
  double t3129;
  double t3675;
  double t3742;
  double t4179;
  double t4180;
  double t3898;
  double t3908;
  double t3928;
  double t3980;
  double t3539;
  double t3580;
  double t3635;
  double t3750;
  double t3238;
  double t3315;
  double t3316;
  double t3792;
  double t3816;
  double t3830;
  double t4006;
  double t4049;
  double t3325;
  double t3344;
  double t3351;
  double t4209;
  double t4397;
  double t4406;
  double t4266;
  double t3321;
  double t3379;
  double t3400;
  double t4334;
  double t4350;
  double t4395;
  double t4430;
  double t4443;
  double t4450;
  double t4454;
  double t4502;
  double t4517;
  double t4540;
  double t4604;
  double t4609;
  double t4613;
  double t4619;
  double t4623;
  double t4667;
  double t4727;
  double t4772;
  double t4781;
  double t4783;
  double t4792;
  double t5321;
  double t5354;
  double t5353;
  double t5370;
  double t5392;
  double t5417;
  double t5442;
  double t5468;
  double t2054;
  double t2088;
  double t5688;
  double t631;
  double t930;
  double t5850;
  double t5872;
  double t5882;
  double t5898;
  double t5854;
  double t5904;
  double t5916;
  double t3869;
  double t3988;
  double t4044;
  double t4065;
  double t4127;
  double t4217;
  double t4232;
  double t4256;
  double t4257;
  double t4273;
  double t5994;
  double t6010;
  double t6017;
  double t5929;
  double t5941;
  double t5944;
  double t6097;
  double t6114;
  double t6123;
  double t6158;
  double t6171;
  double t6183;
  double t6233;
  double t4935;
  double t4953;
  double t4960;
  double t5113;
  double t5126;
  double t5143;
  double t2013;
  double t2237;
  double t2255;
  double t3163;
  double t3434;
  double t3519;
  double t4887;
  double t6728;
  double t6734;
  double t6787;
  double t6791;
  double t6815;
  double t7077;
  double t7096;
  double t7106;
  double t7164;
  double t7221;
  double t7242;
  double t7260;
  double t7264;
  double t7331;
  double t7352;
  double t7363;
  double t7365;
  double t7373;
  double t7383;
  double t7401;
  double t7464;
  double t7466;
  double t7477;
  double t7486;
  double t7492;
  double t7528;
  double t7563;
  double t7588;
  double t7652;
  double t7596;
  double t7677;
  double t7963;
  double t8063;
  double t8067;
  double t8105;
  double t8120;
  double t8145;
  double t8163;
  double t8164;
  t196 = Cos(var1[5]);
  t130 = Cos(var1[6]);
  t141 = Sin(var1[5]);
  t343 = Sin(var1[6]);
  t765 = t196*t130;
  t799 = -1.*t141*t343;
  t872 = t765 + t799;
  t1102 = -1.*t130;
  t1243 = 1. + t1102;
  t1278 = -0.9063*t1243;
  t1312 = -1.078185*t130;
  t1340 = t1278 + t1312;
  t639 = Sin(var1[2]);
  t1554 = -1.*t130*t141;
  t1581 = -1.*t196*t343;
  t1602 = t1554 + t1581;
  t126 = Cos(var1[2]);
  t944 = 0.4999*t141;
  t1357 = t1340*t141;
  t1366 = -0.17188499999999995*t196*t343;
  t1410 = t944 + t1357 + t1366;
  t148 = t130*t141;
  t589 = t196*t343;
  t607 = t148 + t589;
  t1668 = -1.*t196;
  t1746 = 1. + t1668;
  t1833 = -0.4999*t1746;
  t1834 = t196*t1340;
  t1860 = 0.17188499999999995*t141*t343;
  t1862 = t1833 + t1834 + t1860;
  t926 = -1.*t639*t872;
  t1437 = -1.*t1410*t872;
  t1929 = -1.*t1602*t1862;
  t1948 = t1437 + t1929;
  t2300 = t126*t1602;
  t2339 = t2300 + t926;
  t2091 = t1410*t607;
  t2105 = t872*t1862;
  t2223 = t2091 + t2105;
  t2025 = -1.*t639*t1602;
  t2389 = -0.4999*t141;
  t2420 = -1.*t1340*t141;
  t2441 = 0.17188499999999995*t196*t343;
  t2467 = t2389 + t2420 + t2441;
  t2581 = 0.4999*t196;
  t2605 = t2581 + t1834 + t1860;
  t2761 = -1.*t196*t130;
  t2873 = t141*t343;
  t2907 = t2761 + t2873;
  t2379 = 0.85216*t2339*t1948;
  t2387 = t1410*t872;
  t2527 = t1602*t1862;
  t2939 = t126*t2907;
  t2943 = t2025 + t2939;
  t2976 = 0.85216*t2223*t2943;
  t3026 = -1.*t639*t607;
  t3027 = t126*t872;
  t3044 = t3026 + t3027;
  t3057 = -1.*t1602*t1410;
  t3171 = 0.17188499999999995*t130*t141;
  t3226 = t3171 + t2441;
  t3271 = -0.17188499999999995*t196*t130;
  t3305 = t3271 + t1860;
  t3085 = -1.*t1862*t2907;
  t2483 = t2467*t872;
  t2634 = t607*t2605;
  t2670 = t2387 + t2483 + t2527 + t2634;
  t2681 = 0.85216*t2339*t2670;
  t3067 = -1.*t1602*t2467;
  t3084 = -1.*t872*t2605;
  t3107 = t3057 + t3067 + t3084 + t3085;
  t3122 = 0.85216*t3044*t3107;
  t3129 = t2379 + t2681 + t2976 + t3122;
  t3675 = t639*t2907;
  t3742 = t2300 + t3675;
  t4179 = t639*t1602;
  t4180 = t4179 + t3027;
  t3898 = -0.4999*t196;
  t3908 = -1.*t196*t1340;
  t3928 = -0.17188499999999995*t141*t343;
  t3980 = t3898 + t3908 + t3928;
  t3539 = t639*t607;
  t3580 = t3539 + t2939;
  t3635 = 0.85216*t2223*t3580;
  t3750 = 0.85216*t1948*t3742;
  t3238 = t3226*t872;
  t3315 = t607*t3305;
  t3316 = t2387 + t3238 + t2527 + t3315;
  t3792 = t126*t607;
  t3816 = t639*t872;
  t3830 = t3792 + t3816;
  t4006 = -1.*t607*t1862;
  t4049 = -1.*t1410*t2907;
  t3325 = -1.*t1602*t3226;
  t3344 = -1.*t872*t3305;
  t3351 = t3057 + t3325 + t3344 + t3085;
  t4209 = t1602*t1410;
  t4397 = 0.17188499999999995*t196*t130;
  t4406 = t4397 + t3928;
  t4266 = t1862*t2907;
  t3321 = 0.85216*t2339*t3316;
  t3379 = 0.85216*t3044*t3351;
  t3400 = t2379 + t3321 + t2976 + t3379;
  t4334 = 0.85216*t2670*t3742;
  t4350 = 0.85216*t3316*t3742;
  t4395 = -1.*t3226*t872;
  t4430 = -1.*t1602*t4406;
  t4443 = -1.*t1602*t2605;
  t4450 = -1.*t1602*t3305;
  t4454 = -1.*t2467*t2907;
  t4502 = -1.*t3226*t2907;
  t4517 = t4395 + t4430 + t4006 + t4443 + t4450 + t4049 + t4454 + t4502;
  t4540 = 0.85216*t3830*t4517;
  t4604 = 0.85216*t4180*t3107;
  t4609 = 0.85216*t4180*t3351;
  t4613 = t1602*t2467;
  t4619 = t1602*t3226;
  t4623 = t3226*t607;
  t4667 = t872*t4406;
  t4727 = t872*t2605;
  t4772 = t872*t3305;
  t4781 = t4209 + t4613 + t4619 + t4623 + t4667 + t4727 + t4772 + t4266;
  t4783 = 0.85216*t4180*t4781;
  t4792 = t3635 + t3750 + t4334 + t4350 + t4540 + t4604 + t4609 + t4783;
  t5321 = 0.85216*t4180*t1948;
  t5354 = 0.85216*t2223*t3742;
  t5353 = 0.85216*t4180*t2670;
  t5370 = 0.85216*t3830*t3107;
  t5392 = t5321 + t5353 + t5354 + t5370;
  t5417 = 0.85216*t4180*t3316;
  t5442 = 0.85216*t3830*t3351;
  t5468 = t5321 + t5417 + t5354 + t5442;
  t2054 = -1.*t126*t872;
  t2088 = t2025 + t2054;
  t5688 = -1.*t126*t1602;
  t631 = -1.*t126*t607;
  t930 = t631 + t926;
  t5850 = 0.85216*t2088*t1948;
  t5872 = -1.*t639*t2907;
  t5882 = t5688 + t5872;
  t5898 = 0.85216*t2223*t5882;
  t5854 = 0.85216*t2088*t2670;
  t5904 = 0.85216*t930*t3107;
  t5916 = t5850 + t5854 + t5898 + t5904;
  t3869 = -1.*t2467*t872;
  t3988 = -1.*t1602*t3980;
  t4044 = -2.*t1602*t2605;
  t4065 = -2.*t2467*t2907;
  t4127 = t3869 + t3988 + t4006 + t4044 + t4049 + t4065;
  t4217 = 2.*t1602*t2467;
  t4232 = t2467*t607;
  t4256 = t872*t3980;
  t4257 = 2.*t872*t2605;
  t4273 = t4209 + t4217 + t4232 + t4256 + t4257 + t4266;
  t5994 = 0.85216*t1948*t2943;
  t6010 = t3792 + t5872;
  t6017 = 0.85216*t2223*t6010;
  t5929 = 0.85216*t2088*t3316;
  t5941 = 0.85216*t930*t3351;
  t5944 = t5850 + t5929 + t5898 + t5941;
  t6097 = 0.85216*t2670*t2943;
  t6114 = 0.85216*t3316*t2943;
  t6123 = 0.85216*t3044*t4517;
  t6158 = 0.85216*t2339*t3107;
  t6171 = 0.85216*t2339*t3351;
  t6183 = 0.85216*t2339*t4781;
  t6233 = t5994 + t6097 + t6114 + t6017 + t6123 + t6158 + t6171 + t6183;
  t4935 = -2.*t1602*t3305;
  t4953 = -2.*t3226*t2907;
  t4960 = t4395 + t4430 + t4006 + t4935 + t4049 + t4953;
  t5113 = 2.*t1602*t3226;
  t5126 = 2.*t872*t3305;
  t5143 = t4209 + t5113 + t4623 + t4667 + t5126 + t4266;
  t2013 = 0.85216*t930*t1948;
  t2237 = 0.85216*t2088*t2223;
  t2255 = t2013 + t2237;
  t3163 = -0.5*var2[5]*t3129;
  t3434 = -0.5*var2[6]*t3400;
  t3519 = -0.5*var2[2]*t3129;
  t4887 = -0.5*var2[2]*t3400;
  t6728 = 1.70432*t2670*t3316;
  t6734 = 1.70432*t1948*t4517;
  t6787 = 1.70432*t3107*t3351;
  t6791 = 1.70432*t2223*t4781;
  t6815 = t6728 + t6734 + t6787 + t6791;
  t7077 = 1.70432*t2223*t2670;
  t7096 = 1.70432*t1948*t3107;
  t7106 = t7077 + t7096;
  t7164 = 1.70432*t2223*t3316;
  t7221 = 1.70432*t1948*t3351;
  t7242 = t7164 + t7221;
  t7260 = 0.4999*t343;
  t7264 = t1340*t343;
  t7331 = 0.17188499999999995*t130*t343;
  t7352 = t7260 + t7264 + t7331;
  t7363 = 0.4999*t130;
  t7365 = t1340*t130;
  t7373 = Power(t343,2);
  t7383 = -0.17188499999999995*t7373;
  t7401 = t7363 + t7365 + t7383;
  t7464 = -0.4999*t343;
  t7466 = -1.*t1340*t343;
  t7477 = -0.17188499999999995*t130*t343;
  t7486 = t7464 + t7466 + t7477;
  t7492 = 0.85216*t7486*t2670;
  t7528 = 0.85216*t7352*t4517;
  t7563 = Power(t130,2);
  t7588 = 0.17188499999999995*t7563;
  t7652 = 0.85216*t7401*t4781;
  t7596 = t7363 + t7365 + t7588;
  t7677 = 0. + t7363 + t7365 + t7588;
  t7963 = 0.85216*t7401*t2670;
  t8063 = 0.85216*t7352*t3107;
  t8067 = t7963 + t8063;
  t8105 = 0.85216*t7596*t1948;
  t8120 = 0.85216*t7486*t2223;
  t8145 = 0.85216*t7401*t3316;
  t8163 = 0.85216*t7352*t3351;
  t8164 = t8105 + t8120 + t8145 + t8163;
  p_output1[0]=var2[2]*(t3163 + t3434 - 0.5*t2255*var2[2]);
  p_output1[1]=var2[2]*(t3519 - 0.5*(t3635 + 1.70432*t2670*t3742 + t3750 + 0.85216*t3830*t4127 + 1.70432*t3107*t4180 + 0.85216*t4180*t4273)*var2[5] - 0.5*t4792*var2[6]);
  p_output1[2]=var2[2]*(t4887 - 0.5*t4792*var2[5] - 0.5*(t3635 + 1.70432*t3316*t3742 + t3750 + 1.70432*t3351*t4180 + 0.85216*t3830*t4960 + 0.85216*t4180*t5143)*var2[6]);
  p_output1[3]=-1.*(0.85216*t2223*t2339 + 0.85216*t1948*t3044)*var2[2] - 0.5*t5392*var2[5] - 0.5*t5468*var2[6];
  p_output1[4]=-0.5*t5392*var2[2];
  p_output1[5]=-0.5*t5468*var2[2];
  p_output1[6]=var2[2]*(-0.5*(0.85216*t1948*(t2054 + t3539) + 0.85216*t2223*(t3816 + t5688))*var2[2] - 0.5*t5916*var2[5] - 0.5*t5944*var2[6]);
  p_output1[7]=var2[2]*(-0.5*t5916*var2[2] - 0.5*(1.70432*t2670*t2943 + 1.70432*t2339*t3107 + 0.85216*t3044*t4127 + 0.85216*t2339*t4273 + t5994 + t6017)*var2[5] - 0.5*t6233*var2[6]);
  p_output1[8]=var2[2]*(-0.5*t5944*var2[2] - 0.5*t6233*var2[5] - 0.5*(1.70432*t2943*t3316 + 1.70432*t2339*t3351 + 0.85216*t3044*t4960 + 0.85216*t2339*t5143 + t5994 + t6017)*var2[6]);
  p_output1[9]=t3163 + t3434 - 1.*t2255*var2[2];
  p_output1[10]=t3519;
  p_output1[11]=t4887;
  p_output1[12]=var2[2]*(-0.5*(1.70432*Power(t2670,2) + 1.70432*Power(t3107,2) + 1.70432*t1948*t4127 + 1.70432*t2223*t4273)*var2[5] - 0.5*t6815*var2[6]);
  p_output1[13]=var2[2]*(-0.5*t6815*var2[5] - 0.5*(1.70432*Power(t3316,2) + 1.70432*Power(t3351,2) + 1.70432*t1948*t4960 + 1.70432*t2223*t5143)*var2[6]);
  p_output1[14]=-0.5*t7106*var2[5] - 0.5*t7242*var2[6];
  p_output1[15]=-0.5*t7106*var2[2];
  p_output1[16]=-0.5*t7242*var2[2];
  p_output1[17]=var2[2]*(-0.5*(0.85216*t4127*t7352 + 0.85216*t4273*t7401)*var2[5] - 0.5*(t7492 + t7528 + 0.85216*t3107*t7596 + t7652)*var2[6]);
  p_output1[18]=var2[2]*(-0.5*(t7492 + t7528 + t7652 + 0.85216*t3107*t7677)*var2[5] - 0.5*(0.85216*t4960*t7352 + 0.85216*t5143*t7401 + 0.85216*t1948*t7486 + 1.70432*t3316*t7486 + 0.85216*t2223*(0. - 0.4999*t130 - 1.*t130*t1340 - 0.17188499999999995*t7563) + 0.85216*t3351*t7596 + 0.85216*t3351*t7677)*var2[6]);
  p_output1[19]=-0.5*t8067*var2[5] - 0.5*t8164*var2[6];
  p_output1[20]=-0.5*t8067*var2[2];
  p_output1[21]=-0.5*t8164*var2[2];
  p_output1[22]=var2[2]*(0.07323676079999998*t4273*var2[5] + 0.07323676079999998*t4781*var2[6]);
  p_output1[23]=var2[2]*(0.07323676079999998*t4781*var2[5] + 0.07323676079999998*t5143*var2[6]);
  p_output1[24]=0.07323676079999998*t2670*var2[5] + 0.07323676079999998*t3316*var2[6];
  p_output1[25]=0.07323676079999998*t2670*var2[2];
  p_output1[26]=0.07323676079999998*t3316*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L5_J3_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L5_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
