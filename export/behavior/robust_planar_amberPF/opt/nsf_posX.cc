/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:43 GMT-08:00
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
static void output1(double *p_output1,const double *var1)
{
  double t338;
  double t184;
  double t621;
  double t658;
  double t662;
  double t784;
  double t850;
  double t909;
  double t958;
  double t960;
  double t988;
  double t990;
  double t392;
  double t1079;
  double t1113;
  double t1150;
  double t1172;
  double t1175;
  double t1188;
  double t1262;
  double t1264;
  double t1274;
  t338 = Sin(var1[2]);
  t184 = Cos(var1[3]);
  t621 = Cos(var1[2]);
  t658 = Sin(var1[3]);
  t662 = Cos(var1[4]);
  t784 = t184*t338;
  t850 = t621*t658;
  t909 = t784 + t850;
  t958 = t621*t184;
  t960 = -1.*t338*t658;
  t988 = t958 + t960;
  t990 = Sin(var1[4]);
  t392 = Cos(var1[5]);
  t1079 = Sin(var1[5]);
  t1113 = Cos(var1[6]);
  t1150 = t392*t338;
  t1172 = t621*t1079;
  t1175 = t1150 + t1172;
  t1188 = t621*t392;
  t1262 = -1.*t338*t1079;
  t1264 = t1188 + t1262;
  t1274 = Sin(var1[6]);
  p_output1[0]=0.9063*(1. - 1.*t1113)*t1175 - 0.9063*t1264*t1274 + 1.373025*(t1113*t1175 + t1264*t1274) - 0.4999*(1. - 1.*t184)*t338 + 0.4999*t338*(1. - 1.*t392) - 0.4999*t1079*t621 + 0.4999*t621*t658 - 0.9063*(1. - 1.*t662)*t909 + 0.9063*t988*t990 - 1.373025*(t662*t909 + t988*t990);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "nsf_posX.hh"

namespace RightSS
{

void nsf_posX_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
