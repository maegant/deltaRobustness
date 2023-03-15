/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:07 GMT-08:00
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
  double t75;
  double t116;
  double t407;
  double t505;
  double t563;
  double t655;
  double t656;
  double t817;
  double t883;
  double t1701;
  double t2064;
  double t2118;
  double t2137;
  double t2998;
  double t3021;
  double t3030;
  double t3225;
  double t3299;
  double t680;
  double t2042;
  double t2140;
  double t2457;
  double t2524;
  double t2612;
  double t2614;
  double t2646;
  double t2689;
  double t2861;
  double t2869;
  double t2872;
  double t2919;
  double t2930;
  double t2965;
  double t2982;
  double t3355;
  double t3331;
  double t3341;
  double t3352;
  double t3354;
  double t3379;
  double t3388;
  double t3403;
  double t3490;
  t75 = Cos(var1[3]);
  t116 = Sin(var1[2]);
  t407 = -1.*t75*t116;
  t505 = Cos(var1[2]);
  t563 = Sin(var1[3]);
  t655 = -1.*t505*t563;
  t656 = t407 + t655;
  t817 = t505*t75;
  t883 = -1.*t116*t563;
  t1701 = t817 + t883;
  t2064 = t75*t116;
  t2118 = t505*t563;
  t2137 = t2064 + t2118;
  t2998 = -1.*t75;
  t3021 = 1. + t2998;
  t3030 = -0.4999*t3021;
  t3225 = -0.6493*t75;
  t3299 = t3030 + t3225;
  t680 = -0.25592966999999994*var2[3]*t656;
  t2042 = 6.8522*t656*t1701;
  t2140 = 6.8522*t2137*t1701;
  t2457 = t2042 + t2140;
  t2524 = 0.5*var2[0]*t2457;
  t2612 = Power(t656,2);
  t2614 = 3.4261*t2612;
  t2646 = 3.4261*t656*t2137;
  t2689 = Power(t1701,2);
  t2861 = 3.4261*t2689;
  t2869 = -1.*t505*t75;
  t2872 = t116*t563;
  t2919 = t2869 + t2872;
  t2930 = 3.4261*t1701*t2919;
  t2965 = t2614 + t2646 + t2861 + t2930;
  t2982 = 0.5*var2[1]*t2965;
  t3355 = t3299*t75;
  t3331 = t3299*t563;
  t3341 = 0.14939999999999998*t75*t563;
  t3352 = t3331 + t3341;
  t3354 = 3.4261*t3352*t1701;
  t3379 = Power(t563,2);
  t3388 = -0.14939999999999998*t3379;
  t3403 = t3355 + t3388;
  t3490 = 3.4261*t656*t3403;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(t2524 + t2982 + t680 + 0.5*(t3354 + t3490)*var2[2]);
  p_output1[3]=var2[0]*(t2524 + t2982 + t680 + 0.5*(t3354 + t3490 + 3.4261*t1701*(-1.*t3299*t563 - 0.14939999999999998*t563*t75) + 3.4261*t2137*(t3355 + 0.14939999999999998*Power(t75,2)))*var2[2]);
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
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

#include "Ce3_vec_L2_J1_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L2_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
