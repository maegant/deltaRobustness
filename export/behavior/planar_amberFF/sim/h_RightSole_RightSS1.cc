/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:20:35 GMT-08:00
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
  double t1391;
  double t1646;
  double t1830;
  double t1885;
  double t1974;
  double t2089;
  double t2105;
  double t2107;
  double t2121;
  double t2397;
  double t2400;
  double t2414;
  double t2507;
  double t2631;
  double t2706;
  double t2738;
  double t2814;
  double t2898;
  double t2923;
  double t2926;
  double t1398;
  double t1644;
  double t1976;
  double t2035;
  double t2608;
  double t2624;
  double t3675;
  double t3728;
  double t3770;
  double t4376;
  double t4386;
  double t4460;
  double t3852;
  double t3996;
  double t3155;
  double t3175;
  double t3271;
  t1391 = Cos(var1[6]);
  t1646 = Sin(var1[2]);
  t1830 = Cos(var1[2]);
  t1885 = Sin(var1[6]);
  t1974 = Cos(var1[7]);
  t2089 = t1391*t1646;
  t2105 = t1830*t1885;
  t2107 = t2089 + t2105;
  t2121 = t1830*t1391;
  t2397 = -1.*t1646*t1885;
  t2400 = t2121 + t2397;
  t2414 = Sin(var1[7]);
  t2507 = Cos(var1[8]);
  t2631 = t1974*t2107;
  t2706 = t2400*t2414;
  t2738 = t2631 + t2706;
  t2814 = t1974*t2400;
  t2898 = -1.*t2107*t2414;
  t2923 = t2814 + t2898;
  t2926 = Sin(var1[8]);
  t1398 = -1.*t1391;
  t1644 = 1. + t1398;
  t1976 = -1.*t1974;
  t2035 = 1. + t1976;
  t2608 = -1.*t2507;
  t2624 = 1. + t2608;
  t3675 = -1.*t1391*t1646;
  t3728 = -1.*t1830*t1885;
  t3770 = t3675 + t3728;
  t4376 = t1974*t3770;
  t4386 = -1.*t2400*t2414;
  t4460 = t4376 + t4386;
  t3852 = t3770*t2414;
  t3996 = t2814 + t3852;
  t3155 = t2507*t2923;
  t3175 = -1.*t2738*t2926;
  t3271 = t3155 + t3175;
  p_output1[0]=-0.4999*t1644*t1646 + 0.4999*t1830*t1885 - 0.9063*t2035*t2107 + 0.9063*t2400*t2414 - 1.3127*t2624*t2738 + 1.3127*t2923*t2926 - 1.3127*(t2507*t2738 + t2923*t2926) + 0.06*t3271 + var1[0] - 1.*var2[0];
  p_output1[1]=-0.4999*t1644*t1830 - 0.4999*t1646*t1885 - 0.9063*t2035*t2400 + 0.9063*t2414*t3770 - 1.3127*t2624*t3996 + 1.3127*t2926*t4460 + 0.06*(-1.*t2926*t3996 + t2507*t4460) - 1.3127*(t2507*t3996 + t2926*t4460) + var1[1] - 1.*var2[1];
  p_output1[2]=ArcTan(Sqrt(0. + Power(t3271,2)),t2926*t3996 - 1.*t2507*t4460) - 1.*var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RightSole_RightSS1.hh"

namespace SymFunction
{

void h_RightSole_RightSS1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
