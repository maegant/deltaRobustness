/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:34 GMT-08:00
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
  double t137;
  double t203;
  double t366;
  double t751;
  double t936;
  double t945;
  double t947;
  double t1272;
  double t1322;
  double t1332;
  double t1606;
  double t1822;
  double t1898;
  double t3346;
  double t3486;
  double t3508;
  double t3513;
  double t3556;
  double t1168;
  double t1495;
  double t1910;
  double t2055;
  double t2086;
  double t2513;
  double t3023;
  double t3058;
  double t3111;
  double t3125;
  double t3162;
  double t3174;
  double t3240;
  double t3285;
  double t3288;
  double t3323;
  double t3887;
  double t3699;
  double t3757;
  double t3849;
  double t3870;
  double t4130;
  double t4197;
  double t4359;
  double t4648;
  double t6257;
  double t6265;
  double t6310;
  double t6327;
  double t6332;
  double t5402;
  double t5442;
  double t5497;
  double t6344;
  double t5314;
  double t5315;
  double t5329;
  double t6427;
  double t5859;
  double t6000;
  double t6001;
  double t5841;
  double t5072;
  double t6444;
  double t5330;
  double t5551;
  double t5554;
  double t6485;
  double t6510;
  double t6545;
  double t6033;
  double t6057;
  double t6218;
  double t6717;
  double t6720;
  double t6728;
  double t7916;
  double t7981;
  double t6222;
  double t6754;
  double t7652;
  double t7720;
  t137 = Cos(var1[5]);
  t203 = Sin(var1[2]);
  t366 = -1.*t137*t203;
  t751 = Cos(var1[2]);
  t936 = Sin(var1[5]);
  t945 = -1.*t751*t936;
  t947 = t366 + t945;
  t1272 = t751*t137;
  t1322 = -1.*t203*t936;
  t1332 = t1272 + t1322;
  t1606 = t137*t203;
  t1822 = t751*t936;
  t1898 = t1606 + t1822;
  t3346 = -1.*t137;
  t3486 = 1. + t3346;
  t3508 = -0.4999*t3486;
  t3513 = -0.6493*t137;
  t3556 = t3508 + t3513;
  t1168 = 0.5118593399999999*var2[5]*t947;
  t1495 = 6.8522*t947*t1332;
  t1910 = 6.8522*t1898*t1332;
  t2055 = t1495 + t1910;
  t2086 = -1.*var2[0]*t2055;
  t2513 = Power(t947,2);
  t3023 = 3.4261*t2513;
  t3058 = 3.4261*t947*t1898;
  t3111 = Power(t1332,2);
  t3125 = 3.4261*t3111;
  t3162 = -1.*t751*t137;
  t3174 = t203*t936;
  t3240 = t3162 + t3174;
  t3285 = 3.4261*t1332*t3240;
  t3288 = t3023 + t3058 + t3125 + t3285;
  t3323 = -1.*var2[1]*t3288;
  t3887 = t3556*t137;
  t3699 = t3556*t936;
  t3757 = 0.14939999999999998*t137*t936;
  t3849 = t3699 + t3757;
  t3870 = 3.4261*t3849*t1332;
  t4130 = Power(t936,2);
  t4197 = -0.14939999999999998*t4130;
  t4359 = t3887 + t4197;
  t4648 = 3.4261*t947*t4359;
  t6257 = 0.5118593399999999*var2[5]*t3240;
  t6265 = 6.8522*t947*t3240;
  t6310 = t1495 + t6265;
  t6327 = -1.*var2[1]*t6310;
  t6332 = -1.*var2[0]*t3288;
  t5402 = -1.*t3556*t936;
  t5442 = -0.14939999999999998*t137*t936;
  t5497 = t5402 + t5442;
  t6344 = 3.4261*t947*t3849;
  t5314 = Power(t137,2);
  t5315 = 0.14939999999999998*t5314;
  t5329 = 0. + t3887 + t5315;
  t6427 = 3.4261*t3240*t4359;
  t5859 = -3.4261*t947*t1332;
  t6000 = -3.4261*t1898*t1332;
  t6001 = t5859 + t6000;
  t5841 = -3.4261*t3111;
  t5072 = t3870 + t4648;
  t6444 = t6344 + t6427;
  t5330 = 3.4261*t5329*t1898;
  t5551 = 3.4261*t5497*t1332;
  t5554 = t5330 + t5551 + t3870 + t4648;
  t6485 = 3.4261*t947*t5497;
  t6510 = 3.4261*t5329*t1332;
  t6545 = t6485 + t6344 + t6510 + t6427;
  t6033 = -3.4261*t1898*t3849;
  t6057 = -3.4261*t1332*t4359;
  t6218 = t6033 + t6057;
  t6717 = -3.4261*t3849*t1332;
  t6720 = -3.4261*t947*t4359;
  t6728 = t6717 + t6720;
  t7916 = 0.5118593399999999*var2[0]*t947;
  t7981 = 0.5118593399999999*var2[1]*t3240;
  t6222 = 0.5118593399999999*t1332;
  t6754 = 0.5118593399999999*t947;
  t7652 = 0.5118593399999999*t4359;
  t7720 = -0.0389 + t7652;
  p_output1[0]=t1168 + t2086 + t3323 - 1.*t5072*var2[2];
  p_output1[1]=t1168 + t2086 + t3323 - 1.*t5554*var2[2];
  p_output1[2]=-3.4261*Power(t1898,2) + t5841;
  p_output1[3]=t6001;
  p_output1[4]=t6218;
  p_output1[5]=t6222;
  p_output1[6]=t6257 + t6327 + t6332 - 1.*t6444*var2[2];
  p_output1[7]=t6257 + t6327 + t6332 - 1.*t6545*var2[2];
  p_output1[8]=t6001;
  p_output1[9]=-3.4261*t2513 + t5841;
  p_output1[10]=t6728;
  p_output1[11]=t6754;
  p_output1[12]=-1.*t5072*var2[0] - 1.*t6444*var2[1];
  p_output1[13]=-1.*t5554*var2[0] - 1.*t6545*var2[1] - 1.*(6.8522*t3849*t5329 + 6.8522*t4359*t5497)*var2[2] + 0.5118593399999999*t5497*var2[5];
  p_output1[14]=t6218;
  p_output1[15]=t6728;
  p_output1[16]=-0.0389 - 3.4261*Power(t3849,2) - 3.4261*Power(t4359,2);
  p_output1[17]=t7720;
  p_output1[18]=t7916 + t7981;
  p_output1[19]=t7916 + t7981 + 0.5118593399999999*t5497*var2[2];
  p_output1[20]=t6222;
  p_output1[21]=t6754;
  p_output1[22]=t7720;
  p_output1[23]=-0.11537178539599996;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 24, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx4_amber3_PF.hh"

namespace RightSS
{

void J_MmatDx4_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
