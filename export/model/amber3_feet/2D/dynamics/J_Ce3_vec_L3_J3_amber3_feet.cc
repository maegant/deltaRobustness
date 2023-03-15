/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:23 GMT-08:00
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
  double t559;
  double t234;
  double t318;
  double t577;
  double t1167;
  double t1346;
  double t1348;
  double t1551;
  double t1593;
  double t1612;
  double t1634;
  double t1657;
  double t1125;
  double t1765;
  double t1766;
  double t1816;
  double t37;
  double t1508;
  double t1675;
  double t1684;
  double t1702;
  double t488;
  double t798;
  double t880;
  double t1817;
  double t1825;
  double t1831;
  double t1835;
  double t1840;
  double t1846;
  double t1895;
  double t1719;
  double t1857;
  double t1875;
  double t1914;
  double t1955;
  double t1956;
  double t1428;
  double t2124;
  double t2130;
  double t1890;
  double t2144;
  double t2153;
  double t2154;
  double t2218;
  double t2271;
  double t2275;
  double t2310;
  double t2316;
  double t2318;
  double t1898;
  double t2142;
  double t2234;
  double t2255;
  double t2303;
  double t2307;
  double t2075;
  double t965;
  double t1468;
  double t2418;
  double t2431;
  double t2434;
  double t2438;
  double t2442;
  double t2141;
  double t2325;
  double t2336;
  double t2346;
  double t2347;
  double t2351;
  double t2382;
  double t2707;
  double t2721;
  double t2750;
  double t2764;
  double t2531;
  double t2749;
  double t2868;
  double t2879;
  double t2555;
  double t2572;
  double t2581;
  double t2940;
  double t2984;
  double t2993;
  double t1889;
  double t2010;
  double t2017;
  double t3180;
  double t3192;
  double t3244;
  double t2309;
  double t2452;
  double t2488;
  double t2513;
  double t2542;
  double t2609;
  double t2634;
  double t2645;
  double t2702;
  double t2705;
  double t3385;
  double t3387;
  double t3395;
  double t3396;
  double t3347;
  double t3354;
  double t3366;
  double t3410;
  double t3416;
  double t3419;
  double t3448;
  double t2036;
  double t3752;
  double t3758;
  double t2076;
  double t3493;
  double t3509;
  double t3511;
  double t3527;
  double t3529;
  double t3530;
  double t3547;
  double t3794;
  double t3796;
  double t3774;
  double t3474;
  double t3479;
  double t3481;
  double t3490;
  double t4188;
  double t4193;
  double t3554;
  double t3600;
  double t3601;
  double t3632;
  double t3635;
  double t4105;
  double t4165;
  double t4179;
  double t4233;
  double t4257;
  double t4290;
  double t4294;
  double t3726;
  double t3743;
  double t3769;
  double t3789;
  double t4412;
  double t4454;
  double t4456;
  double t4458;
  double t4465;
  double t4471;
  double t4475;
  double t3874;
  double t3882;
  double t3889;
  double t5079;
  double t5080;
  double t5088;
  double t5092;
  double t5096;
  double t5110;
  double t5114;
  double t5119;
  double t2889;
  double t3027;
  double t3030;
  double t3033;
  double t3037;
  double t3051;
  double t3107;
  double t3158;
  double t3171;
  double t3175;
  double t4298;
  double t4349;
  double t4372;
  double t4384;
  double t4389;
  double t4398;
  double t4519;
  double t4524;
  double t4536;
  double t4649;
  double t4741;
  double t4772;
  double t4843;
  double t4863;
  double t4867;
  double t4868;
  double t4873;
  double t4905;
  double t4906;
  double t4907;
  double t4910;
  double t4928;
  double t4929;
  double t4940;
  double t4947;
  double t4990;
  double t4991;
  double t5007;
  double t5010;
  double t5025;
  double t5036;
  double t5050;
  double t5282;
  double t4538;
  double t5339;
  double t5366;
  double t5415;
  double t5490;
  double t5493;
  double t5497;
  double t5777;
  double t5780;
  double t5784;
  double t5820;
  double t5822;
  double t5823;
  double t5829;
  double t5839;
  t559 = Cos(var1[3]);
  t234 = Cos(var1[4]);
  t318 = Sin(var1[3]);
  t577 = Sin(var1[4]);
  t1167 = t559*t234;
  t1346 = -1.*t318*t577;
  t1348 = t1167 + t1346;
  t1551 = -1.*t234;
  t1593 = 1. + t1551;
  t1612 = -0.9063*t1593;
  t1634 = -1.0567*t234;
  t1657 = t1612 + t1634;
  t1125 = Sin(var1[2]);
  t1765 = -1.*t234*t318;
  t1766 = -1.*t559*t577;
  t1816 = t1765 + t1766;
  t37 = Cos(var1[2]);
  t1508 = 0.4999*t318;
  t1675 = t1657*t318;
  t1684 = -0.15039999999999998*t559*t577;
  t1702 = t1508 + t1675 + t1684;
  t488 = t234*t318;
  t798 = t559*t577;
  t880 = t488 + t798;
  t1817 = -1.*t559;
  t1825 = 1. + t1817;
  t1831 = -0.4999*t1825;
  t1835 = t559*t1657;
  t1840 = 0.15039999999999998*t318*t577;
  t1846 = t1831 + t1835 + t1840;
  t1895 = -1.*t37*t1348;
  t1719 = -1.*t1702*t1348;
  t1857 = -1.*t1816*t1846;
  t1875 = t1719 + t1857;
  t1914 = t1702*t880;
  t1955 = t1348*t1846;
  t1956 = t1914 + t1955;
  t1428 = -1.*t1125*t1348;
  t2124 = t37*t1816;
  t2130 = t2124 + t1428;
  t1890 = -1.*t1125*t1816;
  t2144 = -0.4999*t318;
  t2153 = -1.*t1657*t318;
  t2154 = 0.15039999999999998*t559*t577;
  t2218 = t2144 + t2153 + t2154;
  t2271 = 0.4999*t559;
  t2275 = t2271 + t1835 + t1840;
  t2310 = -1.*t559*t234;
  t2316 = t318*t577;
  t2318 = t2310 + t2316;
  t1898 = t1890 + t1895;
  t2142 = t1702*t1348;
  t2234 = t2218*t1348;
  t2255 = t1816*t1846;
  t2303 = t880*t2275;
  t2307 = t2142 + t2234 + t2255 + t2303;
  t2075 = -1.*t37*t1816;
  t965 = -1.*t37*t880;
  t1468 = t965 + t1428;
  t2418 = -1.*t1816*t1702;
  t2431 = -1.*t1816*t2218;
  t2434 = -1.*t1348*t2275;
  t2438 = -1.*t1846*t2318;
  t2442 = t2418 + t2431 + t2434 + t2438;
  t2141 = 3.5899*t2130*t1875;
  t2325 = t37*t2318;
  t2336 = t1890 + t2325;
  t2346 = 3.5899*t1956*t2336;
  t2347 = -1.*t1125*t880;
  t2351 = t37*t1348;
  t2382 = t2347 + t2351;
  t2707 = 0.15039999999999998*t234*t318;
  t2721 = t2707 + t2154;
  t2750 = -0.15039999999999998*t559*t234;
  t2764 = t2750 + t1840;
  t2531 = 3.5899*t1898*t1875;
  t2749 = t2721*t1348;
  t2868 = t880*t2764;
  t2879 = t2142 + t2749 + t2255 + t2868;
  t2555 = -1.*t1125*t2318;
  t2572 = t2075 + t2555;
  t2581 = 3.5899*t1956*t2572;
  t2940 = -1.*t1816*t2721;
  t2984 = -1.*t1348*t2764;
  t2993 = t2418 + t2940 + t2984 + t2438;
  t1889 = 3.5899*t1468*t1875;
  t2010 = 3.5899*t1898*t1956;
  t2017 = t1889 + t2010;
  t3180 = 3.5899*t2382*t1875;
  t3192 = 3.5899*t2130*t1956;
  t3244 = t3180 + t3192;
  t2309 = 3.5899*t2130*t2307;
  t2452 = 3.5899*t2382*t2442;
  t2488 = t2141 + t2309 + t2346 + t2452;
  t2513 = 0.5*var2[0]*t2488;
  t2542 = 3.5899*t1898*t2307;
  t2609 = 3.5899*t1468*t2442;
  t2634 = t2531 + t2542 + t2581 + t2609;
  t2645 = 0.5*var2[1]*t2634;
  t2702 = t2513 + t2645;
  t2705 = var2[2]*t2702;
  t3385 = -0.4999*t559;
  t3387 = -1.*t559*t1657;
  t3395 = -0.15039999999999998*t318*t577;
  t3396 = t3385 + t3387 + t3395;
  t3347 = t1816*t1702;
  t3354 = 2.*t1816*t2218;
  t3366 = t2218*t880;
  t3410 = t1348*t3396;
  t3416 = 2.*t1348*t2275;
  t3419 = t1846*t2318;
  t3448 = t3347 + t3354 + t3366 + t3410 + t3416 + t3419;
  t2036 = t1125*t880;
  t3752 = t1125*t2318;
  t3758 = t2124 + t3752;
  t2076 = t1125*t1348;
  t3493 = -1.*t2218*t1348;
  t3509 = -1.*t1816*t3396;
  t3511 = -1.*t880*t1846;
  t3527 = -2.*t1816*t2275;
  t3529 = -1.*t1702*t2318;
  t3530 = -2.*t2218*t2318;
  t3547 = t3493 + t3509 + t3511 + t3527 + t3529 + t3530;
  t3794 = t1125*t1816;
  t3796 = t3794 + t2351;
  t3774 = t37*t880;
  t3474 = 0.4999*t577;
  t3479 = t1657*t577;
  t3481 = 0.15039999999999998*t234*t577;
  t3490 = t3474 + t3479 + t3481;
  t4188 = 0.15039999999999998*t559*t234;
  t4193 = t4188 + t3395;
  t3554 = 0.4999*t234;
  t3600 = t1657*t234;
  t3601 = Power(t577,2);
  t3632 = -0.15039999999999998*t3601;
  t3635 = t3554 + t3600 + t3632;
  t4105 = t1816*t2218;
  t4165 = t1816*t2721;
  t4179 = t2721*t880;
  t4233 = t1348*t4193;
  t4257 = t1348*t2275;
  t4290 = t1348*t2764;
  t4294 = t3347 + t4105 + t4165 + t4179 + t4233 + t4257 + t4290 + t3419;
  t3726 = t2036 + t2325;
  t3743 = 3.5899*t1956*t3726;
  t3769 = 3.5899*t1875*t3758;
  t3789 = t3774 + t2076;
  t4412 = -1.*t2721*t1348;
  t4454 = -1.*t1816*t4193;
  t4456 = -1.*t1816*t2275;
  t4458 = -1.*t1816*t2764;
  t4465 = -1.*t2218*t2318;
  t4471 = -1.*t2721*t2318;
  t4475 = t4412 + t4454 + t3511 + t4456 + t4458 + t3529 + t4465 + t4471;
  t3874 = 3.5899*t1875*t2336;
  t3882 = t3774 + t2555;
  t3889 = 3.5899*t1956*t3882;
  t5079 = 3.5899*t3796*t1875;
  t5080 = 3.5899*t3796*t2307;
  t5088 = 3.5899*t1956*t3758;
  t5092 = 3.5899*t3789*t2442;
  t5096 = t5079 + t5080 + t5088 + t5092;
  t5110 = 3.5899*t3635*t2307;
  t5114 = 3.5899*t3490*t2442;
  t5119 = t5110 + t5114;
  t2889 = 3.5899*t2130*t2879;
  t3027 = 3.5899*t2382*t2993;
  t3030 = t2141 + t2889 + t2346 + t3027;
  t3033 = 0.5*var2[0]*t3030;
  t3037 = 3.5899*t1898*t2879;
  t3051 = 3.5899*t1468*t2993;
  t3107 = t2531 + t3037 + t2581 + t3051;
  t3158 = 0.5*var2[1]*t3107;
  t3171 = t3033 + t3158;
  t3175 = var2[2]*t3171;
  t4298 = -0.26996047999999995*var2[4]*t4294;
  t4349 = -0.4999*t577;
  t4372 = -1.*t1657*t577;
  t4384 = -0.15039999999999998*t234*t577;
  t4389 = t4349 + t4372 + t4384;
  t4398 = 3.5899*t4389*t2307;
  t4519 = 3.5899*t3490*t4475;
  t4524 = Power(t234,2);
  t4536 = 0.15039999999999998*t4524;
  t4649 = 3.5899*t3635*t4294;
  t4741 = 3.5899*t2307*t3758;
  t4772 = 3.5899*t2879*t3758;
  t4843 = 3.5899*t3789*t4475;
  t4863 = 3.5899*t3796*t2442;
  t4867 = 3.5899*t3796*t2993;
  t4868 = 3.5899*t3796*t4294;
  t4873 = t3743 + t3769 + t4741 + t4772 + t4843 + t4863 + t4867 + t4868;
  t4905 = 0.5*var2[0]*t4873;
  t4906 = 3.5899*t2307*t2336;
  t4907 = 3.5899*t2879*t2336;
  t4910 = 3.5899*t2382*t4475;
  t4928 = 3.5899*t2130*t2442;
  t4929 = 3.5899*t2130*t2993;
  t4940 = 3.5899*t2130*t4294;
  t4947 = t3874 + t4906 + t4907 + t3889 + t4910 + t4928 + t4929 + t4940;
  t4990 = 0.5*var2[1]*t4947;
  t4991 = 7.1798*t2307*t2879;
  t5007 = 7.1798*t1875*t4475;
  t5010 = 7.1798*t2442*t2993;
  t5025 = 7.1798*t1956*t4294;
  t5036 = t4991 + t5007 + t5010 + t5025;
  t5050 = 0.5*var2[2]*t5036;
  t5282 = t3554 + t3600 + t4536;
  t4538 = 0. + t3554 + t3600 + t4536;
  t5339 = 2.*t1816*t2721;
  t5366 = 2.*t1348*t2764;
  t5415 = t3347 + t5339 + t4179 + t4233 + t5366 + t3419;
  t5490 = -2.*t1816*t2764;
  t5493 = -2.*t2721*t2318;
  t5497 = t4412 + t4454 + t3511 + t5490 + t3529 + t5493;
  t5777 = 3.5899*t3796*t2879;
  t5780 = 3.5899*t3789*t2993;
  t5784 = t5079 + t5777 + t5088 + t5780;
  t5820 = 3.5899*t5282*t1875;
  t5822 = 3.5899*t4389*t1956;
  t5823 = 3.5899*t3635*t2879;
  t5829 = 3.5899*t3490*t2993;
  t5839 = t5820 + t5822 + t5823 + t5829;
  p_output1[0]=(0.5*t2017*var2[0] + 0.5*(3.5899*t1875*(t1895 + t2036) + 3.5899*t1956*(t2075 + t2076))*var2[1])*var2[2];
  p_output1[1]=t2705;
  p_output1[2]=t3175;
  p_output1[3]=0.5*t3244*var2[2];
  p_output1[4]=0.5*t2017*var2[2];
  p_output1[5]=0.5*t3244*var2[0] + 0.5*t2017*var2[1];
  p_output1[6]=t2705;
  p_output1[7]=var2[2]*(0.5*(t3743 + 7.1798*t2307*t3758 + t3769 + 3.5899*t3547*t3789 + 7.1798*t2442*t3796 + 3.5899*t3448*t3796)*var2[0] + 0.5*(7.1798*t2307*t2336 + 7.1798*t2130*t2442 + 3.5899*t2130*t3448 + 3.5899*t2382*t3547 + t3874 + t3889)*var2[1] + 0.5*(7.1798*Power(t2307,2) + 7.1798*Power(t2442,2) + 7.1798*t1956*t3448 + 7.1798*t1875*t3547)*var2[2] + 0.5*(3.5899*t3490*t3547 + 3.5899*t3448*t3635)*var2[3] - 0.26996047999999995*t3448*var2[4]);
  p_output1[8]=var2[2]*(t4298 + t4905 + t4990 + t5050 + 0.5*(t4398 + t4519 + 3.5899*t2442*t4538 + t4649)*var2[3]);
  p_output1[9]=0.5*t5096*var2[2];
  p_output1[10]=0.5*t2488*var2[2];
  p_output1[11]=0.5*t5096*var2[0] + 0.5*t2488*var2[1] + (7.1798*t1956*t2307 + 7.1798*t1875*t2442)*var2[2] + 0.5*t5119*var2[3] - 0.26996047999999995*t2307*var2[4];
  p_output1[12]=0.5*t5119*var2[2];
  p_output1[13]=-0.26996047999999995*t2307*var2[2];
  p_output1[14]=t3175;
  p_output1[15]=var2[2]*(t4298 + t4905 + t4990 + t5050 + 0.5*(t4398 + t4519 + t4649 + 3.5899*t2442*t5282)*var2[3]);
  p_output1[16]=var2[2]*(0.5*(t3743 + 7.1798*t2879*t3758 + t3769 + 7.1798*t2993*t3796 + 3.5899*t3796*t5415 + 3.5899*t3789*t5497)*var2[0] + 0.5*(7.1798*t2336*t2879 + 7.1798*t2130*t2993 + t3874 + t3889 + 3.5899*t2130*t5415 + 3.5899*t2382*t5497)*var2[1] + 0.5*(7.1798*Power(t2879,2) + 7.1798*Power(t2993,2) + 7.1798*t1956*t5415 + 7.1798*t1875*t5497)*var2[2] + 0.5*(3.5899*t1875*t4389 + 7.1798*t2879*t4389 + 3.5899*t1956*(0. - 0.4999*t234 - 1.*t1657*t234 - 0.15039999999999998*t4524) + 3.5899*t2993*t4538 + 3.5899*t2993*t5282 + 3.5899*t3635*t5415 + 3.5899*t3490*t5497)*var2[3] - 0.26996047999999995*t5415*var2[4]);
  p_output1[17]=0.5*t5784*var2[2];
  p_output1[18]=0.5*t3030*var2[2];
  p_output1[19]=0.5*t5784*var2[0] + 0.5*t3030*var2[1] + (7.1798*t1956*t2879 + 7.1798*t1875*t2993)*var2[2] + 0.5*t5839*var2[3] - 0.26996047999999995*t2879*var2[4];
  p_output1[20]=0.5*t5839*var2[2];
  p_output1[21]=-0.26996047999999995*t2879*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L3_J3_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L3_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
