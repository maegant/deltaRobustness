/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:50 GMT-08:00
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
  double t391;
  double t175;
  double t226;
  double t428;
  double t699;
  double t869;
  double t879;
  double t1191;
  double t1356;
  double t1362;
  double t1398;
  double t1402;
  double t666;
  double t1685;
  double t1769;
  double t1802;
  double t56;
  double t1161;
  double t1446;
  double t1475;
  double t1498;
  double t275;
  double t454;
  double t555;
  double t1839;
  double t1850;
  double t1883;
  double t1888;
  double t1964;
  double t2032;
  double t2286;
  double t1562;
  double t2039;
  double t2154;
  double t2312;
  double t2362;
  double t2436;
  double t1019;
  double t2780;
  double t2796;
  double t2214;
  double t2842;
  double t2904;
  double t2940;
  double t2984;
  double t3100;
  double t3177;
  double t3294;
  double t3302;
  double t3317;
  double t2287;
  double t2826;
  double t2992;
  double t2996;
  double t3213;
  double t3222;
  double t2607;
  double t591;
  double t1028;
  double t3545;
  double t3551;
  double t3558;
  double t3658;
  double t3674;
  double t2810;
  double t3347;
  double t3370;
  double t3392;
  double t3467;
  double t3480;
  double t3498;
  double t4143;
  double t4145;
  double t4187;
  double t4195;
  double t3766;
  double t4177;
  double t4214;
  double t4220;
  double t3785;
  double t3798;
  double t3883;
  double t4244;
  double t4277;
  double t4291;
  double t2164;
  double t2440;
  double t2457;
  double t4391;
  double t4396;
  double t4448;
  double t3278;
  double t3682;
  double t3703;
  double t3751;
  double t3772;
  double t3901;
  double t3971;
  double t4068;
  double t4085;
  double t4093;
  double t4772;
  double t4778;
  double t4795;
  double t4803;
  double t4670;
  double t4722;
  double t4767;
  double t4808;
  double t4813;
  double t4818;
  double t4831;
  double t2522;
  double t5401;
  double t5409;
  double t2613;
  double t4884;
  double t4941;
  double t5017;
  double t5037;
  double t5074;
  double t5083;
  double t5131;
  double t5566;
  double t5585;
  double t5449;
  double t4844;
  double t4853;
  double t4859;
  double t4870;
  double t6020;
  double t6038;
  double t5145;
  double t5195;
  double t5246;
  double t5257;
  double t5285;
  double t5947;
  double t5972;
  double t6018;
  double t6045;
  double t6055;
  double t6066;
  double t6079;
  double t5364;
  double t5397;
  double t5411;
  double t5457;
  double t6251;
  double t6252;
  double t6258;
  double t6259;
  double t6262;
  double t6264;
  double t6277;
  double t5656;
  double t5734;
  double t5737;
  double t6703;
  double t6708;
  double t6719;
  double t6732;
  double t6737;
  double t6762;
  double t6765;
  double t6787;
  double t4221;
  double t4307;
  double t4313;
  double t4335;
  double t4338;
  double t4343;
  double t4348;
  double t4352;
  double t4357;
  double t4366;
  double t6096;
  double t6122;
  double t6150;
  double t6191;
  double t6212;
  double t6241;
  double t6283;
  double t6290;
  double t6292;
  double t6314;
  double t6334;
  double t6342;
  double t6369;
  double t6377;
  double t6410;
  double t6414;
  double t6423;
  double t6426;
  double t6486;
  double t6491;
  double t6492;
  double t6559;
  double t6571;
  double t6593;
  double t6601;
  double t6615;
  double t6629;
  double t6630;
  double t6652;
  double t6671;
  double t6680;
  double t6682;
  double t6927;
  double t6297;
  double t7032;
  double t7033;
  double t7034;
  double t7075;
  double t7077;
  double t7121;
  double t7280;
  double t7283;
  double t7284;
  double t7302;
  double t7307;
  double t7311;
  double t7312;
  double t7313;
  t391 = Cos(var1[5]);
  t175 = Cos(var1[6]);
  t226 = Sin(var1[5]);
  t428 = Sin(var1[6]);
  t699 = t391*t175;
  t869 = -1.*t226*t428;
  t879 = t699 + t869;
  t1191 = -1.*t175;
  t1356 = 1. + t1191;
  t1362 = -0.9063*t1356;
  t1398 = -1.078185*t175;
  t1402 = t1362 + t1398;
  t666 = Sin(var1[2]);
  t1685 = -1.*t175*t226;
  t1769 = -1.*t391*t428;
  t1802 = t1685 + t1769;
  t56 = Cos(var1[2]);
  t1161 = 0.4999*t226;
  t1446 = t1402*t226;
  t1475 = -0.17188499999999995*t391*t428;
  t1498 = t1161 + t1446 + t1475;
  t275 = t175*t226;
  t454 = t391*t428;
  t555 = t275 + t454;
  t1839 = -1.*t391;
  t1850 = 1. + t1839;
  t1883 = -0.4999*t1850;
  t1888 = t391*t1402;
  t1964 = 0.17188499999999995*t226*t428;
  t2032 = t1883 + t1888 + t1964;
  t2286 = -1.*t56*t879;
  t1562 = -1.*t1498*t879;
  t2039 = -1.*t1802*t2032;
  t2154 = t1562 + t2039;
  t2312 = t1498*t555;
  t2362 = t879*t2032;
  t2436 = t2312 + t2362;
  t1019 = -1.*t666*t879;
  t2780 = t56*t1802;
  t2796 = t2780 + t1019;
  t2214 = -1.*t666*t1802;
  t2842 = -0.4999*t226;
  t2904 = -1.*t1402*t226;
  t2940 = 0.17188499999999995*t391*t428;
  t2984 = t2842 + t2904 + t2940;
  t3100 = 0.4999*t391;
  t3177 = t3100 + t1888 + t1964;
  t3294 = -1.*t391*t175;
  t3302 = t226*t428;
  t3317 = t3294 + t3302;
  t2287 = t2214 + t2286;
  t2826 = t1498*t879;
  t2992 = t2984*t879;
  t2996 = t1802*t2032;
  t3213 = t555*t3177;
  t3222 = t2826 + t2992 + t2996 + t3213;
  t2607 = -1.*t56*t1802;
  t591 = -1.*t56*t555;
  t1028 = t591 + t1019;
  t3545 = -1.*t1802*t1498;
  t3551 = -1.*t1802*t2984;
  t3558 = -1.*t879*t3177;
  t3658 = -1.*t2032*t3317;
  t3674 = t3545 + t3551 + t3558 + t3658;
  t2810 = 0.85216*t2796*t2154;
  t3347 = t56*t3317;
  t3370 = t2214 + t3347;
  t3392 = 0.85216*t2436*t3370;
  t3467 = -1.*t666*t555;
  t3480 = t56*t879;
  t3498 = t3467 + t3480;
  t4143 = 0.17188499999999995*t175*t226;
  t4145 = t4143 + t2940;
  t4187 = -0.17188499999999995*t391*t175;
  t4195 = t4187 + t1964;
  t3766 = 0.85216*t2287*t2154;
  t4177 = t4145*t879;
  t4214 = t555*t4195;
  t4220 = t2826 + t4177 + t2996 + t4214;
  t3785 = -1.*t666*t3317;
  t3798 = t2607 + t3785;
  t3883 = 0.85216*t2436*t3798;
  t4244 = -1.*t1802*t4145;
  t4277 = -1.*t879*t4195;
  t4291 = t3545 + t4244 + t4277 + t3658;
  t2164 = 0.85216*t1028*t2154;
  t2440 = 0.85216*t2287*t2436;
  t2457 = t2164 + t2440;
  t4391 = 0.85216*t3498*t2154;
  t4396 = 0.85216*t2796*t2436;
  t4448 = t4391 + t4396;
  t3278 = 0.85216*t2796*t3222;
  t3682 = 0.85216*t3498*t3674;
  t3703 = t2810 + t3278 + t3392 + t3682;
  t3751 = 0.5*var2[0]*t3703;
  t3772 = 0.85216*t2287*t3222;
  t3901 = 0.85216*t1028*t3674;
  t3971 = t3766 + t3772 + t3883 + t3901;
  t4068 = 0.5*var2[1]*t3971;
  t4085 = t3751 + t4068;
  t4093 = var2[2]*t4085;
  t4772 = -0.4999*t391;
  t4778 = -1.*t391*t1402;
  t4795 = -0.17188499999999995*t226*t428;
  t4803 = t4772 + t4778 + t4795;
  t4670 = t1802*t1498;
  t4722 = 2.*t1802*t2984;
  t4767 = t2984*t555;
  t4808 = t879*t4803;
  t4813 = 2.*t879*t3177;
  t4818 = t2032*t3317;
  t4831 = t4670 + t4722 + t4767 + t4808 + t4813 + t4818;
  t2522 = t666*t555;
  t5401 = t666*t3317;
  t5409 = t2780 + t5401;
  t2613 = t666*t879;
  t4884 = -1.*t2984*t879;
  t4941 = -1.*t1802*t4803;
  t5017 = -1.*t555*t2032;
  t5037 = -2.*t1802*t3177;
  t5074 = -1.*t1498*t3317;
  t5083 = -2.*t2984*t3317;
  t5131 = t4884 + t4941 + t5017 + t5037 + t5074 + t5083;
  t5566 = t666*t1802;
  t5585 = t5566 + t3480;
  t5449 = t56*t555;
  t4844 = 0.4999*t428;
  t4853 = t1402*t428;
  t4859 = 0.17188499999999995*t175*t428;
  t4870 = t4844 + t4853 + t4859;
  t6020 = 0.17188499999999995*t391*t175;
  t6038 = t6020 + t4795;
  t5145 = 0.4999*t175;
  t5195 = t1402*t175;
  t5246 = Power(t428,2);
  t5257 = -0.17188499999999995*t5246;
  t5285 = t5145 + t5195 + t5257;
  t5947 = t1802*t2984;
  t5972 = t1802*t4145;
  t6018 = t4145*t555;
  t6045 = t879*t6038;
  t6055 = t879*t3177;
  t6066 = t879*t4195;
  t6079 = t4670 + t5947 + t5972 + t6018 + t6045 + t6055 + t6066 + t4818;
  t5364 = t2522 + t3347;
  t5397 = 0.85216*t2436*t5364;
  t5411 = 0.85216*t2154*t5409;
  t5457 = t5449 + t2613;
  t6251 = -1.*t4145*t879;
  t6252 = -1.*t1802*t6038;
  t6258 = -1.*t1802*t3177;
  t6259 = -1.*t1802*t4195;
  t6262 = -1.*t2984*t3317;
  t6264 = -1.*t4145*t3317;
  t6277 = t6251 + t6252 + t5017 + t6258 + t6259 + t5074 + t6262 + t6264;
  t5656 = 0.85216*t2154*t3370;
  t5734 = t5449 + t3785;
  t5737 = 0.85216*t2436*t5734;
  t6703 = 0.85216*t5585*t2154;
  t6708 = 0.85216*t5585*t3222;
  t6719 = 0.85216*t2436*t5409;
  t6732 = 0.85216*t5457*t3674;
  t6737 = t6703 + t6708 + t6719 + t6732;
  t6762 = 0.85216*t5285*t3222;
  t6765 = 0.85216*t4870*t3674;
  t6787 = t6762 + t6765;
  t4221 = 0.85216*t2796*t4220;
  t4307 = 0.85216*t3498*t4291;
  t4313 = t2810 + t4221 + t3392 + t4307;
  t4335 = 0.5*var2[0]*t4313;
  t4338 = 0.85216*t2287*t4220;
  t4343 = 0.85216*t1028*t4291;
  t4348 = t3766 + t4338 + t3883 + t4343;
  t4352 = 0.5*var2[1]*t4348;
  t4357 = t4335 + t4352;
  t4366 = var2[2]*t4357;
  t6096 = -0.07323676079999998*var2[6]*t6079;
  t6122 = -0.4999*t428;
  t6150 = -1.*t1402*t428;
  t6191 = -0.17188499999999995*t175*t428;
  t6212 = t6122 + t6150 + t6191;
  t6241 = 0.85216*t6212*t3222;
  t6283 = 0.85216*t4870*t6277;
  t6290 = Power(t175,2);
  t6292 = 0.17188499999999995*t6290;
  t6314 = 0.85216*t5285*t6079;
  t6334 = 0.85216*t3222*t5409;
  t6342 = 0.85216*t4220*t5409;
  t6369 = 0.85216*t5457*t6277;
  t6377 = 0.85216*t5585*t3674;
  t6410 = 0.85216*t5585*t4291;
  t6414 = 0.85216*t5585*t6079;
  t6423 = t5397 + t5411 + t6334 + t6342 + t6369 + t6377 + t6410 + t6414;
  t6426 = 0.5*var2[0]*t6423;
  t6486 = 0.85216*t3222*t3370;
  t6491 = 0.85216*t4220*t3370;
  t6492 = 0.85216*t3498*t6277;
  t6559 = 0.85216*t2796*t3674;
  t6571 = 0.85216*t2796*t4291;
  t6593 = 0.85216*t2796*t6079;
  t6601 = t5656 + t6486 + t6491 + t5737 + t6492 + t6559 + t6571 + t6593;
  t6615 = 0.5*var2[1]*t6601;
  t6629 = 1.70432*t3222*t4220;
  t6630 = 1.70432*t2154*t6277;
  t6652 = 1.70432*t3674*t4291;
  t6671 = 1.70432*t2436*t6079;
  t6680 = t6629 + t6630 + t6652 + t6671;
  t6682 = 0.5*var2[2]*t6680;
  t6927 = t5145 + t5195 + t6292;
  t6297 = 0. + t5145 + t5195 + t6292;
  t7032 = 2.*t1802*t4145;
  t7033 = 2.*t879*t4195;
  t7034 = t4670 + t7032 + t6018 + t6045 + t7033 + t4818;
  t7075 = -2.*t1802*t4195;
  t7077 = -2.*t4145*t3317;
  t7121 = t6251 + t6252 + t5017 + t7075 + t5074 + t7077;
  t7280 = 0.85216*t5585*t4220;
  t7283 = 0.85216*t5457*t4291;
  t7284 = t6703 + t7280 + t6719 + t7283;
  t7302 = 0.85216*t6927*t2154;
  t7307 = 0.85216*t6212*t2436;
  t7311 = 0.85216*t5285*t4220;
  t7312 = 0.85216*t4870*t4291;
  t7313 = t7302 + t7307 + t7311 + t7312;
  p_output1[0]=(0.5*t2457*var2[0] + 0.5*(0.85216*t2154*(t2286 + t2522) + 0.85216*t2436*(t2607 + t2613))*var2[1])*var2[2];
  p_output1[1]=t4093;
  p_output1[2]=t4366;
  p_output1[3]=0.5*t4448*var2[2];
  p_output1[4]=0.5*t2457*var2[2];
  p_output1[5]=0.5*t4448*var2[0] + 0.5*t2457*var2[1];
  p_output1[6]=t4093;
  p_output1[7]=var2[2]*(0.5*(t5397 + 1.70432*t3222*t5409 + t5411 + 0.85216*t5131*t5457 + 1.70432*t3674*t5585 + 0.85216*t4831*t5585)*var2[0] + 0.5*(1.70432*t3222*t3370 + 1.70432*t2796*t3674 + 0.85216*t2796*t4831 + 0.85216*t3498*t5131 + t5656 + t5737)*var2[1] + 0.5*(1.70432*Power(t3222,2) + 1.70432*Power(t3674,2) + 1.70432*t2436*t4831 + 1.70432*t2154*t5131)*var2[2] + 0.5*(0.85216*t4870*t5131 + 0.85216*t4831*t5285)*var2[5] - 0.07323676079999998*t4831*var2[6]);
  p_output1[8]=var2[2]*(t6096 + t6426 + t6615 + t6682 + 0.5*(t6241 + t6283 + 0.85216*t3674*t6297 + t6314)*var2[5]);
  p_output1[9]=0.5*t6737*var2[2];
  p_output1[10]=0.5*t3703*var2[2];
  p_output1[11]=0.5*t6737*var2[0] + 0.5*t3703*var2[1] + (1.70432*t2436*t3222 + 1.70432*t2154*t3674)*var2[2] + 0.5*t6787*var2[5] - 0.07323676079999998*t3222*var2[6];
  p_output1[12]=0.5*t6787*var2[2];
  p_output1[13]=-0.07323676079999998*t3222*var2[2];
  p_output1[14]=t4366;
  p_output1[15]=var2[2]*(t6096 + t6426 + t6615 + t6682 + 0.5*(t6241 + t6283 + t6314 + 0.85216*t3674*t6927)*var2[5]);
  p_output1[16]=var2[2]*(0.5*(t5397 + 1.70432*t4220*t5409 + t5411 + 1.70432*t4291*t5585 + 0.85216*t5585*t7034 + 0.85216*t5457*t7121)*var2[0] + 0.5*(1.70432*t3370*t4220 + 1.70432*t2796*t4291 + t5656 + t5737 + 0.85216*t2796*t7034 + 0.85216*t3498*t7121)*var2[1] + 0.5*(1.70432*Power(t4220,2) + 1.70432*Power(t4291,2) + 1.70432*t2436*t7034 + 1.70432*t2154*t7121)*var2[2] + 0.5*(0.85216*t2154*t6212 + 1.70432*t4220*t6212 + 0.85216*t2436*(0. - 0.4999*t175 - 1.*t1402*t175 - 0.17188499999999995*t6290) + 0.85216*t4291*t6297 + 0.85216*t4291*t6927 + 0.85216*t5285*t7034 + 0.85216*t4870*t7121)*var2[5] - 0.07323676079999998*t7034*var2[6]);
  p_output1[17]=0.5*t7284*var2[2];
  p_output1[18]=0.5*t4313*var2[2];
  p_output1[19]=0.5*t7284*var2[0] + 0.5*t4313*var2[1] + (1.70432*t2436*t4220 + 1.70432*t2154*t4291)*var2[2] + 0.5*t7313*var2[5] - 0.07323676079999998*t4220*var2[6];
  p_output1[20]=0.5*t7313*var2[2];
  p_output1[21]=-0.07323676079999998*t4220*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L5_J3_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L5_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
