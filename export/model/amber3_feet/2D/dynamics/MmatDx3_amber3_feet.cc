/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:13 GMT-08:00
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
  double t2691;
  double t47;
  double t579;
  double t2915;
  double t8;
  double t1159;
  double t3024;
  double t3384;
  double t4126;
  double t4667;
  double t4789;
  double t4827;
  double t5041;
  double t5077;
  double t5193;
  double t5920;
  double t6228;
  double t6504;
  double t7644;
  double t7649;
  double t7732;
  double t7739;
  double t7740;
  double t7745;
  double t7746;
  double t7749;
  double t7782;
  double t7783;
  double t7784;
  double t7785;
  double t7787;
  double t7788;
  double t7789;
  double t7790;
  double t7791;
  double t7792;
  double t7753;
  double t7756;
  double t7757;
  double t7705;
  double t7719;
  double t7725;
  double t7728;
  double t7763;
  double t7766;
  double t5542;
  double t7661;
  double t7662;
  double t7680;
  double t7685;
  double t7759;
  double t7770;
  double t7774;
  double t7786;
  double t7793;
  double t7794;
  double t7796;
  double t7797;
  double t7798;
  double t7795;
  double t7799;
  double t7800;
  double t7815;
  double t7816;
  double t7817;
  double t7804;
  double t7805;
  double t7806;
  double t7703;
  double t7750;
  double t7751;
  double t7823;
  double t7824;
  double t7825;
  double t7838;
  double t7839;
  double t7820;
  double t7821;
  t2691 = Cos(var1[3]);
  t47 = Cos(var1[4]);
  t579 = Sin(var1[3]);
  t2915 = Sin(var1[4]);
  t8 = Sin(var1[2]);
  t1159 = -1.*t47*t579;
  t3024 = -1.*t2691*t2915;
  t3384 = t1159 + t3024;
  t4126 = t8*t3384;
  t4667 = Cos(var1[2]);
  t4789 = t2691*t47;
  t4827 = -1.*t579*t2915;
  t5041 = t4789 + t4827;
  t5077 = t4667*t5041;
  t5193 = t4126 + t5077;
  t5920 = -1.*t47;
  t6228 = 1. + t5920;
  t6504 = -0.9063*t6228;
  t7644 = -1.0567*t47;
  t7649 = t6504 + t7644;
  t7732 = t47*t579;
  t7739 = t2691*t2915;
  t7740 = t7732 + t7739;
  t7745 = t4667*t7740;
  t7746 = t8*t5041;
  t7749 = t7745 + t7746;
  t7782 = 0.4999*t579;
  t7783 = t7649*t579;
  t7784 = -0.15039999999999998*t2691*t2915;
  t7785 = t7782 + t7783 + t7784;
  t7787 = -1.*t2691;
  t7788 = 1. + t7787;
  t7789 = -0.4999*t7788;
  t7790 = t2691*t7649;
  t7791 = 0.15039999999999998*t579*t2915;
  t7792 = t7789 + t7790 + t7791;
  t7753 = t4667*t3384;
  t7756 = -1.*t8*t5041;
  t7757 = t7753 + t7756;
  t7705 = 0.4999*t2915;
  t7719 = t7649*t2915;
  t7725 = 0.15039999999999998*t47*t2915;
  t7728 = t7705 + t7719 + t7725;
  t7763 = -1.*t8*t7740;
  t7766 = t7763 + t5077;
  t5542 = 0.4999*t47;
  t7661 = t7649*t47;
  t7662 = Power(t2915,2);
  t7680 = -0.15039999999999998*t7662;
  t7685 = t5542 + t7661 + t7680;
  t7759 = 3.5899*t5193*t7757;
  t7770 = 3.5899*t7766*t7749;
  t7774 = t7759 + t7770;
  t7786 = -1.*t7785*t5041;
  t7793 = -1.*t3384*t7792;
  t7794 = t7786 + t7793;
  t7796 = t7785*t7740;
  t7797 = t5041*t7792;
  t7798 = t7796 + t7797;
  t7795 = 3.5899*t7749*t7794;
  t7799 = 3.5899*t5193*t7798;
  t7800 = t7795 + t7799;
  t7815 = 3.5899*t7766*t7794;
  t7816 = 3.5899*t7757*t7798;
  t7817 = t7815 + t7816;
  t7804 = 3.5899*t7728*t7766;
  t7805 = 3.5899*t7685*t7757;
  t7806 = t7804 + t7805;
  t7703 = 3.5899*t7685*t5193;
  t7750 = 3.5899*t7728*t7749;
  t7751 = t7703 + t7750;
  t7823 = 3.5899*t7728*t7794;
  t7824 = 3.5899*t7685*t7798;
  t7825 = 0.0378 + t7823 + t7824;
  t7838 = -0.5399209599999999*t7685;
  t7839 = 0.0378 + t7838;
  t7820 = -0.5399209599999999*t7798;
  t7821 = 0.0378 + t7820;
  p_output1[0]=-1.*(3.5899*Power(t5193,2) + 3.5899*Power(t7749,2))*var2[0] - 1.*t7774*var2[1] - 1.*t7800*var2[2] - 1.*t7751*var2[3] + 0.5399209599999999*t5193*var2[4];
  p_output1[1]=-1.*t7774*var2[0] - 1.*(3.5899*Power(t7757,2) + 3.5899*Power(t7766,2))*var2[1] - 1.*t7817*var2[2] - 1.*t7806*var2[3] + 0.5399209599999999*t7757*var2[4];
  p_output1[2]=-1.*t7800*var2[0] - 1.*t7817*var2[1] - 1.*(0.0378 + 3.5899*Power(t7794,2) + 3.5899*Power(t7798,2))*var2[2] - 1.*t7825*var2[3] - 1.*t7821*var2[4];
  p_output1[3]=-1.*t7751*var2[0] - 1.*t7806*var2[1] - 1.*t7825*var2[2] - 1.*(0.0378 + 3.5899*Power(t7685,2) + 3.5899*Power(t7728,2))*var2[3] - 1.*t7839*var2[4];
  p_output1[4]=0.5399209599999999*t5193*var2[0] + 0.5399209599999999*t7757*var2[1] - 1.*t7821*var2[2] - 1.*t7839*var2[3] - 0.11900411238399997*var2[4];
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

#include "MmatDx3_amber3_feet.hh"

namespace SymFunction
{

void MmatDx3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
