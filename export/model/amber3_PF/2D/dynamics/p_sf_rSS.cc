/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:26:51 GMT-08:00
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
  double t1249;
  double t1981;
  double t2187;
  double t2585;
  double t3020;
  double t4426;
  double t4645;
  double t4672;
  double t5212;
  double t5252;
  double t5399;
  double t5584;
  double t1669;
  double t1974;
  double t3671;
  double t4041;
  double t6421;
  double t6435;
  double t6436;
  t1249 = Cos(var1[5]);
  t1981 = Sin(var1[2]);
  t2187 = Cos(var1[2]);
  t2585 = Sin(var1[5]);
  t3020 = Cos(var1[6]);
  t4426 = t1249*t1981;
  t4645 = t2187*t2585;
  t4672 = t4426 + t4645;
  t5212 = t2187*t1249;
  t5252 = -1.*t1981*t2585;
  t5399 = t5212 + t5252;
  t5584 = Sin(var1[6]);
  t1669 = -1.*t1249;
  t1974 = 1. + t1669;
  t3671 = -1.*t3020;
  t4041 = 1. + t3671;
  t6421 = -1.*t1249*t1981;
  t6435 = -1.*t2187*t2585;
  t6436 = t6421 + t6435;
  p_output1[0]=-0.4999*t1974*t1981 + 0.4999*t2187*t2585 - 0.9063*t4041*t4672 + 0.9063*t5399*t5584 - 1.373025*(t3020*t4672 + t5399*t5584) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t1974*t2187 - 0.4999*t1981*t2585 - 0.9063*t4041*t5399 + 0.9063*t5584*t6436 - 1.373025*(t3020*t5399 + t5584*t6436) + var1[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_sf_rSS.hh"

namespace SymFunction
{

void p_sf_rSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
