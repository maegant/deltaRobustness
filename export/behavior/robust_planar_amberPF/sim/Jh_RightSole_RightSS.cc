/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:03 GMT-08:00
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
  double t495;
  double t537;
  double t1408;
  double t1662;
  double t3762;
  double t5512;
  double t6104;
  double t6301;
  double t6475;
  double t6655;
  double t6677;
  double t6678;
  double t828;
  double t1203;
  double t4004;
  double t4243;
  double t7152;
  double t7163;
  double t7326;
  double t2546;
  double t6462;
  double t6693;
  double t6797;
  double t6883;
  double t6886;
  double t6891;
  double t7109;
  double t7132;
  double t7348;
  double t7423;
  double t7426;
  double t7433;
  double t7456;
  double t7549;
  double t7629;
  double t7638;
  t495 = Cos(var1[2]);
  t537 = Cos(var1[5]);
  t1408 = Sin(var1[2]);
  t1662 = Sin(var1[5]);
  t3762 = Cos(var1[6]);
  t5512 = t495*t537;
  t6104 = -1.*t1408*t1662;
  t6301 = t5512 + t6104;
  t6475 = -1.*t537*t1408;
  t6655 = -1.*t495*t1662;
  t6677 = t6475 + t6655;
  t6678 = Sin(var1[6]);
  t828 = -1.*t537;
  t1203 = 1. + t828;
  t4004 = -1.*t3762;
  t4243 = 1. + t4004;
  t7152 = -1.*t495*t537;
  t7163 = t1408*t1662;
  t7326 = t7152 + t7163;
  t2546 = -0.4999*t1408*t1662;
  t6462 = -0.9063*t4243*t6301;
  t6693 = 0.9063*t6677*t6678;
  t6797 = t3762*t6301;
  t6883 = t6677*t6678;
  t6886 = t6797 + t6883;
  t6891 = -1.373025*t6886;
  t7109 = -0.4999*t495*t1662;
  t7132 = -0.9063*t4243*t6677;
  t7348 = 0.9063*t7326*t6678;
  t7423 = t3762*t6677;
  t7426 = t7326*t6678;
  t7433 = t7423 + t7426;
  t7456 = -1.373025*t7433;
  t7549 = t537*t1408;
  t7629 = t495*t1662;
  t7638 = t7549 + t7629;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=1.;
  p_output1[4]=0. + t2546 - 0.4999*t1203*t495 + t6462 + t6693 + t6891;
  p_output1[5]=0. + 0.4999*t1203*t1408 + t7109 + t7132 + t7348 + t7456;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0. + t2546 + 0.4999*t495*t537 + t6462 + t6693 + t6891;
  p_output1[11]=0. - 0.4999*t1408*t537 + t7109 + t7132 + t7348 + t7456;
  p_output1[12]=0. + 0.9063*t3762*t6301 - 0.9063*t6678*t7638 - 1.373025*(t6797 - 1.*t6678*t7638);
  p_output1[13]=0. + 0.9063*t3762*t6677 - 0.9063*t6301*t6678 - 1.373025*(-1.*t6301*t6678 + t7423);
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RightSole_RightSS.hh"

namespace SymFunction
{

void Jh_RightSole_RightSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
