/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:24 GMT-08:00
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
  double t1281;
  double t299;
  double t310;
  double t1388;
  double t1598;
  double t1029;
  double t1487;
  double t1530;
  double t297;
  double t2077;
  double t2204;
  double t2217;
  double t2279;
  double t2300;
  double t1537;
  double t1650;
  double t1651;
  double t1747;
  double t1813;
  double t1924;
  double t2523;
  double t2643;
  double t2673;
  double t2856;
  double t2864;
  double t2920;
  double t3443;
  double t3444;
  double t3475;
  double t3480;
  double t3488;
  double t3489;
  double t3589;
  double t3590;
  double t3604;
  double t3610;
  double t3612;
  double t3635;
  double t3800;
  double t3809;
  double t3823;
  double t3925;
  double t3938;
  double t3957;
  double t4187;
  double t4201;
  double t4302;
  double t4304;
  double t4486;
  double t4501;
  double t3595;
  double t3596;
  double t3597;
  double t1943;
  double t2310;
  double t2435;
  double t2488;
  double t2996;
  double t3098;
  double t3142;
  double t3331;
  double t3347;
  double t3529;
  double t3533;
  double t3572;
  double t3594;
  double t3598;
  double t3599;
  double t3602;
  double t3788;
  double t3958;
  double t4009;
  double t4065;
  double t4381;
  double t4416;
  double t4522;
  double t4549;
  double t4570;
  double t4591;
  double t4621;
  double t4657;
  double t4664;
  double t4918;
  double t4950;
  double t4971;
  double t5501;
  double t5511;
  double t5513;
  double t5514;
  double t5519;
  double t4063;
  double t4569;
  double t4628;
  double t5026;
  double t5234;
  double t5300;
  double t5323;
  double t5396;
  double t2957;
  double t3348;
  double t3393;
  double t5550;
  double t5564;
  double t5647;
  t1281 = Cos(var1[3]);
  t299 = Cos(var1[4]);
  t310 = Sin(var1[3]);
  t1388 = Sin(var1[4]);
  t1598 = Sin(var1[2]);
  t1029 = -1.*t299*t310;
  t1487 = -1.*t1281*t1388;
  t1530 = t1029 + t1487;
  t297 = Cos(var1[2]);
  t2077 = -1.*t299;
  t2204 = 1. + t2077;
  t2217 = -0.9063*t2204;
  t2279 = -1.0567*t299;
  t2300 = t2217 + t2279;
  t1537 = t297*t1530;
  t1650 = -1.*t1281*t299;
  t1651 = t310*t1388;
  t1747 = t1650 + t1651;
  t1813 = t1598*t1747;
  t1924 = t1537 + t1813;
  t2523 = t1598*t1530;
  t2643 = t1281*t299;
  t2673 = -1.*t310*t1388;
  t2856 = t2643 + t2673;
  t2864 = t297*t2856;
  t2920 = t2523 + t2864;
  t3443 = t299*t310;
  t3444 = t1281*t1388;
  t3475 = t3443 + t3444;
  t3480 = t297*t3475;
  t3488 = t1598*t2856;
  t3489 = t3480 + t3488;
  t3589 = -1.*t1598*t2856;
  t3590 = t1537 + t3589;
  t3604 = 0.4999*t310;
  t3610 = t2300*t310;
  t3612 = -0.15039999999999998*t1281*t1388;
  t3635 = t3604 + t3610 + t3612;
  t3800 = -1.*t1281;
  t3809 = 1. + t3800;
  t3823 = -0.4999*t3809;
  t3925 = t1281*t2300;
  t3938 = 0.15039999999999998*t310*t1388;
  t3957 = t3823 + t3925 + t3938;
  t4187 = -0.4999*t310;
  t4201 = -1.*t2300*t310;
  t4302 = 0.15039999999999998*t1281*t1388;
  t4304 = t4187 + t4201 + t4302;
  t4486 = 0.4999*t1281;
  t4501 = t4486 + t3925 + t3938;
  t3595 = -1.*t1598*t1530;
  t3596 = t297*t1747;
  t3597 = t3595 + t3596;
  t1943 = 0.4999*t1388;
  t2310 = t2300*t1388;
  t2435 = 0.15039999999999998*t299*t1388;
  t2488 = t1943 + t2310 + t2435;
  t2996 = 0.4999*t299;
  t3098 = t2300*t299;
  t3142 = Power(t1388,2);
  t3331 = -0.15039999999999998*t3142;
  t3347 = t2996 + t3098 + t3331;
  t3529 = -1.*t1598*t3475;
  t3533 = t3529 + t2864;
  t3572 = 3.5899*t2920*t3533;
  t3594 = 3.5899*t3590*t3489;
  t3598 = 3.5899*t2920*t3597;
  t3599 = 3.5899*t3590*t1924;
  t3602 = t3572 + t3594 + t3598 + t3599;
  t3788 = -1.*t3635*t2856;
  t3958 = -1.*t1530*t3957;
  t4009 = t3788 + t3958;
  t4065 = t3635*t2856;
  t4381 = t4304*t2856;
  t4416 = t1530*t3957;
  t4522 = t3475*t4501;
  t4549 = t4065 + t4381 + t4416 + t4522;
  t4570 = t3635*t3475;
  t4591 = t2856*t3957;
  t4621 = t4570 + t4591;
  t4657 = -1.*t1530*t3635;
  t4664 = -1.*t1530*t4304;
  t4918 = -1.*t2856*t4501;
  t4950 = -1.*t3957*t1747;
  t4971 = t4657 + t4664 + t4918 + t4950;
  t5501 = 3.5899*t3590*t4009;
  t5511 = 3.5899*t3590*t4549;
  t5513 = 3.5899*t4621*t3597;
  t5514 = 3.5899*t3533*t4971;
  t5519 = t5501 + t5511 + t5513 + t5514;
  t4063 = 3.5899*t2920*t4009;
  t4569 = 3.5899*t2920*t4549;
  t4628 = 3.5899*t4621*t1924;
  t5026 = 3.5899*t3489*t4971;
  t5234 = t4063 + t4569 + t4628 + t5026;
  t5300 = 3.5899*t2488*t3590;
  t5323 = 3.5899*t3347*t3597;
  t5396 = t5300 + t5323;
  t2957 = 3.5899*t2488*t2920;
  t3348 = 3.5899*t3347*t1924;
  t3393 = t2957 + t3348;
  t5550 = 3.5899*t3347*t4549;
  t5564 = 3.5899*t2488*t4971;
  t5647 = t5550 + t5564;
  p_output1[0]=var2[3]*(-0.5*(7.1798*t1924*t2920 + 7.1798*t2920*t3489)*var2[0] - 0.5*t3602*var2[1] - 0.5*t5234*var2[2] - 0.5*t3393*var2[3] + 0.26996047999999995*t1924*var2[4]);
  p_output1[1]=var2[3]*(-0.5*t3602*var2[0] - 0.5*(7.1798*t3533*t3590 + 7.1798*t3590*t3597)*var2[1] - 0.5*t5519*var2[2] - 0.5*t5396*var2[3] + 0.26996047999999995*t3597*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t5234*var2[0] - 0.5*t5519*var2[1] - 0.5*(7.1798*t4549*t4621 + 7.1798*t4009*t4971)*var2[2] - 0.5*t5647*var2[3] + 0.26996047999999995*t4549*var2[4]);
  p_output1[3]=(-0.5*t3393*var2[0] - 0.5*t5396*var2[1] - 0.5*t5647*var2[2])*var2[3];
  p_output1[4]=(0.26996047999999995*t1924*var2[0] + 0.26996047999999995*t3597*var2[1] + 0.26996047999999995*t4549*var2[2])*var2[3];
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

#include "Ce2_vec_L3_J4_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L3_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
