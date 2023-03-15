/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:26 GMT-08:00
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
  double t538;
  double t462;
  double t484;
  double t565;
  double t951;
  double t1022;
  double t1081;
  double t1389;
  double t1535;
  double t1558;
  double t1582;
  double t1598;
  double t888;
  double t1717;
  double t1830;
  double t1858;
  double t108;
  double t1384;
  double t1657;
  double t1673;
  double t1690;
  double t485;
  double t642;
  double t688;
  double t1897;
  double t1909;
  double t1928;
  double t1934;
  double t1949;
  double t2000;
  double t2131;
  double t1703;
  double t2027;
  double t2038;
  double t2211;
  double t2261;
  double t2262;
  double t1239;
  double t2637;
  double t2653;
  double t2111;
  double t2720;
  double t2723;
  double t2724;
  double t2768;
  double t2796;
  double t2825;
  double t2859;
  double t2878;
  double t2922;
  double t2170;
  double t2688;
  double t2776;
  double t2783;
  double t2843;
  double t2844;
  double t2456;
  double t848;
  double t1263;
  double t3045;
  double t3075;
  double t3077;
  double t3088;
  double t3149;
  double t2665;
  double t2930;
  double t2967;
  double t3009;
  double t3032;
  double t3037;
  double t3043;
  double t3347;
  double t3352;
  double t3386;
  double t3396;
  double t3194;
  double t3370;
  double t3398;
  double t3402;
  double t3223;
  double t3277;
  double t3278;
  double t3437;
  double t3459;
  double t3461;
  double t2085;
  double t2283;
  double t2290;
  double t3678;
  double t3729;
  double t3763;
  double t2851;
  double t3150;
  double t3167;
  double t3176;
  double t3222;
  double t3280;
  double t3282;
  double t3303;
  double t3311;
  double t3334;
  double t4154;
  double t4170;
  double t4219;
  double t4229;
  double t4043;
  double t4056;
  double t4129;
  double t4294;
  double t4324;
  double t4328;
  double t4330;
  double t2355;
  double t4786;
  double t4808;
  double t2457;
  double t4419;
  double t4434;
  double t4436;
  double t4464;
  double t4470;
  double t4486;
  double t4525;
  double t4878;
  double t4879;
  double t4843;
  double t4348;
  double t4357;
  double t4391;
  double t4405;
  double t5420;
  double t5447;
  double t4576;
  double t4597;
  double t4634;
  double t4670;
  double t4696;
  double t5333;
  double t5411;
  double t5413;
  double t5457;
  double t5470;
  double t5535;
  double t5541;
  double t4772;
  double t4778;
  double t4813;
  double t4853;
  double t5625;
  double t5632;
  double t5693;
  double t5712;
  double t5730;
  double t5776;
  double t5777;
  double t4944;
  double t5017;
  double t5037;
  double t6391;
  double t6414;
  double t6423;
  double t6466;
  double t6477;
  double t6493;
  double t6522;
  double t6567;
  double t3433;
  double t3467;
  double t3525;
  double t3550;
  double t3558;
  double t3577;
  double t3585;
  double t3596;
  double t3602;
  double t3638;
  double t5566;
  double t5567;
  double t5579;
  double t5582;
  double t5587;
  double t5610;
  double t5815;
  double t5817;
  double t5830;
  double t5885;
  double t5902;
  double t5906;
  double t5910;
  double t5922;
  double t5923;
  double t5930;
  double t5931;
  double t5971;
  double t5973;
  double t5998;
  double t6011;
  double t6018;
  double t6020;
  double t6096;
  double t6153;
  double t6254;
  double t6258;
  double t6259;
  double t6264;
  double t6300;
  double t6325;
  double t6357;
  double t6680;
  double t5856;
  double t6701;
  double t6707;
  double t6708;
  double t6772;
  double t6786;
  double t6787;
  double t7049;
  double t7051;
  double t7061;
  double t7075;
  double t7077;
  double t7102;
  double t7115;
  double t7118;
  t538 = Cos(var1[3]);
  t462 = Cos(var1[4]);
  t484 = Sin(var1[3]);
  t565 = Sin(var1[4]);
  t951 = t538*t462;
  t1022 = -1.*t484*t565;
  t1081 = t951 + t1022;
  t1389 = -1.*t462;
  t1535 = 1. + t1389;
  t1558 = -0.9063*t1535;
  t1582 = -1.078185*t462;
  t1598 = t1558 + t1582;
  t888 = Sin(var1[2]);
  t1717 = -1.*t462*t484;
  t1830 = -1.*t538*t565;
  t1858 = t1717 + t1830;
  t108 = Cos(var1[2]);
  t1384 = 0.4999*t484;
  t1657 = t1598*t484;
  t1673 = -0.17188499999999995*t538*t565;
  t1690 = t1384 + t1657 + t1673;
  t485 = t462*t484;
  t642 = t538*t565;
  t688 = t485 + t642;
  t1897 = -1.*t538;
  t1909 = 1. + t1897;
  t1928 = -0.4999*t1909;
  t1934 = t538*t1598;
  t1949 = 0.17188499999999995*t484*t565;
  t2000 = t1928 + t1934 + t1949;
  t2131 = -1.*t108*t1081;
  t1703 = -1.*t1690*t1081;
  t2027 = -1.*t1858*t2000;
  t2038 = t1703 + t2027;
  t2211 = t1690*t688;
  t2261 = t1081*t2000;
  t2262 = t2211 + t2261;
  t1239 = -1.*t888*t1081;
  t2637 = t108*t1858;
  t2653 = t2637 + t1239;
  t2111 = -1.*t888*t1858;
  t2720 = -0.4999*t484;
  t2723 = -1.*t1598*t484;
  t2724 = 0.17188499999999995*t538*t565;
  t2768 = t2720 + t2723 + t2724;
  t2796 = 0.4999*t538;
  t2825 = t2796 + t1934 + t1949;
  t2859 = -1.*t538*t462;
  t2878 = t484*t565;
  t2922 = t2859 + t2878;
  t2170 = t2111 + t2131;
  t2688 = t1690*t1081;
  t2776 = t2768*t1081;
  t2783 = t1858*t2000;
  t2843 = t688*t2825;
  t2844 = t2688 + t2776 + t2783 + t2843;
  t2456 = -1.*t108*t1858;
  t848 = -1.*t108*t688;
  t1263 = t848 + t1239;
  t3045 = -1.*t1858*t1690;
  t3075 = -1.*t1858*t2768;
  t3077 = -1.*t1081*t2825;
  t3088 = -1.*t2000*t2922;
  t3149 = t3045 + t3075 + t3077 + t3088;
  t2665 = 0.85216*t2653*t2038;
  t2930 = t108*t2922;
  t2967 = t2111 + t2930;
  t3009 = 0.85216*t2262*t2967;
  t3032 = -1.*t888*t688;
  t3037 = t108*t1081;
  t3043 = t3032 + t3037;
  t3347 = 0.17188499999999995*t462*t484;
  t3352 = t3347 + t2724;
  t3386 = -0.17188499999999995*t538*t462;
  t3396 = t3386 + t1949;
  t3194 = 0.85216*t2170*t2038;
  t3370 = t3352*t1081;
  t3398 = t688*t3396;
  t3402 = t2688 + t3370 + t2783 + t3398;
  t3223 = -1.*t888*t2922;
  t3277 = t2456 + t3223;
  t3278 = 0.85216*t2262*t3277;
  t3437 = -1.*t1858*t3352;
  t3459 = -1.*t1081*t3396;
  t3461 = t3045 + t3437 + t3459 + t3088;
  t2085 = 0.85216*t1263*t2038;
  t2283 = 0.85216*t2170*t2262;
  t2290 = t2085 + t2283;
  t3678 = 0.85216*t3043*t2038;
  t3729 = 0.85216*t2653*t2262;
  t3763 = t3678 + t3729;
  t2851 = 0.85216*t2653*t2844;
  t3150 = 0.85216*t3043*t3149;
  t3167 = t2665 + t2851 + t3009 + t3150;
  t3176 = 0.5*var2[0]*t3167;
  t3222 = 0.85216*t2170*t2844;
  t3280 = 0.85216*t1263*t3149;
  t3282 = t3194 + t3222 + t3278 + t3280;
  t3303 = 0.5*var2[1]*t3282;
  t3311 = t3176 + t3303;
  t3334 = var2[2]*t3311;
  t4154 = -0.4999*t538;
  t4170 = -1.*t538*t1598;
  t4219 = -0.17188499999999995*t484*t565;
  t4229 = t4154 + t4170 + t4219;
  t4043 = t1858*t1690;
  t4056 = 2.*t1858*t2768;
  t4129 = t2768*t688;
  t4294 = t1081*t4229;
  t4324 = 2.*t1081*t2825;
  t4328 = t2000*t2922;
  t4330 = t4043 + t4056 + t4129 + t4294 + t4324 + t4328;
  t2355 = t888*t688;
  t4786 = t888*t2922;
  t4808 = t2637 + t4786;
  t2457 = t888*t1081;
  t4419 = -1.*t2768*t1081;
  t4434 = -1.*t1858*t4229;
  t4436 = -1.*t688*t2000;
  t4464 = -2.*t1858*t2825;
  t4470 = -1.*t1690*t2922;
  t4486 = -2.*t2768*t2922;
  t4525 = t4419 + t4434 + t4436 + t4464 + t4470 + t4486;
  t4878 = t888*t1858;
  t4879 = t4878 + t3037;
  t4843 = t108*t688;
  t4348 = 0.4999*t565;
  t4357 = t1598*t565;
  t4391 = 0.17188499999999995*t462*t565;
  t4405 = t4348 + t4357 + t4391;
  t5420 = 0.17188499999999995*t538*t462;
  t5447 = t5420 + t4219;
  t4576 = 0.4999*t462;
  t4597 = t1598*t462;
  t4634 = Power(t565,2);
  t4670 = -0.17188499999999995*t4634;
  t4696 = t4576 + t4597 + t4670;
  t5333 = t1858*t2768;
  t5411 = t1858*t3352;
  t5413 = t3352*t688;
  t5457 = t1081*t5447;
  t5470 = t1081*t2825;
  t5535 = t1081*t3396;
  t5541 = t4043 + t5333 + t5411 + t5413 + t5457 + t5470 + t5535 + t4328;
  t4772 = t2355 + t2930;
  t4778 = 0.85216*t2262*t4772;
  t4813 = 0.85216*t2038*t4808;
  t4853 = t4843 + t2457;
  t5625 = -1.*t3352*t1081;
  t5632 = -1.*t1858*t5447;
  t5693 = -1.*t1858*t2825;
  t5712 = -1.*t1858*t3396;
  t5730 = -1.*t2768*t2922;
  t5776 = -1.*t3352*t2922;
  t5777 = t5625 + t5632 + t4436 + t5693 + t5712 + t4470 + t5730 + t5776;
  t4944 = 0.85216*t2038*t2967;
  t5017 = t4843 + t3223;
  t5037 = 0.85216*t2262*t5017;
  t6391 = 0.85216*t4879*t2038;
  t6414 = 0.85216*t4879*t2844;
  t6423 = 0.85216*t2262*t4808;
  t6466 = 0.85216*t4853*t3149;
  t6477 = t6391 + t6414 + t6423 + t6466;
  t6493 = 0.85216*t4696*t2844;
  t6522 = 0.85216*t4405*t3149;
  t6567 = t6493 + t6522;
  t3433 = 0.85216*t2653*t3402;
  t3467 = 0.85216*t3043*t3461;
  t3525 = t2665 + t3433 + t3009 + t3467;
  t3550 = 0.5*var2[0]*t3525;
  t3558 = 0.85216*t2170*t3402;
  t3577 = 0.85216*t1263*t3461;
  t3585 = t3194 + t3558 + t3278 + t3577;
  t3596 = 0.5*var2[1]*t3585;
  t3602 = t3550 + t3596;
  t3638 = var2[2]*t3602;
  t5566 = -0.07323676079999998*var2[4]*t5541;
  t5567 = -0.4999*t565;
  t5579 = -1.*t1598*t565;
  t5582 = -0.17188499999999995*t462*t565;
  t5587 = t5567 + t5579 + t5582;
  t5610 = 0.85216*t5587*t2844;
  t5815 = 0.85216*t4405*t5777;
  t5817 = Power(t462,2);
  t5830 = 0.17188499999999995*t5817;
  t5885 = 0.85216*t4696*t5541;
  t5902 = 0.85216*t2844*t4808;
  t5906 = 0.85216*t3402*t4808;
  t5910 = 0.85216*t4853*t5777;
  t5922 = 0.85216*t4879*t3149;
  t5923 = 0.85216*t4879*t3461;
  t5930 = 0.85216*t4879*t5541;
  t5931 = t4778 + t4813 + t5902 + t5906 + t5910 + t5922 + t5923 + t5930;
  t5971 = 0.5*var2[0]*t5931;
  t5973 = 0.85216*t2844*t2967;
  t5998 = 0.85216*t3402*t2967;
  t6011 = 0.85216*t3043*t5777;
  t6018 = 0.85216*t2653*t3149;
  t6020 = 0.85216*t2653*t3461;
  t6096 = 0.85216*t2653*t5541;
  t6153 = t4944 + t5973 + t5998 + t5037 + t6011 + t6018 + t6020 + t6096;
  t6254 = 0.5*var2[1]*t6153;
  t6258 = 1.70432*t2844*t3402;
  t6259 = 1.70432*t2038*t5777;
  t6264 = 1.70432*t3149*t3461;
  t6300 = 1.70432*t2262*t5541;
  t6325 = t6258 + t6259 + t6264 + t6300;
  t6357 = 0.5*var2[2]*t6325;
  t6680 = t4576 + t4597 + t5830;
  t5856 = 0. + t4576 + t4597 + t5830;
  t6701 = 2.*t1858*t3352;
  t6707 = 2.*t1081*t3396;
  t6708 = t4043 + t6701 + t5413 + t5457 + t6707 + t4328;
  t6772 = -2.*t1858*t3396;
  t6786 = -2.*t3352*t2922;
  t6787 = t5625 + t5632 + t4436 + t6772 + t4470 + t6786;
  t7049 = 0.85216*t4879*t3402;
  t7051 = 0.85216*t4853*t3461;
  t7061 = t6391 + t7049 + t6423 + t7051;
  t7075 = 0.85216*t6680*t2038;
  t7077 = 0.85216*t5587*t2262;
  t7102 = 0.85216*t4696*t3402;
  t7115 = 0.85216*t4405*t3461;
  t7118 = t7075 + t7077 + t7102 + t7115;
  p_output1[0]=(0.5*t2290*var2[0] + 0.5*(0.85216*t2038*(t2131 + t2355) + 0.85216*t2262*(t2456 + t2457))*var2[1])*var2[2];
  p_output1[1]=t3334;
  p_output1[2]=t3638;
  p_output1[3]=0.5*t3763*var2[2];
  p_output1[4]=0.5*t2290*var2[2];
  p_output1[5]=0.5*t3763*var2[0] + 0.5*t2290*var2[1];
  p_output1[6]=t3334;
  p_output1[7]=var2[2]*(0.5*(t4778 + 1.70432*t2844*t4808 + t4813 + 0.85216*t4525*t4853 + 1.70432*t3149*t4879 + 0.85216*t4330*t4879)*var2[0] + 0.5*(1.70432*t2844*t2967 + 1.70432*t2653*t3149 + 0.85216*t2653*t4330 + 0.85216*t3043*t4525 + t4944 + t5037)*var2[1] + 0.5*(1.70432*Power(t2844,2) + 1.70432*Power(t3149,2) + 1.70432*t2262*t4330 + 1.70432*t2038*t4525)*var2[2] + 0.5*(0.85216*t4405*t4525 + 0.85216*t4330*t4696)*var2[3] - 0.07323676079999998*t4330*var2[4]);
  p_output1[8]=var2[2]*(t5566 + t5971 + t6254 + t6357 + 0.5*(t5610 + t5815 + 0.85216*t3149*t5856 + t5885)*var2[3]);
  p_output1[9]=0.5*t6477*var2[2];
  p_output1[10]=0.5*t3167*var2[2];
  p_output1[11]=0.5*t6477*var2[0] + 0.5*t3167*var2[1] + (1.70432*t2262*t2844 + 1.70432*t2038*t3149)*var2[2] + 0.5*t6567*var2[3] - 0.07323676079999998*t2844*var2[4];
  p_output1[12]=0.5*t6567*var2[2];
  p_output1[13]=-0.07323676079999998*t2844*var2[2];
  p_output1[14]=t3638;
  p_output1[15]=var2[2]*(t5566 + t5971 + t6254 + t6357 + 0.5*(t5610 + t5815 + t5885 + 0.85216*t3149*t6680)*var2[3]);
  p_output1[16]=var2[2]*(0.5*(t4778 + 1.70432*t3402*t4808 + t4813 + 1.70432*t3461*t4879 + 0.85216*t4879*t6708 + 0.85216*t4853*t6787)*var2[0] + 0.5*(1.70432*t2967*t3402 + 1.70432*t2653*t3461 + t4944 + t5037 + 0.85216*t2653*t6708 + 0.85216*t3043*t6787)*var2[1] + 0.5*(1.70432*Power(t3402,2) + 1.70432*Power(t3461,2) + 1.70432*t2262*t6708 + 1.70432*t2038*t6787)*var2[2] + 0.5*(0.85216*t2038*t5587 + 1.70432*t3402*t5587 + 0.85216*t2262*(0. - 0.4999*t462 - 1.*t1598*t462 - 0.17188499999999995*t5817) + 0.85216*t3461*t5856 + 0.85216*t3461*t6680 + 0.85216*t4696*t6708 + 0.85216*t4405*t6787)*var2[3] - 0.07323676079999998*t6708*var2[4]);
  p_output1[17]=0.5*t7061*var2[2];
  p_output1[18]=0.5*t3525*var2[2];
  p_output1[19]=0.5*t7061*var2[0] + 0.5*t3525*var2[1] + (1.70432*t2262*t3402 + 1.70432*t2038*t3461)*var2[2] + 0.5*t7118*var2[3] - 0.07323676079999998*t3402*var2[4];
  p_output1[20]=0.5*t7118*var2[2];
  p_output1[21]=-0.07323676079999998*t3402*var2[2];
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

#include "J_Ce3_vec_L3_J3_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L3_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
