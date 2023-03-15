/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:28:41 GMT-08:00
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
  double t634;
  double t1801;
  double t50;
  double t1977;
  double t1078;
  double t2439;
  double t2714;
  double t3949;
  double t4151;
  double t4278;
  double t6335;
  double t6445;
  double t6630;
  double t6679;
  double t7129;
  double t2766;
  double t3157;
  double t3299;
  double t3665;
  double t4325;
  double t4497;
  double t5612;
  double t5907;
  double t7137;
  double t7254;
  double t7394;
  double t7454;
  double t7519;
  double t7631;
  double t7673;
  double t7802;
  double t7803;
  double t7806;
  double t7410;
  double t7681;
  double t7709;
  double t7813;
  double t7817;
  t634 = Cos(var1[5]);
  t1801 = Sin(var1[2]);
  t50 = Cos(var1[2]);
  t1977 = Sin(var1[5]);
  t1078 = t50*t634;
  t2439 = -1.*t1801*t1977;
  t2714 = t1078 + t2439;
  t3949 = t634*t1801;
  t4151 = t50*t1977;
  t4278 = t3949 + t4151;
  t6335 = -1.*t634;
  t6445 = 1. + t6335;
  t6630 = -0.4999*t6445;
  t6679 = -0.6493*t634;
  t7129 = t6630 + t6679;
  t2766 = -1.*t634*t1801;
  t3157 = -1.*t50*t1977;
  t3299 = t2766 + t3157;
  t3665 = 3.4261*t3299*t2714;
  t4325 = 3.4261*t4278*t2714;
  t4497 = t3665 + t4325;
  t5612 = Power(t2714,2);
  t5907 = 3.4261*t5612;
  t7137 = t7129*t1977;
  t7254 = 0.14939999999999998*t634*t1977;
  t7394 = t7137 + t7254;
  t7454 = t7129*t634;
  t7519 = Power(t1977,2);
  t7631 = -0.14939999999999998*t7519;
  t7673 = t7454 + t7631;
  t7802 = 3.4261*t7394*t2714;
  t7803 = 3.4261*t3299*t7673;
  t7806 = t7802 + t7803;
  t7410 = 3.4261*t4278*t7394;
  t7681 = 3.4261*t2714*t7673;
  t7709 = t7410 + t7681;
  t7813 = -0.5118593399999999*t7673;
  t7817 = 0.0389 + t7813;
  p_output1[0]=-1.*(3.4261*Power(t4278,2) + t5907)*var2[0] - 1.*t4497*var2[1] - 1.*t7709*var2[2] + 0.5118593399999999*t2714*var2[5];
  p_output1[1]=-1.*t4497*var2[0] - 1.*(3.4261*Power(t3299,2) + t5907)*var2[1] - 1.*t7806*var2[2] + 0.5118593399999999*t3299*var2[5];
  p_output1[2]=-1.*t7709*var2[0] - 1.*t7806*var2[1] - 1.*(0.0389 + 3.4261*Power(t7394,2) + 3.4261*Power(t7673,2))*var2[2] - 1.*t7817*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0.5118593399999999*t2714*var2[0] + 0.5118593399999999*t3299*var2[1] - 1.*t7817*var2[2] - 0.11537178539599996*var2[5];
  p_output1[6]=0;
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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

#include "MmatDx4_amber3_PF.hh"

namespace SymFunction
{

void MmatDx4_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
