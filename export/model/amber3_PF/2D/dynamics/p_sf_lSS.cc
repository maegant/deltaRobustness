/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:26:53 GMT-08:00
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
  double t2148;
  double t2791;
  double t3979;
  double t4164;
  double t4285;
  double t4983;
  double t5212;
  double t5241;
  double t5399;
  double t5584;
  double t5727;
  double t5737;
  double t2609;
  double t2781;
  double t4426;
  double t4645;
  double t6586;
  double t6654;
  double t6655;
  t2148 = Cos(var1[3]);
  t2791 = Sin(var1[2]);
  t3979 = Cos(var1[2]);
  t4164 = Sin(var1[3]);
  t4285 = Cos(var1[4]);
  t4983 = t2148*t2791;
  t5212 = t3979*t4164;
  t5241 = t4983 + t5212;
  t5399 = t3979*t2148;
  t5584 = -1.*t2791*t4164;
  t5727 = t5399 + t5584;
  t5737 = Sin(var1[4]);
  t2609 = -1.*t2148;
  t2781 = 1. + t2609;
  t4426 = -1.*t4285;
  t4645 = 1. + t4426;
  t6586 = -1.*t2148*t2791;
  t6654 = -1.*t3979*t4164;
  t6655 = t6586 + t6654;
  p_output1[0]=-0.4999*t2781*t2791 + 0.4999*t3979*t4164 - 0.9063*t4645*t5241 + 0.9063*t5727*t5737 - 1.373025*(t4285*t5241 + t5727*t5737) + var1[0];
  p_output1[1]=0;
  p_output1[2]=-0.4999*t2781*t3979 - 0.4999*t2791*t4164 - 0.9063*t4645*t5727 + 0.9063*t5737*t6655 - 1.373025*(t4285*t5727 + t5737*t6655) + var1[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_sf_lSS.hh"

namespace SymFunction
{

void p_sf_lSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
