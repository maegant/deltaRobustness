/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:42 GMT-08:00
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
  double t1688;
  double t860;
  double t1193;
  double t1846;
  double t451;
  double t1668;
  double t2251;
  double t2348;
  double t2438;
  double t2619;
  double t2636;
  double t2639;
  double t2915;
  double t3080;
  double t3367;
  double t3921;
  double t3968;
  double t4076;
  double t4206;
  double t4225;
  double t4691;
  double t4747;
  double t4877;
  double t4886;
  double t4892;
  double t4944;
  double t5509;
  double t5514;
  double t5520;
  double t5542;
  double t5553;
  double t5555;
  double t5571;
  double t5573;
  double t5583;
  double t5599;
  double t318;
  double t400;
  double t5155;
  double t5175;
  double t5204;
  double t3403;
  double t3641;
  double t4615;
  double t4637;
  double t4653;
  double t4687;
  double t5221;
  double t5226;
  double t3806;
  double t4444;
  double t4450;
  double t4539;
  double t4554;
  double t5105;
  double t5139;
  double t5274;
  double t5302;
  double t5219;
  double t5231;
  double t5249;
  double t5443;
  double t5455;
  double t5544;
  double t5640;
  double t5644;
  double t5672;
  double t5684;
  double t5690;
  double t5669;
  double t5697;
  double t5714;
  double t5861;
  double t5879;
  double t5920;
  double t5736;
  double t5746;
  double t5751;
  double t4571;
  double t4986;
  double t5007;
  double t6031;
  double t6058;
  double t6078;
  double t6173;
  double t6177;
  double t6014;
  double t6018;
  t1688 = Cos(var2[3]);
  t860 = Cos(var2[4]);
  t1193 = Sin(var2[3]);
  t1846 = Sin(var2[4]);
  t451 = Sin(var2[2]);
  t1668 = -1.*t860*t1193;
  t2251 = -1.*t1688*t1846;
  t2348 = t1668 + t2251;
  t2438 = t451*t2348;
  t2619 = Cos(var2[2]);
  t2636 = t1688*t860;
  t2639 = -1.*t1193*t1846;
  t2915 = t2636 + t2639;
  t3080 = t2619*t2915;
  t3367 = t2438 + t3080;
  t3921 = -1.*t860;
  t3968 = 1. + t3921;
  t4076 = -0.9063*t3968;
  t4206 = -1.0567*t860;
  t4225 = t4076 + t4206;
  t4691 = t860*t1193;
  t4747 = t1688*t1846;
  t4877 = t4691 + t4747;
  t4886 = t2619*t4877;
  t4892 = t451*t2915;
  t4944 = t4886 + t4892;
  t5509 = 0.4999*t1193;
  t5514 = t4225*t1193;
  t5520 = -0.15039999999999998*t1688*t1846;
  t5542 = t5509 + t5514 + t5520;
  t5553 = -1.*t1688;
  t5555 = 1. + t5553;
  t5571 = -0.4999*t5555;
  t5573 = t1688*t4225;
  t5583 = 0.15039999999999998*t1193*t1846;
  t5599 = t5571 + t5573 + t5583;
  t318 = -1.*var1[7];
  t400 = var3[4] + t318;
  t5155 = t2619*t2348;
  t5175 = -1.*t451*t2915;
  t5204 = t5155 + t5175;
  t3403 = -1.*var1[6];
  t3641 = var3[3] + t3403;
  t4615 = 0.4999*t1846;
  t4637 = t4225*t1846;
  t4653 = 0.15039999999999998*t860*t1846;
  t4687 = t4615 + t4637 + t4653;
  t5221 = -1.*t451*t4877;
  t5226 = t5221 + t3080;
  t3806 = 0.4999*t860;
  t4444 = t4225*t860;
  t4450 = Power(t1846,2);
  t4539 = -0.15039999999999998*t4450;
  t4554 = t3806 + t4444 + t4539;
  t5105 = -1.*var1[1];
  t5139 = var3[1] + t5105;
  t5274 = -1.*var1[0];
  t5302 = var3[0] + t5274;
  t5219 = 3.5899*t3367*t5204;
  t5231 = 3.5899*t5226*t4944;
  t5249 = t5219 + t5231;
  t5443 = -1.*var1[2];
  t5455 = var3[2] + t5443;
  t5544 = -1.*t5542*t2915;
  t5640 = -1.*t2348*t5599;
  t5644 = t5544 + t5640;
  t5672 = t5542*t4877;
  t5684 = t2915*t5599;
  t5690 = t5672 + t5684;
  t5669 = 3.5899*t4944*t5644;
  t5697 = 3.5899*t3367*t5690;
  t5714 = t5669 + t5697;
  t5861 = 3.5899*t5226*t5644;
  t5879 = 3.5899*t5204*t5690;
  t5920 = t5861 + t5879;
  t5736 = 3.5899*t4687*t5226;
  t5746 = 3.5899*t4554*t5204;
  t5751 = t5736 + t5746;
  t4571 = 3.5899*t4554*t3367;
  t4986 = 3.5899*t4687*t4944;
  t5007 = t4571 + t4986;
  t6031 = 3.5899*t4687*t5644;
  t6058 = 3.5899*t4554*t5690;
  t6078 = 0.0378 + t6031 + t6058;
  t6173 = -0.5399209599999999*t4554;
  t6177 = 0.0378 + t6173;
  t6014 = -0.5399209599999999*t5690;
  t6018 = 0.0378 + t6014;
  p_output1[0]=-0.5399209599999999*t3367*t400 + t3641*t5007 + t5139*t5249 + (3.5899*Power(t3367,2) + 3.5899*Power(t4944,2))*t5302 + t5455*t5714;
  p_output1[1]=-0.5399209599999999*t400*t5204 + t5139*(3.5899*Power(t5204,2) + 3.5899*Power(t5226,2)) + t5249*t5302 + t3641*t5751 + t5455*t5920;
  p_output1[2]=t5455*(0.0378 + 3.5899*Power(t5644,2) + 3.5899*Power(t5690,2)) + t5302*t5714 + t5139*t5920 + t400*t6018 + t3641*t6078;
  p_output1[3]=t3641*(0.0378 + 3.5899*Power(t4554,2) + 3.5899*Power(t4687,2)) + t5007*t5302 + t5139*t5751 + t5455*t6078 + t400*t6177;
  p_output1[4]=0.11900411238399997*t400 - 0.5399209599999999*t5139*t5204 - 0.5399209599999999*t3367*t5302 + t5455*t6018 + t3641*t6177;
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

#include "dxDiscreteMap3_LeftLateImpactRelabel.hh"

namespace LeftLateImpactRelabel
{

void dxDiscreteMap3_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
