/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:27 GMT-08:00
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
  double t792;
  double t587;
  double t663;
  double t799;
  double t2520;
  double t789;
  double t806;
  double t1096;
  double t582;
  double t2691;
  double t3122;
  double t3253;
  double t4291;
  double t3879;
  double t498;
  double t4591;
  double t4600;
  double t4635;
  double t2463;
  double t3948;
  double t4302;
  double t4349;
  double t4417;
  double t4773;
  double t4883;
  double t4948;
  double t4982;
  double t5047;
  double t5755;
  double t5797;
  double t5801;
  double t5830;
  double t5843;
  double t5855;
  double t5627;
  double t5681;
  double t5721;
  double t5749;
  double t5867;
  double t5893;
  double t5922;
  double t5930;
  double t5932;
  double t5943;
  double t6068;
  double t6077;
  double t6081;
  double t6110;
  double t6138;
  double t6144;
  double t5606;
  double t5917;
  double t5948;
  double t6008;
  double t5600;
  t792 = Cos(var2[7]);
  t587 = Cos(var2[8]);
  t663 = Sin(var2[7]);
  t799 = Sin(var2[8]);
  t2520 = Cos(var2[6]);
  t789 = -1.*t587*t663;
  t806 = -1.*t792*t799;
  t1096 = t789 + t806;
  t582 = Sin(var2[6]);
  t2691 = t792*t587;
  t3122 = -1.*t663*t799;
  t3253 = t2691 + t3122;
  t4291 = Sin(var2[2]);
  t3879 = t2520*t3253;
  t498 = Cos(var2[2]);
  t4591 = t587*t663;
  t4600 = t792*t799;
  t4635 = t4591 + t4600;
  t2463 = t582*t1096;
  t3948 = t2463 + t3879;
  t4302 = t2520*t1096;
  t4349 = -1.*t582*t3253;
  t4417 = t4302 + t4349;
  t4773 = -1.*t582*t4635;
  t4883 = t4773 + t3879;
  t4948 = t2520*t4635;
  t4982 = t582*t3253;
  t5047 = t4948 + t4982;
  t5755 = -1.*t587;
  t5797 = 1. + t5755;
  t5801 = -1.3127*t5797;
  t5830 = -1.3127*t587;
  t5843 = -0.06*t799;
  t5855 = t5801 + t5830 + t5843;
  t5627 = -1.*t792;
  t5681 = 1. + t5627;
  t5721 = -0.9063*t5681;
  t5749 = -0.06*t587*t663;
  t5867 = t792*t5855;
  t5893 = t5721 + t5749 + t5867;
  t5922 = 0.06*t792*t587;
  t5930 = 0.9063*t663;
  t5932 = t663*t5855;
  t5943 = t5922 + t5930 + t5932;
  t6068 = -1.*t2520;
  t6077 = 1. + t6068;
  t6081 = -0.4999*t6077;
  t6110 = t2520*t5893;
  t6138 = -1.*t582*t5943;
  t6144 = t6081 + t6110 + t6138;
  t5606 = 0.4999*t582;
  t5917 = t582*t5893;
  t5948 = t2520*t5943;
  t6008 = t5606 + t5917 + t5948;
  t5600 = -1.*var4[2];
  p_output1[0]=-1.*(t4291*t4417 + t3948*t498)*var4[0] - 1.*(t4291*t4883 + t498*t5047)*var4[1];
  p_output1[1]=-1.*(-1.*t3948*t4291 + t4417*t498)*var4[0] - 1.*(t4883*t498 - 1.*t4291*t5047)*var4[1];
  p_output1[2]=t5600 - 1.*(t5047*t6008 + t4883*t6144)*var4[0] - 1.*(-1.*t3948*t6008 - 1.*t4417*t6144)*var4[1];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t5600 - 1.*(0.4999*t3253 + t3253*t5893 + t4635*t5943)*var4[0] - 1.*(0.4999*t4635 - 1.*t1096*t5893 - 1.*t3253*t5943)*var4[1];
  p_output1[7]=t5600 - 1.*(0.9063*t587 + t5855*t587 + 0.06*t587*t799)*var4[0] - 1.*(-0.06*Power(t587,2) + 0.9063*t799 + t5855*t799)*var4[1];
  p_output1[8]=t5600 + 0.06*var4[1];
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMap9_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void dxDiscreteMap9_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
