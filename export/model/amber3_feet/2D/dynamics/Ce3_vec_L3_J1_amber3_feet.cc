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
  double t2503;
  double t2009;
  double t2215;
  double t2586;
  double t2930;
  double t861;
  double t3319;
  double t3331;
  double t3352;
  double t3526;
  double t3558;
  double t3560;
  double t3567;
  double t3571;
  double t2228;
  double t2614;
  double t2646;
  double t2689;
  double t3355;
  double t3379;
  double t3889;
  double t3658;
  double t3661;
  double t3705;
  double t3718;
  double t3917;
  double t4510;
  double t4548;
  double t4646;
  double t4672;
  double t4687;
  double t5028;
  double t5058;
  double t5070;
  double t5094;
  double t5104;
  double t5121;
  double t5127;
  double t5128;
  double t5155;
  double t5168;
  double t3522;
  double t3585;
  double t3643;
  double t3656;
  double t3998;
  double t4083;
  double t4084;
  double t4110;
  double t4129;
  double t5472;
  double t5473;
  double t5523;
  double t5602;
  double t5666;
  double t4769;
  double t5103;
  double t5193;
  double t5300;
  double t5311;
  double t5347;
  double t5358;
  double t6257;
  double t6350;
  double t6352;
  double t6389;
  double t6437;
  double t6466;
  double t5784;
  double t5798;
  double t5809;
  double t5906;
  double t5918;
  double t5922;
  double t5929;
  double t5969;
  double t5978;
  double t5998;
  double t6043;
  double t6051;
  double t6120;
  double t6128;
  double t6224;
  double t6227;
  double t6252;
  double t6435;
  double t6665;
  double t6681;
  double t8365;
  double t8367;
  double t8386;
  double t8389;
  double t6923;
  t2503 = Cos(var1[3]);
  t2009 = Cos(var1[4]);
  t2215 = Sin(var1[3]);
  t2586 = Sin(var1[4]);
  t2930 = Sin(var1[2]);
  t861 = Cos(var1[2]);
  t3319 = t2503*t2009;
  t3331 = -1.*t2215*t2586;
  t3352 = t3319 + t3331;
  t3526 = -1.*t2009;
  t3558 = 1. + t3526;
  t3560 = -0.9063*t3558;
  t3567 = -1.0567*t2009;
  t3571 = t3560 + t3567;
  t2228 = -1.*t2009*t2215;
  t2614 = -1.*t2503*t2586;
  t2646 = t2228 + t2614;
  t2689 = t861*t2646;
  t3355 = -1.*t2930*t3352;
  t3379 = t2689 + t3355;
  t3889 = t861*t3352;
  t3658 = t2009*t2215;
  t3661 = t2503*t2586;
  t3705 = t3658 + t3661;
  t3718 = -1.*t2930*t3705;
  t3917 = t3718 + t3889;
  t4510 = t2930*t2646;
  t4548 = t4510 + t3889;
  t4646 = t861*t3705;
  t4672 = t2930*t3352;
  t4687 = t4646 + t4672;
  t5028 = 0.4999*t2215;
  t5058 = t3571*t2215;
  t5070 = -0.15039999999999998*t2503*t2586;
  t5094 = t5028 + t5058 + t5070;
  t5104 = -1.*t2503;
  t5121 = 1. + t5104;
  t5127 = -0.4999*t5121;
  t5128 = t2503*t3571;
  t5155 = 0.15039999999999998*t2215*t2586;
  t5168 = t5127 + t5128 + t5155;
  t3522 = 0.4999*t2586;
  t3585 = t3571*t2586;
  t3643 = 0.15039999999999998*t2009*t2586;
  t3656 = t3522 + t3585 + t3643;
  t3998 = 0.4999*t2009;
  t4083 = t3571*t2009;
  t4084 = Power(t2586,2);
  t4110 = -0.15039999999999998*t4084;
  t4129 = t3998 + t4083 + t4110;
  t5472 = -1.*t2503*t2009;
  t5473 = t2215*t2586;
  t5523 = t5472 + t5473;
  t5602 = t2930*t5523;
  t5666 = t2689 + t5602;
  t4769 = -1.*t2930*t2646;
  t5103 = -1.*t5094*t3352;
  t5193 = -1.*t2646*t5168;
  t5300 = t5103 + t5193;
  t5311 = t5094*t3705;
  t5347 = t3352*t5168;
  t5358 = t5311 + t5347;
  t6257 = -0.4999*t2215;
  t6350 = -1.*t3571*t2215;
  t6352 = 0.15039999999999998*t2503*t2586;
  t6389 = t6257 + t6350 + t6352;
  t6437 = 0.4999*t2503;
  t6466 = t6437 + t5128 + t5155;
  t5784 = -0.26996047999999995*var2[4]*t5666;
  t5798 = 3.5899*t3656*t4548;
  t5809 = 3.5899*t4129*t5666;
  t5906 = 7.1798*t4548*t4687;
  t5918 = 7.1798*t4548*t5666;
  t5922 = t5906 + t5918;
  t5929 = 0.5*var2[0]*t5922;
  t5969 = 3.5899*t4548*t3917;
  t5978 = 3.5899*t3379*t4687;
  t5998 = t861*t5523;
  t6043 = t4769 + t5998;
  t6051 = 3.5899*t4548*t6043;
  t6120 = 3.5899*t3379*t5666;
  t6128 = t5969 + t5978 + t6051 + t6120;
  t6224 = 0.5*var2[1]*t6128;
  t6227 = 3.5899*t4548*t5300;
  t6252 = t5094*t3352;
  t6435 = t2646*t5168;
  t6665 = 3.5899*t5358*t5666;
  t6681 = -1.*t2646*t5094;
  t8365 = 0.15039999999999998*t2009*t2215;
  t8367 = t8365 + t6352;
  t8386 = -0.15039999999999998*t2503*t2009;
  t8389 = t8386 + t5155;
  t6923 = -1.*t5168*t5523;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(0.5*(7.1798*t3379*t4548 + 7.1798*t3917*t4687)*var2[0] + 0.5*(3.5899*Power(t3379,2) + 3.5899*Power(t3917,2) + 3.5899*t4548*(t4769 - 1.*t3352*t861) + 3.5899*t4687*(t3355 - 1.*t3705*t861))*var2[1] + 0.5*(3.5899*t3917*t5300 + 3.5899*t3379*t5358)*var2[2] + 0.5*(3.5899*t3656*t3917 + 3.5899*t3379*t4129)*var2[3] - 0.26996047999999995*t3379*var2[4]);
  p_output1[3]=var2[0]*(t5784 + t5929 + t6224 + 0.5*(t6227 + 3.5899*t4548*(t6252 + t3352*t6389 + t6435 + t3705*t6466) + t6665 + 3.5899*t4687*(-1.*t2646*t6389 - 1.*t3352*t6466 + t6681 + t6923))*var2[2] + 0.5*(t5798 + t5809)*var2[3]);
  p_output1[4]=var2[0]*(t5784 + t5929 + t6224 + 0.5*(t6227 + t6665 + 3.5899*t4687*(t6681 + t6923 - 1.*t2646*t8367 - 1.*t3352*t8389) + 3.5899*t4548*(t6252 + t6435 + t3352*t8367 + t3705*t8389))*var2[2] + 0.5*(3.5899*(-0.4999*t2586 - 0.15039999999999998*t2009*t2586 - 1.*t2586*t3571)*t4548 + 3.5899*(0.15039999999999998*Power(t2009,2) + t3998 + t4083)*t4687 + t5798 + t5809)*var2[3]);
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

#include "Ce3_vec_L3_J1_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L3_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
