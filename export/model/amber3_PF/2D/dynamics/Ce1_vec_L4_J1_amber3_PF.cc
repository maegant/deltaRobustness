/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:01 GMT-08:00
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
  double t554;
  double t246;
  double t311;
  double t661;
  double t997;
  double t1261;
  double t1509;
  double t505;
  double t676;
  double t677;
  double t1893;
  double t2277;
  double t2366;
  double t2451;
  double t2821;
  double t2953;
  double t3481;
  double t3620;
  double t3628;
  double t3785;
  double t3963;
  double t4057;
  double t4059;
  double t4145;
  double t4519;
  double t4574;
  double t5112;
  double t5395;
  double t5418;
  double t5424;
  double t5479;
  double t5788;
  double t5485;
  double t5639;
  double t5691;
  double t5739;
  double t5894;
  double t5909;
  double t5931;
  double t6051;
  t554 = Cos(var1[2]);
  t246 = Cos(var1[5]);
  t311 = Sin(var1[2]);
  t661 = Sin(var1[5]);
  t997 = t554*t246;
  t1261 = -1.*t311*t661;
  t1509 = t997 + t1261;
  t505 = -1.*t246*t311;
  t676 = -1.*t554*t661;
  t677 = t505 + t676;
  t1893 = 6.8522*t677*t1509;
  t2277 = t246*t311;
  t2366 = t554*t661;
  t2451 = t2277 + t2366;
  t2821 = 6.8522*t2451*t1509;
  t2953 = t1893 + t2821;
  t3481 = Power(t677,2);
  t3620 = 3.4261*t3481;
  t3628 = 3.4261*t677*t2451;
  t3785 = Power(t1509,2);
  t3963 = 3.4261*t3785;
  t4057 = -1.*t554*t246;
  t4059 = t311*t661;
  t4145 = t4057 + t4059;
  t4519 = 3.4261*t1509*t4145;
  t4574 = t3620 + t3628 + t3963 + t4519;
  t5112 = -1.*t246;
  t5395 = 1. + t5112;
  t5418 = -0.4999*t5395;
  t5424 = -0.6493*t246;
  t5479 = t5418 + t5424;
  t5788 = t5479*t246;
  t5485 = t5479*t661;
  t5639 = 0.14939999999999998*t246*t661;
  t5691 = t5485 + t5639;
  t5739 = 3.4261*t5691*t1509;
  t5894 = Power(t661,2);
  t5909 = -0.14939999999999998*t5894;
  t5931 = t5788 + t5909;
  t6051 = 3.4261*t677*t5931;
  p_output1[0]=var2[0]*(-0.5*t2953*var2[2] - 0.5*t2953*var2[5]);
  p_output1[1]=var2[0]*(-0.5*t4574*var2[2] - 0.5*t4574*var2[5]);
  p_output1[2]=var2[0]*(-0.5*(t5739 + t6051)*var2[2] - 0.5*(t5739 + 3.4261*t2451*(0.14939999999999998*Power(t246,2) + t5788) + t6051 + 3.4261*t1509*(-0.14939999999999998*t246*t661 - 1.*t5479*t661))*var2[5]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[0]*(0.25592966999999994*t677*var2[2] + 0.25592966999999994*t677*var2[5]);
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

#include "Ce1_vec_L4_J1_amber3_PF.hh"

namespace SymFunction
{

void Ce1_vec_L4_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
