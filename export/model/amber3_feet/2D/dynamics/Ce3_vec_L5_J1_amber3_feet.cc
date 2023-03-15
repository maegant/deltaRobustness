/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:27 GMT-08:00
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
  double t232;
  double t342;
  double t347;
  double t357;
  double t548;
  double t625;
  double t646;
  double t885;
  double t992;
  double t1022;
  double t1170;
  double t1228;
  double t1239;
  double t1955;
  double t1956;
  double t1969;
  double t1971;
  double t1982;
  double t712;
  double t1075;
  double t1268;
  double t1426;
  double t1503;
  double t1517;
  double t1550;
  double t1566;
  double t1570;
  double t1581;
  double t1624;
  double t1719;
  double t1766;
  double t1787;
  double t1838;
  double t1841;
  double t2171;
  double t2049;
  double t2124;
  double t2128;
  double t2139;
  double t2199;
  double t2531;
  double t2602;
  double t2718;
  t232 = Cos(var1[6]);
  t342 = Sin(var1[2]);
  t347 = -1.*t232*t342;
  t357 = Cos(var1[2]);
  t548 = Sin(var1[6]);
  t625 = -1.*t357*t548;
  t646 = t347 + t625;
  t885 = t357*t232;
  t992 = -1.*t342*t548;
  t1022 = t885 + t992;
  t1170 = t232*t342;
  t1228 = t357*t548;
  t1239 = t1170 + t1228;
  t1955 = -1.*t232;
  t1956 = 1. + t1955;
  t1969 = -0.4999*t1956;
  t1971 = -0.6493*t232;
  t1982 = t1969 + t1971;
  t712 = -0.25592966999999994*var2[6]*t646;
  t1075 = 6.8522*t646*t1022;
  t1268 = 6.8522*t1239*t1022;
  t1426 = t1075 + t1268;
  t1503 = 0.5*var2[0]*t1426;
  t1517 = Power(t646,2);
  t1550 = 3.4261*t1517;
  t1566 = 3.4261*t646*t1239;
  t1570 = Power(t1022,2);
  t1581 = 3.4261*t1570;
  t1624 = -1.*t357*t232;
  t1719 = t342*t548;
  t1766 = t1624 + t1719;
  t1787 = 3.4261*t1022*t1766;
  t1838 = t1550 + t1566 + t1581 + t1787;
  t1841 = 0.5*var2[1]*t1838;
  t2171 = t1982*t232;
  t2049 = t1982*t548;
  t2124 = 0.14939999999999998*t232*t548;
  t2128 = t2049 + t2124;
  t2139 = 3.4261*t2128*t1022;
  t2199 = Power(t548,2);
  t2531 = -0.14939999999999998*t2199;
  t2602 = t2171 + t2531;
  t2718 = 3.4261*t646*t2602;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(t1503 + t1841 + t712 + 0.5*(t2139 + t2718)*var2[2]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[0]*(t1503 + t1841 + t712 + 0.5*(t2139 + 3.4261*t1239*(t2171 + 0.14939999999999998*Power(t232,2)) + t2718 + 3.4261*t1022*(-1.*t1982*t548 - 0.14939999999999998*t232*t548))*var2[2]);
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

#include "Ce3_vec_L5_J1_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L5_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
