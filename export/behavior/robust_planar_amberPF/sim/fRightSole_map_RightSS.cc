/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:13 GMT-08:00
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
  double t594;
  double t635;
  double t1921;
  double t3201;
  double t3837;
  double t4598;
  double t4742;
  double t4756;
  double t5014;
  double t5069;
  double t5482;
  double t5784;
  double t3507;
  double t4333;
  double t4582;
  double t4872;
  double t6025;
  double t6891;
  double t6932;
  double t7028;
  double t7132;
  double t7673;
  double t7675;
  double t7679;
  double t812;
  double t1285;
  double t7751;
  double t7753;
  double t7762;
  double t7739;
  double t7744;
  double t7763;
  double t7764;
  double t7772;
  double t7773;
  double t7775;
  t594 = Cos(var1[2]);
  t635 = Cos(var1[5]);
  t1921 = Sin(var1[2]);
  t3201 = Sin(var1[5]);
  t3837 = Cos(var1[6]);
  t4598 = t594*t635;
  t4742 = -1.*t1921*t3201;
  t4756 = t4598 + t4742;
  t5014 = -1.*t635*t1921;
  t5069 = -1.*t594*t3201;
  t5482 = t5014 + t5069;
  t5784 = Sin(var1[6]);
  t3507 = -0.4999*t1921*t3201;
  t4333 = -1.*t3837;
  t4582 = 1. + t4333;
  t4872 = -0.9063*t4582*t4756;
  t6025 = 0.9063*t5482*t5784;
  t6891 = t3837*t4756;
  t6932 = t5482*t5784;
  t7028 = t6891 + t6932;
  t7132 = -1.373025*t7028;
  t7673 = t635*t1921;
  t7675 = t594*t3201;
  t7679 = t7673 + t7675;
  t812 = -1.*t635;
  t1285 = 1. + t812;
  t7751 = -1.*t594*t635;
  t7753 = t1921*t3201;
  t7762 = t7751 + t7753;
  t7739 = -0.4999*t594*t3201;
  t7744 = -0.9063*t4582*t5482;
  t7763 = 0.9063*t7762*t5784;
  t7764 = t3837*t5482;
  t7772 = t7762*t5784;
  t7773 = t7764 + t7772;
  t7775 = -1.373025*t7773;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0. + t3507 + t4872 - 0.4999*t1285*t594 + t6025 + t7132;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0. + t3507 + t4872 + t6025 + 0.4999*t594*t635 + t7132;
  p_output1[6]=0. + 0.9063*t3837*t4756 - 0.9063*t5784*t7679 - 1.373025*(t6891 - 1.*t5784*t7679);
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0. + 0.4999*t1285*t1921 + t7739 + t7744 + t7763 + t7775;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0. - 0.4999*t1921*t635 + t7739 + t7744 + t7763 + t7775;
  p_output1[13]=0. + 0.9063*t3837*t5482 - 0.9063*t4756*t5784 - 1.373025*(-1.*t4756*t5784 + t7764);
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

#include "fRightSole_map_RightSS.hh"

namespace SymFunction
{

void fRightSole_map_RightSS_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
