/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:15 GMT-08:00
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
  double t1652;
  double t860;
  double t1043;
  double t1653;
  double t1870;
  double t1933;
  double t2109;
  double t2592;
  double t2593;
  double t2689;
  double t2704;
  double t3139;
  double t1858;
  double t3522;
  double t3560;
  double t3567;
  double t550;
  double t2293;
  double t3140;
  double t3319;
  double t3379;
  double t1453;
  double t1757;
  double t1774;
  double t3585;
  double t3643;
  double t3656;
  double t3658;
  double t3814;
  double t3816;
  double t3398;
  double t3986;
  double t3998;
  double t2234;
  double t4084;
  double t4094;
  double t4110;
  double t4734;
  double t4738;
  double t4763;
  double t4813;
  double t4829;
  double t4851;
  double t4860;
  double t4937;
  double t4938;
  double t4939;
  double t4956;
  double t4605;
  double t4608;
  double t4064;
  double t5449;
  double t5471;
  double t5533;
  double t4507;
  double t4510;
  double t4548;
  double t5363;
  double t5433;
  double t5439;
  double t5602;
  double t5732;
  double t6257;
  double t6352;
  double t5001;
  double t5070;
  double t5079;
  double t5127;
  double t5128;
  double t7976;
  double t7988;
  double t7989;
  double t8074;
  double t8313;
  double t8331;
  double t8346;
  double t5310;
  double t5311;
  double t5347;
  double t5358;
  double t5918;
  double t5978;
  double t5998;
  double t6120;
  double t8432;
  double t8434;
  double t8436;
  double t6428;
  double t6437;
  double t6534;
  double t6545;
  double t6665;
  double t6693;
  double t6826;
  t1652 = Cos(var1[3]);
  t860 = Cos(var1[4]);
  t1043 = Sin(var1[3]);
  t1653 = Sin(var1[4]);
  t1870 = t1652*t860;
  t1933 = -1.*t1043*t1653;
  t2109 = t1870 + t1933;
  t2592 = -1.*t860;
  t2593 = 1. + t2592;
  t2689 = -0.9063*t2593;
  t2704 = -1.0567*t860;
  t3139 = t2689 + t2704;
  t1858 = Sin(var1[2]);
  t3522 = -1.*t860*t1043;
  t3560 = -1.*t1652*t1653;
  t3567 = t3522 + t3560;
  t550 = Cos(var1[2]);
  t2293 = 0.4999*t1043;
  t3140 = t3139*t1043;
  t3319 = -0.15039999999999998*t1652*t1653;
  t3379 = t2293 + t3140 + t3319;
  t1453 = t860*t1043;
  t1757 = t1652*t1653;
  t1774 = t1453 + t1757;
  t3585 = -1.*t1652;
  t3643 = 1. + t3585;
  t3656 = -0.4999*t3643;
  t3658 = t1652*t3139;
  t3814 = 0.15039999999999998*t1043*t1653;
  t3816 = t3656 + t3658 + t3814;
  t3398 = -1.*t3379*t2109;
  t3986 = -1.*t3567*t3816;
  t3998 = t3398 + t3986;
  t2234 = -1.*t1858*t2109;
  t4084 = t3379*t1774;
  t4094 = t2109*t3816;
  t4110 = t4084 + t4094;
  t4734 = t3379*t2109;
  t4738 = -0.4999*t1043;
  t4763 = -1.*t3139*t1043;
  t4813 = 0.15039999999999998*t1652*t1653;
  t4829 = t4738 + t4763 + t4813;
  t4851 = t4829*t2109;
  t4860 = t3567*t3816;
  t4937 = 0.4999*t1652;
  t4938 = t4937 + t3658 + t3814;
  t4939 = t1774*t4938;
  t4956 = t4734 + t4851 + t4860 + t4939;
  t4605 = t550*t3567;
  t4608 = t4605 + t2234;
  t4064 = -1.*t1858*t3567;
  t5449 = -1.*t1652*t860;
  t5471 = t1043*t1653;
  t5533 = t5449 + t5471;
  t4507 = -1.*t1858*t1774;
  t4510 = t550*t2109;
  t4548 = t4507 + t4510;
  t5363 = -1.*t3567*t3379;
  t5433 = -1.*t3567*t4829;
  t5439 = -1.*t2109*t4938;
  t5602 = -1.*t3816*t5533;
  t5732 = t5363 + t5433 + t5439 + t5602;
  t6257 = t1858*t3567;
  t6352 = t6257 + t4510;
  t5001 = 0.4999*t860;
  t5070 = t3139*t860;
  t5079 = Power(t1653,2);
  t5127 = -0.15039999999999998*t5079;
  t5128 = t5001 + t5070 + t5127;
  t7976 = 0.15039999999999998*t860*t1043;
  t7988 = t7976 + t4813;
  t7989 = t7988*t2109;
  t8074 = -0.15039999999999998*t1652*t860;
  t8313 = t8074 + t3814;
  t8331 = t1774*t8313;
  t8346 = t4734 + t7989 + t4860 + t8331;
  t5310 = 0.4999*t1653;
  t5311 = t3139*t1653;
  t5347 = 0.15039999999999998*t860*t1653;
  t5358 = t5310 + t5311 + t5347;
  t5918 = 3.5899*t4608*t3998;
  t5978 = t550*t5533;
  t5998 = t4064 + t5978;
  t6120 = 3.5899*t4110*t5998;
  t8432 = -1.*t3567*t7988;
  t8434 = -1.*t2109*t8313;
  t8436 = t5363 + t8432 + t8434 + t5602;
  t6428 = 3.5899*t6352*t3998;
  t6437 = t1858*t5533;
  t6534 = t4605 + t6437;
  t6545 = 3.5899*t4110*t6534;
  t6665 = t550*t1774;
  t6693 = t1858*t2109;
  t6826 = t6665 + t6693;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(3.5899*t3998*t4548 + 3.5899*t4110*t4608)*var2[0] + 0.5*(3.5899*t3998*(t2234 - 1.*t1774*t550) + 3.5899*t4110*(t4064 - 1.*t2109*t550))*var2[1])*var2[2];
  p_output1[3]=var2[2]*(0.5*(3.5899*t4956*t6352 + t6428 + t6545 + 3.5899*t5732*t6826)*var2[0] + 0.5*(3.5899*t4608*t4956 + 3.5899*t4548*t5732 + t5918 + t6120)*var2[1] + 0.5*(7.1798*t4110*t4956 + 7.1798*t3998*t5732)*var2[2] + 0.5*(3.5899*t4956*t5128 + 3.5899*t5358*t5732)*var2[3] - 0.26996047999999995*t4956*var2[4]);
  p_output1[4]=var2[2]*(0.5*(t6428 + t6545 + 3.5899*t6352*t8346 + 3.5899*t6826*t8436)*var2[0] + 0.5*(t5918 + t6120 + 3.5899*t4608*t8346 + 3.5899*t4548*t8436)*var2[1] + 0.5*(7.1798*t4110*t8346 + 7.1798*t3998*t8436)*var2[2] + 0.5*(3.5899*t5128*t8346 + 3.5899*t5358*t8436 + 3.5899*t4110*(-0.4999*t1653 - 1.*t1653*t3139 - 0.15039999999999998*t1653*t860) + 3.5899*t3998*(t5001 + t5070 + 0.15039999999999998*Power(t860,2)))*var2[3] - 0.26996047999999995*t8346*var2[4]);
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

#include "Ce3_vec_L3_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L3_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
