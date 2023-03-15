/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:31:06 GMT-08:00
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
  double t513;
  double t261;
  double t359;
  double t567;
  double t827;
  double t867;
  double t952;
  double t1163;
  double t1176;
  double t1202;
  double t1228;
  double t1251;
  double t787;
  double t1422;
  double t1430;
  double t1486;
  double t96;
  double t1089;
  double t1324;
  double t1330;
  double t1337;
  double t387;
  double t577;
  double t598;
  double t1511;
  double t1512;
  double t1622;
  double t1746;
  double t1792;
  double t1827;
  double t1017;
  double t1363;
  double t1879;
  double t1885;
  double t2294;
  double t2300;
  double t2189;
  double t2201;
  double t2220;
  double t2043;
  double t2419;
  double t2424;
  double t2541;
  double t2545;
  double t2566;
  double t2648;
  double t2823;
  double t2832;
  double t2857;
  double t2328;
  double t2342;
  double t2560;
  double t2868;
  double t2871;
  double t2890;
  double t2917;
  double t2946;
  double t2950;
  double t2964;
  double t3200;
  double t3297;
  double t3357;
  double t3376;
  double t3065;
  double t2557;
  double t2782;
  double t2811;
  double t2819;
  double t2996;
  double t3014;
  double t3085;
  double t3119;
  double t3164;
  double t3830;
  double t3849;
  double t4421;
  double t4443;
  double t4213;
  double t4220;
  double t4232;
  double t4283;
  double t3757;
  double t3764;
  double t3783;
  double t3860;
  double t3313;
  double t3506;
  double t3527;
  double t4044;
  double t4047;
  double t4049;
  double t4305;
  double t4372;
  double t3564;
  double t3568;
  double t3635;
  double t4562;
  double t4898;
  double t4910;
  double t4658;
  double t3547;
  double t3641;
  double t3655;
  double t4852;
  double t4854;
  double t4888;
  double t4949;
  double t4958;
  double t5012;
  double t5018;
  double t5027;
  double t5028;
  double t5132;
  double t5167;
  double t5194;
  double t5198;
  double t5216;
  double t5243;
  double t5245;
  double t5264;
  double t5304;
  double t5353;
  double t5396;
  double t5414;
  double t5981;
  double t5993;
  double t5986;
  double t5999;
  double t6009;
  double t6015;
  double t6027;
  double t6039;
  double t2161;
  double t2162;
  double t6181;
  double t746;
  double t1027;
  double t6255;
  double t6268;
  double t6276;
  double t6302;
  double t6263;
  double t6306;
  double t6339;
  double t4142;
  double t4286;
  double t4323;
  double t4385;
  double t4397;
  double t4610;
  double t4619;
  double t4637;
  double t4653;
  double t4721;
  double t6396;
  double t6432;
  double t6438;
  double t6346;
  double t6354;
  double t6361;
  double t6542;
  double t6556;
  double t6561;
  double t6632;
  double t6656;
  double t6720;
  double t6727;
  double t5562;
  double t5596;
  double t5597;
  double t5652;
  double t5654;
  double t5662;
  double t1903;
  double t2237;
  double t2267;
  double t3182;
  double t3663;
  double t3752;
  double t5513;
  double t7363;
  double t7370;
  double t7373;
  double t7401;
  double t7403;
  double t7927;
  double t7950;
  double t7981;
  double t8067;
  double t8079;
  double t8082;
  double t8117;
  double t8120;
  double t8145;
  double t8157;
  double t8163;
  double t8164;
  double t8170;
  double t8175;
  double t8179;
  double t8187;
  double t8192;
  double t8194;
  double t8199;
  double t8201;
  double t8202;
  double t8204;
  double t8208;
  double t8213;
  double t8209;
  double t8222;
  double t8275;
  double t8276;
  double t8277;
  double t8279;
  double t8280;
  double t8281;
  double t8282;
  double t8283;
  t513 = Cos(var1[3]);
  t261 = Cos(var1[4]);
  t359 = Sin(var1[3]);
  t567 = Sin(var1[4]);
  t827 = t513*t261;
  t867 = -1.*t359*t567;
  t952 = t827 + t867;
  t1163 = -1.*t261;
  t1176 = 1. + t1163;
  t1202 = -0.9063*t1176;
  t1228 = -1.078185*t261;
  t1251 = t1202 + t1228;
  t787 = Sin(var1[2]);
  t1422 = -1.*t261*t359;
  t1430 = -1.*t513*t567;
  t1486 = t1422 + t1430;
  t96 = Cos(var1[2]);
  t1089 = 0.4999*t359;
  t1324 = t1251*t359;
  t1330 = -0.17188499999999995*t513*t567;
  t1337 = t1089 + t1324 + t1330;
  t387 = t261*t359;
  t577 = t513*t567;
  t598 = t387 + t577;
  t1511 = -1.*t513;
  t1512 = 1. + t1511;
  t1622 = -0.4999*t1512;
  t1746 = t513*t1251;
  t1792 = 0.17188499999999995*t359*t567;
  t1827 = t1622 + t1746 + t1792;
  t1017 = -1.*t787*t952;
  t1363 = -1.*t1337*t952;
  t1879 = -1.*t1486*t1827;
  t1885 = t1363 + t1879;
  t2294 = t96*t1486;
  t2300 = t2294 + t1017;
  t2189 = t1337*t598;
  t2201 = t952*t1827;
  t2220 = t2189 + t2201;
  t2043 = -1.*t787*t1486;
  t2419 = -0.4999*t359;
  t2424 = -1.*t1251*t359;
  t2541 = 0.17188499999999995*t513*t567;
  t2545 = t2419 + t2424 + t2541;
  t2566 = 0.4999*t513;
  t2648 = t2566 + t1746 + t1792;
  t2823 = -1.*t513*t261;
  t2832 = t359*t567;
  t2857 = t2823 + t2832;
  t2328 = 0.85216*t2300*t1885;
  t2342 = t1337*t952;
  t2560 = t1486*t1827;
  t2868 = t96*t2857;
  t2871 = t2043 + t2868;
  t2890 = 0.85216*t2220*t2871;
  t2917 = -1.*t787*t598;
  t2946 = t96*t952;
  t2950 = t2917 + t2946;
  t2964 = -1.*t1486*t1337;
  t3200 = 0.17188499999999995*t261*t359;
  t3297 = t3200 + t2541;
  t3357 = -0.17188499999999995*t513*t261;
  t3376 = t3357 + t1792;
  t3065 = -1.*t1827*t2857;
  t2557 = t2545*t952;
  t2782 = t598*t2648;
  t2811 = t2342 + t2557 + t2560 + t2782;
  t2819 = 0.85216*t2300*t2811;
  t2996 = -1.*t1486*t2545;
  t3014 = -1.*t952*t2648;
  t3085 = t2964 + t2996 + t3014 + t3065;
  t3119 = 0.85216*t2950*t3085;
  t3164 = t2328 + t2819 + t2890 + t3119;
  t3830 = t787*t2857;
  t3849 = t2294 + t3830;
  t4421 = t787*t1486;
  t4443 = t4421 + t2946;
  t4213 = -0.4999*t513;
  t4220 = -1.*t513*t1251;
  t4232 = -0.17188499999999995*t359*t567;
  t4283 = t4213 + t4220 + t4232;
  t3757 = t787*t598;
  t3764 = t3757 + t2868;
  t3783 = 0.85216*t2220*t3764;
  t3860 = 0.85216*t1885*t3849;
  t3313 = t3297*t952;
  t3506 = t598*t3376;
  t3527 = t2342 + t3313 + t2560 + t3506;
  t4044 = t96*t598;
  t4047 = t787*t952;
  t4049 = t4044 + t4047;
  t4305 = -1.*t598*t1827;
  t4372 = -1.*t1337*t2857;
  t3564 = -1.*t1486*t3297;
  t3568 = -1.*t952*t3376;
  t3635 = t2964 + t3564 + t3568 + t3065;
  t4562 = t1486*t1337;
  t4898 = 0.17188499999999995*t513*t261;
  t4910 = t4898 + t4232;
  t4658 = t1827*t2857;
  t3547 = 0.85216*t2300*t3527;
  t3641 = 0.85216*t2950*t3635;
  t3655 = t2328 + t3547 + t2890 + t3641;
  t4852 = 0.85216*t2811*t3849;
  t4854 = 0.85216*t3527*t3849;
  t4888 = -1.*t3297*t952;
  t4949 = -1.*t1486*t4910;
  t4958 = -1.*t1486*t2648;
  t5012 = -1.*t1486*t3376;
  t5018 = -1.*t2545*t2857;
  t5027 = -1.*t3297*t2857;
  t5028 = t4888 + t4949 + t4305 + t4958 + t5012 + t4372 + t5018 + t5027;
  t5132 = 0.85216*t4049*t5028;
  t5167 = 0.85216*t4443*t3085;
  t5194 = 0.85216*t4443*t3635;
  t5198 = t1486*t2545;
  t5216 = t1486*t3297;
  t5243 = t3297*t598;
  t5245 = t952*t4910;
  t5264 = t952*t2648;
  t5304 = t952*t3376;
  t5353 = t4562 + t5198 + t5216 + t5243 + t5245 + t5264 + t5304 + t4658;
  t5396 = 0.85216*t4443*t5353;
  t5414 = t3783 + t3860 + t4852 + t4854 + t5132 + t5167 + t5194 + t5396;
  t5981 = 0.85216*t4443*t1885;
  t5993 = 0.85216*t2220*t3849;
  t5986 = 0.85216*t4443*t2811;
  t5999 = 0.85216*t4049*t3085;
  t6009 = t5981 + t5986 + t5993 + t5999;
  t6015 = 0.85216*t4443*t3527;
  t6027 = 0.85216*t4049*t3635;
  t6039 = t5981 + t6015 + t5993 + t6027;
  t2161 = -1.*t96*t952;
  t2162 = t2043 + t2161;
  t6181 = -1.*t96*t1486;
  t746 = -1.*t96*t598;
  t1027 = t746 + t1017;
  t6255 = 0.85216*t2162*t1885;
  t6268 = -1.*t787*t2857;
  t6276 = t6181 + t6268;
  t6302 = 0.85216*t2220*t6276;
  t6263 = 0.85216*t2162*t2811;
  t6306 = 0.85216*t1027*t3085;
  t6339 = t6255 + t6263 + t6302 + t6306;
  t4142 = -1.*t2545*t952;
  t4286 = -1.*t1486*t4283;
  t4323 = -2.*t1486*t2648;
  t4385 = -2.*t2545*t2857;
  t4397 = t4142 + t4286 + t4305 + t4323 + t4372 + t4385;
  t4610 = 2.*t1486*t2545;
  t4619 = t2545*t598;
  t4637 = t952*t4283;
  t4653 = 2.*t952*t2648;
  t4721 = t4562 + t4610 + t4619 + t4637 + t4653 + t4658;
  t6396 = 0.85216*t1885*t2871;
  t6432 = t4044 + t6268;
  t6438 = 0.85216*t2220*t6432;
  t6346 = 0.85216*t2162*t3527;
  t6354 = 0.85216*t1027*t3635;
  t6361 = t6255 + t6346 + t6302 + t6354;
  t6542 = 0.85216*t2811*t2871;
  t6556 = 0.85216*t3527*t2871;
  t6561 = 0.85216*t2950*t5028;
  t6632 = 0.85216*t2300*t3085;
  t6656 = 0.85216*t2300*t3635;
  t6720 = 0.85216*t2300*t5353;
  t6727 = t6396 + t6542 + t6556 + t6438 + t6561 + t6632 + t6656 + t6720;
  t5562 = -2.*t1486*t3376;
  t5596 = -2.*t3297*t2857;
  t5597 = t4888 + t4949 + t4305 + t5562 + t4372 + t5596;
  t5652 = 2.*t1486*t3297;
  t5654 = 2.*t952*t3376;
  t5662 = t4562 + t5652 + t5243 + t5245 + t5654 + t4658;
  t1903 = 0.85216*t1027*t1885;
  t2237 = 0.85216*t2162*t2220;
  t2267 = t1903 + t2237;
  t3182 = -0.5*var2[3]*t3164;
  t3663 = -0.5*var2[4]*t3655;
  t3752 = -0.5*var2[2]*t3164;
  t5513 = -0.5*var2[2]*t3655;
  t7363 = 1.70432*t2811*t3527;
  t7370 = 1.70432*t1885*t5028;
  t7373 = 1.70432*t3085*t3635;
  t7401 = 1.70432*t2220*t5353;
  t7403 = t7363 + t7370 + t7373 + t7401;
  t7927 = 1.70432*t2220*t2811;
  t7950 = 1.70432*t1885*t3085;
  t7981 = t7927 + t7950;
  t8067 = 1.70432*t2220*t3527;
  t8079 = 1.70432*t1885*t3635;
  t8082 = t8067 + t8079;
  t8117 = 0.4999*t567;
  t8120 = t1251*t567;
  t8145 = 0.17188499999999995*t261*t567;
  t8157 = t8117 + t8120 + t8145;
  t8163 = 0.4999*t261;
  t8164 = t1251*t261;
  t8170 = Power(t567,2);
  t8175 = -0.17188499999999995*t8170;
  t8179 = t8163 + t8164 + t8175;
  t8187 = -0.4999*t567;
  t8192 = -1.*t1251*t567;
  t8194 = -0.17188499999999995*t261*t567;
  t8199 = t8187 + t8192 + t8194;
  t8201 = 0.85216*t8199*t2811;
  t8202 = 0.85216*t8157*t5028;
  t8204 = Power(t261,2);
  t8208 = 0.17188499999999995*t8204;
  t8213 = 0.85216*t8179*t5353;
  t8209 = t8163 + t8164 + t8208;
  t8222 = 0. + t8163 + t8164 + t8208;
  t8275 = 0.85216*t8179*t2811;
  t8276 = 0.85216*t8157*t3085;
  t8277 = t8275 + t8276;
  t8279 = 0.85216*t8209*t1885;
  t8280 = 0.85216*t8199*t2220;
  t8281 = 0.85216*t8179*t3527;
  t8282 = 0.85216*t8157*t3635;
  t8283 = t8279 + t8280 + t8281 + t8282;
  p_output1[0]=var2[2]*(t3182 + t3663 - 0.5*t2267*var2[2]);
  p_output1[1]=var2[2]*(t3752 - 0.5*(t3783 + 1.70432*t2811*t3849 + t3860 + 0.85216*t4049*t4397 + 1.70432*t3085*t4443 + 0.85216*t4443*t4721)*var2[3] - 0.5*t5414*var2[4]);
  p_output1[2]=var2[2]*(t5513 - 0.5*t5414*var2[3] - 0.5*(t3783 + 1.70432*t3527*t3849 + t3860 + 1.70432*t3635*t4443 + 0.85216*t4049*t5597 + 0.85216*t4443*t5662)*var2[4]);
  p_output1[3]=-1.*(0.85216*t2220*t2300 + 0.85216*t1885*t2950)*var2[2] - 0.5*t6009*var2[3] - 0.5*t6039*var2[4];
  p_output1[4]=-0.5*t6009*var2[2];
  p_output1[5]=-0.5*t6039*var2[2];
  p_output1[6]=var2[2]*(-0.5*(0.85216*t1885*(t2161 + t3757) + 0.85216*t2220*(t4047 + t6181))*var2[2] - 0.5*t6339*var2[3] - 0.5*t6361*var2[4]);
  p_output1[7]=var2[2]*(-0.5*t6339*var2[2] - 0.5*(1.70432*t2811*t2871 + 1.70432*t2300*t3085 + 0.85216*t2950*t4397 + 0.85216*t2300*t4721 + t6396 + t6438)*var2[3] - 0.5*t6727*var2[4]);
  p_output1[8]=var2[2]*(-0.5*t6361*var2[2] - 0.5*t6727*var2[3] - 0.5*(1.70432*t2871*t3527 + 1.70432*t2300*t3635 + 0.85216*t2950*t5597 + 0.85216*t2300*t5662 + t6396 + t6438)*var2[4]);
  p_output1[9]=t3182 + t3663 - 1.*t2267*var2[2];
  p_output1[10]=t3752;
  p_output1[11]=t5513;
  p_output1[12]=var2[2]*(-0.5*(1.70432*Power(t2811,2) + 1.70432*Power(t3085,2) + 1.70432*t1885*t4397 + 1.70432*t2220*t4721)*var2[3] - 0.5*t7403*var2[4]);
  p_output1[13]=var2[2]*(-0.5*t7403*var2[3] - 0.5*(1.70432*Power(t3527,2) + 1.70432*Power(t3635,2) + 1.70432*t1885*t5597 + 1.70432*t2220*t5662)*var2[4]);
  p_output1[14]=-0.5*t7981*var2[3] - 0.5*t8082*var2[4];
  p_output1[15]=-0.5*t7981*var2[2];
  p_output1[16]=-0.5*t8082*var2[2];
  p_output1[17]=var2[2]*(-0.5*(0.85216*t4397*t8157 + 0.85216*t4721*t8179)*var2[3] - 0.5*(t8201 + t8202 + 0.85216*t3085*t8209 + t8213)*var2[4]);
  p_output1[18]=var2[2]*(-0.5*(t8201 + t8202 + t8213 + 0.85216*t3085*t8222)*var2[3] - 0.5*(0.85216*t5597*t8157 + 0.85216*t5662*t8179 + 0.85216*t1885*t8199 + 1.70432*t3527*t8199 + 0.85216*t2220*(0. - 0.4999*t261 - 1.*t1251*t261 - 0.17188499999999995*t8204) + 0.85216*t3635*t8209 + 0.85216*t3635*t8222)*var2[4]);
  p_output1[19]=-0.5*t8277*var2[3] - 0.5*t8283*var2[4];
  p_output1[20]=-0.5*t8277*var2[2];
  p_output1[21]=-0.5*t8283*var2[2];
  p_output1[22]=var2[2]*(0.07323676079999998*t4721*var2[3] + 0.07323676079999998*t5353*var2[4]);
  p_output1[23]=var2[2]*(0.07323676079999998*t5353*var2[3] + 0.07323676079999998*t5662*var2[4]);
  p_output1[24]=0.07323676079999998*t2811*var2[3] + 0.07323676079999998*t3527*var2[4];
  p_output1[25]=0.07323676079999998*t2811*var2[2];
  p_output1[26]=0.07323676079999998*t3527*var2[2];
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

#include "J_Ce1_vec_L3_J3_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L3_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
