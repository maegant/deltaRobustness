/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:26 GMT-08:00
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
  double t1245;
  double t1344;
  double t1414;
  double t1431;
  double t1467;
  double t1540;
  double t1559;
  double t1582;
  double t1709;
  double t1710;
  double t1741;
  double t1750;
  double t1262;
  double t1308;
  double t1468;
  double t1498;
  double t1992;
  double t1996;
  double t2019;
  t1245 = Cos(var1[3]);
  t1344 = Sin(var1[2]);
  t1414 = Cos(var1[2]);
  t1431 = Sin(var1[3]);
  t1467 = Cos(var1[4]);
  t1540 = t1245*t1344;
  t1559 = t1414*t1431;
  t1582 = t1540 + t1559;
  t1709 = t1414*t1245;
  t1710 = -1.*t1344*t1431;
  t1741 = t1709 + t1710;
  t1750 = Sin(var1[4]);
  t1262 = -1.*t1245;
  t1308 = 1. + t1262;
  t1468 = -1.*t1467;
  t1498 = 1. + t1468;
  t1992 = -1.*t1245*t1344;
  t1996 = -1.*t1414*t1431;
  t2019 = t1992 + t1996;
  p_output1[0]=-0.4999*t1308*t1344 + 0.4999*t1414*t1431 - 0.9063*t1498*t1582 + 0.9063*t1741*t1750 - 0.9063*(t1467*t1582 + t1741*t1750) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t1308*t1414 - 0.4999*t1344*t1431 - 0.9063*t1498*t1741 + 0.9063*t1750*t2019 - 0.9063*(t1467*t1741 + t1750*t2019) + var1[1];
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
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

#include "Joint_LeftKnee_sphere_center.hh"

namespace SymFunction
{

void Joint_LeftKnee_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
