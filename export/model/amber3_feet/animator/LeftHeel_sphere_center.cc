/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:37 GMT-08:00
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
  double t603;
  double t1218;
  double t1606;
  double t1822;
  double t2928;
  double t3556;
  double t3594;
  double t3619;
  double t3924;
  double t3985;
  double t4031;
  double t4075;
  double t4133;
  double t4170;
  double t4185;
  double t4200;
  double t4232;
  double t4260;
  double t4290;
  double t4297;
  double t1108;
  double t1188;
  double t3343;
  double t3412;
  double t4144;
  double t4167;
  double t4590;
  double t4648;
  double t4654;
  double t4709;
  double t4717;
  double t4722;
  double t4694;
  double t4697;
  t603 = Cos(var1[3]);
  t1218 = Sin(var1[2]);
  t1606 = Cos(var1[2]);
  t1822 = Sin(var1[3]);
  t2928 = Cos(var1[4]);
  t3556 = t603*t1218;
  t3594 = t1606*t1822;
  t3619 = t3556 + t3594;
  t3924 = t1606*t603;
  t3985 = -1.*t1218*t1822;
  t4031 = t3924 + t3985;
  t4075 = Sin(var1[4]);
  t4133 = Cos(var1[5]);
  t4170 = t2928*t3619;
  t4185 = t4031*t4075;
  t4200 = t4170 + t4185;
  t4232 = t2928*t4031;
  t4260 = -1.*t3619*t4075;
  t4290 = t4232 + t4260;
  t4297 = Sin(var1[5]);
  t1108 = -1.*t603;
  t1188 = 1. + t1108;
  t3343 = -1.*t2928;
  t3412 = 1. + t3343;
  t4144 = -1.*t4133;
  t4167 = 1. + t4144;
  t4590 = -1.*t603*t1218;
  t4648 = -1.*t1606*t1822;
  t4654 = t4590 + t4648;
  t4709 = t2928*t4654;
  t4717 = -1.*t4031*t4075;
  t4722 = t4709 + t4717;
  t4694 = t4654*t4075;
  t4697 = t4232 + t4694;
  p_output1[0]=-0.4999*t1188*t1218 + 0.4999*t1606*t1822 - 0.9063*t3412*t3619 + 0.9063*t4031*t4075 - 1.3127*t4167*t4200 + 1.3127*t4290*t4297 - 0.04*(t4133*t4290 - 1.*t4200*t4297) - 1.3127*(t4133*t4200 + t4290*t4297) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t1188*t1606 - 0.4999*t1218*t1822 - 0.9063*t3412*t4031 + 0.9063*t4075*t4654 - 1.3127*t4167*t4697 + 1.3127*t4297*t4722 - 0.04*(-1.*t4297*t4697 + t4133*t4722) - 1.3127*(t4133*t4697 + t4297*t4722) + var1[1];
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

#include "LeftHeel_sphere_center.hh"

namespace SymFunction
{

void LeftHeel_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
