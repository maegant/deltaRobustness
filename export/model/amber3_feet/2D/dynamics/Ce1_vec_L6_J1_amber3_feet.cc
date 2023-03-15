/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:49 GMT-08:00
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
  double t2235;
  double t2058;
  double t2069;
  double t2358;
  double t2652;
  double t2162;
  double t2361;
  double t2411;
  double t1986;
  double t2674;
  double t2811;
  double t2822;
  double t2832;
  double t3288;
  double t3495;
  double t3576;
  double t2559;
  double t2888;
  double t3634;
  double t3638;
  double t3663;
  double t2949;
  double t3985;
  double t4018;
  double t4023;
  double t4066;
  double t4169;
  double t4346;
  double t4362;
  double t4391;
  double t3618;
  double t3629;
  double t2959;
  double t2960;
  double t4584;
  double t5164;
  double t5173;
  double t5223;
  double t5224;
  double t5226;
  double t5232;
  double t5235;
  double t5462;
  double t5487;
  double t5493;
  double t5512;
  double t5545;
  double t5446;
  double t5546;
  double t5588;
  double t5608;
  double t5689;
  double t5727;
  double t5883;
  double t5907;
  double t5916;
  double t6012;
  double t5619;
  double t6305;
  double t6328;
  double t6339;
  double t6464;
  double t6531;
  double t7089;
  double t7910;
  double t7925;
  double t7932;
  double t7947;
  double t7949;
  double t6963;
  double t6964;
  double t7938;
  double t8012;
  double t8014;
  double t8076;
  double t8079;
  double t8082;
  double t8083;
  double t8037;
  double t8151;
  double t8152;
  double t8155;
  double t8157;
  double t8159;
  double t8160;
  double t8163;
  double t8164;
  double t8169;
  double t8182;
  double t8185;
  t2235 = Cos(var1[6]);
  t2058 = Cos(var1[7]);
  t2069 = Sin(var1[6]);
  t2358 = Sin(var1[7]);
  t2652 = Cos(var1[2]);
  t2162 = -1.*t2058*t2069;
  t2361 = -1.*t2235*t2358;
  t2411 = t2162 + t2361;
  t1986 = Sin(var1[2]);
  t2674 = t2235*t2058;
  t2811 = -1.*t2069*t2358;
  t2822 = t2674 + t2811;
  t2832 = t2652*t2822;
  t3288 = t2058*t2069;
  t3495 = t2235*t2358;
  t3576 = t3288 + t3495;
  t2559 = t1986*t2411;
  t2888 = t2559 + t2832;
  t3634 = t2652*t3576;
  t3638 = t1986*t2822;
  t3663 = t3634 + t3638;
  t2949 = t2652*t2411;
  t3985 = 7.1798*t2888*t3663;
  t4018 = -1.*t2235*t2058;
  t4023 = t2069*t2358;
  t4066 = t4018 + t4023;
  t4169 = t1986*t4066;
  t4346 = t2949 + t4169;
  t4362 = 7.1798*t2888*t4346;
  t4391 = t3985 + t4362;
  t3618 = -1.*t1986*t3576;
  t3629 = t3618 + t2832;
  t2959 = -1.*t1986*t2822;
  t2960 = t2949 + t2959;
  t4584 = -1.*t1986*t2411;
  t5164 = 3.5899*t2888*t3629;
  t5173 = 3.5899*t2960*t3663;
  t5223 = t2652*t4066;
  t5224 = t4584 + t5223;
  t5226 = 3.5899*t2888*t5224;
  t5232 = 3.5899*t2960*t4346;
  t5235 = t5164 + t5173 + t5226 + t5232;
  t5462 = -1.*t2058;
  t5487 = 1. + t5462;
  t5493 = -0.9063*t5487;
  t5512 = -1.0567*t2058;
  t5545 = t5493 + t5512;
  t5446 = 0.4999*t2069;
  t5546 = t5545*t2069;
  t5588 = -0.15039999999999998*t2235*t2358;
  t5608 = t5446 + t5546 + t5588;
  t5689 = -1.*t2235;
  t5727 = 1. + t5689;
  t5883 = -0.4999*t5727;
  t5907 = t2235*t5545;
  t5916 = 0.15039999999999998*t2069*t2358;
  t6012 = t5883 + t5907 + t5916;
  t5619 = -1.*t5608*t2822;
  t6305 = -1.*t2411*t6012;
  t6328 = t5619 + t6305;
  t6339 = t5608*t3576;
  t6464 = t2822*t6012;
  t6531 = t6339 + t6464;
  t7089 = -0.4999*t2069;
  t7910 = -1.*t5545*t2069;
  t7925 = 0.15039999999999998*t2235*t2358;
  t7932 = t7089 + t7910 + t7925;
  t7947 = 0.4999*t2235;
  t7949 = t7947 + t5907 + t5916;
  t6963 = 3.5899*t2888*t6328;
  t6964 = t5608*t2822;
  t7938 = t2411*t6012;
  t8012 = 3.5899*t6531*t4346;
  t8014 = -1.*t2411*t5608;
  t8076 = 0.15039999999999998*t2058*t2069;
  t8079 = t8076 + t7925;
  t8082 = -0.15039999999999998*t2235*t2058;
  t8083 = t8082 + t5916;
  t8037 = -1.*t6012*t4066;
  t8151 = 0.4999*t2358;
  t8152 = t5545*t2358;
  t8155 = 0.15039999999999998*t2058*t2358;
  t8157 = t8151 + t8152 + t8155;
  t8159 = 0.4999*t2058;
  t8160 = t5545*t2058;
  t8163 = Power(t2358,2);
  t8164 = -0.15039999999999998*t8163;
  t8169 = t8159 + t8160 + t8164;
  t8182 = 3.5899*t8157*t2888;
  t8185 = 3.5899*t8169*t4346;
  p_output1[0]=var2[0]*(-0.5*(7.1798*t2888*t2960 + 7.1798*t3629*t3663)*var2[2] - 0.5*t4391*var2[6] - 0.5*t4391*var2[7]);
  p_output1[1]=var2[0]*(-0.5*(3.5899*Power(t2960,2) + 3.5899*Power(t3629,2) + 3.5899*(t2959 - 1.*t2652*t3576)*t3663 + 3.5899*t2888*(-1.*t2652*t2822 + t4584))*var2[2] - 0.5*t5235*var2[6] - 0.5*t5235*var2[7]);
  p_output1[2]=var2[0]*(-0.5*(3.5899*t3629*t6328 + 3.5899*t2960*t6531)*var2[2] - 0.5*(t6963 + 3.5899*t2888*(t6964 + t2822*t7932 + t7938 + t3576*t7949) + t8012 + 3.5899*t3663*(-1.*t2411*t7932 - 1.*t2822*t7949 + t8014 + t8037))*var2[6] - 0.5*(t6963 + t8012 + 3.5899*t3663*(t8014 + t8037 - 1.*t2411*t8079 - 1.*t2822*t8083) + 3.5899*t2888*(t6964 + t7938 + t2822*t8079 + t3576*t8083))*var2[7]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[0]*(-0.5*(3.5899*t3629*t8157 + 3.5899*t2960*t8169)*var2[2] - 0.5*(t8182 + t8185)*var2[6] - 0.5*(3.5899*t2888*(-0.4999*t2358 - 0.15039999999999998*t2058*t2358 - 1.*t2358*t5545) + 3.5899*t3663*(0.15039999999999998*Power(t2058,2) + t8159 + t8160) + t8182 + t8185)*var2[7]);
  p_output1[7]=var2[0]*(0.26996047999999995*t2960*var2[2] + 0.26996047999999995*t4346*var2[6] + 0.26996047999999995*t4346*var2[7]);
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

#include "Ce1_vec_L6_J1_amber3_feet.hh"

namespace SymFunction
{

void Ce1_vec_L6_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
