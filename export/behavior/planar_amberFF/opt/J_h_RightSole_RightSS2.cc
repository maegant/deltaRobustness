/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:09 GMT-08:00
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
  double t89;
  double t140;
  double t1052;
  double t1237;
  double t1590;
  double t1871;
  double t1976;
  double t2198;
  double t2347;
  double t2349;
  double t2456;
  double t2567;
  double t2710;
  double t3353;
  double t3493;
  double t3515;
  double t2994;
  double t2996;
  double t3038;
  double t3651;
  double t1562;
  double t1594;
  double t1849;
  double t2246;
  double t2616;
  double t2839;
  double t2840;
  double t3317;
  double t3655;
  double t3687;
  double t3965;
  double t4004;
  double t4102;
  double t4221;
  double t4231;
  double t4423;
  double t4508;
  double t4753;
  double t4790;
  double t4801;
  double t4904;
  double t4925;
  double t4842;
  double t4849;
  double t5164;
  double t5165;
  double t5174;
  double t4984;
  double t5088;
  double t569;
  double t950;
  double t5267;
  double t5280;
  double t5289;
  double t5322;
  double t5330;
  double t5357;
  double t5382;
  double t5501;
  double t5223;
  double t5242;
  double t5291;
  double t5346;
  double t5511;
  double t5513;
  double t5522;
  double t5527;
  double t5532;
  double t5543;
  double t5562;
  double t5660;
  double t5662;
  double t5854;
  double t5855;
  double t6022;
  double t5197;
  double t5199;
  double t6265;
  double t6298;
  double t6308;
  double t6348;
  double t6350;
  double t6352;
  double t6376;
  double t6378;
  double t6251;
  double t6301;
  double t6389;
  double t6421;
  double t6440;
  double t6451;
  double t6471;
  double t6472;
  double t6482;
  double t4970;
  double t4988;
  double t5188;
  double t5194;
  t89 = Cos(var1[2]);
  t140 = Cos(var1[6]);
  t1052 = Sin(var1[2]);
  t1237 = Sin(var1[6]);
  t1590 = Cos(var1[7]);
  t1871 = t89*t140;
  t1976 = -1.*t1052*t1237;
  t2198 = t1871 + t1976;
  t2347 = -1.*t140*t1052;
  t2349 = -1.*t89*t1237;
  t2456 = t2347 + t2349;
  t2567 = Sin(var1[7]);
  t2710 = Cos(var1[8]);
  t3353 = t1590*t2456;
  t3493 = -1.*t2198*t2567;
  t3515 = t3353 + t3493;
  t2994 = t1590*t2198;
  t2996 = t2456*t2567;
  t3038 = t2994 + t2996;
  t3651 = Sin(var1[8]);
  t1562 = -0.4999*t1052*t1237;
  t1594 = -1.*t1590;
  t1849 = 1. + t1594;
  t2246 = -0.9063*t1849*t2198;
  t2616 = 0.9063*t2456*t2567;
  t2839 = -1.*t2710;
  t2840 = 1. + t2839;
  t3317 = -1.3127*t2840*t3038;
  t3655 = 1.3127*t3515*t3651;
  t3687 = t2710*t3515;
  t3965 = -1.*t3038*t3651;
  t4004 = t3687 + t3965;
  t4102 = 0.06*t4004;
  t4221 = t2710*t3038;
  t4231 = t3515*t3651;
  t4423 = t4221 + t4231;
  t4508 = -1.3127*t4423;
  t4753 = t140*t1052;
  t4790 = t89*t1237;
  t4801 = t4753 + t4790;
  t4904 = -1.*t1590*t4801;
  t4925 = t4904 + t3493;
  t4842 = -1.*t4801*t2567;
  t4849 = t2994 + t4842;
  t5164 = t1590*t4801;
  t5165 = t2198*t2567;
  t5174 = t5164 + t5165;
  t4984 = -1.*t4849*t3651;
  t5088 = t2710*t4849;
  t569 = -1.*t140;
  t950 = 1. + t569;
  t5267 = -1.*t89*t140;
  t5280 = t1052*t1237;
  t5289 = t5267 + t5280;
  t5322 = t5289*t2567;
  t5330 = t3353 + t5322;
  t5357 = t1590*t5289;
  t5382 = -1.*t2456*t2567;
  t5501 = t5357 + t5382;
  t5223 = -0.4999*t89*t1237;
  t5242 = -0.9063*t1849*t2456;
  t5291 = 0.9063*t5289*t2567;
  t5346 = -1.3127*t2840*t5330;
  t5511 = 1.3127*t5501*t3651;
  t5513 = t2710*t5330;
  t5522 = t5501*t3651;
  t5527 = t5513 + t5522;
  t5532 = -1.3127*t5527;
  t5543 = t2710*t5501;
  t5562 = -1.*t5330*t3651;
  t5660 = t5543 + t5562;
  t5662 = 0.06*t5660;
  t5854 = -1.*t1590*t2198;
  t5855 = t5854 + t5382;
  t6022 = -1.*t3515*t3651;
  t5197 = -1.*t5174*t3651;
  t5199 = t5088 + t5197;
  t6265 = Power(t5199,2);
  t6298 = 0. + t6265;
  t6308 = -1.*t2710*t3515;
  t6348 = t3038*t3651;
  t6350 = t6308 + t6348;
  t6352 = Power(t6350,2);
  t6376 = 0. + t6352 + t6265;
  t6378 = 1/t6376;
  t6251 = Power(t4004,2);
  t6301 = 1/Sqrt(t6298);
  t6389 = t6251*t5199*t6301*t6378;
  t6421 = -1.*t2710*t5501;
  t6440 = t5330*t3651;
  t6451 = t6421 + t6440;
  t6471 = Sqrt(t6298);
  t6472 = t6451*t6471*t6378;
  t6482 = t6389 + t6472;
  t4970 = t2710*t4925;
  t4988 = t4970 + t4984;
  t5188 = -1.*t2710*t5174;
  t5194 = t5188 + t4984;
  p_output1[0]=1.;
  p_output1[1]=t1562 + t2246 + t2616 + t3317 + t3655 + t4102 + t4508 - 0.4999*t89*t950;
  p_output1[2]=t1562 + t2246 + t2616 + t3317 + t3655 + t4102 + t4508 + 0.4999*t140*t89;
  p_output1[3]=0.9063*t1590*t2198 - 0.9063*t2567*t4801 - 1.3127*t2840*t4849 + 1.3127*t3651*t4925 + 0.06*t4988 - 1.3127*(t3651*t4925 + t5088);
  p_output1[4]=1.3127*t2710*t4849 - 1.3127*t3651*t5174 + 0.06*t5194 - 1.3127*t5199;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t5223 + t5242 + t5291 + t5346 + t5511 + t5532 + t5662 + 0.4999*t1052*t950;
  p_output1[8]=-0.4999*t1052*t140 + t5223 + t5242 + t5291 + t5346 + t5511 + t5532 + t5662;
  p_output1[9]=0.9063*t1590*t2456 - 0.9063*t2198*t2567 - 1.3127*t2840*t3515 + 1.3127*t3651*t5855 - 1.3127*(t3687 + t3651*t5855) + 0.06*(t2710*t5855 + t6022);
  p_output1[10]=1.3127*t2710*t3515 - 1.3127*t3038*t3651 - 1.3127*t4004 + 0.06*(-1.*t2710*t3038 + t6022);
  p_output1[11]=-1.;
  p_output1[12]=t6482;
  p_output1[13]=t6482;
  p_output1[14]=t4004*t4988*t5199*t6301*t6378 + (t4231 - 1.*t2710*t5855)*t6378*t6471;
  p_output1[15]=t4004*t5194*t5199*t6301*t6378 + t4423*t6378*t6471;
  p_output1[16]=-1.;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightSole_RightSS2.hh"

namespace RightSS2
{

void J_h_RightSole_RightSS2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
