/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:34 GMT-08:00
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
  double t7;
  double t133;
  double t1374;
  double t1472;
  double t1508;
  double t1615;
  double t1702;
  double t1707;
  double t1758;
  double t1762;
  double t1785;
  double t1788;
  double t1832;
  double t2183;
  double t2189;
  double t2203;
  double t2038;
  double t2049;
  double t2119;
  double t2219;
  double t891;
  double t2358;
  double t2412;
  double t2485;
  double t2507;
  double t2547;
  double t2587;
  double t2596;
  double t2618;
  double t2627;
  double t2706;
  double t2892;
  double t2992;
  double t3065;
  double t2770;
  double t2822;
  double t2831;
  double t3112;
  t7 = Cos(var1[2]);
  t133 = Cos(var1[3]);
  t1374 = Sin(var1[2]);
  t1472 = Sin(var1[3]);
  t1508 = Cos(var1[4]);
  t1615 = t7*t133;
  t1702 = -1.*t1374*t1472;
  t1707 = t1615 + t1702;
  t1758 = -1.*t133*t1374;
  t1762 = -1.*t7*t1472;
  t1785 = t1758 + t1762;
  t1788 = Sin(var1[4]);
  t1832 = Cos(var1[5]);
  t2183 = t1508*t1785;
  t2189 = -1.*t1707*t1788;
  t2203 = t2183 + t2189;
  t2038 = t1508*t1707;
  t2049 = t1785*t1788;
  t2119 = t2038 + t2049;
  t2219 = Sin(var1[5]);
  t891 = Cos(var1[6]);
  t2358 = Sin(var1[6]);
  t2412 = Cos(var1[7]);
  t2485 = t7*t891;
  t2507 = -1.*t1374*t2358;
  t2547 = t2485 + t2507;
  t2587 = -1.*t891*t1374;
  t2596 = -1.*t7*t2358;
  t2618 = t2587 + t2596;
  t2627 = Sin(var1[7]);
  t2706 = Cos(var1[8]);
  t2892 = t2412*t2618;
  t2992 = -1.*t2547*t2627;
  t3065 = t2892 + t2992;
  t2770 = t2412*t2547;
  t2822 = t2618*t2627;
  t2831 = t2770 + t2822;
  t3112 = Sin(var1[8]);
  p_output1[0]=-0.4999*t1374*t1472 - 0.9063*(1. - 1.*t1508)*t1707 + 0.9063*t1785*t1788 - 1.3127*(1. - 1.*t1832)*t2119 + 1.3127*t2203*t2219 + 0.06*(t1832*t2203 - 1.*t2119*t2219) - 1.3127*(t1832*t2119 + t2203*t2219) + 0.4999*t1374*t2358 + 0.9063*(1. - 1.*t2412)*t2547 - 0.9063*t2618*t2627 + 1.3127*(1. - 1.*t2706)*t2831 - 1.3127*t3065*t3112 - 0.06*(t2706*t3065 - 1.*t2831*t3112) + 1.3127*(t2706*t2831 + t3065*t3112) - 0.4999*(1. - 1.*t133)*t7 + 0.4999*t7*(1. - 1.*t891);
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

#include "nsf_posZ.hh"

namespace RightSS2
{

void nsf_posZ_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
