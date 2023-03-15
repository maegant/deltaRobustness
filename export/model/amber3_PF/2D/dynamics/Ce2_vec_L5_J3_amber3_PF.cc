/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:43 GMT-08:00
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
  double t1806;
  double t1547;
  double t1624;
  double t1906;
  double t2172;
  double t1536;
  double t2336;
  double t2369;
  double t2508;
  double t3245;
  double t3448;
  double t3681;
  double t3720;
  double t3880;
  double t1761;
  double t1915;
  double t1923;
  double t2104;
  double t2646;
  double t2719;
  double t4700;
  double t4427;
  double t4654;
  double t4657;
  double t4662;
  double t4711;
  double t5023;
  double t5045;
  double t5117;
  double t5160;
  double t5172;
  double t5886;
  double t5937;
  double t5975;
  double t6063;
  double t6184;
  double t6225;
  double t6266;
  double t6296;
  double t6341;
  double t6378;
  double t5268;
  double t5301;
  double t5332;
  double t4930;
  double t4931;
  double t4987;
  double t4989;
  double t4998;
  double t3229;
  double t3900;
  double t3959;
  double t4399;
  double t5547;
  double t5549;
  double t5337;
  double t5345;
  double t5363;
  double t5510;
  double t5538;
  double t5625;
  double t5710;
  double t6140;
  double t6453;
  double t6465;
  double t6553;
  double t6569;
  double t6573;
  double t6911;
  double t6949;
  double t6995;
  double t6524;
  double t6579;
  double t6696;
  double t4769;
  double t5004;
  double t5016;
  double t6801;
  double t6811;
  double t6825;
  t1806 = Cos(var1[5]);
  t1547 = Cos(var1[6]);
  t1624 = Sin(var1[5]);
  t1906 = Sin(var1[6]);
  t2172 = Sin(var1[2]);
  t1536 = Cos(var1[2]);
  t2336 = t1806*t1547;
  t2369 = -1.*t1624*t1906;
  t2508 = t2336 + t2369;
  t3245 = -1.*t1547;
  t3448 = 1. + t3245;
  t3681 = -0.9063*t3448;
  t3720 = -1.078185*t1547;
  t3880 = t3681 + t3720;
  t1761 = -1.*t1547*t1624;
  t1915 = -1.*t1806*t1906;
  t1923 = t1761 + t1915;
  t2104 = t1536*t1923;
  t2646 = -1.*t2172*t2508;
  t2719 = t2104 + t2646;
  t4700 = t1536*t2508;
  t4427 = t1547*t1624;
  t4654 = t1806*t1906;
  t4657 = t4427 + t4654;
  t4662 = -1.*t2172*t4657;
  t4711 = t4662 + t4700;
  t5023 = t2172*t1923;
  t5045 = t5023 + t4700;
  t5117 = t1536*t4657;
  t5160 = t2172*t2508;
  t5172 = t5117 + t5160;
  t5886 = 0.4999*t1624;
  t5937 = t3880*t1624;
  t5975 = -0.17188499999999995*t1806*t1906;
  t6063 = t5886 + t5937 + t5975;
  t6184 = -1.*t1806;
  t6225 = 1. + t6184;
  t6266 = -0.4999*t6225;
  t6296 = t1806*t3880;
  t6341 = 0.17188499999999995*t1624*t1906;
  t6378 = t6266 + t6296 + t6341;
  t5268 = -1.*t2172*t1923;
  t5301 = -1.*t1536*t2508;
  t5332 = t5268 + t5301;
  t4930 = 0.4999*t1547;
  t4931 = t3880*t1547;
  t4987 = Power(t1906,2);
  t4989 = -0.17188499999999995*t4987;
  t4998 = t4930 + t4931 + t4989;
  t3229 = 0.4999*t1906;
  t3900 = t3880*t1906;
  t3959 = 0.17188499999999995*t1547*t1906;
  t4399 = t3229 + t3900 + t3959;
  t5547 = -1.*t1536*t4657;
  t5549 = t5547 + t2646;
  t5337 = 0.85216*t5332*t5045;
  t5345 = Power(t4711,2);
  t5363 = 0.85216*t5345;
  t5510 = Power(t2719,2);
  t5538 = 0.85216*t5510;
  t5625 = 0.85216*t5549*t5172;
  t5710 = t5337 + t5363 + t5538 + t5625;
  t6140 = -1.*t6063*t2508;
  t6453 = -1.*t1923*t6378;
  t6465 = t6140 + t6453;
  t6553 = t6063*t4657;
  t6569 = t2508*t6378;
  t6573 = t6553 + t6569;
  t6911 = 0.85216*t5549*t6465;
  t6949 = 0.85216*t5332*t6573;
  t6995 = t6911 + t6949;
  t6524 = 0.85216*t4711*t6465;
  t6579 = 0.85216*t2719*t6573;
  t6696 = t6524 + t6579;
  t4769 = 0.85216*t4399*t4711;
  t5004 = 0.85216*t4998*t2719;
  t5016 = t4769 + t5004;
  t6801 = 0.85216*t4998*t5332;
  t6811 = 0.85216*t4399*t5549;
  t6825 = t6801 + t6811;
  p_output1[0]=var2[2]*(-0.5*(1.70432*t2719*t5045 + 1.70432*t4711*t5172)*var2[0] - 0.5*t5710*var2[1] - 0.5*t6696*var2[2] - 0.5*t5016*var2[5] + 0.07323676079999998*t2719*var2[6]);
  p_output1[1]=var2[2]*(-0.5*t5710*var2[0] - 0.5*(1.70432*t2719*t5332 + 1.70432*t4711*t5549)*var2[1] - 0.5*t6995*var2[2] - 0.5*t6825*var2[5] + 0.07323676079999998*t5332*var2[6]);
  p_output1[2]=(-0.5*t6696*var2[0] - 0.5*t6995*var2[1])*var2[2];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*t5016*var2[0] - 0.5*t6825*var2[1])*var2[2];
  p_output1[6]=(0.07323676079999998*t2719*var2[0] + 0.07323676079999998*t5332*var2[1])*var2[2];
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

#include "Ce2_vec_L5_J3_amber3_PF.hh"

namespace SymFunction
{

void Ce2_vec_L5_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
