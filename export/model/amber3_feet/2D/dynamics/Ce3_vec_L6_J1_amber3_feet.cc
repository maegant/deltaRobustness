/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:34 GMT-08:00
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
  double t2171;
  double t1787;
  double t2124;
  double t2199;
  double t2977;
  double t1581;
  double t3004;
  double t3089;
  double t3101;
  double t3425;
  double t3441;
  double t3484;
  double t3636;
  double t3637;
  double t2128;
  double t2296;
  double t2599;
  double t2771;
  double t3103;
  double t3214;
  double t3888;
  double t3709;
  double t3783;
  double t3788;
  double t3804;
  double t3906;
  double t4233;
  double t4251;
  double t4297;
  double t4298;
  double t4331;
  double t4888;
  double t4907;
  double t4923;
  double t4939;
  double t4956;
  double t4975;
  double t4977;
  double t4981;
  double t4986;
  double t4998;
  double t3424;
  double t3676;
  double t3700;
  double t3708;
  double t3992;
  double t4012;
  double t4045;
  double t4054;
  double t4079;
  double t5336;
  double t5341;
  double t5357;
  double t5378;
  double t5397;
  double t4447;
  double t4955;
  double t5001;
  double t5032;
  double t5096;
  double t5110;
  double t5127;
  double t6052;
  double t6058;
  double t6081;
  double t6100;
  double t6169;
  double t6180;
  double t5423;
  double t5502;
  double t5538;
  double t5635;
  double t5653;
  double t5723;
  double t5909;
  double t5910;
  double t5925;
  double t5949;
  double t5950;
  double t5954;
  double t5996;
  double t5998;
  double t6015;
  double t6017;
  double t6021;
  double t6154;
  double t6221;
  double t6227;
  double t6360;
  double t6362;
  double t6375;
  double t6378;
  double t6257;
  t2171 = Cos(var1[6]);
  t1787 = Cos(var1[7]);
  t2124 = Sin(var1[6]);
  t2199 = Sin(var1[7]);
  t2977 = Sin(var1[2]);
  t1581 = Cos(var1[2]);
  t3004 = t2171*t1787;
  t3089 = -1.*t2124*t2199;
  t3101 = t3004 + t3089;
  t3425 = -1.*t1787;
  t3441 = 1. + t3425;
  t3484 = -0.9063*t3441;
  t3636 = -1.0567*t1787;
  t3637 = t3484 + t3636;
  t2128 = -1.*t1787*t2124;
  t2296 = -1.*t2171*t2199;
  t2599 = t2128 + t2296;
  t2771 = t1581*t2599;
  t3103 = -1.*t2977*t3101;
  t3214 = t2771 + t3103;
  t3888 = t1581*t3101;
  t3709 = t1787*t2124;
  t3783 = t2171*t2199;
  t3788 = t3709 + t3783;
  t3804 = -1.*t2977*t3788;
  t3906 = t3804 + t3888;
  t4233 = t2977*t2599;
  t4251 = t4233 + t3888;
  t4297 = t1581*t3788;
  t4298 = t2977*t3101;
  t4331 = t4297 + t4298;
  t4888 = 0.4999*t2124;
  t4907 = t3637*t2124;
  t4923 = -0.15039999999999998*t2171*t2199;
  t4939 = t4888 + t4907 + t4923;
  t4956 = -1.*t2171;
  t4975 = 1. + t4956;
  t4977 = -0.4999*t4975;
  t4981 = t2171*t3637;
  t4986 = 0.15039999999999998*t2124*t2199;
  t4998 = t4977 + t4981 + t4986;
  t3424 = 0.4999*t2199;
  t3676 = t3637*t2199;
  t3700 = 0.15039999999999998*t1787*t2199;
  t3708 = t3424 + t3676 + t3700;
  t3992 = 0.4999*t1787;
  t4012 = t3637*t1787;
  t4045 = Power(t2199,2);
  t4054 = -0.15039999999999998*t4045;
  t4079 = t3992 + t4012 + t4054;
  t5336 = -1.*t2171*t1787;
  t5341 = t2124*t2199;
  t5357 = t5336 + t5341;
  t5378 = t2977*t5357;
  t5397 = t2771 + t5378;
  t4447 = -1.*t2977*t2599;
  t4955 = -1.*t4939*t3101;
  t5001 = -1.*t2599*t4998;
  t5032 = t4955 + t5001;
  t5096 = t4939*t3788;
  t5110 = t3101*t4998;
  t5127 = t5096 + t5110;
  t6052 = -0.4999*t2124;
  t6058 = -1.*t3637*t2124;
  t6081 = 0.15039999999999998*t2171*t2199;
  t6100 = t6052 + t6058 + t6081;
  t6169 = 0.4999*t2171;
  t6180 = t6169 + t4981 + t4986;
  t5423 = -0.26996047999999995*var2[7]*t5397;
  t5502 = 3.5899*t3708*t4251;
  t5538 = 3.5899*t4079*t5397;
  t5635 = 7.1798*t4251*t4331;
  t5653 = 7.1798*t4251*t5397;
  t5723 = t5635 + t5653;
  t5909 = 0.5*var2[0]*t5723;
  t5910 = 3.5899*t4251*t3906;
  t5925 = 3.5899*t3214*t4331;
  t5949 = t1581*t5357;
  t5950 = t4447 + t5949;
  t5954 = 3.5899*t4251*t5950;
  t5996 = 3.5899*t3214*t5397;
  t5998 = t5910 + t5925 + t5954 + t5996;
  t6015 = 0.5*var2[1]*t5998;
  t6017 = 3.5899*t4251*t5032;
  t6021 = t4939*t3101;
  t6154 = t2599*t4998;
  t6221 = 3.5899*t5127*t5397;
  t6227 = -1.*t2599*t4939;
  t6360 = 0.15039999999999998*t1787*t2124;
  t6362 = t6360 + t6081;
  t6375 = -0.15039999999999998*t2171*t1787;
  t6378 = t6375 + t4986;
  t6257 = -1.*t4998*t5357;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(0.5*(7.1798*t3214*t4251 + 7.1798*t3906*t4331)*var2[0] + 0.5*(3.5899*Power(t3214,2) + 3.5899*Power(t3906,2) + 3.5899*(t3103 - 1.*t1581*t3788)*t4331 + 3.5899*t4251*(-1.*t1581*t3101 + t4447))*var2[1] + 0.5*(3.5899*t3906*t5032 + 3.5899*t3214*t5127)*var2[2] + 0.5*(3.5899*t3708*t3906 + 3.5899*t3214*t4079)*var2[6] - 0.26996047999999995*t3214*var2[7]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[0]*(t5423 + t5909 + t6015 + 0.5*(t6017 + 3.5899*t4251*(t6021 + t3101*t6100 + t6154 + t3788*t6180) + t6221 + 3.5899*t4331*(-1.*t2599*t6100 - 1.*t3101*t6180 + t6227 + t6257))*var2[2] + 0.5*(t5502 + t5538)*var2[6]);
  p_output1[7]=var2[0]*(t5423 + t5909 + t6015 + 0.5*(t6017 + t6221 + 3.5899*t4331*(t6227 + t6257 - 1.*t2599*t6362 - 1.*t3101*t6378) + 3.5899*t4251*(t6021 + t6154 + t3101*t6362 + t3788*t6378))*var2[2] + 0.5*(3.5899*(-0.4999*t2199 - 0.15039999999999998*t1787*t2199 - 1.*t2199*t3637)*t4251 + 3.5899*(0.15039999999999998*Power(t1787,2) + t3992 + t4012)*t4331 + t5502 + t5538)*var2[6]);
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

#include "Ce3_vec_L6_J1_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L6_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
