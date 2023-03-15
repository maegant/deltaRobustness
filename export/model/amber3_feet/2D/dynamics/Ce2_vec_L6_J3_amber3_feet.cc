/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:43 GMT-08:00
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
  double t1440;
  double t1361;
  double t1362;
  double t1446;
  double t1610;
  double t177;
  double t1731;
  double t1802;
  double t1814;
  double t1966;
  double t1968;
  double t2028;
  double t2196;
  double t2357;
  double t1384;
  double t1460;
  double t1571;
  double t1600;
  double t1829;
  double t1839;
  double t2762;
  double t2607;
  double t2618;
  double t2637;
  double t2730;
  double t2777;
  double t3142;
  double t3240;
  double t3325;
  double t3331;
  double t3341;
  double t4074;
  double t4093;
  double t4097;
  double t4106;
  double t4164;
  double t4167;
  double t4187;
  double t4193;
  double t4223;
  double t4256;
  double t3406;
  double t3470;
  double t3489;
  double t2806;
  double t2998;
  double t3014;
  double t3021;
  double t3029;
  double t1948;
  double t2376;
  double t2451;
  double t2566;
  double t3611;
  double t3661;
  double t3490;
  double t3492;
  double t3517;
  double t3523;
  double t3607;
  double t3701;
  double t3925;
  double t4112;
  double t4302;
  double t4495;
  double t4605;
  double t4610;
  double t4672;
  double t4824;
  double t4828;
  double t4838;
  double t4574;
  double t4706;
  double t4708;
  double t2800;
  double t3032;
  double t3098;
  double t4757;
  double t4777;
  double t4780;
  t1440 = Cos(var1[6]);
  t1361 = Cos(var1[7]);
  t1362 = Sin(var1[6]);
  t1446 = Sin(var1[7]);
  t1610 = Sin(var1[2]);
  t177 = Cos(var1[2]);
  t1731 = t1440*t1361;
  t1802 = -1.*t1362*t1446;
  t1814 = t1731 + t1802;
  t1966 = -1.*t1361;
  t1968 = 1. + t1966;
  t2028 = -0.9063*t1968;
  t2196 = -1.0567*t1361;
  t2357 = t2028 + t2196;
  t1384 = -1.*t1361*t1362;
  t1460 = -1.*t1440*t1446;
  t1571 = t1384 + t1460;
  t1600 = t177*t1571;
  t1829 = -1.*t1610*t1814;
  t1839 = t1600 + t1829;
  t2762 = t177*t1814;
  t2607 = t1361*t1362;
  t2618 = t1440*t1446;
  t2637 = t2607 + t2618;
  t2730 = -1.*t1610*t2637;
  t2777 = t2730 + t2762;
  t3142 = t1610*t1571;
  t3240 = t3142 + t2762;
  t3325 = t177*t2637;
  t3331 = t1610*t1814;
  t3341 = t3325 + t3331;
  t4074 = 0.4999*t1362;
  t4093 = t2357*t1362;
  t4097 = -0.15039999999999998*t1440*t1446;
  t4106 = t4074 + t4093 + t4097;
  t4164 = -1.*t1440;
  t4167 = 1. + t4164;
  t4187 = -0.4999*t4167;
  t4193 = t1440*t2357;
  t4223 = 0.15039999999999998*t1362*t1446;
  t4256 = t4187 + t4193 + t4223;
  t3406 = -1.*t1610*t1571;
  t3470 = -1.*t177*t1814;
  t3489 = t3406 + t3470;
  t2806 = 0.4999*t1361;
  t2998 = t2357*t1361;
  t3014 = Power(t1446,2);
  t3021 = -0.15039999999999998*t3014;
  t3029 = t2806 + t2998 + t3021;
  t1948 = 0.4999*t1446;
  t2376 = t2357*t1446;
  t2451 = 0.15039999999999998*t1361*t1446;
  t2566 = t1948 + t2376 + t2451;
  t3611 = -1.*t177*t2637;
  t3661 = t3611 + t1829;
  t3490 = 3.5899*t3489*t3240;
  t3492 = Power(t2777,2);
  t3517 = 3.5899*t3492;
  t3523 = Power(t1839,2);
  t3607 = 3.5899*t3523;
  t3701 = 3.5899*t3661*t3341;
  t3925 = t3490 + t3517 + t3607 + t3701;
  t4112 = -1.*t4106*t1814;
  t4302 = -1.*t1571*t4256;
  t4495 = t4112 + t4302;
  t4605 = t4106*t2637;
  t4610 = t1814*t4256;
  t4672 = t4605 + t4610;
  t4824 = 3.5899*t3661*t4495;
  t4828 = 3.5899*t3489*t4672;
  t4838 = t4824 + t4828;
  t4574 = 3.5899*t2777*t4495;
  t4706 = 3.5899*t1839*t4672;
  t4708 = t4574 + t4706;
  t2800 = 3.5899*t2566*t2777;
  t3032 = 3.5899*t3029*t1839;
  t3098 = t2800 + t3032;
  t4757 = 3.5899*t3029*t3489;
  t4777 = 3.5899*t2566*t3661;
  t4780 = t4757 + t4777;
  p_output1[0]=var2[2]*(-0.5*(7.1798*t1839*t3240 + 7.1798*t2777*t3341)*var2[0] - 0.5*t3925*var2[1] - 0.5*t4708*var2[2] - 0.5*t3098*var2[6] + 0.26996047999999995*t1839*var2[7]);
  p_output1[1]=var2[2]*(-0.5*t3925*var2[0] - 0.5*(7.1798*t1839*t3489 + 7.1798*t2777*t3661)*var2[1] - 0.5*t4838*var2[2] - 0.5*t4780*var2[6] + 0.26996047999999995*t3489*var2[7]);
  p_output1[2]=(-0.5*t4708*var2[0] - 0.5*t4838*var2[1])*var2[2];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-0.5*t3098*var2[0] - 0.5*t4780*var2[1])*var2[2];
  p_output1[7]=(0.26996047999999995*t1839*var2[0] + 0.26996047999999995*t3489*var2[1])*var2[2];
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

#include "Ce2_vec_L6_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L6_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
