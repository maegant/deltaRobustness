/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:40 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t504;
  double t184;
  double t375;
  double t562;
  double t834;
  double t407;
  double t674;
  double t769;
  double t182;
  double t846;
  double t1004;
  double t1077;
  double t1367;
  double t1154;
  double t18;
  double t2375;
  double t2616;
  double t2771;
  double t1658;
  double t1791;
  double t1798;
  double t1872;
  double t2772;
  double t2802;
  double t2807;
  double t783;
  double t1169;
  double t3198;
  double t3899;
  double t3980;
  double t4081;
  double t3740;
  double t3843;
  double t3879;
  double t3892;
  double t4146;
  double t4151;
  double t4180;
  double t4231;
  double t4253;
  double t4257;
  double t4391;
  double t4436;
  double t4558;
  double t2828;
  double t2839;
  double t2888;
  double t4622;
  double t4627;
  double t4630;
  double t4730;
  double t4733;
  double t4792;
  double t3210;
  double t3251;
  double t3612;
  double t3617;
  double t1230;
  double t2094;
  double t5328;
  double t5330;
  double t5351;
  double t5363;
  double t5478;
  double t5543;
  double t6168;
  double t6190;
  double t6265;
  double t6301;
  double t6308;
  double t6312;
  double t6052;
  double t6064;
  double t6096;
  double t6107;
  double t6348;
  double t6356;
  double t6376;
  double t6378;
  double t6421;
  double t6440;
  double t6448;
  double t6452;
  double t6484;
  double t6485;
  double t6494;
  double t6505;
  double t6532;
  double t6537;
  double t6548;
  double t6554;
  double t5900;
  double t5917;
  double t5944;
  double t6458;
  double t6472;
  double t6480;
  double t6620;
  double t6635;
  double t6645;
  double t6646;
  double t6651;
  double t6652;
  double t6752;
  double t6765;
  double t6767;
  double t6640;
  double t6720;
  double t6724;
  double t6611;
  double t6742;
  double t6877;
  double t6878;
  double t6880;
  double t6884;
  double t6887;
  double t6894;
  double t6905;
  double t6909;
  double t6891;
  double t6922;
  double t6928;
  double t6938;
  double t6963;
  double t6966;
  double t6862;
  double t6864;
  double t7008;
  double t7010;
  double t7037;
  double t7068;
  double t7079;
  double t7091;
  double t7230;
  double t7244;
  double t7246;
  double t7248;
  t504 = Cos(var2[7]);
  t184 = Cos(var2[8]);
  t375 = Sin(var2[7]);
  t562 = Sin(var2[8]);
  t834 = Cos(var2[6]);
  t407 = -1.*t184*t375;
  t674 = -1.*t504*t562;
  t769 = t407 + t674;
  t182 = Sin(var2[6]);
  t846 = t504*t184;
  t1004 = -1.*t375*t562;
  t1077 = t846 + t1004;
  t1367 = Cos(var2[2]);
  t1154 = t834*t1077;
  t18 = Sin(var2[2]);
  t2375 = t184*t375;
  t2616 = t504*t562;
  t2771 = t2375 + t2616;
  t1658 = t834*t769;
  t1791 = -1.*t182*t1077;
  t1798 = t1658 + t1791;
  t1872 = t1367*t1798;
  t2772 = -1.*t182*t2771;
  t2802 = t2772 + t1154;
  t2807 = t1367*t2802;
  t783 = t182*t769;
  t1169 = t783 + t1154;
  t3198 = -1.*t182*t769;
  t3899 = -1.*t504*t184;
  t3980 = t375*t562;
  t4081 = t3899 + t3980;
  t3740 = t1367*t1169;
  t3843 = t18*t1798;
  t3879 = t3740 + t3843;
  t3892 = -1.*var4[1]*t3879;
  t4146 = t834*t4081;
  t4151 = t3198 + t4146;
  t4180 = t18*t4151;
  t4231 = t182*t4081;
  t4253 = t1658 + t4231;
  t4257 = t1367*t4253;
  t4391 = t4180 + t4257;
  t4436 = -1.*var4[0]*t4391;
  t4558 = t3892 + t4436;
  t2828 = t834*t2771;
  t2839 = t182*t1077;
  t2888 = t2828 + t2839;
  t4622 = -1.*t1367*t1169;
  t4627 = -1.*t18*t1798;
  t4630 = t4622 + t4627;
  t4730 = -1.*t18*t2802;
  t4733 = -1.*t1367*t2888;
  t4792 = t4730 + t4733;
  t3210 = -1.*t834*t1077;
  t3251 = t3198 + t3210;
  t3612 = -1.*t834*t2771;
  t3617 = t3612 + t1791;
  t1230 = -1.*t18*t1169;
  t2094 = t1230 + t1872;
  t5328 = -1.*var4[1]*t2094;
  t5330 = t1367*t4151;
  t5351 = -1.*t18*t4253;
  t5363 = t5330 + t5351;
  t5478 = -1.*var4[0]*t5363;
  t5543 = t5328 + t5478;
  t6168 = -1.*t184;
  t6190 = 1. + t6168;
  t6265 = -1.3127*t6190;
  t6301 = -1.3127*t184;
  t6308 = -0.06*t562;
  t6312 = t6265 + t6301 + t6308;
  t6052 = -1.*t504;
  t6064 = 1. + t6052;
  t6096 = -0.9063*t6064;
  t6107 = -0.06*t184*t375;
  t6348 = t504*t6312;
  t6356 = t6096 + t6107 + t6348;
  t6376 = t834*t6356;
  t6378 = 0.06*t504*t184;
  t6421 = 0.9063*t375;
  t6440 = t375*t6312;
  t6448 = t6378 + t6421 + t6440;
  t6452 = -1.*t182*t6448;
  t6484 = -0.4999*t182;
  t6485 = -1.*t182*t6356;
  t6494 = -1.*t834*t6448;
  t6505 = t6484 + t6485 + t6494;
  t6532 = 0.4999*t182;
  t6537 = t182*t6356;
  t6548 = t834*t6448;
  t6554 = t6532 + t6537 + t6548;
  t5900 = -1.*t834;
  t5917 = 1. + t5900;
  t5944 = -0.4999*t5917;
  t6458 = t5944 + t6376 + t6452;
  t6472 = 0.4999*t834;
  t6480 = t6472 + t6376 + t6452;
  t6620 = 0.9063*t504;
  t6635 = t6620 + t6107 + t6348;
  t6645 = -0.06*t504*t184;
  t6646 = -0.9063*t375;
  t6651 = -1.*t375*t6312;
  t6652 = t6645 + t6646 + t6651;
  t6752 = t834*t6635;
  t6765 = t182*t6652;
  t6767 = t6752 + t6765;
  t6640 = -1.*t182*t6635;
  t6720 = t834*t6652;
  t6724 = t6640 + t6720;
  t6611 = t6554*t1169;
  t6742 = t6458*t1798;
  t6877 = -0.06*t184;
  t6878 = 0. + t6877;
  t6880 = t6878*t375;
  t6884 = -0.06*t504*t562;
  t6887 = t6880 + t6884;
  t6894 = t504*t6878;
  t6905 = 0.06*t375*t562;
  t6909 = t6894 + t6905;
  t6891 = -1.*t182*t6887;
  t6922 = t834*t6909;
  t6928 = t6891 + t6922;
  t6938 = t834*t6887;
  t6963 = t182*t6909;
  t6966 = t6938 + t6963;
  t6862 = -1.*t6458*t4151;
  t6864 = -1.*t6554*t4253;
  t7008 = 0.4999*t769;
  t7010 = t6356*t769;
  t7037 = t6448*t1077;
  t7068 = -1.*t6448*t769;
  t7079 = 0.4999*t1077;
  t7091 = -1.*t6356*t4081;
  t7230 = Power(t184,2);
  t7244 = 0.06*t7230;
  t7246 = -0.9063*t562;
  t7248 = -1.*t6312*t562;
  p_output1[0]=-1.*t2094*var4[0] - 1.*(t2807 - 1.*t18*t2888)*var4[1];
  p_output1[1]=-1.*(t1872 + t18*t3251)*var4[0] - 1.*(t2807 + t18*t3617)*var4[1];
  p_output1[2]=t4558;
  p_output1[3]=t4558;
  p_output1[4]=t4630;
  p_output1[5]=t4792;
  p_output1[6]=-1.*t4630*var4[0] - 1.*t4792*var4[1];
  p_output1[7]=-1.*(t1367*t3251 + t4627)*var4[0] - 1.*(t1367*t3617 + t4730)*var4[1];
  p_output1[8]=t5543;
  p_output1[9]=t5543;
  p_output1[10]=-1.*t1367*t1798 + t1169*t18;
  p_output1[11]=-1.*t1367*t2802 + t18*t2888;
  p_output1[12]=-1.*(t3617*t6458 + t2888*t6480 + t2802*t6505 + t2802*t6554)*var4[0] - 1.*(-1.*t3251*t6458 - 1.*t1169*t6480 - 1.*t1798*t6505 - 1.*t1798*t6554)*var4[1];
  p_output1[13]=-1.*(t6611 + t2802*t6724 + t6742 + t2888*t6767)*var4[0] - 1.*(-1.*t1798*t6724 - 1.*t1169*t6767 + t6862 + t6864)*var4[1];
  p_output1[14]=-1.*(t6611 + t6742 + t2802*t6928 + t2888*t6966)*var4[0] - 1.*(t6862 + t6864 - 1.*t1798*t6928 - 1.*t1169*t6966)*var4[1];
  p_output1[15]=-1.*t2802*t6458 - 1.*t2888*t6554;
  p_output1[16]=t6611 + t6742;
  p_output1[17]=-1.;
  p_output1[18]=-1.*(t2771*t6635 + t1077*t6652 + t7008 + t7010 + t7037)*var4[0] - 1.*(-1.*t1077*t6635 + t7068 + t7079 + t7091 - 1.*t6652*t769)*var4[1];
  p_output1[19]=-1.*(t2771*t6887 + t1077*t6909 + t7008 + t7010 + t7037)*var4[0] - 1.*(-1.*t1077*t6887 + t7068 + t7079 + t7091 - 1.*t6909*t769)*var4[1];
  p_output1[20]=-0.4999*t1077 - 1.*t1077*t6356 - 1.*t2771*t6448;
  p_output1[21]=-0.4999*t2771 + t7010 + t7037;
  p_output1[22]=-1.;
  p_output1[23]=-1.*(-0.06*Power(t562,2) + t184*t6878 + t7244 + t7246 + t7248)*var4[0] - 1.*(0.9063*t184 + 0.12*t184*t562 + t184*t6312 + t562*t6878)*var4[1];
  p_output1[24]=-0.9063*t184 - 0.06*t184*t562 - 1.*t184*t6312;
  p_output1[25]=t7244 + t7246 + t7248;
  p_output1[26]=-1.;
  p_output1[27]=0.06;
  p_output1[28]=-1.;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 29, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMap9_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void J_dxDiscreteMap9_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
