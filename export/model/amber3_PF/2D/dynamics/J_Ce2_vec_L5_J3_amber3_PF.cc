/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:32:40 GMT-08:00
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
  double t502;
  double t84;
  double t152;
  double t569;
  double t74;
  double t491;
  double t584;
  double t630;
  double t696;
  double t774;
  double t835;
  double t965;
  double t975;
  double t976;
  double t984;
  double t1184;
  double t1209;
  double t1210;
  double t1258;
  double t1286;
  double t1823;
  double t1738;
  double t1771;
  double t1788;
  double t1807;
  double t1866;
  double t2091;
  double t2322;
  double t2234;
  double t2261;
  double t2057;
  double t2202;
  double t1928;
  double t1985;
  double t2473;
  double t2480;
  double t2661;
  double t2666;
  double t2733;
  double t2741;
  double t2793;
  double t2837;
  double t2851;
  double t2856;
  double t2866;
  double t2898;
  double t1621;
  double t1652;
  double t1697;
  double t1707;
  double t1035;
  double t1320;
  double t1520;
  double t1522;
  double t1542;
  double t3225;
  double t3227;
  double t3228;
  double t3236;
  double t3280;
  double t2295;
  double t3523;
  double t3526;
  double t2770;
  double t2932;
  double t2976;
  double t3037;
  double t3053;
  double t3061;
  double t3777;
  double t3778;
  double t3781;
  double t3799;
  double t3928;
  double t3944;
  double t3286;
  double t3290;
  double t3303;
  double t3389;
  double t3446;
  double t3461;
  double t3467;
  double t3489;
  double t3496;
  double t3501;
  double t3574;
  double t3575;
  double t3579;
  double t3585;
  double t3626;
  double t3659;
  double t3670;
  double t3675;
  double t3708;
  double t3729;
  double t3765;
  double t3902;
  double t4106;
  double t4126;
  double t4597;
  double t4602;
  double t4619;
  double t4624;
  double t4171;
  double t2596;
  double t2602;
  double t4778;
  double t4786;
  double t4797;
  double t4824;
  double t4834;
  double t4867;
  double t4878;
  double t4894;
  double t4960;
  double t5017;
  double t5049;
  double t2334;
  double t2402;
  double t2405;
  double t2028;
  double t2211;
  double t2337;
  double t2497;
  double t2506;
  double t3821;
  double t3951;
  double t3974;
  double t4127;
  double t4132;
  double t4203;
  double t5824;
  double t4491;
  double t4499;
  double t4501;
  double t4505;
  double t5834;
  double t4381;
  double t4419;
  double t4458;
  double t5849;
  double t5898;
  double t5906;
  double t5910;
  double t5917;
  double t5924;
  double t5940;
  double t5965;
  double t6010;
  double t4607;
  double t4634;
  double t4647;
  double t6047;
  double t4667;
  double t4690;
  double t4749;
  double t4899;
  double t1004;
  double t1584;
  double t1867;
  double t1912;
  double t1917;
  double t6264;
  double t6293;
  double t6299;
  double t3009;
  double t3064;
  double t3117;
  double t5643;
  double t5664;
  double t5667;
  double t4070;
  double t4206;
  double t4209;
  double t6020;
  double t6052;
  double t6058;
  double t4656;
  double t4751;
  double t4762;
  double t6209;
  double t6211;
  double t6231;
  double t5148;
  double t5189;
  double t5244;
  double t3132;
  double t5446;
  double t5506;
  double t5522;
  double t3310;
  double t5852;
  double t4466;
  double t4510;
  double t4544;
  double t6123;
  double t6178;
  double t6203;
  double t5343;
  double t6370;
  double t6821;
  double t6877;
  double t6884;
  double t6900;
  double t5353;
  double t6416;
  t502 = Cos(var1[5]);
  t84 = Cos(var1[6]);
  t152 = Sin(var1[5]);
  t569 = Sin(var1[6]);
  t74 = Sin(var1[2]);
  t491 = -1.*t84*t152;
  t584 = -1.*t502*t569;
  t630 = t491 + t584;
  t696 = -1.*t74*t630;
  t774 = Cos(var1[2]);
  t835 = t502*t84;
  t965 = -1.*t152*t569;
  t975 = t835 + t965;
  t976 = -1.*t774*t975;
  t984 = t696 + t976;
  t1184 = -1.*t84;
  t1209 = 1. + t1184;
  t1210 = -0.9063*t1209;
  t1258 = -1.078185*t84;
  t1286 = t1210 + t1258;
  t1823 = -1.*t74*t975;
  t1738 = t84*t152;
  t1771 = t502*t569;
  t1788 = t1738 + t1771;
  t1807 = -1.*t774*t1788;
  t1866 = t1807 + t1823;
  t2091 = t774*t975;
  t2322 = t74*t975;
  t2234 = t74*t630;
  t2261 = t2234 + t2091;
  t2057 = -1.*t74*t1788;
  t2202 = t2057 + t2091;
  t1928 = t774*t630;
  t1985 = t1928 + t1823;
  t2473 = t774*t1788;
  t2480 = t2473 + t2322;
  t2661 = 0.4999*t152;
  t2666 = t1286*t152;
  t2733 = -0.17188499999999995*t502*t569;
  t2741 = t2661 + t2666 + t2733;
  t2793 = -1.*t502;
  t2837 = 1. + t2793;
  t2851 = -0.4999*t2837;
  t2856 = t502*t1286;
  t2866 = 0.17188499999999995*t152*t569;
  t2898 = t2851 + t2856 + t2866;
  t1621 = 0.4999*t569;
  t1652 = t1286*t569;
  t1697 = 0.17188499999999995*t84*t569;
  t1707 = t1621 + t1652 + t1697;
  t1035 = 0.4999*t84;
  t1320 = t1286*t84;
  t1520 = Power(t569,2);
  t1522 = -0.17188499999999995*t1520;
  t1542 = t1035 + t1320 + t1522;
  t3225 = -1.*t502*t84;
  t3227 = t152*t569;
  t3228 = t3225 + t3227;
  t3236 = t774*t3228;
  t3280 = t696 + t3236;
  t2295 = -1.*t774*t630;
  t3523 = t74*t3228;
  t3526 = t1928 + t3523;
  t2770 = -1.*t2741*t975;
  t2932 = -1.*t630*t2898;
  t2976 = t2770 + t2932;
  t3037 = t2741*t1788;
  t3053 = t975*t2898;
  t3061 = t3037 + t3053;
  t3777 = -0.4999*t152;
  t3778 = -1.*t1286*t152;
  t3781 = 0.17188499999999995*t502*t569;
  t3799 = t3777 + t3778 + t3781;
  t3928 = 0.4999*t502;
  t3944 = t3928 + t2856 + t2866;
  t3286 = 0.07323676079999998*var2[6]*t3280;
  t3290 = 0.85216*t1707*t1985;
  t3303 = 0.85216*t1542*t3280;
  t3389 = 1.70432*t2202*t1985;
  t3446 = 0.85216*t2261*t1866;
  t3461 = 0.85216*t984*t2480;
  t3467 = 1.70432*t1985*t3280;
  t3489 = -1.*t74*t3228;
  t3496 = t2295 + t3489;
  t3501 = 0.85216*t2261*t3496;
  t3574 = 0.85216*t984*t3526;
  t3575 = t3389 + t3446 + t3461 + t3467 + t3501 + t3574;
  t3579 = -0.5*var2[1]*t3575;
  t3585 = 1.70432*t2261*t2202;
  t3626 = 1.70432*t1985*t2480;
  t3659 = 1.70432*t2261*t3280;
  t3670 = 1.70432*t1985*t3526;
  t3675 = t3585 + t3626 + t3659 + t3670;
  t3708 = -0.5*var2[0]*t3675;
  t3729 = 0.85216*t1985*t2976;
  t3765 = t2741*t975;
  t3902 = t630*t2898;
  t4106 = 0.85216*t3061*t3280;
  t4126 = -1.*t630*t2741;
  t4597 = 0.17188499999999995*t84*t152;
  t4602 = t4597 + t3781;
  t4619 = -0.17188499999999995*t502*t84;
  t4624 = t4619 + t2866;
  t4171 = -1.*t2898*t3228;
  t2596 = Power(t2202,2);
  t2602 = Power(t1985,2);
  t4778 = 1.70432*t2261*t1985;
  t4786 = 1.70432*t2202*t2480;
  t4797 = t4778 + t4786;
  t4824 = 0.85216*t984*t2261;
  t4834 = 0.85216*t2596;
  t4867 = 0.85216*t2602;
  t4878 = 0.85216*t1866*t2480;
  t4894 = t4824 + t4834 + t4867 + t4878;
  t4960 = 0.85216*t1707*t2202;
  t5017 = 0.85216*t1542*t1985;
  t5049 = t4960 + t5017;
  t2334 = t2295 + t2322;
  t2402 = t74*t1788;
  t2405 = t2402 + t976;
  t2028 = 2.55648*t984*t1985;
  t2211 = 2.55648*t2202*t1866;
  t2337 = 0.85216*t2261*t2334;
  t2497 = 0.85216*t2405*t2480;
  t2506 = t2028 + t2211 + t2337 + t2497;
  t3821 = t3799*t975;
  t3951 = t1788*t3944;
  t3974 = t3765 + t3821 + t3902 + t3951;
  t4127 = -1.*t630*t3799;
  t4132 = -1.*t975*t3944;
  t4203 = t4126 + t4127 + t4132 + t4171;
  t5824 = 0.07323676079999998*var2[6]*t3496;
  t4491 = -0.4999*t569;
  t4499 = -1.*t1286*t569;
  t4501 = -0.17188499999999995*t84*t569;
  t4505 = t4491 + t4499 + t4501;
  t5834 = 0.85216*t1707*t984;
  t4381 = Power(t84,2);
  t4419 = 0.17188499999999995*t4381;
  t4458 = 0. + t1035 + t1320 + t4419;
  t5849 = 0.85216*t1542*t3496;
  t5898 = 1.70432*t984*t2202;
  t5906 = 1.70432*t1985*t1866;
  t5910 = 1.70432*t984*t3280;
  t5917 = 1.70432*t1985*t3496;
  t5924 = t5898 + t5906 + t5910 + t5917;
  t5940 = -0.5*var2[1]*t5924;
  t5965 = -0.5*var2[0]*t3575;
  t6010 = 0.85216*t984*t2976;
  t4607 = t4602*t975;
  t4634 = t1788*t4624;
  t4647 = t3765 + t4607 + t3902 + t4634;
  t6047 = 0.85216*t3061*t3496;
  t4667 = -1.*t630*t4602;
  t4690 = -1.*t975*t4624;
  t4749 = t4126 + t4667 + t4690 + t4171;
  t4899 = -0.5*var2[2]*t4894;
  t1004 = 0.07323676079999998*var2[6]*t984;
  t1584 = 0.85216*t1542*t984;
  t1867 = 0.85216*t1707*t1866;
  t1912 = t1584 + t1867;
  t1917 = -0.5*var2[5]*t1912;
  t6264 = 1.70432*t984*t1985;
  t6293 = 1.70432*t2202*t1866;
  t6299 = t6264 + t6293;
  t3009 = 0.85216*t1866*t2976;
  t3064 = 0.85216*t984*t3061;
  t3117 = t3009 + t3064;
  t5643 = 0.85216*t2405*t2976;
  t5664 = 0.85216*t2334*t3061;
  t5667 = t5643 + t5664;
  t4070 = 0.85216*t1985*t3974;
  t4206 = 0.85216*t2202*t4203;
  t4209 = t3729 + t4070 + t4106 + t4206;
  t6020 = 0.85216*t984*t3974;
  t6052 = 0.85216*t1866*t4203;
  t6058 = t6010 + t6020 + t6047 + t6052;
  t4656 = 0.85216*t1985*t4647;
  t4751 = 0.85216*t2202*t4749;
  t4762 = t3729 + t4656 + t4106 + t4751;
  t6209 = 0.85216*t984*t4647;
  t6211 = 0.85216*t1866*t4749;
  t6231 = t6010 + t6209 + t6047 + t6211;
  t5148 = 0.85216*t2202*t2976;
  t5189 = 0.85216*t1985*t3061;
  t5244 = t5148 + t5189;
  t3132 = -0.5*var2[2]*t3117;
  t5446 = 0.85216*t1707*t2405;
  t5506 = 0.85216*t1542*t2334;
  t5522 = t5446 + t5506;
  t3310 = t3290 + t3303;
  t5852 = t5834 + t5849;
  t4466 = 0.85216*t4458*t2202;
  t4510 = 0.85216*t4505*t1985;
  t4544 = t4466 + t4510 + t3290 + t3303;
  t6123 = 0.85216*t4505*t984;
  t6178 = 0.85216*t4458*t1866;
  t6203 = t6123 + t5834 + t6178 + t5849;
  t5343 = -0.5*var2[2]*t5049;
  t6370 = -0.5*var2[2]*t1912;
  t6821 = 0.07323676079999998*var2[0]*t3280;
  t6877 = 0.07323676079999998*var2[1]*t3496;
  t6884 = t6821 + t6877;
  t6900 = var2[2]*t6884;
  t5353 = 0.07323676079999998*var2[2]*t1985;
  t6416 = 0.07323676079999998*var2[2]*t984;
  p_output1[0]=(t1004 + t1917 + t3132 - 0.5*(1.70432*t1866*t2480 + 1.70432*t2596 + 1.70432*t2602 + 1.70432*t2261*t984)*var2[0] - 0.5*t2506*var2[1])*var2[2];
  p_output1[1]=var2[2]*(t3286 + t3579 + t3708 - 0.5*t4209*var2[2] - 0.5*t3310*var2[5]);
  p_output1[2]=var2[2]*(t3286 + t3579 + t3708 - 0.5*t4762*var2[2] - 0.5*t4544*var2[5]);
  p_output1[3]=-0.5*t4797*var2[2];
  p_output1[4]=t4899;
  p_output1[5]=-0.5*t4797*var2[0] - 0.5*t4894*var2[1] - 1.*t5244*var2[2] - 0.5*t5049*var2[5] + 0.07323676079999998*t1985*var2[6];
  p_output1[6]=t5343;
  p_output1[7]=t5353;
  p_output1[8]=var2[2]*(-0.5*t2506*var2[0] - 0.5*(1.70432*Power(t1866,2) + 1.70432*t1985*t2334 + 1.70432*t2202*t2405 + 1.70432*Power(t984,2))*var2[1] - 0.5*t5667*var2[2] - 0.5*t5522*var2[5] + 0.07323676079999998*t2334*var2[6]);
  p_output1[9]=var2[2]*(t5824 + t5940 + t5965 - 0.5*t6058*var2[2] - 0.5*t5852*var2[5]);
  p_output1[10]=var2[2]*(t5824 + t5940 + t5965 - 0.5*t6231*var2[2] - 0.5*t6203*var2[5]);
  p_output1[11]=t4899;
  p_output1[12]=-0.5*t6299*var2[2];
  p_output1[13]=t1004 + t1917 - 0.5*t4894*var2[0] - 0.5*t6299*var2[1] - 1.*t3117*var2[2];
  p_output1[14]=t6370;
  p_output1[15]=t6416;
  p_output1[16]=(-0.5*t3117*var2[0] - 0.5*t5667*var2[1])*var2[2];
  p_output1[17]=(-0.5*t4209*var2[0] - 0.5*t6058*var2[1])*var2[2];
  p_output1[18]=(-0.5*t4762*var2[0] - 0.5*t6231*var2[1])*var2[2];
  p_output1[19]=-0.5*t5244*var2[2];
  p_output1[20]=t3132;
  p_output1[21]=-0.5*t5244*var2[0] - 0.5*t3117*var2[1];
  p_output1[22]=(-0.5*t1912*var2[0] - 0.5*t5522*var2[1])*var2[2];
  p_output1[23]=(-0.5*t3310*var2[0] - 0.5*t5852*var2[1])*var2[2];
  p_output1[24]=(-0.5*t4544*var2[0] - 0.5*t6203*var2[1])*var2[2];
  p_output1[25]=t5343;
  p_output1[26]=t6370;
  p_output1[27]=-0.5*t5049*var2[0] - 0.5*t1912*var2[1];
  p_output1[28]=(0.07323676079999998*t984*var2[0] + 0.07323676079999998*t2334*var2[1])*var2[2];
  p_output1[29]=t6900;
  p_output1[30]=t6900;
  p_output1[31]=t5353;
  p_output1[32]=t6416;
  p_output1[33]=0.07323676079999998*t1985*var2[0] + 0.07323676079999998*t984*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 34, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L5_J3_amber3_PF.hh"

namespace RightSS
{

void J_Ce2_vec_L5_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
