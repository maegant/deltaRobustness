/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:29:01 GMT-08:00
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
  double t626;
  double t374;
  double t383;
  double t656;
  double t565;
  double t734;
  double t738;
  double t817;
  double t824;
  double t855;
  double t872;
  double t881;
  double t895;
  double t899;
  double t924;
  double t943;
  double t975;
  double t987;
  double t1033;
  double t1320;
  double t1327;
  double t1342;
  double t1352;
  double t1371;
  double t1232;
  double t1679;
  double t1699;
  double t1708;
  double t1273;
  t626 = Cos(var1[2]);
  t374 = Cos(var1[6]);
  t383 = Sin(var1[2]);
  t656 = Sin(var1[6]);
  t565 = t374*t383;
  t734 = t626*t656;
  t738 = t565 + t734;
  t817 = -0.25592966999999994*var2[1]*t738;
  t824 = -1.*t626*t374;
  t855 = t383*t656;
  t872 = t824 + t855;
  t881 = -0.25592966999999994*var2[0]*t872;
  t895 = t817 + t881;
  t899 = var2[6]*t895;
  t924 = -1.*t374*t383;
  t943 = -1.*t626*t656;
  t975 = t924 + t943;
  t987 = -0.25592966999999994*var2[6]*t975;
  t1033 = -0.25592966999999994*var2[6]*t872;
  t1320 = -1.*t374;
  t1327 = 1. + t1320;
  t1342 = -0.4999*t1327;
  t1352 = -0.6493*t374;
  t1371 = t1342 + t1352;
  t1232 = -0.25592966999999994*var2[0]*t975;
  t1679 = -1.*t1371*t656;
  t1699 = -0.14939999999999998*t374*t656;
  t1708 = t1679 + t1699;
  t1273 = -0.25592966999999994*var2[1]*t872;
  p_output1[0]=t899;
  p_output1[1]=t899;
  p_output1[2]=t987;
  p_output1[3]=t1033;
  p_output1[4]=t1232 + t1273;
  p_output1[5]=t899;
  p_output1[6]=(t817 + t881 - 0.25592966999999994*(0. - 1.*t1371*t374 - 0.14939999999999998*Power(t374,2))*var2[2])*var2[6];
  p_output1[7]=t987;
  p_output1[8]=t1033;
  p_output1[9]=-0.25592966999999994*t1708*var2[6];
  p_output1[10]=t1232 + t1273 - 0.25592966999999994*t1708*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L5_J7_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L5_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
