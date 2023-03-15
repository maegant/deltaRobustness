/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:16 GMT-08:00
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
  double t1296;
  double t1603;
  double t2727;
  double t4292;
  double t4495;
  double t5479;
  double t5481;
  double t6102;
  double t7028;
  double t7433;
  double t7519;
  double t7629;
  double t1774;
  double t2402;
  double t4655;
  double t4776;
  double t7762;
  double t7763;
  double t7772;
  double t4325;
  double t6430;
  double t7631;
  double t7641;
  double t7673;
  double t7675;
  double t7681;
  double t7744;
  double t7753;
  double t7773;
  double t7779;
  double t7780;
  double t7784;
  double t7795;
  double t7817;
  double t7818;
  double t7820;
  t1296 = Cos(var1[2]);
  t1603 = Cos(var1[5]);
  t2727 = Sin(var1[2]);
  t4292 = Sin(var1[5]);
  t4495 = Cos(var1[6]);
  t5479 = t1296*t1603;
  t5481 = -1.*t2727*t4292;
  t6102 = t5479 + t5481;
  t7028 = -1.*t1603*t2727;
  t7433 = -1.*t1296*t4292;
  t7519 = t7028 + t7433;
  t7629 = Sin(var1[6]);
  t1774 = -1.*t1603;
  t2402 = 1. + t1774;
  t4655 = -1.*t4495;
  t4776 = 1. + t4655;
  t7762 = -1.*t1296*t1603;
  t7763 = t2727*t4292;
  t7772 = t7762 + t7763;
  t4325 = -0.4999*t2727*t4292;
  t6430 = -0.9063*t4776*t6102;
  t7631 = 0.9063*t7519*t7629;
  t7641 = t4495*t6102;
  t7673 = t7519*t7629;
  t7675 = t7641 + t7673;
  t7681 = -1.373025*t7675;
  t7744 = -0.4999*t1296*t4292;
  t7753 = -0.9063*t4776*t7519;
  t7773 = 0.9063*t7772*t7629;
  t7779 = t4495*t7519;
  t7780 = t7772*t7629;
  t7784 = t7779 + t7780;
  t7795 = -1.373025*t7784;
  t7817 = t1603*t2727;
  t7818 = t1296*t4292;
  t7820 = t7817 + t7818;
  p_output1[0]=var2[0];
  p_output1[1]=var2[1];
  p_output1[2]=(0. - 0.4999*t1296*t2402 + t4325 + t6430 + t7631 + t7681)*var2[0] + (0. + 0.4999*t2402*t2727 + t7744 + t7753 + t7773 + t7795)*var2[1];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(0. + 0.4999*t1296*t1603 + t4325 + t6430 + t7631 + t7681)*var2[0] + (0. - 0.4999*t1603*t2727 + t7744 + t7753 + t7773 + t7795)*var2[1];
  p_output1[6]=(0. + 0.9063*t4495*t6102 - 0.9063*t7629*t7820 - 1.373025*(t7641 - 1.*t7629*t7820))*var2[0] + (0. + 0.9063*t4495*t7519 - 0.9063*t6102*t7629 - 1.373025*(-1.*t6102*t7629 + t7779))*var2[1];
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRightSole_vec_LeftImpactRelabel.hh"

namespace SymFunction
{

void fRightSole_vec_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
