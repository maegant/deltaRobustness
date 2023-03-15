/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:27:09 GMT-08:00
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
  double t492;
  double t291;
  double t371;
  double t519;
  double t59;
  double t466;
  double t520;
  double t534;
  double t541;
  double t574;
  double t597;
  double t608;
  double t638;
  double t684;
  double t687;
  double t697;
  double t702;
  double t716;
  double t796;
  double t803;
  double t1193;
  double t1127;
  double t1162;
  double t1170;
  double t1175;
  double t1196;
  double t1426;
  double t1636;
  double t1516;
  double t1538;
  double t1392;
  double t1443;
  double t1290;
  double t1314;
  double t1744;
  double t1757;
  double t2053;
  double t2059;
  double t2065;
  double t2079;
  double t2112;
  double t2114;
  double t2139;
  double t2173;
  double t2221;
  double t2262;
  double t976;
  double t992;
  double t1067;
  double t1111;
  double t693;
  double t805;
  double t822;
  double t905;
  double t921;
  double t2400;
  double t2402;
  double t2425;
  double t2437;
  double t2449;
  double t1592;
  double t2635;
  double t2643;
  double t2093;
  double t2291;
  double t2298;
  double t2305;
  double t2318;
  double t2331;
  double t2736;
  double t2752;
  double t2753;
  double t2761;
  double t2789;
  double t2796;
  double t2455;
  double t2504;
  double t2515;
  double t2574;
  double t2590;
  double t2591;
  double t2618;
  double t2619;
  double t2633;
  double t2634;
  double t2649;
  double t2655;
  double t2656;
  double t2658;
  double t2664;
  double t2666;
  double t2670;
  double t2680;
  double t2691;
  double t2694;
  double t2711;
  double t2783;
  double t2852;
  double t2855;
  double t3147;
  double t3155;
  double t3162;
  double t3174;
  double t2880;
  double t1942;
  double t1966;
  double t3504;
  double t3508;
  double t3510;
  double t3527;
  double t3528;
  double t3532;
  double t3539;
  double t3542;
  double t3554;
  double t3558;
  double t3583;
  double t1659;
  double t1715;
  double t1739;
  double t1351;
  double t1503;
  double t1710;
  double t1780;
  double t1829;
  double t2773;
  double t2809;
  double t2815;
  double t2861;
  double t2877;
  double t2891;
  double t3871;
  double t3013;
  double t3016;
  double t3024;
  double t3049;
  double t3879;
  double t2989;
  double t2995;
  double t2999;
  double t3881;
  double t3900;
  double t3904;
  double t3919;
  double t3920;
  double t3933;
  double t3947;
  double t3953;
  double t3995;
  double t3157;
  double t3233;
  double t3289;
  double t4007;
  double t3348;
  double t3356;
  double t3358;
  double t3546;
  double t690;
  double t952;
  double t1232;
  double t1233;
  double t1286;
  double t4203;
  double t4212;
  double t4217;
  double t2301;
  double t2335;
  double t2337;
  double t3817;
  double t3824;
  double t3825;
  double t2835;
  double t2947;
  double t2948;
  double t3997;
  double t4012;
  double t4020;
  double t3299;
  double t3400;
  double t3424;
  double t4108;
  double t4117;
  double t4160;
  double t3613;
  double t3631;
  double t3633;
  double t2377;
  double t3681;
  double t3696;
  double t3715;
  double t2520;
  double t3892;
  double t3009;
  double t3058;
  double t3078;
  double t4039;
  double t4054;
  double t4089;
  double t3656;
  double t4347;
  double t4775;
  double t4793;
  double t4804;
  double t4812;
  double t3662;
  double t4359;
  t492 = Cos(var1[6]);
  t291 = Cos(var1[7]);
  t371 = Sin(var1[6]);
  t519 = Sin(var1[7]);
  t59 = Sin(var1[2]);
  t466 = -1.*t291*t371;
  t520 = -1.*t492*t519;
  t534 = t466 + t520;
  t541 = -1.*t59*t534;
  t574 = Cos(var1[2]);
  t597 = t492*t291;
  t608 = -1.*t371*t519;
  t638 = t597 + t608;
  t684 = -1.*t574*t638;
  t687 = t541 + t684;
  t697 = -1.*t291;
  t702 = 1. + t697;
  t716 = -0.9063*t702;
  t796 = -1.0567*t291;
  t803 = t716 + t796;
  t1193 = -1.*t59*t638;
  t1127 = t291*t371;
  t1162 = t492*t519;
  t1170 = t1127 + t1162;
  t1175 = -1.*t574*t1170;
  t1196 = t1175 + t1193;
  t1426 = t574*t638;
  t1636 = t59*t638;
  t1516 = t59*t534;
  t1538 = t1516 + t1426;
  t1392 = -1.*t59*t1170;
  t1443 = t1392 + t1426;
  t1290 = t574*t534;
  t1314 = t1290 + t1193;
  t1744 = t574*t1170;
  t1757 = t1744 + t1636;
  t2053 = 0.4999*t371;
  t2059 = t803*t371;
  t2065 = -0.15039999999999998*t492*t519;
  t2079 = t2053 + t2059 + t2065;
  t2112 = -1.*t492;
  t2114 = 1. + t2112;
  t2139 = -0.4999*t2114;
  t2173 = t492*t803;
  t2221 = 0.15039999999999998*t371*t519;
  t2262 = t2139 + t2173 + t2221;
  t976 = 0.4999*t519;
  t992 = t803*t519;
  t1067 = 0.15039999999999998*t291*t519;
  t1111 = t976 + t992 + t1067;
  t693 = 0.4999*t291;
  t805 = t803*t291;
  t822 = Power(t519,2);
  t905 = -0.15039999999999998*t822;
  t921 = t693 + t805 + t905;
  t2400 = -1.*t492*t291;
  t2402 = t371*t519;
  t2425 = t2400 + t2402;
  t2437 = t574*t2425;
  t2449 = t541 + t2437;
  t1592 = -1.*t574*t534;
  t2635 = t59*t2425;
  t2643 = t1290 + t2635;
  t2093 = -1.*t2079*t638;
  t2291 = -1.*t534*t2262;
  t2298 = t2093 + t2291;
  t2305 = t2079*t1170;
  t2318 = t638*t2262;
  t2331 = t2305 + t2318;
  t2736 = -0.4999*t371;
  t2752 = -1.*t803*t371;
  t2753 = 0.15039999999999998*t492*t519;
  t2761 = t2736 + t2752 + t2753;
  t2789 = 0.4999*t492;
  t2796 = t2789 + t2173 + t2221;
  t2455 = 0.26996047999999995*var2[7]*t2449;
  t2504 = 3.5899*t1111*t1314;
  t2515 = 3.5899*t921*t2449;
  t2574 = 7.1798*t1443*t1314;
  t2590 = 3.5899*t1538*t1196;
  t2591 = 3.5899*t687*t1757;
  t2618 = 7.1798*t1314*t2449;
  t2619 = -1.*t59*t2425;
  t2633 = t1592 + t2619;
  t2634 = 3.5899*t1538*t2633;
  t2649 = 3.5899*t687*t2643;
  t2655 = t2574 + t2590 + t2591 + t2618 + t2634 + t2649;
  t2656 = -0.5*var2[1]*t2655;
  t2658 = 7.1798*t1538*t1443;
  t2664 = 7.1798*t1314*t1757;
  t2666 = 7.1798*t1538*t2449;
  t2670 = 7.1798*t1314*t2643;
  t2680 = t2658 + t2664 + t2666 + t2670;
  t2691 = -0.5*var2[0]*t2680;
  t2694 = 3.5899*t1314*t2298;
  t2711 = t2079*t638;
  t2783 = t534*t2262;
  t2852 = 3.5899*t2331*t2449;
  t2855 = -1.*t534*t2079;
  t3147 = 0.15039999999999998*t291*t371;
  t3155 = t3147 + t2753;
  t3162 = -0.15039999999999998*t492*t291;
  t3174 = t3162 + t2221;
  t2880 = -1.*t2262*t2425;
  t1942 = Power(t1443,2);
  t1966 = Power(t1314,2);
  t3504 = 7.1798*t1538*t1314;
  t3508 = 7.1798*t1443*t1757;
  t3510 = t3504 + t3508;
  t3527 = 3.5899*t687*t1538;
  t3528 = 3.5899*t1942;
  t3532 = 3.5899*t1966;
  t3539 = 3.5899*t1196*t1757;
  t3542 = t3527 + t3528 + t3532 + t3539;
  t3554 = 3.5899*t1111*t1443;
  t3558 = 3.5899*t921*t1314;
  t3583 = t3554 + t3558;
  t1659 = t1592 + t1636;
  t1715 = t59*t1170;
  t1739 = t1715 + t684;
  t1351 = 10.7697*t687*t1314;
  t1503 = 10.7697*t1443*t1196;
  t1710 = 3.5899*t1538*t1659;
  t1780 = 3.5899*t1739*t1757;
  t1829 = t1351 + t1503 + t1710 + t1780;
  t2773 = t2761*t638;
  t2809 = t1170*t2796;
  t2815 = t2711 + t2773 + t2783 + t2809;
  t2861 = -1.*t534*t2761;
  t2877 = -1.*t638*t2796;
  t2891 = t2855 + t2861 + t2877 + t2880;
  t3871 = 0.26996047999999995*var2[7]*t2633;
  t3013 = -0.4999*t519;
  t3016 = -1.*t803*t519;
  t3024 = -0.15039999999999998*t291*t519;
  t3049 = t3013 + t3016 + t3024;
  t3879 = 3.5899*t1111*t687;
  t2989 = Power(t291,2);
  t2995 = 0.15039999999999998*t2989;
  t2999 = 0. + t693 + t805 + t2995;
  t3881 = 3.5899*t921*t2633;
  t3900 = 7.1798*t687*t1443;
  t3904 = 7.1798*t1314*t1196;
  t3919 = 7.1798*t687*t2449;
  t3920 = 7.1798*t1314*t2633;
  t3933 = t3900 + t3904 + t3919 + t3920;
  t3947 = -0.5*var2[1]*t3933;
  t3953 = -0.5*var2[0]*t2655;
  t3995 = 3.5899*t687*t2298;
  t3157 = t3155*t638;
  t3233 = t1170*t3174;
  t3289 = t2711 + t3157 + t2783 + t3233;
  t4007 = 3.5899*t2331*t2633;
  t3348 = -1.*t534*t3155;
  t3356 = -1.*t638*t3174;
  t3358 = t2855 + t3348 + t3356 + t2880;
  t3546 = -0.5*var2[2]*t3542;
  t690 = 0.26996047999999995*var2[7]*t687;
  t952 = 3.5899*t921*t687;
  t1232 = 3.5899*t1111*t1196;
  t1233 = t952 + t1232;
  t1286 = -0.5*var2[6]*t1233;
  t4203 = 7.1798*t687*t1314;
  t4212 = 7.1798*t1443*t1196;
  t4217 = t4203 + t4212;
  t2301 = 3.5899*t1196*t2298;
  t2335 = 3.5899*t687*t2331;
  t2337 = t2301 + t2335;
  t3817 = 3.5899*t1739*t2298;
  t3824 = 3.5899*t1659*t2331;
  t3825 = t3817 + t3824;
  t2835 = 3.5899*t1314*t2815;
  t2947 = 3.5899*t1443*t2891;
  t2948 = t2694 + t2835 + t2852 + t2947;
  t3997 = 3.5899*t687*t2815;
  t4012 = 3.5899*t1196*t2891;
  t4020 = t3995 + t3997 + t4007 + t4012;
  t3299 = 3.5899*t1314*t3289;
  t3400 = 3.5899*t1443*t3358;
  t3424 = t2694 + t3299 + t2852 + t3400;
  t4108 = 3.5899*t687*t3289;
  t4117 = 3.5899*t1196*t3358;
  t4160 = t3995 + t4108 + t4007 + t4117;
  t3613 = 3.5899*t1443*t2298;
  t3631 = 3.5899*t1314*t2331;
  t3633 = t3613 + t3631;
  t2377 = -0.5*var2[2]*t2337;
  t3681 = 3.5899*t1111*t1739;
  t3696 = 3.5899*t921*t1659;
  t3715 = t3681 + t3696;
  t2520 = t2504 + t2515;
  t3892 = t3879 + t3881;
  t3009 = 3.5899*t2999*t1443;
  t3058 = 3.5899*t3049*t1314;
  t3078 = t3009 + t3058 + t2504 + t2515;
  t4039 = 3.5899*t3049*t687;
  t4054 = 3.5899*t2999*t1196;
  t4089 = t4039 + t3879 + t4054 + t3881;
  t3656 = -0.5*var2[2]*t3583;
  t4347 = -0.5*var2[2]*t1233;
  t4775 = 0.26996047999999995*var2[0]*t2449;
  t4793 = 0.26996047999999995*var2[1]*t2633;
  t4804 = t4775 + t4793;
  t4812 = var2[2]*t4804;
  t3662 = 0.26996047999999995*var2[2]*t1314;
  t4359 = 0.26996047999999995*var2[2]*t687;
  p_output1[0]=(t1286 + t2377 + t690 - 0.5*(7.1798*t1196*t1757 + 7.1798*t1942 + 7.1798*t1966 + 7.1798*t1538*t687)*var2[0] - 0.5*t1829*var2[1])*var2[2];
  p_output1[1]=var2[2]*(t2455 + t2656 + t2691 - 0.5*t2948*var2[2] - 0.5*t2520*var2[6]);
  p_output1[2]=var2[2]*(t2455 + t2656 + t2691 - 0.5*t3424*var2[2] - 0.5*t3078*var2[6]);
  p_output1[3]=-0.5*t3510*var2[2];
  p_output1[4]=t3546;
  p_output1[5]=-0.5*t3510*var2[0] - 0.5*t3542*var2[1] - 1.*t3633*var2[2] - 0.5*t3583*var2[6] + 0.26996047999999995*t1314*var2[7];
  p_output1[6]=t3656;
  p_output1[7]=t3662;
  p_output1[8]=var2[2]*(-0.5*t1829*var2[0] - 0.5*(7.1798*Power(t1196,2) + 7.1798*t1314*t1659 + 7.1798*t1443*t1739 + 7.1798*Power(t687,2))*var2[1] - 0.5*t3825*var2[2] - 0.5*t3715*var2[6] + 0.26996047999999995*t1659*var2[7]);
  p_output1[9]=var2[2]*(t3871 + t3947 + t3953 - 0.5*t4020*var2[2] - 0.5*t3892*var2[6]);
  p_output1[10]=var2[2]*(t3871 + t3947 + t3953 - 0.5*t4160*var2[2] - 0.5*t4089*var2[6]);
  p_output1[11]=t3546;
  p_output1[12]=-0.5*t4217*var2[2];
  p_output1[13]=t1286 + t690 - 0.5*t3542*var2[0] - 0.5*t4217*var2[1] - 1.*t2337*var2[2];
  p_output1[14]=t4347;
  p_output1[15]=t4359;
  p_output1[16]=(-0.5*t2337*var2[0] - 0.5*t3825*var2[1])*var2[2];
  p_output1[17]=(-0.5*t2948*var2[0] - 0.5*t4020*var2[1])*var2[2];
  p_output1[18]=(-0.5*t3424*var2[0] - 0.5*t4160*var2[1])*var2[2];
  p_output1[19]=-0.5*t3633*var2[2];
  p_output1[20]=t2377;
  p_output1[21]=-0.5*t3633*var2[0] - 0.5*t2337*var2[1];
  p_output1[22]=(-0.5*t1233*var2[0] - 0.5*t3715*var2[1])*var2[2];
  p_output1[23]=(-0.5*t2520*var2[0] - 0.5*t3892*var2[1])*var2[2];
  p_output1[24]=(-0.5*t3078*var2[0] - 0.5*t4089*var2[1])*var2[2];
  p_output1[25]=t3656;
  p_output1[26]=t4347;
  p_output1[27]=-0.5*t3583*var2[0] - 0.5*t1233*var2[1];
  p_output1[28]=(0.26996047999999995*t687*var2[0] + 0.26996047999999995*t1659*var2[1])*var2[2];
  p_output1[29]=t4812;
  p_output1[30]=t4812;
  p_output1[31]=t3662;
  p_output1[32]=t4359;
  p_output1[33]=0.26996047999999995*t1314*var2[0] + 0.26996047999999995*t687*var2[1];
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

#include "J_Ce2_vec_L6_J3_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L6_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
