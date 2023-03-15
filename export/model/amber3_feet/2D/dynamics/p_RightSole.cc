/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:14:56 GMT-08:00
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
  double t3949;
  double t3960;
  double t3964;
  double t3970;
  double t3975;
  double t3978;
  double t3980;
  double t3981;
  double t3983;
  double t3984;
  double t3985;
  double t3986;
  double t3988;
  double t3993;
  double t3994;
  double t3995;
  double t3997;
  double t3998;
  double t4000;
  double t4001;
  double t3955;
  double t3959;
  double t3976;
  double t3977;
  double t3989;
  double t3990;
  double t4015;
  double t4016;
  double t4017;
  double t4022;
  double t4023;
  double t4024;
  double t4019;
  double t4020;
  t3949 = Cos(var1[6]);
  t3960 = Sin(var1[2]);
  t3964 = Cos(var1[2]);
  t3970 = Sin(var1[6]);
  t3975 = Cos(var1[7]);
  t3978 = t3949*t3960;
  t3980 = t3964*t3970;
  t3981 = t3978 + t3980;
  t3983 = t3964*t3949;
  t3984 = -1.*t3960*t3970;
  t3985 = t3983 + t3984;
  t3986 = Sin(var1[7]);
  t3988 = Cos(var1[8]);
  t3993 = t3975*t3981;
  t3994 = t3985*t3986;
  t3995 = t3993 + t3994;
  t3997 = t3975*t3985;
  t3998 = -1.*t3981*t3986;
  t4000 = t3997 + t3998;
  t4001 = Sin(var1[8]);
  t3955 = -1.*t3949;
  t3959 = 1. + t3955;
  t3976 = -1.*t3975;
  t3977 = 1. + t3976;
  t3989 = -1.*t3988;
  t3990 = 1. + t3989;
  t4015 = -1.*t3949*t3960;
  t4016 = -1.*t3964*t3970;
  t4017 = t4015 + t4016;
  t4022 = t3975*t4017;
  t4023 = -1.*t3985*t3986;
  t4024 = t4022 + t4023;
  t4019 = t4017*t3986;
  t4020 = t3997 + t4019;
  p_output1[0]=-0.4999*t3959*t3960 + 0.4999*t3964*t3970 - 0.9063*t3977*t3981 + 0.9063*t3985*t3986 - 1.3127*t3990*t3995 + 1.3127*t4000*t4001 + 0.06*(t3988*t4000 - 1.*t3995*t4001) - 1.3127*(t3988*t3995 + t4000*t4001) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t3959*t3964 - 0.4999*t3960*t3970 - 0.9063*t3977*t3985 + 0.9063*t3986*t4017 - 1.3127*t3990*t4020 + 1.3127*t4001*t4024 + 0.06*(-1.*t4001*t4020 + t3988*t4024) - 1.3127*(t3988*t4020 + t4001*t4024) + var1[1];
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

#include "p_RightSole.hh"

namespace SymFunction
{

void p_RightSole_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
