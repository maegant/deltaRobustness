/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:24:00 GMT-08:00
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
  double t200;
  double t203;
  double t288;
  double t434;
  double t513;
  double t560;
  double t617;
  double t711;
  double t779;
  double t867;
  double t1150;
  double t1164;
  double t1165;
  double t1689;
  double t1693;
  double t1764;
  double t1876;
  double t1877;
  double t668;
  double t929;
  double t1191;
  double t1197;
  double t1199;
  double t1242;
  double t1245;
  double t1248;
  double t1305;
  double t1342;
  double t1345;
  double t1468;
  double t1574;
  double t1607;
  double t1682;
  double t1684;
  double t1967;
  double t1883;
  double t1889;
  double t1932;
  double t1959;
  double t1983;
  double t2005;
  double t2036;
  double t2135;
  double t2870;
  double t2871;
  double t2889;
  double t2894;
  double t2902;
  double t2356;
  double t2371;
  double t2395;
  double t2931;
  double t2271;
  double t2275;
  double t2306;
  double t2935;
  double t2601;
  double t2604;
  double t2610;
  double t2508;
  double t2142;
  double t2939;
  double t2346;
  double t2396;
  double t2405;
  double t3054;
  double t3055;
  double t3094;
  double t2611;
  double t2624;
  double t2766;
  double t3247;
  double t3248;
  double t3263;
  double t3761;
  double t3774;
  double t2845;
  double t3283;
  double t3759;
  double t3760;
  t200 = Cos(var1[6]);
  t203 = Sin(var1[2]);
  t288 = -1.*t200*t203;
  t434 = Cos(var1[2]);
  t513 = Sin(var1[6]);
  t560 = -1.*t434*t513;
  t617 = t288 + t560;
  t711 = t434*t200;
  t779 = -1.*t203*t513;
  t867 = t711 + t779;
  t1150 = t200*t203;
  t1164 = t434*t513;
  t1165 = t1150 + t1164;
  t1689 = -1.*t200;
  t1693 = 1. + t1689;
  t1764 = -0.4999*t1693;
  t1876 = -0.6493*t200;
  t1877 = t1764 + t1876;
  t668 = 0.5118593399999999*var2[6]*t617;
  t929 = 6.8522*t617*t867;
  t1191 = 6.8522*t1165*t867;
  t1197 = t929 + t1191;
  t1199 = -1.*var2[0]*t1197;
  t1242 = Power(t617,2);
  t1245 = 3.4261*t1242;
  t1248 = 3.4261*t617*t1165;
  t1305 = Power(t867,2);
  t1342 = 3.4261*t1305;
  t1345 = -1.*t434*t200;
  t1468 = t203*t513;
  t1574 = t1345 + t1468;
  t1607 = 3.4261*t867*t1574;
  t1682 = t1245 + t1248 + t1342 + t1607;
  t1684 = -1.*var2[1]*t1682;
  t1967 = t1877*t200;
  t1883 = t1877*t513;
  t1889 = 0.14939999999999998*t200*t513;
  t1932 = t1883 + t1889;
  t1959 = 3.4261*t1932*t867;
  t1983 = Power(t513,2);
  t2005 = -0.14939999999999998*t1983;
  t2036 = t1967 + t2005;
  t2135 = 3.4261*t617*t2036;
  t2870 = 0.5118593399999999*var2[6]*t1574;
  t2871 = 6.8522*t617*t1574;
  t2889 = t929 + t2871;
  t2894 = -1.*var2[1]*t2889;
  t2902 = -1.*var2[0]*t1682;
  t2356 = -1.*t1877*t513;
  t2371 = -0.14939999999999998*t200*t513;
  t2395 = t2356 + t2371;
  t2931 = 3.4261*t617*t1932;
  t2271 = Power(t200,2);
  t2275 = 0.14939999999999998*t2271;
  t2306 = 0. + t1967 + t2275;
  t2935 = 3.4261*t1574*t2036;
  t2601 = -3.4261*t617*t867;
  t2604 = -3.4261*t1165*t867;
  t2610 = t2601 + t2604;
  t2508 = -3.4261*t1305;
  t2142 = t1959 + t2135;
  t2939 = t2931 + t2935;
  t2346 = 3.4261*t2306*t1165;
  t2396 = 3.4261*t2395*t867;
  t2405 = t2346 + t2396 + t1959 + t2135;
  t3054 = 3.4261*t617*t2395;
  t3055 = 3.4261*t2306*t867;
  t3094 = t3054 + t2931 + t3055 + t2935;
  t2611 = -3.4261*t1165*t1932;
  t2624 = -3.4261*t867*t2036;
  t2766 = t2611 + t2624;
  t3247 = -3.4261*t1932*t867;
  t3248 = -3.4261*t617*t2036;
  t3263 = t3247 + t3248;
  t3761 = 0.5118593399999999*var2[0]*t617;
  t3774 = 0.5118593399999999*var2[1]*t1574;
  t2845 = 0.5118593399999999*t867;
  t3283 = 0.5118593399999999*t617;
  t3759 = 0.5118593399999999*t2036;
  t3760 = -0.0389 + t3759;
  p_output1[0]=t1199 + t1684 + t668 - 1.*t2142*var2[2];
  p_output1[1]=t1199 + t1684 + t668 - 1.*t2405*var2[2];
  p_output1[2]=-3.4261*Power(t1165,2) + t2508;
  p_output1[3]=t2610;
  p_output1[4]=t2766;
  p_output1[5]=t2845;
  p_output1[6]=t2870 + t2894 + t2902 - 1.*t2939*var2[2];
  p_output1[7]=t2870 + t2894 + t2902 - 1.*t3094*var2[2];
  p_output1[8]=t2610;
  p_output1[9]=-3.4261*t1242 + t2508;
  p_output1[10]=t3263;
  p_output1[11]=t3283;
  p_output1[12]=-1.*t2142*var2[0] - 1.*t2939*var2[1];
  p_output1[13]=-1.*t2405*var2[0] - 1.*t3094*var2[1] - 1.*(6.8522*t1932*t2306 + 6.8522*t2036*t2395)*var2[2] + 0.5118593399999999*t2395*var2[6];
  p_output1[14]=t2766;
  p_output1[15]=t3263;
  p_output1[16]=-0.0389 - 3.4261*Power(t1932,2) - 3.4261*Power(t2036,2);
  p_output1[17]=t3760;
  p_output1[18]=t3761 + t3774;
  p_output1[19]=t3761 + t3774 + 0.5118593399999999*t2395*var2[2];
  p_output1[20]=t2845;
  p_output1[21]=t3283;
  p_output1[22]=t3760;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 24, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx5_amber3_feet.hh"

namespace RightSS1
{

void J_MmatDx5_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
