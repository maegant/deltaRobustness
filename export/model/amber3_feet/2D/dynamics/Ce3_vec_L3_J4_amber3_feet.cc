/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:16 GMT-08:00
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
  double t1315;
  double t741;
  double t2704;
  double t2645;
  double t1392;
  double t1453;
  double t1582;
  double t1757;
  double t1817;
  double t3658;
  double t2293;
  double t3722;
  double t3772;
  double t3814;
  double t4076;
  double t4083;
  double t4084;
  double t4094;
  double t4110;
  double t4113;
  double t4129;
  double t4220;
  double t1141;
  double t1870;
  double t2002;
  double t2266;
  double t2689;
  double t3140;
  double t3319;
  double t4510;
  double t4450;
  double t4548;
  double t4608;
  double t3998;
  double t4937;
  double t4939;
  double t4952;
  double t5471;
  double t5732;
  double t5070;
  double t5079;
  double t5127;
  double t5128;
  double t5305;
  double t5310;
  double t5311;
  double t5319;
  double t5880;
  double t5918;
  double t5347;
  double t5358;
  double t5361;
  double t5784;
  double t6534;
  double t6545;
  double t6665;
  double t6693;
  double t6826;
  double t6886;
  double t6890;
  double t3656;
  double t4002;
  double t4860;
  double t4956;
  double t4979;
  double t4980;
  double t5032;
  double t5039;
  double t5040;
  double t5042;
  double t5053;
  double t5059;
  double t5300;
  double t5816;
  double t6120;
  double t8422;
  double t8425;
  double t8436;
  double t8441;
  double t6252;
  t1315 = Cos(var1[4]);
  t741 = Sin(var1[4]);
  t2704 = Cos(var1[3]);
  t2645 = Sin(var1[3]);
  t1392 = -1.*t1315;
  t1453 = 1. + t1392;
  t1582 = -0.9063*t1453;
  t1757 = -1.0567*t1315;
  t1817 = t1582 + t1757;
  t3658 = Cos(var1[2]);
  t2293 = Sin(var1[2]);
  t3722 = t2704*t1315;
  t3772 = -1.*t2645*t741;
  t3814 = t3722 + t3772;
  t4076 = 0.4999*t1315;
  t4083 = t1817*t1315;
  t4084 = Power(t741,2);
  t4094 = -0.15039999999999998*t4084;
  t4110 = t4076 + t4083 + t4094;
  t4113 = -1.*t1315*t2645;
  t4129 = -1.*t2704*t741;
  t4220 = t4113 + t4129;
  t1141 = 0.4999*t741;
  t1870 = t1817*t741;
  t2002 = 0.15039999999999998*t1315*t741;
  t2266 = t1141 + t1870 + t2002;
  t2689 = t1315*t2645;
  t3140 = t2704*t741;
  t3319 = t2689 + t3140;
  t4510 = -1.*t2293*t3814;
  t4450 = t3658*t4220;
  t4548 = t4450 + t4510;
  t4608 = -1.*t2293*t4220;
  t3998 = t3658*t3814;
  t4937 = -1.*t2704*t1315;
  t4939 = t2645*t741;
  t4952 = t4937 + t4939;
  t5471 = t2704*t1817;
  t5732 = 0.15039999999999998*t2645*t741;
  t5070 = 0.4999*t2645;
  t5079 = t1817*t2645;
  t5127 = -0.15039999999999998*t2704*t741;
  t5128 = t5070 + t5079 + t5127;
  t5305 = -0.4999*t2645;
  t5310 = -1.*t1817*t2645;
  t5311 = 0.15039999999999998*t2704*t741;
  t5319 = t5305 + t5310 + t5311;
  t5880 = 0.4999*t2704;
  t5918 = t5880 + t5471 + t5732;
  t5347 = -1.*t2704;
  t5358 = 1. + t5347;
  t5361 = -0.4999*t5358;
  t5784 = t5361 + t5471 + t5732;
  t6534 = -0.4999*t741;
  t6545 = -1.*t1817*t741;
  t6665 = -0.15039999999999998*t1315*t741;
  t6693 = t6534 + t6545 + t6665;
  t6826 = Power(t1315,2);
  t6886 = 0.15039999999999998*t6826;
  t6890 = t4076 + t4083 + t6886;
  t3656 = -1.*t2293*t3319;
  t4002 = t3656 + t3998;
  t4860 = 3.5899*t2266*t4548;
  t4956 = t3658*t4952;
  t4979 = t4608 + t4956;
  t4980 = 3.5899*t4110*t4979;
  t5032 = t2293*t4220;
  t5039 = t5032 + t3998;
  t5040 = 3.5899*t2266*t5039;
  t5042 = t2293*t4952;
  t5053 = t4450 + t5042;
  t5059 = 3.5899*t4110*t5053;
  t5300 = t5128*t3814;
  t5816 = t4220*t5784;
  t6120 = -1.*t4220*t5128;
  t8422 = 0.15039999999999998*t1315*t2645;
  t8425 = t8422 + t5311;
  t8436 = -0.15039999999999998*t2704*t1315;
  t8441 = t8436 + t5732;
  t6252 = -1.*t5784*t4952;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(3.5899*t2266*t4002 + 3.5899*t4110*t4548)*var2[0] + 0.5*(3.5899*t2266*(-1.*t3319*t3658 + t4510) + 3.5899*t4110*(-1.*t3658*t3814 + t4608))*var2[1])*var2[3];
  p_output1[3]=(0.5*(t5040 + t5059)*var2[0] + 0.5*(t4860 + t4980)*var2[1] + 0.5*(3.5899*t4110*(t5300 + t3814*t5319 + t5816 + t3319*t5918) + 3.5899*t2266*(-1.*t4220*t5319 - 1.*t3814*t5918 + t6120 + t6252))*var2[2])*var2[3];
  p_output1[4]=var2[3]*(0.5*(t5040 + t5059 + 3.5899*t5039*t6693 + 3.5899*(t3319*t3658 + t2293*t3814)*t6890)*var2[0] + 0.5*(t4860 + t4980 + 3.5899*t4548*t6693 + 3.5899*t4002*t6890)*var2[1] + 0.5*(3.5899*(t3319*t5128 + t3814*t5784)*t6693 + 3.5899*(-1.*t3814*t5128 - 1.*t4220*t5784)*t6890 + 3.5899*t4110*(t5300 + t5816 + t3814*t8425 + t3319*t8441) + 3.5899*t2266*(t6120 + t6252 - 1.*t4220*t8425 - 1.*t3814*t8441))*var2[2] + 0.5*(7.1798*t4110*t6693 + 7.1798*t2266*t6890)*var2[3] - 0.26996047999999995*t6693*var2[4]);
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

#include "Ce3_vec_L3_J4_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L3_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
