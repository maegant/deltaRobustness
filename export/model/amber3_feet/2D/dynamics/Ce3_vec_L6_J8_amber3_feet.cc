/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:39 GMT-08:00
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
  double t1856;
  double t652;
  double t768;
  double t1902;
  double t2174;
  double t1760;
  double t1913;
  double t1930;
  double t551;
  double t2525;
  double t2658;
  double t2984;
  double t4170;
  double t4286;
  double t4298;
  double t4331;
  double t4334;
  double t4646;
  double t4661;
  double t2021;
  double t3708;
  double t5178;
  double t5187;
  double t5270;
  double t4118;
  double t4344;
  double t4378;
  double t4422;
  double t4448;
  double t4533;
  double t4602;
  double t4607;
  double t4618;
  double t4695;
  double t4804;
  double t4907;
  double t4977;
  double t5088;
  double t5300;
  double t5313;
  double t5372;
  double t5391;
  double t5506;
  double t5632;
  t1856 = Cos(var1[6]);
  t652 = Cos(var1[7]);
  t768 = Sin(var1[6]);
  t1902 = Sin(var1[7]);
  t2174 = Cos(var1[2]);
  t1760 = -1.*t652*t768;
  t1913 = -1.*t1856*t1902;
  t1930 = t1760 + t1913;
  t551 = Sin(var1[2]);
  t2525 = t1856*t652;
  t2658 = -1.*t768*t1902;
  t2984 = t2525 + t2658;
  t4170 = -1.*t652;
  t4286 = 1. + t4170;
  t4298 = -0.9063*t4286;
  t4331 = -1.0567*t652;
  t4334 = t4298 + t4331;
  t4646 = t1856*t4334;
  t4661 = 0.15039999999999998*t768*t1902;
  t2021 = -1.*t551*t1930;
  t3708 = t2174*t1930;
  t5178 = -1.*t1856*t652;
  t5187 = t768*t1902;
  t5270 = t5178 + t5187;
  t4118 = 0.4999*t768;
  t4344 = t4334*t768;
  t4378 = -0.15039999999999998*t1856*t1902;
  t4422 = t4118 + t4344 + t4378;
  t4448 = t4422*t2984;
  t4533 = 0.15039999999999998*t1856*t1902;
  t4602 = -1.*t1856;
  t4607 = 1. + t4602;
  t4618 = -0.4999*t4607;
  t4695 = t4618 + t4646 + t4661;
  t4804 = t1930*t4695;
  t4907 = t652*t768;
  t4977 = t1856*t1902;
  t5088 = t4907 + t4977;
  t5300 = t2174*t5270;
  t5313 = t2021 + t5300;
  t5372 = -0.26996047999999995*var2[1]*t5313;
  t5391 = t551*t5270;
  t5506 = t3708 + t5391;
  t5632 = -0.26996047999999995*var2[0]*t5506;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.26996047999999995*(t3708 - 1.*t2984*t551)*var2[0] - 0.26996047999999995*(t2021 - 1.*t2174*t2984)*var2[1])*var2[7];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(t5372 + t5632 - 0.26996047999999995*(t4448 + t4804 + (0.4999*t1856 + t4646 + t4661)*t5088 + t2984*(t4533 - 0.4999*t768 - 1.*t4334*t768))*var2[2])*var2[7];
  p_output1[7]=(t5372 + t5632 - 0.26996047999999995*(t4448 + t4804 + t5088*(t4661 - 0.15039999999999998*t1856*t652) + t2984*(t4533 + 0.15039999999999998*t652*t768))*var2[2] - 0.26996047999999995*(-0.4999*t1902 - 1.*t1902*t4334 - 0.15039999999999998*t1902*t652)*var2[6])*var2[7];
  p_output1[8]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec_L6_J8_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L6_J8_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
