/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:23 GMT-08:00
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
  double t769;
  double t411;
  double t621;
  double t980;
  double t1327;
  double t334;
  double t1388;
  double t1406;
  double t1419;
  double t1541;
  double t1598;
  double t1650;
  double t1651;
  double t1747;
  double t690;
  double t997;
  double t1138;
  double t1281;
  double t1452;
  double t1487;
  double t2204;
  double t1943;
  double t2077;
  double t2172;
  double t2177;
  double t2217;
  double t2864;
  double t2920;
  double t2996;
  double t3098;
  double t3142;
  double t3527;
  double t3529;
  double t3533;
  double t3541;
  double t3547;
  double t3550;
  double t3572;
  double t3589;
  double t3590;
  double t3592;
  double t3357;
  double t3370;
  double t3393;
  double t2300;
  double t2310;
  double t2435;
  double t2488;
  double t2523;
  double t1537;
  double t1813;
  double t1924;
  double t1939;
  double t3502;
  double t3504;
  double t3401;
  double t3443;
  double t3444;
  double t3475;
  double t3480;
  double t3508;
  double t3510;
  double t3542;
  double t3593;
  double t3594;
  double t3596;
  double t3597;
  double t3598;
  double t3957;
  double t3958;
  double t3967;
  double t3595;
  double t3599;
  double t3601;
  double t2279;
  double t2673;
  double t2752;
  double t3612;
  double t3635;
  double t3751;
  t769 = Cos(var1[3]);
  t411 = Cos(var1[4]);
  t621 = Sin(var1[3]);
  t980 = Sin(var1[4]);
  t1327 = Sin(var1[2]);
  t334 = Cos(var1[2]);
  t1388 = t769*t411;
  t1406 = -1.*t621*t980;
  t1419 = t1388 + t1406;
  t1541 = -1.*t411;
  t1598 = 1. + t1541;
  t1650 = -0.9063*t1598;
  t1651 = -1.0567*t411;
  t1747 = t1650 + t1651;
  t690 = -1.*t411*t621;
  t997 = -1.*t769*t980;
  t1138 = t690 + t997;
  t1281 = t334*t1138;
  t1452 = -1.*t1327*t1419;
  t1487 = t1281 + t1452;
  t2204 = t334*t1419;
  t1943 = t411*t621;
  t2077 = t769*t980;
  t2172 = t1943 + t2077;
  t2177 = -1.*t1327*t2172;
  t2217 = t2177 + t2204;
  t2864 = t1327*t1138;
  t2920 = t2864 + t2204;
  t2996 = t334*t2172;
  t3098 = t1327*t1419;
  t3142 = t2996 + t3098;
  t3527 = 0.4999*t621;
  t3529 = t1747*t621;
  t3533 = -0.15039999999999998*t769*t980;
  t3541 = t3527 + t3529 + t3533;
  t3547 = -1.*t769;
  t3550 = 1. + t3547;
  t3572 = -0.4999*t3550;
  t3589 = t769*t1747;
  t3590 = 0.15039999999999998*t621*t980;
  t3592 = t3572 + t3589 + t3590;
  t3357 = -1.*t1327*t1138;
  t3370 = -1.*t334*t1419;
  t3393 = t3357 + t3370;
  t2300 = 0.4999*t411;
  t2310 = t1747*t411;
  t2435 = Power(t980,2);
  t2488 = -0.15039999999999998*t2435;
  t2523 = t2300 + t2310 + t2488;
  t1537 = 0.4999*t980;
  t1813 = t1747*t980;
  t1924 = 0.15039999999999998*t411*t980;
  t1939 = t1537 + t1813 + t1924;
  t3502 = -1.*t334*t2172;
  t3504 = t3502 + t1452;
  t3401 = 3.5899*t3393*t2920;
  t3443 = Power(t2217,2);
  t3444 = 3.5899*t3443;
  t3475 = Power(t1487,2);
  t3480 = 3.5899*t3475;
  t3508 = 3.5899*t3504*t3142;
  t3510 = t3401 + t3444 + t3480 + t3508;
  t3542 = -1.*t3541*t1419;
  t3593 = -1.*t1138*t3592;
  t3594 = t3542 + t3593;
  t3596 = t3541*t2172;
  t3597 = t1419*t3592;
  t3598 = t3596 + t3597;
  t3957 = 3.5899*t3504*t3594;
  t3958 = 3.5899*t3393*t3598;
  t3967 = t3957 + t3958;
  t3595 = 3.5899*t2217*t3594;
  t3599 = 3.5899*t1487*t3598;
  t3601 = t3595 + t3599;
  t2279 = 3.5899*t1939*t2217;
  t2673 = 3.5899*t2523*t1487;
  t2752 = t2279 + t2673;
  t3612 = 3.5899*t2523*t3393;
  t3635 = 3.5899*t1939*t3504;
  t3751 = t3612 + t3635;
  p_output1[0]=var2[2]*(-0.5*(7.1798*t1487*t2920 + 7.1798*t2217*t3142)*var2[0] - 0.5*t3510*var2[1] - 0.5*t3601*var2[2] - 0.5*t2752*var2[3] + 0.26996047999999995*t1487*var2[4]);
  p_output1[1]=var2[2]*(-0.5*t3510*var2[0] - 0.5*(7.1798*t1487*t3393 + 7.1798*t2217*t3504)*var2[1] - 0.5*t3967*var2[2] - 0.5*t3751*var2[3] + 0.26996047999999995*t3393*var2[4]);
  p_output1[2]=(-0.5*t3601*var2[0] - 0.5*t3967*var2[1])*var2[2];
  p_output1[3]=(-0.5*t2752*var2[0] - 0.5*t3751*var2[1])*var2[2];
  p_output1[4]=(0.26996047999999995*t1487*var2[0] + 0.26996047999999995*t3393*var2[1])*var2[2];
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

#include "Ce2_vec_L3_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L3_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
