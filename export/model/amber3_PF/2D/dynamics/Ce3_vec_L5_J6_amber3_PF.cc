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
  double t1391;
  double t798;
  double t2608;
  double t2344;
  double t1575;
  double t1614;
  double t1631;
  double t1805;
  double t1809;
  double t3110;
  double t2070;
  double t3285;
  double t3546;
  double t3827;
  double t4429;
  double t4566;
  double t4586;
  double t4755;
  double t5072;
  double t5089;
  double t5164;
  double t5177;
  double t1247;
  double t1922;
  double t1979;
  double t1986;
  double t2495;
  double t2797;
  double t2928;
  double t5467;
  double t5373;
  double t5473;
  double t5580;
  double t3885;
  double t6008;
  double t6070;
  double t6075;
  double t7019;
  double t7108;
  double t6510;
  double t6529;
  double t6550;
  double t6551;
  double t6768;
  double t6769;
  double t6774;
  double t6777;
  double t7251;
  double t7325;
  double t6841;
  double t6848;
  double t6896;
  double t7212;
  double t7814;
  double t7836;
  double t7916;
  double t7981;
  double t8039;
  double t8060;
  double t8062;
  double t2997;
  double t4245;
  double t5887;
  double t6089;
  double t6112;
  double t6174;
  double t6319;
  double t6327;
  double t6329;
  double t6344;
  double t6383;
  double t6387;
  double t6720;
  double t7216;
  double t7493;
  double t8120;
  double t8123;
  double t8125;
  double t8126;
  double t7556;
  t1391 = Cos(var1[6]);
  t798 = Sin(var1[6]);
  t2608 = Cos(var1[5]);
  t2344 = Sin(var1[5]);
  t1575 = -1.*t1391;
  t1614 = 1. + t1575;
  t1631 = -0.9063*t1614;
  t1805 = -1.078185*t1391;
  t1809 = t1631 + t1805;
  t3110 = Cos(var1[2]);
  t2070 = Sin(var1[2]);
  t3285 = t2608*t1391;
  t3546 = -1.*t2344*t798;
  t3827 = t3285 + t3546;
  t4429 = 0.4999*t1391;
  t4566 = t1809*t1391;
  t4586 = Power(t798,2);
  t4755 = -0.17188499999999995*t4586;
  t5072 = t4429 + t4566 + t4755;
  t5089 = -1.*t1391*t2344;
  t5164 = -1.*t2608*t798;
  t5177 = t5089 + t5164;
  t1247 = 0.4999*t798;
  t1922 = t1809*t798;
  t1979 = 0.17188499999999995*t1391*t798;
  t1986 = t1247 + t1922 + t1979;
  t2495 = t1391*t2344;
  t2797 = t2608*t798;
  t2928 = t2495 + t2797;
  t5467 = -1.*t2070*t3827;
  t5373 = t3110*t5177;
  t5473 = t5373 + t5467;
  t5580 = -1.*t2070*t5177;
  t3885 = t3110*t3827;
  t6008 = -1.*t2608*t1391;
  t6070 = t2344*t798;
  t6075 = t6008 + t6070;
  t7019 = t2608*t1809;
  t7108 = 0.17188499999999995*t2344*t798;
  t6510 = 0.4999*t2344;
  t6529 = t1809*t2344;
  t6550 = -0.17188499999999995*t2608*t798;
  t6551 = t6510 + t6529 + t6550;
  t6768 = -0.4999*t2344;
  t6769 = -1.*t1809*t2344;
  t6774 = 0.17188499999999995*t2608*t798;
  t6777 = t6768 + t6769 + t6774;
  t7251 = 0.4999*t2608;
  t7325 = t7251 + t7019 + t7108;
  t6841 = -1.*t2608;
  t6848 = 1. + t6841;
  t6896 = -0.4999*t6848;
  t7212 = t6896 + t7019 + t7108;
  t7814 = -0.4999*t798;
  t7836 = -1.*t1809*t798;
  t7916 = -0.17188499999999995*t1391*t798;
  t7981 = t7814 + t7836 + t7916;
  t8039 = Power(t1391,2);
  t8060 = 0.17188499999999995*t8039;
  t8062 = t4429 + t4566 + t8060;
  t2997 = -1.*t2070*t2928;
  t4245 = t2997 + t3885;
  t5887 = 0.85216*t1986*t5473;
  t6089 = t3110*t6075;
  t6112 = t5580 + t6089;
  t6174 = 0.85216*t5072*t6112;
  t6319 = t2070*t5177;
  t6327 = t6319 + t3885;
  t6329 = 0.85216*t1986*t6327;
  t6344 = t2070*t6075;
  t6383 = t5373 + t6344;
  t6387 = 0.85216*t5072*t6383;
  t6720 = t6551*t3827;
  t7216 = t5177*t7212;
  t7493 = -1.*t5177*t6551;
  t8120 = 0.17188499999999995*t1391*t2344;
  t8123 = t8120 + t6774;
  t8125 = -0.17188499999999995*t2608*t1391;
  t8126 = t8125 + t7108;
  t7556 = -1.*t7212*t6075;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(0.85216*t1986*t4245 + 0.85216*t5072*t5473)*var2[0] + 0.5*(0.85216*t1986*(-1.*t2928*t3110 + t5467) + 0.85216*t5072*(-1.*t3110*t3827 + t5580))*var2[1])*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(0.5*(t6329 + t6387)*var2[0] + 0.5*(t5887 + t6174)*var2[1] + 0.5*(0.85216*t5072*(t6720 + t3827*t6777 + t7216 + t2928*t7325) + 0.85216*t1986*(-1.*t5177*t6777 - 1.*t3827*t7325 + t7493 + t7556))*var2[2])*var2[5];
  p_output1[6]=var2[5]*(0.5*(t6329 + t6387 + 0.85216*t6327*t7981 + 0.85216*(t2928*t3110 + t2070*t3827)*t8062)*var2[0] + 0.5*(t5887 + t6174 + 0.85216*t5473*t7981 + 0.85216*t4245*t8062)*var2[1] + 0.5*(0.85216*(t2928*t6551 + t3827*t7212)*t7981 + 0.85216*(-1.*t3827*t6551 - 1.*t5177*t7212)*t8062 + 0.85216*t5072*(t6720 + t7216 + t3827*t8123 + t2928*t8126) + 0.85216*t1986*(t7493 + t7556 - 1.*t5177*t8123 - 1.*t3827*t8126))*var2[2] + 0.5*(1.70432*t5072*t7981 + 1.70432*t1986*t8062)*var2[5] - 0.07323676079999998*t7981*var2[6]);
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

#include "Ce3_vec_L5_J6_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L5_J6_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
