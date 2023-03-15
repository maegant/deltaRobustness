/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:12 GMT-08:00
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
  double t2368;
  double t3013;
  double t1831;
  double t3017;
  double t2915;
  double t3023;
  double t3024;
  double t4789;
  double t4827;
  double t5041;
  double t7650;
  double t7654;
  double t7661;
  double t7662;
  double t7680;
  double t3824;
  double t4102;
  double t4126;
  double t4667;
  double t5077;
  double t5105;
  double t6228;
  double t6504;
  double t7685;
  double t7703;
  double t7705;
  double t7725;
  double t7728;
  double t7732;
  double t7739;
  double t7757;
  double t7759;
  double t7760;
  double t7719;
  double t7740;
  double t7742;
  double t7770;
  double t7771;
  t2368 = Cos(var1[3]);
  t3013 = Sin(var1[2]);
  t1831 = Cos(var1[2]);
  t3017 = Sin(var1[3]);
  t2915 = t1831*t2368;
  t3023 = -1.*t3013*t3017;
  t3024 = t2915 + t3023;
  t4789 = t2368*t3013;
  t4827 = t1831*t3017;
  t5041 = t4789 + t4827;
  t7650 = -1.*t2368;
  t7654 = 1. + t7650;
  t7661 = -0.4999*t7654;
  t7662 = -0.6493*t2368;
  t7680 = t7661 + t7662;
  t3824 = -1.*t2368*t3013;
  t4102 = -1.*t1831*t3017;
  t4126 = t3824 + t4102;
  t4667 = 3.4261*t4126*t3024;
  t5077 = 3.4261*t5041*t3024;
  t5105 = t4667 + t5077;
  t6228 = Power(t3024,2);
  t6504 = 3.4261*t6228;
  t7685 = t7680*t3017;
  t7703 = 0.14939999999999998*t2368*t3017;
  t7705 = t7685 + t7703;
  t7725 = t7680*t2368;
  t7728 = Power(t3017,2);
  t7732 = -0.14939999999999998*t7728;
  t7739 = t7725 + t7732;
  t7757 = 3.4261*t7705*t3024;
  t7759 = 3.4261*t4126*t7739;
  t7760 = t7757 + t7759;
  t7719 = 3.4261*t5041*t7705;
  t7740 = 3.4261*t3024*t7739;
  t7742 = t7719 + t7740;
  t7770 = -0.5118593399999999*t7739;
  t7771 = 0.0389 + t7770;
  p_output1[0]=-1.*(3.4261*Power(t5041,2) + t6504)*var2[0] - 1.*t5105*var2[1] - 1.*t7742*var2[2] + 0.5118593399999999*t3024*var2[3];
  p_output1[1]=-1.*t5105*var2[0] - 1.*(3.4261*Power(t4126,2) + t6504)*var2[1] - 1.*t7760*var2[2] + 0.5118593399999999*t4126*var2[3];
  p_output1[2]=-1.*t7742*var2[0] - 1.*t7760*var2[1] - 1.*(0.0389 + 3.4261*Power(t7705,2) + 3.4261*Power(t7739,2))*var2[2] - 1.*t7771*var2[3];
  p_output1[3]=0.5118593399999999*t3024*var2[0] + 0.5118593399999999*t4126*var2[1] - 1.*t7771*var2[2] - 0.11537178539599996*var2[3];
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
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

#include "MmatDx2_amber3_feet.hh"

namespace SymFunction
{

void MmatDx2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
