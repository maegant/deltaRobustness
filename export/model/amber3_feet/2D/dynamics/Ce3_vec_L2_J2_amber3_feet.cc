/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:08 GMT-08:00
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
  double t817;
  double t1364;
  double t656;
  double t1701;
  double t2118;
  double t2137;
  double t2140;
  double t1279;
  double t2009;
  double t2042;
  double t2528;
  double t2612;
  double t2614;
  double t3562;
  double t3582;
  double t3585;
  double t3625;
  double t3651;
  double t2064;
  double t2646;
  double t2689;
  double t2861;
  double t2872;
  double t2919;
  double t2930;
  double t3030;
  double t3225;
  double t3331;
  double t3341;
  double t3352;
  double t3355;
  double t3379;
  double t3388;
  double t3403;
  double t3661;
  double t3705;
  double t3711;
  double t3834;
  double t3838;
  double t3889;
  double t3917;
  double t3954;
  double t3981;
  t817 = Cos(var1[3]);
  t1364 = Sin(var1[2]);
  t656 = Cos(var1[2]);
  t1701 = Sin(var1[3]);
  t2118 = -1.*t817*t1364;
  t2137 = -1.*t656*t1701;
  t2140 = t2118 + t2137;
  t1279 = -1.*t656*t817;
  t2009 = t1364*t1701;
  t2042 = t1279 + t2009;
  t2528 = t656*t817;
  t2612 = -1.*t1364*t1701;
  t2614 = t2528 + t2612;
  t3562 = -1.*t817;
  t3582 = 1. + t3562;
  t3585 = -0.4999*t3582;
  t3625 = -0.6493*t817;
  t3651 = t3585 + t3625;
  t2064 = -0.25592966999999994*var2[3]*t2042;
  t2646 = 6.8522*t2140*t2614;
  t2689 = 6.8522*t2140*t2042;
  t2861 = t2646 + t2689;
  t2872 = 0.5*var2[1]*t2861;
  t2919 = Power(t2140,2);
  t2930 = 3.4261*t2919;
  t3030 = t817*t1364;
  t3225 = t656*t1701;
  t3331 = t3030 + t3225;
  t3341 = 3.4261*t2140*t3331;
  t3352 = Power(t2614,2);
  t3355 = 3.4261*t3352;
  t3379 = 3.4261*t2614*t2042;
  t3388 = t2930 + t3341 + t3355 + t3379;
  t3403 = 0.5*var2[0]*t3388;
  t3661 = t3651*t1701;
  t3705 = 0.14939999999999998*t817*t1701;
  t3711 = t3661 + t3705;
  t3834 = 3.4261*t2140*t3711;
  t3838 = t3651*t817;
  t3889 = Power(t1701,2);
  t3917 = -0.14939999999999998*t3889;
  t3954 = t3838 + t3917;
  t3981 = 3.4261*t2042*t3954;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(t2064 + t2872 + t3403 + 0.5*(t3834 + t3981)*var2[2]);
  p_output1[3]=var2[1]*(t2064 + t2872 + t3403 + 0.5*(t3834 + t3981 + 3.4261*t2140*(-1.*t1701*t3651 - 0.14939999999999998*t1701*t817) + 3.4261*t2614*(t3838 + 0.14939999999999998*Power(t817,2)))*var2[2]);
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

#include "Ce3_vec_L2_J2_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L2_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
