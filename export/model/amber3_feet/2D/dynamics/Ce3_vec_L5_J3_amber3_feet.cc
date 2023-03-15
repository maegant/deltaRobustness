/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:28 GMT-08:00
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
  double t241;
  double t1167;
  double t1634;
  double t1570;
  double t479;
  double t480;
  double t669;
  double t684;
  double t1075;
  double t1969;
  double t1971;
  double t2049;
  double t1268;
  double t1517;
  double t1566;
  double t2124;
  double t2128;
  double t2171;
  double t2199;
  double t3399;
  double t3424;
  double t3425;
  double t1581;
  double t1681;
  double t1787;
  double t1834;
  double t2469;
  double t3484;
  double t3636;
  double t3637;
  double t2890;
  double t2942;
  double t2977;
  double t3004;
  double t3057;
  t241 = Cos(var1[6]);
  t1167 = Sin(var1[6]);
  t1634 = Sin(var1[2]);
  t1570 = Cos(var1[2]);
  t479 = -1.*t241;
  t480 = 1. + t479;
  t669 = -0.4999*t480;
  t684 = -0.6493*t241;
  t1075 = t669 + t684;
  t1969 = -1.*t241*t1634;
  t1971 = -1.*t1570*t1167;
  t2049 = t1969 + t1971;
  t1268 = t1075*t1167;
  t1517 = 0.14939999999999998*t241*t1167;
  t1566 = t1268 + t1517;
  t2124 = t1075*t241;
  t2128 = Power(t1167,2);
  t2171 = -0.14939999999999998*t2128;
  t2199 = t2124 + t2171;
  t3399 = -1.*t1075*t1167;
  t3424 = -0.14939999999999998*t241*t1167;
  t3425 = t3399 + t3424;
  t1581 = t1570*t241;
  t1681 = -1.*t1634*t1167;
  t1787 = t1581 + t1681;
  t1834 = 3.4261*t1566*t1787;
  t2469 = 3.4261*t2049*t2199;
  t3484 = Power(t241,2);
  t3636 = 0.14939999999999998*t3484;
  t3637 = t2124 + t3636;
  t2890 = 3.4261*t2049*t1566;
  t2942 = -1.*t1570*t241;
  t2977 = t1634*t1167;
  t3004 = t2942 + t2977;
  t3057 = 3.4261*t3004*t2199;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(t1834 + t2469)*var2[0] + 0.5*(t2890 + t3057)*var2[1])*var2[2];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[2]*(0.5*(t1834 + t2469 + 3.4261*t1787*t3425 + 3.4261*(t1167*t1570 + t1634*t241)*t3637)*var2[0] + 0.5*(t2890 + t3057 + 3.4261*t2049*t3425 + 3.4261*t1787*t3637)*var2[1] + 0.5*(6.8522*t2199*t3425 + 6.8522*t1566*t3637)*var2[2] - 0.25592966999999994*t3425*var2[6]);
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

#include "Ce3_vec_L5_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L5_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
