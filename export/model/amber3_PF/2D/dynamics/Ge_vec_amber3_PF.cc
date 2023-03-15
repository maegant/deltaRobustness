/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:27 GMT-08:00
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
  double t364;
  double t1213;
  double t2273;
  double t2331;
  double t1922;
  double t1993;
  double t2061;
  double t2495;
  double t2664;
  double t2747;
  double t2797;
  double t4394;
  double t4650;
  double t4755;
  double t5072;
  double t5155;
  double t5611;
  double t5705;
  double t5613;
  double t5660;
  double t5679;
  double t5719;
  double t5755;
  double t5797;
  double t5809;
  double t6070;
  double t6319;
  double t6327;
  double t6344;
  double t6363;
  double t3023;
  double t6728;
  double t4429;
  double t4533;
  double t4586;
  double t5216;
  double t5372;
  double t5373;
  double t5473;
  double t5539;
  double t7216;
  double t7251;
  double t7287;
  double t5853;
  double t7569;
  double t6089;
  double t6232;
  double t6257;
  double t6364;
  double t6383;
  double t6392;
  double t6444;
  double t6510;
  double t7720;
  double t7791;
  double t7814;
  t364 = Sin(var1[2]);
  t1213 = Cos(var1[3]);
  t2273 = Cos(var1[2]);
  t2331 = Sin(var1[3]);
  t1922 = -1.*t1213;
  t1993 = 1. + t1922;
  t2061 = 0.4999*t1993*t364;
  t2495 = -0.4999*t2273*t2331;
  t2664 = -1.*t1213*t364;
  t2747 = -1.*t2273*t2331;
  t2797 = t2664 + t2747;
  t4394 = Cos(var1[4]);
  t4650 = -1.*t2273*t1213;
  t4755 = t364*t2331;
  t5072 = t4650 + t4755;
  t5155 = Sin(var1[4]);
  t5611 = Cos(var1[5]);
  t5705 = Sin(var1[5]);
  t5613 = -1.*t5611;
  t5660 = 1. + t5613;
  t5679 = 0.4999*t5660*t364;
  t5719 = -0.4999*t2273*t5705;
  t5755 = -1.*t5611*t364;
  t5797 = -1.*t2273*t5705;
  t5809 = t5755 + t5797;
  t6070 = Cos(var1[6]);
  t6319 = -1.*t2273*t5611;
  t6327 = t364*t5705;
  t6344 = t6319 + t6327;
  t6363 = Sin(var1[6]);
  t3023 = -0.6493*t2797;
  t6728 = -0.4999*t1213*t364;
  t4429 = -1.*t4394;
  t4533 = 1. + t4429;
  t4586 = -0.9063*t4533*t2797;
  t5216 = 0.9063*t5072*t5155;
  t5372 = t4394*t2797;
  t5373 = t5072*t5155;
  t5473 = t5372 + t5373;
  t5539 = -1.078185*t5473;
  t7216 = t2273*t1213;
  t7251 = -1.*t364*t2331;
  t7287 = t7216 + t7251;
  t5853 = -0.6493*t5809;
  t7569 = -0.4999*t5611*t364;
  t6089 = -1.*t6070;
  t6232 = 1. + t6089;
  t6257 = -0.9063*t6232*t5809;
  t6364 = 0.9063*t6344*t6363;
  t6383 = t6070*t5809;
  t6392 = t6344*t6363;
  t6444 = t6383 + t6392;
  t6510 = -1.078185*t6444;
  t7720 = t2273*t5611;
  t7791 = -1.*t364*t5705;
  t7814 = t7720 + t7791;
  p_output1[0]=0;
  p_output1[1]=-211.4694612;
  p_output1[2]=-33.610041*(t2061 + t2495 + t3023) - 36.3549771*t364 - 8.359689600000001*(t2061 + t2495 + t4586 + t5216 + t5539) - 33.610041*(t5679 + t5719 + t5853) - 8.359689600000001*(t5679 + t5719 + t6257 + t6364 + t6510);
  p_output1[3]=-33.610041*(t2495 + t3023 + t6728) - 8.359689600000001*(t2495 + t4586 + t5216 + t5539 + t6728);
  p_output1[4]=-8.359689600000001*(0.9063*t2797*t4394 - 0.9063*t5155*t7287 - 1.078185*(t5372 - 1.*t5155*t7287));
  p_output1[5]=-33.610041*(t5719 + t5853 + t7569) - 8.359689600000001*(t5719 + t6257 + t6364 + t6510 + t7569);
  p_output1[6]=-8.359689600000001*(0.9063*t5809*t6070 - 0.9063*t6363*t7814 - 1.078185*(t6383 - 1.*t6363*t7814));
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

#include "Ge_vec_amber3_PF.hh"

namespace SymFunction
{

void Ge_vec_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
