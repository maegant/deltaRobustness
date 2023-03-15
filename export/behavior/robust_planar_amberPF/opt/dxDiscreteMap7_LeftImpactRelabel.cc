/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:35:06 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t686;
  double t706;
  double t1070;
  double t1082;
  double t2396;
  double t3970;
  double t3975;
  double t4031;
  double t4116;
  double t4146;
  double t4153;
  double t4296;
  double t829;
  double t866;
  double t2713;
  double t3968;
  double t4416;
  double t4420;
  double t4440;
  double t1574;
  double t4073;
  double t4304;
  double t4315;
  double t4344;
  double t4346;
  double t4347;
  double t4387;
  double t4407;
  double t4441;
  double t4445;
  double t4455;
  double t4457;
  double t4484;
  double t4754;
  double t4765;
  double t4808;
  t686 = Cos(var2[2]);
  t706 = Cos(var2[5]);
  t1070 = Sin(var2[2]);
  t1082 = Sin(var2[5]);
  t2396 = Cos(var2[6]);
  t3970 = t686*t706;
  t3975 = -1.*t1070*t1082;
  t4031 = t3970 + t3975;
  t4116 = -1.*t706*t1070;
  t4146 = -1.*t686*t1082;
  t4153 = t4116 + t4146;
  t4296 = Sin(var2[6]);
  t829 = -1.*t706;
  t866 = 1. + t829;
  t2713 = -1.*t2396;
  t3968 = 1. + t2713;
  t4416 = -1.*t686*t706;
  t4420 = t1070*t1082;
  t4440 = t4416 + t4420;
  t1574 = -0.4999*t1070*t1082;
  t4073 = -0.9063*t3968*t4031;
  t4304 = 0.9063*t4153*t4296;
  t4315 = t2396*t4031;
  t4344 = t4153*t4296;
  t4346 = t4315 + t4344;
  t4347 = -1.373025*t4346;
  t4387 = -0.4999*t686*t1082;
  t4407 = -0.9063*t3968*t4153;
  t4441 = 0.9063*t4440*t4296;
  t4445 = t2396*t4153;
  t4455 = t4440*t4296;
  t4457 = t4445 + t4455;
  t4484 = -1.373025*t4457;
  t4754 = t706*t1070;
  t4765 = t686*t1082;
  t4808 = t4754 + t4765;
  p_output1[0]=-1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=-1.*(0. + t1574 + t4073 + t4304 + t4347 - 0.4999*t686*t866)*var4[0] - 1.*(0. + t4387 + t4407 + t4441 + t4484 + 0.4999*t1070*t866)*var4[1];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-1.*(0. + t1574 + t4073 + t4304 + t4347 + 0.4999*t686*t706)*var4[0] - 1.*(0. + t4387 + t4407 + t4441 + t4484 - 0.4999*t1070*t706)*var4[1];
  p_output1[6]=-1.*(0. + 0.9063*t2396*t4031 - 0.9063*t4296*t4808 - 1.373025*(t4315 - 1.*t4296*t4808))*var4[0] - 1.*(0. + 0.9063*t2396*t4153 - 0.9063*t4031*t4296 - 1.373025*(-1.*t4031*t4296 + t4445))*var4[1];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMap7_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void dxDiscreteMap7_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
