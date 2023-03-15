/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:14:48 GMT-08:00
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
  double t3835;
  double t3840;
  double t3833;
  double t3842;
  double t3831;
  double t3849;
  double t3850;
  double t3853;
  double t3836;
  double t3845;
  double t3846;
  double t3854;
  double t3808;
  double t3847;
  double t3855;
  double t3856;
  double t3858;
  double t3859;
  double t3860;
  double t3861;
  double t3862;
  double t3863;
  double t3864;
  double t3873;
  double t3874;
  double t3875;
  t3835 = Cos(var1[3]);
  t3840 = Sin(var1[2]);
  t3833 = Cos(var1[2]);
  t3842 = Sin(var1[3]);
  t3831 = Cos(var1[4]);
  t3849 = -1.*t3835*t3840;
  t3850 = -1.*t3833*t3842;
  t3853 = t3849 + t3850;
  t3836 = t3833*t3835;
  t3845 = -1.*t3840*t3842;
  t3846 = t3836 + t3845;
  t3854 = Sin(var1[4]);
  t3808 = Cos(var1[5]);
  t3847 = t3831*t3846;
  t3855 = t3853*t3854;
  t3856 = t3847 + t3855;
  t3858 = t3808*t3856;
  t3859 = t3831*t3853;
  t3860 = -1.*t3846*t3854;
  t3861 = t3859 + t3860;
  t3862 = Sin(var1[5]);
  t3863 = t3861*t3862;
  t3864 = t3858 + t3863;
  t3873 = t3835*t3840;
  t3874 = t3833*t3842;
  t3875 = t3873 + t3874;
  p_output1[0]=ArcTan(t3864,0);
  p_output1[1]=ArcTan(t3864,(-1.*(t3808*t3861 - 1.*t3856*t3862)*t3864)/Sqrt(Power(t3864,2)));
  p_output1[2]=ArcTan(-1.*t3862*(t3846*t3854 + t3831*t3875) + t3808*(t3847 - 1.*t3854*t3875),0.);
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

#include "euler_nsf_rSS.hh"

namespace SymFunction
{

void euler_nsf_rSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
