/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:14 GMT-08:00
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
  double t557;
  double t257;
  double t280;
  double t558;
  double t169;
  double t517;
  double t609;
  double t706;
  double t754;
  double t1033;
  double t1043;
  double t1050;
  double t1100;
  double t1464;
  double t1652;
  double t1859;
  double t1893;
  double t2234;
  double t2266;
  double t2433;
  double t3917;
  double t3656;
  double t3658;
  double t3661;
  double t3889;
  double t3986;
  double t4450;
  double t4315;
  double t4510;
  double t4110;
  double t4129;
  double t4956;
  double t4979;
  double t5001;
  double t5004;
  double t5028;
  double t5058;
  double t5070;
  double t5127;
  double t5128;
  double t5155;
  double t3560;
  double t3567;
  double t3585;
  double t3643;
  double t1858;
  double t2689;
  double t3319;
  double t3379;
  double t3398;
  double t5473;
  double t5602;
  double t5666;
  double t5784;
  double t5816;
  double t4672;
  double t4687;
  double t4829;
  double t4851;
  double t4860;
  double t5007;
  double t5185;
  double t5300;
  double t5311;
  double t5347;
  double t5358;
  double t6437;
  double t6511;
  double t6534;
  double t6600;
  double t6826;
  double t6867;
  double t5880;
  double t5905;
  double t5906;
  double t5978;
  double t5998;
  double t6043;
  double t6051;
  double t6120;
  double t6218;
  double t6227;
  double t6252;
  double t6257;
  double t6352;
  double t6373;
  double t6390;
  double t6428;
  double t6435;
  double t6693;
  double t7140;
  double t7149;
  double t8422;
  double t8423;
  double t8428;
  double t8431;
  double t7499;
  t557 = Cos(var1[3]);
  t257 = Cos(var1[4]);
  t280 = Sin(var1[3]);
  t558 = Sin(var1[4]);
  t169 = Sin(var1[2]);
  t517 = -1.*t257*t280;
  t609 = -1.*t557*t558;
  t706 = t517 + t609;
  t754 = -1.*t169*t706;
  t1033 = Cos(var1[2]);
  t1043 = t557*t257;
  t1050 = -1.*t280*t558;
  t1100 = t1043 + t1050;
  t1464 = -1.*t1033*t1100;
  t1652 = t754 + t1464;
  t1859 = -1.*t257;
  t1893 = 1. + t1859;
  t2234 = -0.9063*t1893;
  t2266 = -1.0567*t257;
  t2433 = t2234 + t2266;
  t3917 = -1.*t169*t1100;
  t3656 = t257*t280;
  t3658 = t557*t558;
  t3661 = t3656 + t3658;
  t3889 = -1.*t1033*t3661;
  t3986 = t3889 + t3917;
  t4450 = t1033*t1100;
  t4315 = -1.*t169*t3661;
  t4510 = t4315 + t4450;
  t4110 = t1033*t706;
  t4129 = t4110 + t3917;
  t4956 = 0.4999*t280;
  t4979 = t2433*t280;
  t5001 = -0.15039999999999998*t557*t558;
  t5004 = t4956 + t4979 + t5001;
  t5028 = -1.*t557;
  t5058 = 1. + t5028;
  t5070 = -0.4999*t5058;
  t5127 = t557*t2433;
  t5128 = 0.15039999999999998*t280*t558;
  t5155 = t5070 + t5127 + t5128;
  t3560 = 0.4999*t558;
  t3567 = t2433*t558;
  t3585 = 0.15039999999999998*t257*t558;
  t3643 = t3560 + t3567 + t3585;
  t1858 = 0.4999*t257;
  t2689 = t2433*t257;
  t3319 = Power(t558,2);
  t3379 = -0.15039999999999998*t3319;
  t3398 = t1858 + t2689 + t3379;
  t5473 = -1.*t557*t257;
  t5602 = t280*t558;
  t5666 = t5473 + t5602;
  t5784 = t1033*t5666;
  t5816 = t754 + t5784;
  t4672 = t169*t706;
  t4687 = t4672 + t4450;
  t4829 = t1033*t3661;
  t4851 = t169*t1100;
  t4860 = t4829 + t4851;
  t5007 = -1.*t5004*t1100;
  t5185 = -1.*t706*t5155;
  t5300 = t5007 + t5185;
  t5311 = t5004*t3661;
  t5347 = t1100*t5155;
  t5358 = t5311 + t5347;
  t6437 = -0.4999*t280;
  t6511 = -1.*t2433*t280;
  t6534 = 0.15039999999999998*t557*t558;
  t6600 = t6437 + t6511 + t6534;
  t6826 = 0.4999*t557;
  t6867 = t6826 + t5127 + t5128;
  t5880 = -0.26996047999999995*var2[4]*t5816;
  t5905 = 3.5899*t3643*t4129;
  t5906 = 3.5899*t3398*t5816;
  t5978 = 7.1798*t4510*t4129;
  t5998 = 7.1798*t4129*t5816;
  t6043 = t5978 + t5998;
  t6051 = 0.5*var2[1]*t6043;
  t6120 = 3.5899*t4687*t4510;
  t6218 = 3.5899*t4129*t4860;
  t6227 = 3.5899*t4687*t5816;
  t6252 = t169*t5666;
  t6257 = t4110 + t6252;
  t6352 = 3.5899*t4129*t6257;
  t6373 = t6120 + t6218 + t6227 + t6352;
  t6390 = 0.5*var2[0]*t6373;
  t6428 = 3.5899*t4129*t5300;
  t6435 = t5004*t1100;
  t6693 = t706*t5155;
  t7140 = 3.5899*t5358*t5816;
  t7149 = -1.*t706*t5004;
  t8422 = 0.15039999999999998*t257*t280;
  t8423 = t8422 + t6534;
  t8428 = -0.15039999999999998*t557*t257;
  t8431 = t8428 + t5128;
  t7499 = -1.*t5155*t5666;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(0.5*(3.5899*Power(t4129,2) + 3.5899*Power(t4510,2) + 3.5899*t1652*t4687 + 3.5899*t3986*t4860)*var2[0] + 0.5*(7.1798*t1652*t4129 + 7.1798*t3986*t4510)*var2[1] + 0.5*(3.5899*t3986*t5300 + 3.5899*t1652*t5358)*var2[2] + 0.5*(3.5899*t1652*t3398 + 3.5899*t3643*t3986)*var2[3] - 0.26996047999999995*t1652*var2[4]);
  p_output1[3]=var2[1]*(t5880 + t6051 + t6390 + 0.5*(t6428 + 3.5899*t4129*(t6435 + t1100*t6600 + t6693 + t3661*t6867) + t7140 + 3.5899*t4510*(-1.*t1100*t6867 - 1.*t6600*t706 + t7149 + t7499))*var2[2] + 0.5*(t5905 + t5906)*var2[3]);
  p_output1[4]=var2[1]*(t5880 + t6051 + t6390 + 0.5*(t6428 + t7140 + 3.5899*t4510*(t7149 + t7499 - 1.*t706*t8423 - 1.*t1100*t8431) + 3.5899*t4129*(t6435 + t6693 + t1100*t8423 + t3661*t8431))*var2[2] + 0.5*(3.5899*(t1858 + 0.15039999999999998*Power(t257,2) + t2689)*t4510 + 3.5899*t4129*(-0.4999*t558 - 1.*t2433*t558 - 0.15039999999999998*t257*t558) + t5905 + t5906)*var2[3]);
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

#include "Ce3_vec_L3_J2_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L3_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
