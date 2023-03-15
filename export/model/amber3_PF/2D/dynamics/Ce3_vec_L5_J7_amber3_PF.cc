/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:20 GMT-08:00
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
  double t857;
  double t158;
  double t206;
  double t1223;
  double t1805;
  double t457;
  double t1247;
  double t1345;
  double t4;
  double t1922;
  double t1979;
  double t1986;
  double t3885;
  double t4245;
  double t4394;
  double t4429;
  double t4566;
  double t5611;
  double t5613;
  double t1631;
  double t2478;
  double t6112;
  double t6232;
  double t6257;
  double t3285;
  double t4586;
  double t4755;
  double t5072;
  double t5216;
  double t5473;
  double t5576;
  double t5591;
  double t5601;
  double t5660;
  double t5679;
  double t5705;
  double t5719;
  double t5755;
  double t6319;
  double t6327;
  double t6344;
  double t6363;
  double t6364;
  double t6383;
  t857 = Cos(var1[5]);
  t158 = Cos(var1[6]);
  t206 = Sin(var1[5]);
  t1223 = Sin(var1[6]);
  t1805 = Cos(var1[2]);
  t457 = -1.*t158*t206;
  t1247 = -1.*t857*t1223;
  t1345 = t457 + t1247;
  t4 = Sin(var1[2]);
  t1922 = t857*t158;
  t1979 = -1.*t206*t1223;
  t1986 = t1922 + t1979;
  t3885 = -1.*t158;
  t4245 = 1. + t3885;
  t4394 = -0.9063*t4245;
  t4429 = -1.078185*t158;
  t4566 = t4394 + t4429;
  t5611 = t857*t4566;
  t5613 = 0.17188499999999995*t206*t1223;
  t1631 = -1.*t4*t1345;
  t2478 = t1805*t1345;
  t6112 = -1.*t857*t158;
  t6232 = t206*t1223;
  t6257 = t6112 + t6232;
  t3285 = 0.4999*t206;
  t4586 = t4566*t206;
  t4755 = -0.17188499999999995*t857*t1223;
  t5072 = t3285 + t4586 + t4755;
  t5216 = t5072*t1986;
  t5473 = 0.17188499999999995*t857*t1223;
  t5576 = -1.*t857;
  t5591 = 1. + t5576;
  t5601 = -0.4999*t5591;
  t5660 = t5601 + t5611 + t5613;
  t5679 = t1345*t5660;
  t5705 = t158*t206;
  t5719 = t857*t1223;
  t5755 = t5705 + t5719;
  t6319 = t1805*t6257;
  t6327 = t1631 + t6319;
  t6344 = -0.07323676079999998*var2[1]*t6327;
  t6363 = t4*t6257;
  t6364 = t2478 + t6363;
  t6383 = -0.07323676079999998*var2[0]*t6364;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.07323676079999998*(t2478 - 1.*t1986*t4)*var2[0] - 0.07323676079999998*(t1631 - 1.*t1805*t1986)*var2[1])*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(t6344 + t6383 - 0.07323676079999998*(t5216 + t1986*(-0.4999*t206 - 1.*t206*t4566 + t5473) + t5679 + t5755*(t5611 + t5613 + 0.4999*t857))*var2[2])*var2[6];
  p_output1[6]=(t6344 + t6383 - 0.07323676079999998*(t5216 + t1986*(0.17188499999999995*t158*t206 + t5473) + t5679 + t5755*(t5613 - 0.17188499999999995*t158*t857))*var2[2] - 0.07323676079999998*(-0.4999*t1223 - 0.17188499999999995*t1223*t158 - 1.*t1223*t4566)*var2[5])*var2[6];
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec_L5_J7_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L5_J7_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
