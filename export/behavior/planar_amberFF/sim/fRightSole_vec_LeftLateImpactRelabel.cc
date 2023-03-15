/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:08 GMT-08:00
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
  double t2694;
  double t286;
  double t964;
  double t3306;
  double t3884;
  double t2410;
  double t3456;
  double t3807;
  double t21;
  double t4102;
  double t4576;
  double t4660;
  double t4817;
  double t4667;
  double t9;
  double t5920;
  double t6228;
  double t6621;
  double t3824;
  double t4768;
  double t4827;
  double t4849;
  double t4899;
  double t7601;
  double t7608;
  double t7649;
  double t7650;
  double t7651;
  double t7747;
  double t7748;
  double t7749;
  double t7750;
  double t7751;
  double t7752;
  double t7743;
  double t7744;
  double t7745;
  double t7746;
  double t7753;
  double t7755;
  double t7757;
  double t7759;
  double t7760;
  double t7761;
  double t7767;
  double t7769;
  double t7770;
  double t7771;
  double t7772;
  double t7773;
  double t7742;
  double t7756;
  double t7763;
  double t7765;
  t2694 = Cos(var1[7]);
  t286 = Cos(var1[8]);
  t964 = Sin(var1[7]);
  t3306 = Sin(var1[8]);
  t3884 = Cos(var1[6]);
  t2410 = -1.*t286*t964;
  t3456 = -1.*t2694*t3306;
  t3807 = t2410 + t3456;
  t21 = Sin(var1[6]);
  t4102 = t2694*t286;
  t4576 = -1.*t964*t3306;
  t4660 = t4102 + t4576;
  t4817 = Sin(var1[2]);
  t4667 = t3884*t4660;
  t9 = Cos(var1[2]);
  t5920 = t286*t964;
  t6228 = t2694*t3306;
  t6621 = t5920 + t6228;
  t3824 = t21*t3807;
  t4768 = t3824 + t4667;
  t4827 = t3884*t3807;
  t4849 = -1.*t21*t4660;
  t4899 = t4827 + t4849;
  t7601 = -1.*t21*t6621;
  t7608 = t7601 + t4667;
  t7649 = t3884*t6621;
  t7650 = t21*t4660;
  t7651 = t7649 + t7650;
  t7747 = -1.*t286;
  t7748 = 1. + t7747;
  t7749 = -1.3127*t7748;
  t7750 = -1.3127*t286;
  t7751 = -0.06*t3306;
  t7752 = t7749 + t7750 + t7751;
  t7743 = -1.*t2694;
  t7744 = 1. + t7743;
  t7745 = -0.9063*t7744;
  t7746 = -0.06*t286*t964;
  t7753 = t2694*t7752;
  t7755 = t7745 + t7746 + t7753;
  t7757 = 0.06*t2694*t286;
  t7759 = 0.9063*t964;
  t7760 = t964*t7752;
  t7761 = t7757 + t7759 + t7760;
  t7767 = -1.*t3884;
  t7769 = 1. + t7767;
  t7770 = -0.4999*t7769;
  t7771 = t3884*t7755;
  t7772 = -1.*t21*t7761;
  t7773 = t7770 + t7771 + t7772;
  t7742 = 0.4999*t21;
  t7756 = t21*t7755;
  t7763 = t3884*t7761;
  t7765 = t7742 + t7756 + t7763;
  p_output1[0]=(t4817*t4899 + t4768*t9)*var2[0] + (t4817*t7608 + t7651*t9)*var2[1];
  p_output1[1]=(-1.*t4768*t4817 + t4899*t9)*var2[0] + (-1.*t4817*t7651 + t7608*t9)*var2[1];
  p_output1[2]=(t7651*t7765 + t7608*t7773)*var2[0] + (-1.*t4768*t7765 - 1.*t4899*t7773)*var2[1] + var2[2];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(0.4999*t4660 + t4660*t7755 + t6621*t7761)*var2[0] + (0.4999*t6621 - 1.*t3807*t7755 - 1.*t4660*t7761)*var2[1] + var2[2];
  p_output1[7]=(0.9063*t286 + 0.06*t286*t3306 + t286*t7752)*var2[0] + (-0.06*Power(t286,2) + 0.9063*t3306 + t3306*t7752)*var2[1] + var2[2];
  p_output1[8]=-0.06*var2[1] + var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "fRightSole_vec_LeftLateImpactRelabel.hh"

namespace SymFunction
{

void fRightSole_vec_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
