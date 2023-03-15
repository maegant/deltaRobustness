/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:28:39 GMT-08:00
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
  double t533;
  double t1419;
  double t98;
  double t2630;
  double t1101;
  double t3296;
  double t3299;
  double t6445;
  double t7519;
  double t7631;
  double t7772;
  double t7773;
  double t7780;
  double t7784;
  double t7795;
  double t4664;
  double t5316;
  double t5479;
  double t6430;
  double t7673;
  double t7675;
  double t7736;
  double t7744;
  double t7796;
  double t7802;
  double t7803;
  double t7806;
  double t7807;
  double t7810;
  double t7812;
  double t7830;
  double t7831;
  double t7832;
  double t7804;
  double t7813;
  double t7815;
  double t7839;
  double t7842;
  t533 = Cos(var1[3]);
  t1419 = Sin(var1[2]);
  t98 = Cos(var1[2]);
  t2630 = Sin(var1[3]);
  t1101 = t98*t533;
  t3296 = -1.*t1419*t2630;
  t3299 = t1101 + t3296;
  t6445 = t533*t1419;
  t7519 = t98*t2630;
  t7631 = t6445 + t7519;
  t7772 = -1.*t533;
  t7773 = 1. + t7772;
  t7780 = -0.4999*t7773;
  t7784 = -0.6493*t533;
  t7795 = t7780 + t7784;
  t4664 = -1.*t533*t1419;
  t5316 = -1.*t98*t2630;
  t5479 = t4664 + t5316;
  t6430 = 3.4261*t5479*t3299;
  t7673 = 3.4261*t7631*t3299;
  t7675 = t6430 + t7673;
  t7736 = Power(t3299,2);
  t7744 = 3.4261*t7736;
  t7796 = t7795*t2630;
  t7802 = 0.14939999999999998*t533*t2630;
  t7803 = t7796 + t7802;
  t7806 = t7795*t533;
  t7807 = Power(t2630,2);
  t7810 = -0.14939999999999998*t7807;
  t7812 = t7806 + t7810;
  t7830 = 3.4261*t7803*t3299;
  t7831 = 3.4261*t5479*t7812;
  t7832 = t7830 + t7831;
  t7804 = 3.4261*t7631*t7803;
  t7813 = 3.4261*t3299*t7812;
  t7815 = t7804 + t7813;
  t7839 = -0.5118593399999999*t7812;
  t7842 = 0.0389 + t7839;
  p_output1[0]=-1.*(3.4261*Power(t7631,2) + t7744)*var2[0] - 1.*t7675*var2[1] - 1.*t7815*var2[2] + 0.5118593399999999*t3299*var2[3];
  p_output1[1]=-1.*t7675*var2[0] - 1.*(3.4261*Power(t5479,2) + t7744)*var2[1] - 1.*t7832*var2[2] + 0.5118593399999999*t5479*var2[3];
  p_output1[2]=-1.*t7815*var2[0] - 1.*t7832*var2[1] - 1.*(0.0389 + 3.4261*Power(t7803,2) + 3.4261*Power(t7812,2))*var2[2] - 1.*t7842*var2[3];
  p_output1[3]=0.5118593399999999*t3299*var2[0] + 0.5118593399999999*t5479*var2[1] - 1.*t7842*var2[2] - 0.11537178539599996*var2[3];
  p_output1[4]=0;
  p_output1[5]=0;
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

#include "MmatDx2_amber3_PF.hh"

namespace SymFunction
{

void MmatDx2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
