/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:10 GMT-08:00
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
  double t479;
  double t111;
  double t230;
  double t636;
  double t465;
  double t649;
  double t668;
  double t698;
  double t769;
  double t788;
  double t841;
  double t856;
  double t858;
  double t916;
  double t954;
  double t968;
  double t971;
  double t985;
  double t991;
  double t1104;
  double t1173;
  double t1183;
  double t1199;
  double t1283;
  double t997;
  double t1590;
  double t1593;
  double t1612;
  double t1062;
  t479 = Cos(var1[2]);
  t111 = Cos(var1[3]);
  t230 = Sin(var1[2]);
  t636 = Sin(var1[3]);
  t465 = t111*t230;
  t649 = t479*t636;
  t668 = t465 + t649;
  t698 = -0.25592966999999994*var2[1]*t668;
  t769 = -1.*t479*t111;
  t788 = t230*t636;
  t841 = t769 + t788;
  t856 = -0.25592966999999994*var2[0]*t841;
  t858 = t698 + t856;
  t916 = var2[3]*t858;
  t954 = -1.*t111*t230;
  t968 = -1.*t479*t636;
  t971 = t954 + t968;
  t985 = -0.25592966999999994*var2[3]*t971;
  t991 = -0.25592966999999994*var2[3]*t841;
  t1104 = -1.*t111;
  t1173 = 1. + t1104;
  t1183 = -0.4999*t1173;
  t1199 = -0.6493*t111;
  t1283 = t1183 + t1199;
  t997 = -0.25592966999999994*var2[0]*t971;
  t1590 = -1.*t1283*t636;
  t1593 = -0.14939999999999998*t111*t636;
  t1612 = t1590 + t1593;
  t1062 = -0.25592966999999994*var2[1]*t841;
  p_output1[0]=t916;
  p_output1[1]=t916;
  p_output1[2]=t985;
  p_output1[3]=t991;
  p_output1[4]=t1062 + t997;
  p_output1[5]=t916;
  p_output1[6]=(t698 + t856 - 0.25592966999999994*(0. - 0.14939999999999998*Power(t111,2) - 1.*t111*t1283)*var2[2])*var2[3];
  p_output1[7]=t985;
  p_output1[8]=t991;
  p_output1[9]=-0.25592966999999994*t1612*var2[3];
  p_output1[10]=t1062 + t997 - 0.25592966999999994*t1612*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L2_J4_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L2_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
