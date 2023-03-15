/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:20:52 GMT-08:00
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
  double t1891;
  double t610;
  double t933;
  double t2019;
  double t2679;
  double t1472;
  double t2525;
  double t2567;
  double t331;
  double t2719;
  double t2933;
  double t2988;
  double t3184;
  double t3007;
  double t115;
  double t3776;
  double t4138;
  double t4180;
  double t2578;
  double t3136;
  double t3282;
  double t3293;
  double t3654;
  double t4202;
  double t4511;
  double t4691;
  double t4983;
  double t5326;
  double t7355;
  double t7414;
  double t7415;
  double t7428;
  double t7431;
  double t7454;
  double t7232;
  double t7284;
  double t7323;
  double t7350;
  double t7457;
  double t7468;
  double t7480;
  double t7481;
  double t7510;
  double t7514;
  double t7530;
  double t7541;
  double t7542;
  double t7544;
  double t5896;
  double t5956;
  double t6571;
  double t7472;
  double t7516;
  double t7517;
  t1891 = Cos(var1[7]);
  t610 = Cos(var1[8]);
  t933 = Sin(var1[7]);
  t2019 = Sin(var1[8]);
  t2679 = Cos(var1[6]);
  t1472 = -1.*t610*t933;
  t2525 = -1.*t1891*t2019;
  t2567 = t1472 + t2525;
  t331 = Sin(var1[6]);
  t2719 = t1891*t610;
  t2933 = -1.*t933*t2019;
  t2988 = t2719 + t2933;
  t3184 = Sin(var1[2]);
  t3007 = t2679*t2988;
  t115 = Cos(var1[2]);
  t3776 = t610*t933;
  t4138 = t1891*t2019;
  t4180 = t3776 + t4138;
  t2578 = t331*t2567;
  t3136 = t2578 + t3007;
  t3282 = t2679*t2567;
  t3293 = -1.*t331*t2988;
  t3654 = t3282 + t3293;
  t4202 = -1.*t331*t4180;
  t4511 = t4202 + t3007;
  t4691 = t2679*t4180;
  t4983 = t331*t2988;
  t5326 = t4691 + t4983;
  t7355 = -1.*t610;
  t7414 = 1. + t7355;
  t7415 = -1.3127*t7414;
  t7428 = -1.3127*t610;
  t7431 = -0.06*t2019;
  t7454 = t7415 + t7428 + t7431;
  t7232 = -1.*t1891;
  t7284 = 1. + t7232;
  t7323 = -0.9063*t7284;
  t7350 = -0.06*t610*t933;
  t7457 = t1891*t7454;
  t7468 = t7323 + t7350 + t7457;
  t7480 = 0.06*t1891*t610;
  t7481 = 0.9063*t933;
  t7510 = t933*t7454;
  t7514 = t7480 + t7481 + t7510;
  t7530 = 0.4999*t331;
  t7541 = t331*t7468;
  t7542 = t2679*t7514;
  t7544 = t7530 + t7541 + t7542;
  t5896 = -1.*t2679;
  t5956 = 1. + t5896;
  t6571 = -0.4999*t5956;
  t7472 = t2679*t7468;
  t7516 = -1.*t331*t7514;
  t7517 = t6571 + t7472 + t7516;
  p_output1[0]=t115*t3136 + t3184*t3654;
  p_output1[1]=t3184*t4511 + t115*t5326;
  p_output1[2]=0;
  p_output1[3]=-1.*t3136*t3184 + t115*t3654;
  p_output1[4]=t115*t4511 - 1.*t3184*t5326;
  p_output1[5]=0;
  p_output1[6]=t4511*t7517 + t5326*t7544;
  p_output1[7]=-1.*t3654*t7517 - 1.*t3136*t7544;
  p_output1[8]=1.;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0.4999*t2988 + t2988*t7468 + t4180*t7514;
  p_output1[19]=0.4999*t4180 - 1.*t2567*t7468 - 1.*t2988*t7514;
  p_output1[20]=1.;
  p_output1[21]=0.9063*t610 + 0.06*t2019*t610 + t610*t7454;
  p_output1[22]=0.9063*t2019 - 0.06*Power(t610,2) + t2019*t7454;
  p_output1[23]=1.;
  p_output1[24]=0;
  p_output1[25]=-0.06;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RightSole_RightSS2.hh"

namespace SymFunction
{

void Jh_RightSole_RightSS2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
