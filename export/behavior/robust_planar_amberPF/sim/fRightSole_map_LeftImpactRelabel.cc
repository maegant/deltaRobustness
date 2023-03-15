/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:15 GMT-08:00
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
  double t55;
  double t478;
  double t1936;
  double t2280;
  double t3506;
  double t4292;
  double t4405;
  double t4535;
  double t4916;
  double t6025;
  double t6102;
  double t6425;
  double t2727;
  double t3507;
  double t4105;
  double t4655;
  double t6430;
  double t6827;
  double t7028;
  double t7433;
  double t7629;
  double t7681;
  double t7709;
  double t7717;
  double t633;
  double t1731;
  double t7775;
  double t7779;
  double t7780;
  double t7772;
  double t7773;
  double t7784;
  double t7786;
  double t7795;
  double t7796;
  double t7802;
  t55 = Cos(var1[2]);
  t478 = Cos(var1[5]);
  t1936 = Sin(var1[2]);
  t2280 = Sin(var1[5]);
  t3506 = Cos(var1[6]);
  t4292 = t55*t478;
  t4405 = -1.*t1936*t2280;
  t4535 = t4292 + t4405;
  t4916 = -1.*t478*t1936;
  t6025 = -1.*t55*t2280;
  t6102 = t4916 + t6025;
  t6425 = Sin(var1[6]);
  t2727 = -0.4999*t1936*t2280;
  t3507 = -1.*t3506;
  t4105 = 1. + t3507;
  t4655 = -0.9063*t4105*t4535;
  t6430 = 0.9063*t6102*t6425;
  t6827 = t3506*t4535;
  t7028 = t6102*t6425;
  t7433 = t6827 + t7028;
  t7629 = -1.373025*t7433;
  t7681 = t478*t1936;
  t7709 = t55*t2280;
  t7717 = t7681 + t7709;
  t633 = -1.*t478;
  t1731 = 1. + t633;
  t7775 = -1.*t55*t478;
  t7779 = t1936*t2280;
  t7780 = t7775 + t7779;
  t7772 = -0.4999*t55*t2280;
  t7773 = -0.9063*t4105*t6102;
  t7784 = 0.9063*t7780*t6425;
  t7786 = t3506*t6102;
  t7795 = t7780*t6425;
  t7796 = t7786 + t7795;
  t7802 = -1.373025*t7796;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0. + t2727 + t4655 - 0.4999*t1731*t55 + t6430 + t7629;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0. + t2727 + t4655 + 0.4999*t478*t55 + t6430 + t7629;
  p_output1[6]=0. + 0.9063*t3506*t4535 - 0.9063*t6425*t7717 - 1.373025*(t6827 - 1.*t6425*t7717);
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0. + 0.4999*t1731*t1936 + t7772 + t7773 + t7784 + t7802;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0. - 0.4999*t1936*t478 + t7772 + t7773 + t7784 + t7802;
  p_output1[13]=0. + 0.9063*t3506*t6102 - 0.9063*t4535*t6425 - 1.373025*(-1.*t4535*t6425 + t7786);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightSole_map_LeftImpactRelabel.hh"

namespace SymFunction
{

void fRightSole_map_LeftImpactRelabel_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
