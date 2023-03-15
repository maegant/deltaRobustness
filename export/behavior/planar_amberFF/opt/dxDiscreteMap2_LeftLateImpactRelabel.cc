/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:41 GMT-08:00
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
  double t826;
  double t1124;
  double t797;
  double t1336;
  double t860;
  double t1619;
  double t1668;
  double t2438;
  double t2619;
  double t2636;
  double t4166;
  double t4192;
  double t4206;
  double t4225;
  double t4444;
  double t176;
  double t451;
  double t2041;
  double t2201;
  double t2251;
  double t3175;
  double t3367;
  double t2348;
  double t2639;
  double t2915;
  double t1733;
  double t1846;
  double t3641;
  double t3806;
  double t4055;
  double t4076;
  double t4450;
  double t4539;
  double t4554;
  double t4615;
  double t4637;
  double t4653;
  double t4687;
  double t5155;
  double t5175;
  double t5204;
  double t4571;
  double t4691;
  double t4747;
  double t5226;
  double t5231;
  t826 = Cos(var2[3]);
  t1124 = Sin(var2[2]);
  t797 = Cos(var2[2]);
  t1336 = Sin(var2[3]);
  t860 = t797*t826;
  t1619 = -1.*t1124*t1336;
  t1668 = t860 + t1619;
  t2438 = t826*t1124;
  t2619 = t797*t1336;
  t2636 = t2438 + t2619;
  t4166 = -1.*t826;
  t4192 = 1. + t4166;
  t4206 = -0.4999*t4192;
  t4225 = -0.6493*t826;
  t4444 = t4206 + t4225;
  t176 = -1.*var1[6];
  t451 = var3[3] + t176;
  t2041 = -1.*t826*t1124;
  t2201 = -1.*t797*t1336;
  t2251 = t2041 + t2201;
  t3175 = -1.*var1[0];
  t3367 = var3[0] + t3175;
  t2348 = 3.4261*t2251*t1668;
  t2639 = 3.4261*t2636*t1668;
  t2915 = t2348 + t2639;
  t1733 = -1.*var1[1];
  t1846 = var3[1] + t1733;
  t3641 = Power(t1668,2);
  t3806 = 3.4261*t3641;
  t4055 = -1.*var1[2];
  t4076 = var3[2] + t4055;
  t4450 = t4444*t1336;
  t4539 = 0.14939999999999998*t826*t1336;
  t4554 = t4450 + t4539;
  t4615 = t4444*t826;
  t4637 = Power(t1336,2);
  t4653 = -0.14939999999999998*t4637;
  t4687 = t4615 + t4653;
  t5155 = 3.4261*t4554*t1668;
  t5175 = 3.4261*t2251*t4687;
  t5204 = t5155 + t5175;
  t4571 = 3.4261*t2636*t4554;
  t4691 = 3.4261*t1668*t4687;
  t4747 = t4571 + t4691;
  t5226 = -0.5118593399999999*t4687;
  t5231 = 0.0389 + t5226;
  p_output1[0]=t1846*t2915 + t3367*(3.4261*Power(t2636,2) + t3806) - 0.5118593399999999*t1668*t451 + t4076*t4747;
  p_output1[1]=t2915*t3367 + t1846*(3.4261*Power(t2251,2) + t3806) - 0.5118593399999999*t2251*t451 + t4076*t5204;
  p_output1[2]=t4076*(0.0389 + 3.4261*Power(t4554,2) + 3.4261*Power(t4687,2)) + t3367*t4747 + t1846*t5204 + t451*t5231;
  p_output1[3]=-0.5118593399999999*t1846*t2251 - 0.5118593399999999*t1668*t3367 + 0.11537178539599996*t451 + t4076*t5231;
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

#include "dxDiscreteMap2_LeftLateImpactRelabel.hh"

namespace LeftLateImpactRelabel
{

void dxDiscreteMap2_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
