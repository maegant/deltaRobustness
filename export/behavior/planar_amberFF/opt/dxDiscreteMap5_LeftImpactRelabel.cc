/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:24 GMT-08:00
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
  double t2169;
  double t3151;
  double t1857;
  double t3298;
  double t2799;
  double t3595;
  double t3646;
  double t4227;
  double t4271;
  double t4302;
  double t5140;
  double t5144;
  double t5162;
  double t5255;
  double t5268;
  double t301;
  double t1301;
  double t3984;
  double t4005;
  double t4117;
  double t4597;
  double t4883;
  double t4202;
  double t4349;
  double t4439;
  double t3650;
  double t3657;
  double t4943;
  double t4948;
  double t5073;
  double t5075;
  double t5279;
  double t5471;
  double t5478;
  double t5503;
  double t5504;
  double t5568;
  double t5578;
  double t5755;
  double t5781;
  double t5797;
  double t5493;
  double t5589;
  double t5590;
  double t5843;
  double t5860;
  t2169 = Cos(var2[6]);
  t3151 = Sin(var2[2]);
  t1857 = Cos(var2[2]);
  t3298 = Sin(var2[6]);
  t2799 = t1857*t2169;
  t3595 = -1.*t3151*t3298;
  t3646 = t2799 + t3595;
  t4227 = t2169*t3151;
  t4271 = t1857*t3298;
  t4302 = t4227 + t4271;
  t5140 = -1.*t2169;
  t5144 = 1. + t5140;
  t5162 = -0.4999*t5144;
  t5255 = -0.6493*t2169;
  t5268 = t5162 + t5255;
  t301 = -1.*var1[3];
  t1301 = var3[6] + t301;
  t3984 = -1.*t2169*t3151;
  t4005 = -1.*t1857*t3298;
  t4117 = t3984 + t4005;
  t4597 = -1.*var1[0];
  t4883 = var3[0] + t4597;
  t4202 = 3.4261*t4117*t3646;
  t4349 = 3.4261*t4302*t3646;
  t4439 = t4202 + t4349;
  t3650 = -1.*var1[1];
  t3657 = var3[1] + t3650;
  t4943 = Power(t3646,2);
  t4948 = 3.4261*t4943;
  t5073 = -1.*var1[2];
  t5075 = var3[2] + t5073;
  t5279 = t5268*t3298;
  t5471 = 0.14939999999999998*t2169*t3298;
  t5478 = t5279 + t5471;
  t5503 = t5268*t2169;
  t5504 = Power(t3298,2);
  t5568 = -0.14939999999999998*t5504;
  t5578 = t5503 + t5568;
  t5755 = 3.4261*t5478*t3646;
  t5781 = 3.4261*t4117*t5578;
  t5797 = t5755 + t5781;
  t5493 = 3.4261*t4302*t5478;
  t5589 = 3.4261*t3646*t5578;
  t5590 = t5493 + t5589;
  t5843 = -0.5118593399999999*t5578;
  t5860 = 0.0389 + t5843;
  p_output1[0]=-0.5118593399999999*t1301*t3646 + t3657*t4439 + t4883*(3.4261*Power(t4302,2) + t4948) + t5075*t5590;
  p_output1[1]=-0.5118593399999999*t1301*t4117 + t4439*t4883 + t3657*(3.4261*Power(t4117,2) + t4948) + t5075*t5797;
  p_output1[2]=t5075*(0.0389 + 3.4261*Power(t5478,2) + 3.4261*Power(t5578,2)) + t4883*t5590 + t3657*t5797 + t1301*t5860;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0.11537178539599996*t1301 - 0.5118593399999999*t3657*t4117 - 0.5118593399999999*t3646*t4883 + t5075*t5860;
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

#include "dxDiscreteMap5_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void dxDiscreteMap5_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
