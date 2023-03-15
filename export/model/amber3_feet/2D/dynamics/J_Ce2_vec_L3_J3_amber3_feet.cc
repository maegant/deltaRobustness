/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:26:26 GMT-08:00
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
  double t797;
  double t423;
  double t719;
  double t813;
  double t316;
  double t736;
  double t826;
  double t877;
  double t883;
  double t884;
  double t902;
  double t948;
  double t1028;
  double t1029;
  double t1047;
  double t1179;
  double t1228;
  double t1259;
  double t1293;
  double t1294;
  double t1692;
  double t1660;
  double t1669;
  double t1677;
  double t1679;
  double t1707;
  double t1782;
  double t1869;
  double t1828;
  double t1836;
  double t1781;
  double t1783;
  double t1762;
  double t1771;
  double t1981;
  double t2043;
  double t2222;
  double t2224;
  double t2243;
  double t2259;
  double t2341;
  double t2357;
  double t2370;
  double t2376;
  double t2460;
  double t2465;
  double t1550;
  double t1611;
  double t1637;
  double t1640;
  double t1114;
  double t1313;
  double t1320;
  double t1392;
  double t1424;
  double t2577;
  double t2590;
  double t2632;
  double t2656;
  double t2660;
  double t1855;
  double t2850;
  double t2946;
  double t2297;
  double t2491;
  double t2498;
  double t2517;
  double t2528;
  double t2539;
  double t3182;
  double t3191;
  double t3194;
  double t3195;
  double t3201;
  double t3206;
  double t2668;
  double t2695;
  double t2722;
  double t2761;
  double t2765;
  double t2767;
  double t2768;
  double t2812;
  double t2836;
  double t2847;
  double t2954;
  double t2955;
  double t3012;
  double t3013;
  double t3016;
  double t3065;
  double t3080;
  double t3110;
  double t3111;
  double t3114;
  double t3164;
  double t3200;
  double t3238;
  double t3240;
  double t3489;
  double t3492;
  double t3533;
  double t3562;
  double t3273;
  double t2098;
  double t2137;
  double t3695;
  double t3707;
  double t3711;
  double t3727;
  double t3738;
  double t3740;
  double t3772;
  double t3776;
  double t3810;
  double t3820;
  double t3823;
  double t1942;
  double t1947;
  double t1974;
  double t1776;
  double t1816;
  double t1946;
  double t2056;
  double t2072;
  double t3199;
  double t3207;
  double t3225;
  double t3241;
  double t3259;
  double t3276;
  double t4197;
  double t3369;
  double t3377;
  double t3402;
  double t3411;
  double t4217;
  double t3319;
  double t3326;
  double t3357;
  double t4253;
  double t4429;
  double t4434;
  double t4444;
  double t4445;
  double t4464;
  double t4467;
  double t4482;
  double t4486;
  double t3523;
  double t3602;
  double t3616;
  double t4534;
  double t3625;
  double t3644;
  double t3650;
  double t3808;
  double t1058;
  double t1436;
  double t1720;
  double t1745;
  double t1753;
  double t4673;
  double t4676;
  double t4680;
  double t2514;
  double t2545;
  double t2550;
  double t4133;
  double t4137;
  double t4138;
  double t3226;
  double t3278;
  double t3281;
  double t4490;
  double t4537;
  double t4542;
  double t3623;
  double t3656;
  double t3671;
  double t4640;
  double t4641;
  double t4645;
  double t3855;
  double t3867;
  double t3873;
  double t2563;
  double t3946;
  double t3954;
  double t4003;
  double t2729;
  double t4258;
  double t3367;
  double t3417;
  double t3418;
  double t4610;
  double t4612;
  double t4626;
  double t3923;
  double t4723;
  double t5055;
  double t5056;
  double t5057;
  double t5058;
  double t3926;
  double t4726;
  t797 = Cos(var1[3]);
  t423 = Cos(var1[4]);
  t719 = Sin(var1[3]);
  t813 = Sin(var1[4]);
  t316 = Sin(var1[2]);
  t736 = -1.*t423*t719;
  t826 = -1.*t797*t813;
  t877 = t736 + t826;
  t883 = -1.*t316*t877;
  t884 = Cos(var1[2]);
  t902 = t797*t423;
  t948 = -1.*t719*t813;
  t1028 = t902 + t948;
  t1029 = -1.*t884*t1028;
  t1047 = t883 + t1029;
  t1179 = -1.*t423;
  t1228 = 1. + t1179;
  t1259 = -0.9063*t1228;
  t1293 = -1.0567*t423;
  t1294 = t1259 + t1293;
  t1692 = -1.*t316*t1028;
  t1660 = t423*t719;
  t1669 = t797*t813;
  t1677 = t1660 + t1669;
  t1679 = -1.*t884*t1677;
  t1707 = t1679 + t1692;
  t1782 = t884*t1028;
  t1869 = t316*t1028;
  t1828 = t316*t877;
  t1836 = t1828 + t1782;
  t1781 = -1.*t316*t1677;
  t1783 = t1781 + t1782;
  t1762 = t884*t877;
  t1771 = t1762 + t1692;
  t1981 = t884*t1677;
  t2043 = t1981 + t1869;
  t2222 = 0.4999*t719;
  t2224 = t1294*t719;
  t2243 = -0.15039999999999998*t797*t813;
  t2259 = t2222 + t2224 + t2243;
  t2341 = -1.*t797;
  t2357 = 1. + t2341;
  t2370 = -0.4999*t2357;
  t2376 = t797*t1294;
  t2460 = 0.15039999999999998*t719*t813;
  t2465 = t2370 + t2376 + t2460;
  t1550 = 0.4999*t813;
  t1611 = t1294*t813;
  t1637 = 0.15039999999999998*t423*t813;
  t1640 = t1550 + t1611 + t1637;
  t1114 = 0.4999*t423;
  t1313 = t1294*t423;
  t1320 = Power(t813,2);
  t1392 = -0.15039999999999998*t1320;
  t1424 = t1114 + t1313 + t1392;
  t2577 = -1.*t797*t423;
  t2590 = t719*t813;
  t2632 = t2577 + t2590;
  t2656 = t884*t2632;
  t2660 = t883 + t2656;
  t1855 = -1.*t884*t877;
  t2850 = t316*t2632;
  t2946 = t1762 + t2850;
  t2297 = -1.*t2259*t1028;
  t2491 = -1.*t877*t2465;
  t2498 = t2297 + t2491;
  t2517 = t2259*t1677;
  t2528 = t1028*t2465;
  t2539 = t2517 + t2528;
  t3182 = -0.4999*t719;
  t3191 = -1.*t1294*t719;
  t3194 = 0.15039999999999998*t797*t813;
  t3195 = t3182 + t3191 + t3194;
  t3201 = 0.4999*t797;
  t3206 = t3201 + t2376 + t2460;
  t2668 = 0.26996047999999995*var2[4]*t2660;
  t2695 = 3.5899*t1640*t1771;
  t2722 = 3.5899*t1424*t2660;
  t2761 = 7.1798*t1783*t1771;
  t2765 = 3.5899*t1836*t1707;
  t2767 = 3.5899*t1047*t2043;
  t2768 = 7.1798*t1771*t2660;
  t2812 = -1.*t316*t2632;
  t2836 = t1855 + t2812;
  t2847 = 3.5899*t1836*t2836;
  t2954 = 3.5899*t1047*t2946;
  t2955 = t2761 + t2765 + t2767 + t2768 + t2847 + t2954;
  t3012 = -0.5*var2[1]*t2955;
  t3013 = 7.1798*t1836*t1783;
  t3016 = 7.1798*t1771*t2043;
  t3065 = 7.1798*t1836*t2660;
  t3080 = 7.1798*t1771*t2946;
  t3110 = t3013 + t3016 + t3065 + t3080;
  t3111 = -0.5*var2[0]*t3110;
  t3114 = 3.5899*t1771*t2498;
  t3164 = t2259*t1028;
  t3200 = t877*t2465;
  t3238 = 3.5899*t2539*t2660;
  t3240 = -1.*t877*t2259;
  t3489 = 0.15039999999999998*t423*t719;
  t3492 = t3489 + t3194;
  t3533 = -0.15039999999999998*t797*t423;
  t3562 = t3533 + t2460;
  t3273 = -1.*t2465*t2632;
  t2098 = Power(t1783,2);
  t2137 = Power(t1771,2);
  t3695 = 7.1798*t1836*t1771;
  t3707 = 7.1798*t1783*t2043;
  t3711 = t3695 + t3707;
  t3727 = 3.5899*t1047*t1836;
  t3738 = 3.5899*t2098;
  t3740 = 3.5899*t2137;
  t3772 = 3.5899*t1707*t2043;
  t3776 = t3727 + t3738 + t3740 + t3772;
  t3810 = 3.5899*t1640*t1783;
  t3820 = 3.5899*t1424*t1771;
  t3823 = t3810 + t3820;
  t1942 = t1855 + t1869;
  t1947 = t316*t1677;
  t1974 = t1947 + t1029;
  t1776 = 10.7697*t1047*t1771;
  t1816 = 10.7697*t1783*t1707;
  t1946 = 3.5899*t1836*t1942;
  t2056 = 3.5899*t1974*t2043;
  t2072 = t1776 + t1816 + t1946 + t2056;
  t3199 = t3195*t1028;
  t3207 = t1677*t3206;
  t3225 = t3164 + t3199 + t3200 + t3207;
  t3241 = -1.*t877*t3195;
  t3259 = -1.*t1028*t3206;
  t3276 = t3240 + t3241 + t3259 + t3273;
  t4197 = 0.26996047999999995*var2[4]*t2836;
  t3369 = -0.4999*t813;
  t3377 = -1.*t1294*t813;
  t3402 = -0.15039999999999998*t423*t813;
  t3411 = t3369 + t3377 + t3402;
  t4217 = 3.5899*t1640*t1047;
  t3319 = Power(t423,2);
  t3326 = 0.15039999999999998*t3319;
  t3357 = 0. + t1114 + t1313 + t3326;
  t4253 = 3.5899*t1424*t2836;
  t4429 = 7.1798*t1047*t1783;
  t4434 = 7.1798*t1771*t1707;
  t4444 = 7.1798*t1047*t2660;
  t4445 = 7.1798*t1771*t2836;
  t4464 = t4429 + t4434 + t4444 + t4445;
  t4467 = -0.5*var2[1]*t4464;
  t4482 = -0.5*var2[0]*t2955;
  t4486 = 3.5899*t1047*t2498;
  t3523 = t3492*t1028;
  t3602 = t1677*t3562;
  t3616 = t3164 + t3523 + t3200 + t3602;
  t4534 = 3.5899*t2539*t2836;
  t3625 = -1.*t877*t3492;
  t3644 = -1.*t1028*t3562;
  t3650 = t3240 + t3625 + t3644 + t3273;
  t3808 = -0.5*var2[2]*t3776;
  t1058 = 0.26996047999999995*var2[4]*t1047;
  t1436 = 3.5899*t1424*t1047;
  t1720 = 3.5899*t1640*t1707;
  t1745 = t1436 + t1720;
  t1753 = -0.5*var2[3]*t1745;
  t4673 = 7.1798*t1047*t1771;
  t4676 = 7.1798*t1783*t1707;
  t4680 = t4673 + t4676;
  t2514 = 3.5899*t1707*t2498;
  t2545 = 3.5899*t1047*t2539;
  t2550 = t2514 + t2545;
  t4133 = 3.5899*t1974*t2498;
  t4137 = 3.5899*t1942*t2539;
  t4138 = t4133 + t4137;
  t3226 = 3.5899*t1771*t3225;
  t3278 = 3.5899*t1783*t3276;
  t3281 = t3114 + t3226 + t3238 + t3278;
  t4490 = 3.5899*t1047*t3225;
  t4537 = 3.5899*t1707*t3276;
  t4542 = t4486 + t4490 + t4534 + t4537;
  t3623 = 3.5899*t1771*t3616;
  t3656 = 3.5899*t1783*t3650;
  t3671 = t3114 + t3623 + t3238 + t3656;
  t4640 = 3.5899*t1047*t3616;
  t4641 = 3.5899*t1707*t3650;
  t4645 = t4486 + t4640 + t4534 + t4641;
  t3855 = 3.5899*t1783*t2498;
  t3867 = 3.5899*t1771*t2539;
  t3873 = t3855 + t3867;
  t2563 = -0.5*var2[2]*t2550;
  t3946 = 3.5899*t1640*t1974;
  t3954 = 3.5899*t1424*t1942;
  t4003 = t3946 + t3954;
  t2729 = t2695 + t2722;
  t4258 = t4217 + t4253;
  t3367 = 3.5899*t3357*t1783;
  t3417 = 3.5899*t3411*t1771;
  t3418 = t3367 + t3417 + t2695 + t2722;
  t4610 = 3.5899*t3411*t1047;
  t4612 = 3.5899*t3357*t1707;
  t4626 = t4610 + t4217 + t4612 + t4253;
  t3923 = -0.5*var2[2]*t3823;
  t4723 = -0.5*var2[2]*t1745;
  t5055 = 0.26996047999999995*var2[0]*t2660;
  t5056 = 0.26996047999999995*var2[1]*t2836;
  t5057 = t5055 + t5056;
  t5058 = var2[2]*t5057;
  t3926 = 0.26996047999999995*var2[2]*t1771;
  t4726 = 0.26996047999999995*var2[2]*t1047;
  p_output1[0]=(t1058 + t1753 + t2563 - 0.5*(7.1798*t1047*t1836 + 7.1798*t1707*t2043 + 7.1798*t2098 + 7.1798*t2137)*var2[0] - 0.5*t2072*var2[1])*var2[2];
  p_output1[1]=var2[2]*(t2668 + t3012 + t3111 - 0.5*t3281*var2[2] - 0.5*t2729*var2[3]);
  p_output1[2]=var2[2]*(t2668 + t3012 + t3111 - 0.5*t3671*var2[2] - 0.5*t3418*var2[3]);
  p_output1[3]=-0.5*t3711*var2[2];
  p_output1[4]=t3808;
  p_output1[5]=-0.5*t3711*var2[0] - 0.5*t3776*var2[1] - 1.*t3873*var2[2] - 0.5*t3823*var2[3] + 0.26996047999999995*t1771*var2[4];
  p_output1[6]=t3923;
  p_output1[7]=t3926;
  p_output1[8]=var2[2]*(-0.5*t2072*var2[0] - 0.5*(7.1798*Power(t1047,2) + 7.1798*Power(t1707,2) + 7.1798*t1771*t1942 + 7.1798*t1783*t1974)*var2[1] - 0.5*t4138*var2[2] - 0.5*t4003*var2[3] + 0.26996047999999995*t1942*var2[4]);
  p_output1[9]=var2[2]*(t4197 + t4467 + t4482 - 0.5*t4542*var2[2] - 0.5*t4258*var2[3]);
  p_output1[10]=var2[2]*(t4197 + t4467 + t4482 - 0.5*t4645*var2[2] - 0.5*t4626*var2[3]);
  p_output1[11]=t3808;
  p_output1[12]=-0.5*t4680*var2[2];
  p_output1[13]=t1058 + t1753 - 0.5*t3776*var2[0] - 0.5*t4680*var2[1] - 1.*t2550*var2[2];
  p_output1[14]=t4723;
  p_output1[15]=t4726;
  p_output1[16]=(-0.5*t2550*var2[0] - 0.5*t4138*var2[1])*var2[2];
  p_output1[17]=(-0.5*t3281*var2[0] - 0.5*t4542*var2[1])*var2[2];
  p_output1[18]=(-0.5*t3671*var2[0] - 0.5*t4645*var2[1])*var2[2];
  p_output1[19]=-0.5*t3873*var2[2];
  p_output1[20]=t2563;
  p_output1[21]=-0.5*t3873*var2[0] - 0.5*t2550*var2[1];
  p_output1[22]=(-0.5*t1745*var2[0] - 0.5*t4003*var2[1])*var2[2];
  p_output1[23]=(-0.5*t2729*var2[0] - 0.5*t4258*var2[1])*var2[2];
  p_output1[24]=(-0.5*t3418*var2[0] - 0.5*t4626*var2[1])*var2[2];
  p_output1[25]=t3923;
  p_output1[26]=t4723;
  p_output1[27]=-0.5*t3823*var2[0] - 0.5*t1745*var2[1];
  p_output1[28]=(0.26996047999999995*t1047*var2[0] + 0.26996047999999995*t1942*var2[1])*var2[2];
  p_output1[29]=t5058;
  p_output1[30]=t5058;
  p_output1[31]=t3926;
  p_output1[32]=t4726;
  p_output1[33]=0.26996047999999995*t1771*var2[0] + 0.26996047999999995*t1047*var2[1];
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

#include "J_Ce2_vec_L3_J3_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L3_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
