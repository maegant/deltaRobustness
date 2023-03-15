/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:05 GMT-08:00
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
static void output1(double *p_output1,const double *var1)
{
  double t900;
  double t824;
  double t881;
  double t1171;
  double t1285;
  double t899;
  double t1176;
  double t1183;
  double t793;
  double t1309;
  double t1617;
  double t1753;
  double t1909;
  double t1240;
  double t1794;
  double t1808;
  double t786;
  double t1973;
  double t2210;
  double t2330;
  double t3975;
  double t4013;
  double t4024;
  double t4576;
  double t4586;
  double t4634;
  double t3622;
  double t3673;
  double t3776;
  double t3856;
  double t5105;
  double t5238;
  double t5448;
  double t5451;
  double t5468;
  double t5499;
  double t5886;
  double t5920;
  double t6571;
  double t6936;
  double t7350;
  double t7594;
  double t7601;
  double t7605;
  double t7481;
  double t7521;
  double t7542;
  double t7575;
  double t3445;
  double t3565;
  double t3615;
  double t5293;
  double t5594;
  double t5764;
  t900 = Cos(var1[7]);
  t824 = Cos(var1[8]);
  t881 = Sin(var1[7]);
  t1171 = Sin(var1[8]);
  t1285 = Cos(var1[6]);
  t899 = -1.*t824*t881;
  t1176 = -1.*t900*t1171;
  t1183 = t899 + t1176;
  t793 = Sin(var1[6]);
  t1309 = t900*t824;
  t1617 = -1.*t881*t1171;
  t1753 = t1309 + t1617;
  t1909 = Sin(var1[2]);
  t1240 = t793*t1183;
  t1794 = t1285*t1753;
  t1808 = t1240 + t1794;
  t786 = Cos(var1[2]);
  t1973 = t1285*t1183;
  t2210 = -1.*t793*t1753;
  t2330 = t1973 + t2210;
  t3975 = -1.*t824;
  t4013 = 1. + t3975;
  t4024 = -1.3127*t4013;
  t4576 = -1.3127*t824;
  t4586 = -0.06*t1171;
  t4634 = t4024 + t4576 + t4586;
  t3622 = -1.*t900;
  t3673 = 1. + t3622;
  t3776 = -0.9063*t3673;
  t3856 = -0.06*t824*t881;
  t5105 = t900*t4634;
  t5238 = t3776 + t3856 + t5105;
  t5448 = 0.06*t900*t824;
  t5451 = 0.9063*t881;
  t5468 = t881*t4634;
  t5499 = t5448 + t5451 + t5468;
  t5886 = t824*t881;
  t5920 = t900*t1171;
  t6571 = t5886 + t5920;
  t6936 = -1.*t793*t6571;
  t7350 = t6936 + t1794;
  t7594 = t1285*t6571;
  t7601 = t793*t1753;
  t7605 = t7594 + t7601;
  t7481 = 0.4999*t793;
  t7521 = t793*t5238;
  t7542 = t1285*t5499;
  t7575 = t7481 + t7521 + t7542;
  t3445 = -1.*t1285;
  t3565 = 1. + t3445;
  t3615 = -0.4999*t3565;
  t5293 = t1285*t5238;
  t5594 = -1.*t793*t5499;
  t5764 = t3615 + t5293 + t5594;
  p_output1[0]=t1909*t2330 + t1808*t786;
  p_output1[1]=-1.*t1808*t1909 + t2330*t786;
  p_output1[2]=t5764*t7350 + t7575*t7605;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0.4999*t1753 + t1753*t5238 + t5499*t6571;
  p_output1[7]=0.9063*t824 + 0.06*t1171*t824 + t4634*t824;
  p_output1[8]=0;
  p_output1[9]=t1909*t7350 + t7605*t786;
  p_output1[10]=-1.*t1909*t7605 + t7350*t786;
  p_output1[11]=-1.*t2330*t5764 - 1.*t1808*t7575;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-1.*t1183*t5238 - 1.*t1753*t5499 + 0.4999*t6571;
  p_output1[16]=0.9063*t1171 + t1171*t4634 - 0.06*Power(t824,2);
  p_output1[17]=-0.06;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=1.;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=1.;
  p_output1[25]=1.;
  p_output1[26]=1.;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightSole_map_RightSS2.hh"

namespace SymFunction
{

void fRightSole_map_RightSS2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
