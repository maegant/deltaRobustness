/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:36 GMT-08:00
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
  double t942;
  double t1207;
  double t908;
  double t1240;
  double t824;
  double t1539;
  double t1583;
  double t1616;
  double t957;
  double t1380;
  double t1442;
  double t1643;
  double t189;
  double t1948;
  double t2097;
  double t2166;
  double t1530;
  double t1701;
  double t1785;
  double t2183;
  double t1818;
  double t2242;
  double t2245;
  t942 = Cos(var1[3]);
  t1207 = Sin(var1[2]);
  t908 = Cos(var1[2]);
  t1240 = Sin(var1[3]);
  t824 = Cos(var1[4]);
  t1539 = -1.*t942*t1207;
  t1583 = -1.*t908*t1240;
  t1616 = t1539 + t1583;
  t957 = t908*t942;
  t1380 = -1.*t1207*t1240;
  t1442 = t957 + t1380;
  t1643 = Sin(var1[4]);
  t189 = Cos(var1[5]);
  t1948 = t824*t1616;
  t2097 = -1.*t1442*t1643;
  t2166 = t1948 + t2097;
  t1530 = t824*t1442;
  t1701 = t1616*t1643;
  t1785 = t1530 + t1701;
  t2183 = Sin(var1[5]);
  t1818 = t189*t1785;
  t2242 = t2166*t2183;
  t2245 = t1818 + t2242;
  p_output1[0]=ArcTan(t2245,(-1.*(t189*t2166 - 1.*t1785*t2183)*t2245)/Sqrt(Power(t2245,2)));
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

#include "nsf_pitch_RightSS2.hh"

namespace RightSS2
{

void nsf_pitch_RightSS2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
