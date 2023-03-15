/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:56 GMT-08:00
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
  double t239;
  double t512;
  double t86;
  double t536;
  double t76;
  double t607;
  double t629;
  double t669;
  double t258;
  double t553;
  double t575;
  double t1211;
  double t42;
  double t1761;
  double t1806;
  double t2104;
  double t597;
  double t1318;
  double t1547;
  double t2336;
  double t1624;
  double t2458;
  double t2508;
  t239 = Cos(var1[3]);
  t512 = Sin(var1[2]);
  t86 = Cos(var1[2]);
  t536 = Sin(var1[3]);
  t76 = Cos(var1[4]);
  t607 = -1.*t239*t512;
  t629 = -1.*t86*t536;
  t669 = t607 + t629;
  t258 = t86*t239;
  t553 = -1.*t512*t536;
  t575 = t258 + t553;
  t1211 = Sin(var1[4]);
  t42 = Cos(var1[5]);
  t1761 = t76*t669;
  t1806 = -1.*t575*t1211;
  t2104 = t1761 + t1806;
  t597 = t76*t575;
  t1318 = t669*t1211;
  t1547 = t597 + t1318;
  t2336 = Sin(var1[5]);
  t1624 = t42*t1547;
  t2458 = t2104*t2336;
  t2508 = t1624 + t2458;
  p_output1[0]=ArcTan(t2508,(-1.*t2508*(-1.*t1547*t2336 + t2104*t42))/Sqrt(Power(t2508,2)));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "nsf_pitch_RightSS1.hh"

namespace RightSS1
{

void nsf_pitch_RightSS1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
