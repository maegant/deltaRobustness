/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:39 GMT-08:00
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
  double t416;
  double t600;
  double t720;
  double t868;
  double t947;
  double t966;
  double t1384;
  double t1460;
  double t1478;
  double t1571;
  double t1610;
  double t1731;
  double t1802;
  double t2569;
  double t2606;
  double t2607;
  double t2618;
  double t2683;
  double t2730;
  double t2149;
  double t2196;
  double t2357;
  double t1600;
  double t1847;
  double t1948;
  double t1966;
  double t1968;
  double t2028;
  double t2451;
  double t2482;
  double t2841;
  double t2998;
  double t3014;
  double t3029;
  double t3032;
  double t3098;
  double t2762;
  double t2777;
  double t2800;
  double t3142;
  double t3240;
  double t3299;
  double t2806;
  double t3021;
  double t3127;
  double t3325;
  double t3329;
  double t3490;
  double t3492;
  double t3517;
  double t3523;
  double t3590;
  t416 = Cos(var1[6]);
  t600 = Sin(var1[2]);
  t720 = -1.*t416*t600;
  t868 = Cos(var1[2]);
  t947 = Sin(var1[6]);
  t966 = -1.*t868*t947;
  t1384 = t720 + t966;
  t1460 = t868*t416;
  t1478 = -1.*t600*t947;
  t1571 = t1460 + t1478;
  t1610 = t416*t600;
  t1731 = t868*t947;
  t1802 = t1610 + t1731;
  t2569 = -1.*t416;
  t2606 = 1. + t2569;
  t2607 = -0.4999*t2606;
  t2618 = -0.6493*t416;
  t2683 = t2607 + t2618;
  t2730 = t2683*t416;
  t2149 = -1.*t868*t416;
  t2196 = t600*t947;
  t2357 = t2149 + t2196;
  t1600 = 6.8522*t1384*t1571;
  t1847 = Power(t1384,2);
  t1948 = 3.4261*t1847;
  t1966 = 3.4261*t1384*t1802;
  t1968 = Power(t1571,2);
  t2028 = 3.4261*t1968;
  t2451 = 3.4261*t1571*t2357;
  t2482 = t1948 + t1966 + t2028 + t2451;
  t2841 = -1.*t2683*t947;
  t2998 = -0.14939999999999998*t416*t947;
  t3014 = t2841 + t2998;
  t3029 = t2683*t947;
  t3032 = 0.14939999999999998*t416*t947;
  t3098 = t3029 + t3032;
  t2762 = Power(t416,2);
  t2777 = 0.14939999999999998*t2762;
  t2800 = t2730 + t2777;
  t3142 = Power(t947,2);
  t3240 = -0.14939999999999998*t3142;
  t3299 = t2730 + t3240;
  t2806 = 3.4261*t2800*t1802;
  t3021 = 3.4261*t3014*t1571;
  t3127 = 3.4261*t3098*t1571;
  t3325 = 3.4261*t1384*t3299;
  t3329 = t2806 + t3021 + t3127 + t3325;
  t3490 = 3.4261*t1384*t3014;
  t3492 = 3.4261*t1384*t3098;
  t3517 = 3.4261*t2800*t1571;
  t3523 = 3.4261*t2357*t3299;
  t3590 = t3490 + t3492 + t3517 + t3523;
  p_output1[0]=var2[6]*(-0.5*(t1600 + 6.8522*t1571*t1802)*var2[0] - 0.5*t2482*var2[1] - 0.5*t3329*var2[2] + 0.25592966999999994*t1384*var2[6]);
  p_output1[1]=var2[6]*(-0.5*t2482*var2[0] - 0.5*(t1600 + 6.8522*t1384*t2357)*var2[1] - 0.5*t3590*var2[2] + 0.25592966999999994*t2357*var2[6]);
  p_output1[2]=var2[6]*(-0.5*t3329*var2[0] - 0.5*t3590*var2[1] - 0.5*(6.8522*t2800*t3098 + 6.8522*t3014*t3299)*var2[2] + 0.25592966999999994*t3014*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(0.25592966999999994*t1384*var2[0] + 0.25592966999999994*t2357*var2[1] + 0.25592966999999994*t3014*var2[2])*var2[6];
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

#include "Ce2_vec_L5_J7_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L5_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
