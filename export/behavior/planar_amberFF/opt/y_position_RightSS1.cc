/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:35 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t468;
  double t543;
  double t619;
  double t850;
  double t862;
  double t882;
  double t888;
  double t911;
  double t916;
  double t947;
  double t1081;
  double t1272;
  double t1322;
  double t1332;
  double t1417;
  double t1488;
  double t1501;
  double t1505;
  double t1566;
  double t1621;
  double t1629;
  t468 = -1.*var3[1];
  t543 = var3[0] + t468;
  t619 = 1/t543;
  t850 = 0.8128*var1[2];
  t862 = 0.8128*var1[6];
  t882 = 0.4064*var1[7];
  t888 = 0. + t468 + t850 + t862 + t882;
  t911 = -1.*t619*t888;
  t916 = 1. + t911;
  t947 = Power(t916,5);
  t1081 = Power(t916,4);
  t1272 = Power(t543,-2);
  t1322 = Power(t916,3);
  t1332 = Power(t888,2);
  t1417 = Power(t543,-3);
  t1488 = Power(t916,2);
  t1501 = Power(t888,3);
  t1505 = Power(t543,-4);
  t1566 = Power(t888,4);
  t1621 = Power(t543,-5);
  t1629 = Power(t888,5);
  p_output1[0]=var1[6] - 1.*t947*var2[0] - 5.*t1081*t619*t888*var2[5] - 10.*t1272*t1322*t1332*var2[10] - 10.*t1417*t1488*t1501*var2[15] - 5.*t1505*t1566*t916*var2[20] - 1.*t1621*t1629*var2[25];
  p_output1[1]=var1[7] - 1.*t947*var2[1] - 5.*t1081*t619*t888*var2[6] - 10.*t1272*t1322*t1332*var2[11] - 10.*t1417*t1488*t1501*var2[16] - 5.*t1505*t1566*t916*var2[21] - 1.*t1621*t1629*var2[26];
  p_output1[2]=var1[3] - 1.*t947*var2[2] - 5.*t1081*t619*t888*var2[7] - 10.*t1272*t1322*t1332*var2[12] - 10.*t1417*t1488*t1501*var2[17] - 5.*t1505*t1566*t916*var2[22] - 1.*t1621*t1629*var2[27];
  p_output1[3]=var1[4] - 1.*t947*var2[3] - 5.*t1081*t619*t888*var2[8] - 10.*t1272*t1322*t1332*var2[13] - 10.*t1417*t1488*t1501*var2[18] - 5.*t1505*t1566*t916*var2[23] - 1.*t1621*t1629*var2[28];
  p_output1[4]=var1[5] - 1.*t947*var2[4] - 5.*t1081*t619*t888*var2[9] - 10.*t1272*t1322*t1332*var2[14] - 10.*t1417*t1488*t1501*var2[19] - 5.*t1505*t1566*t916*var2[24] - 1.*t1621*t1629*var2[29];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "y_position_RightSS1.hh"

namespace RightSS1
{

void y_position_RightSS1_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
