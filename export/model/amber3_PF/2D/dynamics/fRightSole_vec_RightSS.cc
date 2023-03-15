/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:29 GMT-08:00
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
  double t109;
  double t210;
  double t2061;
  double t2274;
  double t2797;
  double t2956;
  double t2965;
  double t3003;
  double t3031;
  double t3062;
  double t3092;
  double t3136;
  double t599;
  double t716;
  double t2905;
  double t2955;
  double t4755;
  double t4810;
  double t5072;
  double t2495;
  double t3023;
  double t3174;
  double t3176;
  double t3193;
  double t3197;
  double t3248;
  double t4130;
  double t4586;
  double t5216;
  double t5373;
  double t5442;
  double t5445;
  double t5473;
  double t6327;
  double t6344;
  double t6364;
  t109 = Cos(var1[2]);
  t210 = Cos(var1[5]);
  t2061 = Sin(var1[2]);
  t2274 = Sin(var1[5]);
  t2797 = Cos(var1[6]);
  t2956 = t109*t210;
  t2965 = -1.*t2061*t2274;
  t3003 = t2956 + t2965;
  t3031 = -1.*t210*t2061;
  t3062 = -1.*t109*t2274;
  t3092 = t3031 + t3062;
  t3136 = Sin(var1[6]);
  t599 = -1.*t210;
  t716 = 1. + t599;
  t2905 = -1.*t2797;
  t2955 = 1. + t2905;
  t4755 = -1.*t109*t210;
  t4810 = t2061*t2274;
  t5072 = t4755 + t4810;
  t2495 = -0.4999*t2061*t2274;
  t3023 = -0.9063*t2955*t3003;
  t3174 = 0.9063*t3092*t3136;
  t3176 = t2797*t3003;
  t3193 = t3092*t3136;
  t3197 = t3176 + t3193;
  t3248 = -1.373025*t3197;
  t4130 = -0.4999*t109*t2274;
  t4586 = -0.9063*t2955*t3092;
  t5216 = 0.9063*t5072*t3136;
  t5373 = t2797*t3092;
  t5442 = t5072*t3136;
  t5445 = t5373 + t5442;
  t5473 = -1.373025*t5445;
  t6327 = t210*t2061;
  t6344 = t109*t2274;
  t6364 = t6327 + t6344;
  p_output1[0]=var2[0];
  p_output1[1]=var2[1];
  p_output1[2]=(0. + t2495 + t3023 + t3174 + t3248 - 0.4999*t109*t716)*var2[0] + (0. + t4130 + t4586 + t5216 + t5473 + 0.4999*t2061*t716)*var2[1];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(0. + 0.4999*t109*t210 + t2495 + t3023 + t3174 + t3248)*var2[0] + (0. - 0.4999*t2061*t210 + t4130 + t4586 + t5216 + t5473)*var2[1];
  p_output1[6]=(0. + 0.9063*t2797*t3003 - 0.9063*t3136*t6364 - 1.373025*(t3176 - 1.*t3136*t6364))*var2[0] + (0. + 0.9063*t2797*t3092 - 0.9063*t3003*t3136 - 1.373025*(-1.*t3003*t3136 + t5373))*var2[1];
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
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRightSole_vec_RightSS.hh"

namespace RightSS
{

void fRightSole_vec_RightSS_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
