/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:57 GMT-08:00
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
  double t2834;
  double t2570;
  double t2654;
  double t2980;
  double t1859;
  double t3081;
  double t3096;
  double t3101;
  double t2766;
  double t2981;
  double t3033;
  double t3208;
  double t925;
  double t3055;
  double t3589;
  double t3621;
  double t3664;
  double t3508;
  double t3797;
  double t3815;
  double t3825;
  double t3673;
  double t3699;
  double t3838;
  double t3851;
  double t3857;
  double t3723;
  double t3826;
  double t3829;
  double t3894;
  double t4043;
  double t4373;
  double t4421;
  double t3209;
  double t3243;
  double t3263;
  double t3358;
  double t3416;
  double t3441;
  double t3509;
  double t3517;
  double t3999;
  double t4434;
  double t4441;
  double t4485;
  double t4496;
  double t4511;
  double t4553;
  double t4594;
  double t4625;
  double t4626;
  double t4633;
  double t4658;
  double t4660;
  double t4669;
  double t4693;
  double t4698;
  double t4766;
  t2834 = Cos(var1[2]);
  t2570 = Cos(var1[3]);
  t2654 = Sin(var1[2]);
  t2980 = Sin(var1[3]);
  t1859 = Cos(var1[4]);
  t3081 = -1.*t2834*t2570;
  t3096 = t2654*t2980;
  t3101 = t3081 + t3096;
  t2766 = -1.*t2570*t2654;
  t2981 = -1.*t2834*t2980;
  t3033 = t2766 + t2981;
  t3208 = Sin(var1[4]);
  t925 = Cos(var1[5]);
  t3055 = t1859*t3033;
  t3589 = t2834*t2570;
  t3621 = -1.*t2654*t2980;
  t3664 = t3589 + t3621;
  t3508 = Sin(var1[5]);
  t3797 = t1859*t3664;
  t3815 = t3033*t3208;
  t3825 = t3797 + t3815;
  t3673 = -1.*t3664*t3208;
  t3699 = t3055 + t3673;
  t3838 = t925*t3825;
  t3851 = t3699*t3508;
  t3857 = t3838 + t3851;
  t3723 = t925*t3699;
  t3826 = -1.*t3825*t3508;
  t3829 = t3723 + t3826;
  t3894 = Power(t3857,2);
  t4043 = Power(t3829,2);
  t4373 = t4043 + t3894;
  t4421 = 1/t4373;
  t3209 = t3101*t3208;
  t3243 = t3055 + t3209;
  t3263 = t925*t3243;
  t3358 = t1859*t3101;
  t3416 = -1.*t3033*t3208;
  t3441 = t3358 + t3416;
  t3509 = t3441*t3508;
  t3517 = t3263 + t3509;
  t3999 = 1/Sqrt(t3894);
  t4434 = t3517*t3829*t3857*t3999*t4421;
  t4441 = Power(t3894,-1.5);
  t4485 = t3517*t3829*t3894*t4441;
  t4496 = -1.*t3517*t3829*t3999;
  t4511 = t925*t3441;
  t4553 = -1.*t3243*t3508;
  t4594 = t4511 + t4553;
  t4625 = -1.*t3857*t3999*t4594;
  t4626 = t4485 + t4496 + t4625;
  t4633 = t3857*t4421*t4626;
  t4658 = t4434 + t4633;
  t4660 = -1.*t1859*t3664;
  t4669 = t4660 + t3416;
  t4693 = t4669*t3508;
  t4698 = t3723 + t4693;
  t4766 = -1.*t3699*t3508;
  p_output1[0]=t4658;
  p_output1[1]=t4658;
  p_output1[2]=t3829*t3857*t3999*t4421*t4698 + t3857*t4421*(-1.*t3829*t3999*t4698 + t3829*t3894*t4441*t4698 - 1.*t3857*t3999*(t4766 + t4669*t925));
  p_output1[3]=t3857*t3999*t4043*t4421 + t3857*t4421*(-1.*t3999*t4043 + t3894*t4043*t4441 - 1.*t3857*t3999*(t4766 - 1.*t3825*t925));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_nsf_pitch_RightSS1.hh"

namespace RightSS1
{

void J_nsf_pitch_RightSS1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
