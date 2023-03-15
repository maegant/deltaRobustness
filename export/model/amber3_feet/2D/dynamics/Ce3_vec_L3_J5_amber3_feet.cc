/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:17 GMT-08:00
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
  double t962;
  double t354;
  double t355;
  double t978;
  double t1141;
  double t609;
  double t983;
  double t1000;
  double t168;
  double t1142;
  double t1147;
  double t1582;
  double t2067;
  double t2225;
  double t2266;
  double t2689;
  double t3140;
  double t4548;
  double t4589;
  double t1129;
  double t1870;
  double t4771;
  double t4813;
  double t4823;
  double t2045;
  double t3297;
  double t3310;
  double t3722;
  double t3998;
  double t4076;
  double t4094;
  double t4110;
  double t4450;
  double t4605;
  double t4606;
  double t4611;
  double t4646;
  double t4649;
  double t4851;
  double t4935;
  double t4939;
  double t4956;
  double t4979;
  double t5001;
  t962 = Cos(var1[3]);
  t354 = Cos(var1[4]);
  t355 = Sin(var1[3]);
  t978 = Sin(var1[4]);
  t1141 = Cos(var1[2]);
  t609 = -1.*t354*t355;
  t983 = -1.*t962*t978;
  t1000 = t609 + t983;
  t168 = Sin(var1[2]);
  t1142 = t962*t354;
  t1147 = -1.*t355*t978;
  t1582 = t1142 + t1147;
  t2067 = -1.*t354;
  t2225 = 1. + t2067;
  t2266 = -0.9063*t2225;
  t2689 = -1.0567*t354;
  t3140 = t2266 + t2689;
  t4548 = t962*t3140;
  t4589 = 0.15039999999999998*t355*t978;
  t1129 = -1.*t168*t1000;
  t1870 = t1141*t1000;
  t4771 = -1.*t962*t354;
  t4813 = t355*t978;
  t4823 = t4771 + t4813;
  t2045 = 0.4999*t355;
  t3297 = t3140*t355;
  t3310 = -0.15039999999999998*t962*t978;
  t3722 = t2045 + t3297 + t3310;
  t3998 = t3722*t1582;
  t4076 = 0.15039999999999998*t962*t978;
  t4094 = -1.*t962;
  t4110 = 1. + t4094;
  t4450 = -0.4999*t4110;
  t4605 = t4450 + t4548 + t4589;
  t4606 = t1000*t4605;
  t4611 = t354*t355;
  t4646 = t962*t978;
  t4649 = t4611 + t4646;
  t4851 = t1141*t4823;
  t4935 = t1129 + t4851;
  t4939 = -0.26996047999999995*var2[1]*t4935;
  t4956 = t168*t4823;
  t4979 = t1870 + t4956;
  t5001 = -0.26996047999999995*var2[0]*t4979;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.26996047999999995*(-1.*t1582*t168 + t1870)*var2[0] - 0.26996047999999995*(t1129 - 1.*t1141*t1582)*var2[1])*var2[4];
  p_output1[3]=(t4939 + t5001 - 0.26996047999999995*(t3998 + t1582*(-0.4999*t355 - 1.*t3140*t355 + t4076) + t4606 + t4649*(t4548 + t4589 + 0.4999*t962))*var2[2])*var2[4];
  p_output1[4]=(t4939 + t5001 - 0.26996047999999995*(t3998 + t1582*(0.15039999999999998*t354*t355 + t4076) + t4606 + t4649*(t4589 - 0.15039999999999998*t354*t962))*var2[2] - 0.26996047999999995*(-0.4999*t978 - 1.*t3140*t978 - 0.15039999999999998*t354*t978)*var2[3])*var2[4];
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

#include "Ce3_vec_L3_J5_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L3_J5_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
