/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:24:01 GMT-08:00
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
  double t711;
  double t240;
  double t345;
  double t867;
  double t1165;
  double t216;
  double t1191;
  double t1242;
  double t1245;
  double t1574;
  double t1607;
  double t1641;
  double t1764;
  double t1876;
  double t617;
  double t929;
  double t1150;
  double t1164;
  double t1248;
  double t1305;
  double t2005;
  double t1959;
  double t1963;
  double t1967;
  double t1983;
  double t2036;
  double t2371;
  double t2395;
  double t2422;
  double t2438;
  double t2448;
  double t3055;
  double t3073;
  double t3160;
  double t3169;
  double t3216;
  double t3247;
  double t3248;
  double t3263;
  double t3283;
  double t3309;
  double t1468;
  double t1883;
  double t1889;
  double t1932;
  double t2153;
  double t2154;
  double t2156;
  double t2186;
  double t2271;
  double t3539;
  double t3573;
  double t3584;
  double t3615;
  double t3687;
  double t2601;
  double t3177;
  double t3314;
  double t3345;
  double t3374;
  double t3376;
  double t3397;
  double t4020;
  double t4044;
  double t4048;
  double t4062;
  double t4153;
  double t4186;
  double t3719;
  double t3759;
  double t3760;
  double t3778;
  double t3781;
  double t3793;
  double t3835;
  double t3836;
  double t3874;
  double t3879;
  double t3880;
  double t3882;
  double t3962;
  double t3976;
  double t3977;
  double t4010;
  double t4015;
  double t4148;
  double t4344;
  double t4357;
  double t5129;
  double t5141;
  double t5174;
  double t5184;
  double t4431;
  double t2604;
  double t2610;
  double t2931;
  double t2935;
  double t2611;
  double t2624;
  double t2766;
  double t2845;
  double t2871;
  double t2992;
  double t3002;
  double t4073;
  double t4191;
  double t4200;
  double t4380;
  double t4388;
  double t4437;
  double t6105;
  double t4835;
  double t4836;
  double t4893;
  double t4561;
  double t4587;
  double t4634;
  double t4666;
  double t6111;
  double t6123;
  double t6242;
  double t6276;
  double t6288;
  double t6314;
  double t6331;
  double t6332;
  double t5171;
  double t5202;
  double t5214;
  double t6340;
  double t5283;
  double t5288;
  double t5312;
  double t5617;
  double t5624;
  double t5660;
  double t6056;
  double t6074;
  double t6075;
  double t3371;
  double t3404;
  double t3507;
  double t6338;
  double t6356;
  double t6377;
  double t4230;
  double t4451;
  double t4452;
  double t6475;
  double t6508;
  double t6546;
  double t5264;
  double t5359;
  double t5403;
  double t5719;
  double t5720;
  double t5731;
  double t6676;
  double t6701;
  double t6748;
  double t2135;
  double t2275;
  double t2306;
  double t5846;
  double t5852;
  double t5853;
  double t6214;
  double t3761;
  double t7034;
  double t7103;
  double t7106;
  double t6413;
  double t6428;
  double t6434;
  double t4754;
  double t4961;
  double t5073;
  double t7231;
  double t7289;
  double t7303;
  double t7345;
  double t7353;
  double t5752;
  double t5813;
  double t5814;
  double t6771;
  double t6875;
  double t6930;
  double t7502;
  double t7514;
  double t7522;
  double t8621;
  double t8622;
  double t5818;
  double t6940;
  double t7523;
  double t7524;
  double t8556;
  double t8574;
  t711 = Cos(var1[6]);
  t240 = Cos(var1[7]);
  t345 = Sin(var1[6]);
  t867 = Sin(var1[7]);
  t1165 = Sin(var1[2]);
  t216 = Cos(var1[2]);
  t1191 = t711*t240;
  t1242 = -1.*t345*t867;
  t1245 = t1191 + t1242;
  t1574 = -1.*t240;
  t1607 = 1. + t1574;
  t1641 = -0.9063*t1607;
  t1764 = -1.0567*t240;
  t1876 = t1641 + t1764;
  t617 = -1.*t240*t345;
  t929 = -1.*t711*t867;
  t1150 = t617 + t929;
  t1164 = t216*t1150;
  t1248 = -1.*t1165*t1245;
  t1305 = t1164 + t1248;
  t2005 = t216*t1245;
  t1959 = t240*t345;
  t1963 = t711*t867;
  t1967 = t1959 + t1963;
  t1983 = -1.*t1165*t1967;
  t2036 = t1983 + t2005;
  t2371 = t1165*t1150;
  t2395 = t2371 + t2005;
  t2422 = t216*t1967;
  t2438 = t1165*t1245;
  t2448 = t2422 + t2438;
  t3055 = 0.4999*t345;
  t3073 = t1876*t345;
  t3160 = -0.15039999999999998*t711*t867;
  t3169 = t3055 + t3073 + t3160;
  t3216 = -1.*t711;
  t3247 = 1. + t3216;
  t3248 = -0.4999*t3247;
  t3263 = t711*t1876;
  t3283 = 0.15039999999999998*t345*t867;
  t3309 = t3248 + t3263 + t3283;
  t1468 = 0.4999*t867;
  t1883 = t1876*t867;
  t1889 = 0.15039999999999998*t240*t867;
  t1932 = t1468 + t1883 + t1889;
  t2153 = 0.4999*t240;
  t2154 = t1876*t240;
  t2156 = Power(t867,2);
  t2186 = -0.15039999999999998*t2156;
  t2271 = t2153 + t2154 + t2186;
  t3539 = -1.*t711*t240;
  t3573 = t345*t867;
  t3584 = t3539 + t3573;
  t3615 = t1165*t3584;
  t3687 = t1164 + t3615;
  t2601 = -1.*t1165*t1150;
  t3177 = -1.*t3169*t1245;
  t3314 = -1.*t1150*t3309;
  t3345 = t3177 + t3314;
  t3374 = t3169*t1967;
  t3376 = t1245*t3309;
  t3397 = t3374 + t3376;
  t4020 = -0.4999*t345;
  t4044 = -1.*t1876*t345;
  t4048 = 0.15039999999999998*t711*t867;
  t4062 = t4020 + t4044 + t4048;
  t4153 = 0.4999*t711;
  t4186 = t4153 + t3263 + t3283;
  t3719 = 0.5399209599999999*var2[7]*t3687;
  t3759 = 3.5899*t1932*t2395;
  t3760 = 3.5899*t2271*t3687;
  t3778 = 7.1798*t2395*t2448;
  t3781 = 7.1798*t2395*t3687;
  t3793 = t3778 + t3781;
  t3835 = -1.*var2[0]*t3793;
  t3836 = 3.5899*t2395*t2036;
  t3874 = 3.5899*t1305*t2448;
  t3879 = t216*t3584;
  t3880 = t2601 + t3879;
  t3882 = 3.5899*t2395*t3880;
  t3962 = 3.5899*t1305*t3687;
  t3976 = t3836 + t3874 + t3882 + t3962;
  t3977 = -1.*var2[1]*t3976;
  t4010 = 3.5899*t2395*t3345;
  t4015 = t3169*t1245;
  t4148 = t1150*t3309;
  t4344 = 3.5899*t3397*t3687;
  t4357 = -1.*t1150*t3169;
  t5129 = 0.15039999999999998*t240*t345;
  t5141 = t5129 + t4048;
  t5174 = -0.15039999999999998*t711*t240;
  t5184 = t5174 + t3283;
  t4431 = -1.*t3309*t3584;
  t2604 = -1.*t216*t1245;
  t2610 = t2601 + t2604;
  t2931 = -1.*t216*t1967;
  t2935 = t2931 + t1248;
  t2611 = 3.5899*t2610*t2395;
  t2624 = Power(t2036,2);
  t2766 = 3.5899*t2624;
  t2845 = Power(t1305,2);
  t2871 = 3.5899*t2845;
  t2992 = 3.5899*t2935*t2448;
  t3002 = t2611 + t2766 + t2871 + t2992;
  t4073 = t4062*t1245;
  t4191 = t1967*t4186;
  t4200 = t4015 + t4073 + t4148 + t4191;
  t4380 = -1.*t1150*t4062;
  t4388 = -1.*t1245*t4186;
  t4437 = t4357 + t4380 + t4388 + t4431;
  t6105 = 0.5399209599999999*var2[7]*t3880;
  t4835 = Power(t240,2);
  t4836 = 0.15039999999999998*t4835;
  t4893 = 0. + t2153 + t2154 + t4836;
  t4561 = -0.4999*t867;
  t4587 = -1.*t1876*t867;
  t4634 = -0.15039999999999998*t240*t867;
  t4666 = t4561 + t4587 + t4634;
  t6111 = 3.5899*t1932*t1305;
  t6123 = 3.5899*t2271*t3880;
  t6242 = 7.1798*t2036*t1305;
  t6276 = 7.1798*t1305*t3880;
  t6288 = t6242 + t6276;
  t6314 = -1.*var2[1]*t6288;
  t6331 = -1.*var2[0]*t3976;
  t6332 = 3.5899*t1305*t3345;
  t5171 = t5141*t1245;
  t5202 = t1967*t5184;
  t5214 = t4015 + t5171 + t4148 + t5202;
  t6340 = 3.5899*t3397*t3880;
  t5283 = -1.*t1150*t5141;
  t5288 = -1.*t1245*t5184;
  t5312 = t4357 + t5283 + t5288 + t4431;
  t5617 = -3.5899*t2395*t1305;
  t5624 = -3.5899*t2036*t2448;
  t5660 = t5617 + t5624;
  t6056 = 3.5899*t2935*t3345;
  t6074 = 3.5899*t2610*t3397;
  t6075 = t6056 + t6074;
  t3371 = 3.5899*t2036*t3345;
  t3404 = 3.5899*t1305*t3397;
  t3507 = t3371 + t3404;
  t6338 = 3.5899*t1305*t4200;
  t6356 = 3.5899*t2036*t4437;
  t6377 = t6332 + t6338 + t6340 + t6356;
  t4230 = 3.5899*t2395*t4200;
  t4451 = 3.5899*t2448*t4437;
  t4452 = t4010 + t4230 + t4344 + t4451;
  t6475 = 3.5899*t1305*t5214;
  t6508 = 3.5899*t2036*t5312;
  t6546 = t6332 + t6475 + t6340 + t6508;
  t5264 = 3.5899*t2395*t5214;
  t5359 = 3.5899*t2448*t5312;
  t5403 = t4010 + t5264 + t4344 + t5359;
  t5719 = -3.5899*t2448*t3345;
  t5720 = -3.5899*t2395*t3397;
  t5731 = t5719 + t5720;
  t6676 = -3.5899*t2036*t3345;
  t6701 = -3.5899*t1305*t3397;
  t6748 = t6676 + t6701;
  t2135 = 3.5899*t1932*t2036;
  t2275 = 3.5899*t2271*t1305;
  t2306 = t2135 + t2275;
  t5846 = 3.5899*t2271*t2610;
  t5852 = 3.5899*t1932*t2935;
  t5853 = t5846 + t5852;
  t6214 = t6111 + t6123;
  t3761 = t3759 + t3760;
  t7034 = 3.5899*t2271*t4200;
  t7103 = 3.5899*t1932*t4437;
  t7106 = t7034 + t7103;
  t6413 = 3.5899*t4893*t2036;
  t6428 = 3.5899*t4666*t1305;
  t6434 = t6413 + t6428 + t6111 + t6123;
  t4754 = 3.5899*t4666*t2395;
  t4961 = 3.5899*t4893*t2448;
  t5073 = t4754 + t3759 + t4961 + t3760;
  t7231 = 3.5899*t4893*t3345;
  t7289 = 3.5899*t4666*t3397;
  t7303 = 3.5899*t2271*t5214;
  t7345 = 3.5899*t1932*t5312;
  t7353 = t7231 + t7289 + t7303 + t7345;
  t5752 = -3.5899*t2271*t2395;
  t5813 = -3.5899*t1932*t2448;
  t5814 = t5752 + t5813;
  t6771 = -3.5899*t1932*t2036;
  t6875 = -3.5899*t2271*t1305;
  t6930 = t6771 + t6875;
  t7502 = -3.5899*t1932*t3345;
  t7514 = -3.5899*t2271*t3397;
  t7522 = -0.0378 + t7502 + t7514;
  t8621 = 0.5399209599999999*var2[1]*t3880;
  t8622 = 0.5399209599999999*var2[0]*t3687;
  t5818 = 0.5399209599999999*t2395;
  t6940 = 0.5399209599999999*t1305;
  t7523 = 0.5399209599999999*t3397;
  t7524 = -0.0378 + t7523;
  t8556 = 0.5399209599999999*t2271;
  t8574 = -0.0378 + t8556;
  p_output1[0]=-1.*(7.1798*t1305*t2395 + 7.1798*t2036*t2448)*var2[0] - 1.*t3002*var2[1] - 1.*t3507*var2[2] - 1.*t2306*var2[6] + 0.5399209599999999*t1305*var2[7];
  p_output1[1]=t3719 + t3835 + t3977 - 1.*t4452*var2[2] - 1.*t3761*var2[6];
  p_output1[2]=t3719 + t3835 + t3977 - 1.*t5403*var2[2] - 1.*t5073*var2[6];
  p_output1[3]=-3.5899*Power(t2395,2) - 3.5899*Power(t2448,2);
  p_output1[4]=t5660;
  p_output1[5]=t5731;
  p_output1[6]=t5814;
  p_output1[7]=t5818;
  p_output1[8]=-1.*t3002*var2[0] - 1.*(7.1798*t1305*t2610 + 7.1798*t2036*t2935)*var2[1] - 1.*t6075*var2[2] - 1.*t5853*var2[6] + 0.5399209599999999*t2610*var2[7];
  p_output1[9]=t6105 + t6314 + t6331 - 1.*t6377*var2[2] - 1.*t6214*var2[6];
  p_output1[10]=t6105 + t6314 + t6331 - 1.*t6546*var2[2] - 1.*t6434*var2[6];
  p_output1[11]=t5660;
  p_output1[12]=-3.5899*t2624 - 3.5899*t2845;
  p_output1[13]=t6748;
  p_output1[14]=t6930;
  p_output1[15]=t6940;
  p_output1[16]=-1.*t3507*var2[0] - 1.*t6075*var2[1];
  p_output1[17]=-1.*t4452*var2[0] - 1.*t6377*var2[1] - 1.*(7.1798*t3397*t4200 + 7.1798*t3345*t4437)*var2[2] - 1.*t7106*var2[6] + 0.5399209599999999*t4200*var2[7];
  p_output1[18]=-1.*t5403*var2[0] - 1.*t6546*var2[1] - 1.*(7.1798*t3397*t5214 + 7.1798*t3345*t5312)*var2[2] - 1.*t7353*var2[6] + 0.5399209599999999*t5214*var2[7];
  p_output1[19]=t5731;
  p_output1[20]=t6748;
  p_output1[21]=-0.0378 - 3.5899*Power(t3345,2) - 3.5899*Power(t3397,2);
  p_output1[22]=t7522;
  p_output1[23]=t7524;
  p_output1[24]=-1.*t2306*var2[0] - 1.*t5853*var2[1];
  p_output1[25]=-1.*t3761*var2[0] - 1.*t6214*var2[1] - 1.*t7106*var2[2];
  p_output1[26]=-1.*t5073*var2[0] - 1.*t6434*var2[1] - 1.*t7353*var2[2] - 1.*(7.1798*t2271*t4666 + 7.1798*t1932*t4893)*var2[6] + 0.5399209599999999*t4666*var2[7];
  p_output1[27]=t5814;
  p_output1[28]=t6930;
  p_output1[29]=t7522;
  p_output1[30]=-0.0378 - 3.5899*Power(t1932,2) - 3.5899*Power(t2271,2);
  p_output1[31]=t8574;
  p_output1[32]=0.5399209599999999*t1305*var2[0] + 0.5399209599999999*t2610*var2[1];
  p_output1[33]=t8621 + t8622 + 0.5399209599999999*t4200*var2[2];
  p_output1[34]=t8621 + t8622 + 0.5399209599999999*t5214*var2[2] + 0.5399209599999999*t4666*var2[6];
  p_output1[35]=t5818;
  p_output1[36]=t6940;
  p_output1[37]=t7524;
  p_output1[38]=t8574;
  p_output1[39]=-0.11900411238399997;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx6_amber3_feet.hh"

namespace RightSS1
{

void J_MmatDx6_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
