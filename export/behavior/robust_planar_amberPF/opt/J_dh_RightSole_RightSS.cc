/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:29 GMT-08:00
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
  double t2226;
  double t1409;
  double t1550;
  double t2540;
  double t1030;
  double t1817;
  double t2667;
  double t2834;
  double t2980;
  double t2981;
  double t2988;
  double t2994;
  double t3025;
  double t3746;
  double t3776;
  double t3795;
  double t3488;
  double t3571;
  double t3595;
  double t3668;
  double t3846;
  double t3853;
  double t3855;
  double t3873;
  double t2918;
  double t3011;
  double t3108;
  double t3232;
  double t3307;
  double t3327;
  double t3345;
  double t3890;
  double t3916;
  double t3927;
  double t4031;
  double t4053;
  double t4057;
  double t3367;
  double t3412;
  double t4139;
  double t4141;
  double t4143;
  double t4159;
  double t4167;
  double t4171;
  double t4173;
  double t4315;
  double t4377;
  double t4407;
  double t4441;
  double t4455;
  double t4457;
  double t4484;
  double t4307;
  double t4309;
  double t4339;
  double t4343;
  double t4357;
  double t4362;
  double t4366;
  double t4575;
  double t4582;
  double t4628;
  double t3480;
  t2226 = Cos(var1[2]);
  t1409 = Cos(var1[5]);
  t1550 = Sin(var1[2]);
  t2540 = Sin(var1[5]);
  t1030 = Cos(var1[6]);
  t1817 = -1.*t1409*t1550;
  t2667 = -1.*t2226*t2540;
  t2834 = t1817 + t2667;
  t2980 = t2226*t1409;
  t2981 = -1.*t1550*t2540;
  t2988 = t2980 + t2981;
  t2994 = Sin(var1[6]);
  t3025 = t1030*t2834;
  t3746 = -1.*t2226*t1409;
  t3776 = t1550*t2540;
  t3795 = t3746 + t3776;
  t3488 = -0.4999*t2226*t2540;
  t3571 = -1.*t1030;
  t3595 = 1. + t3571;
  t3668 = -0.9063*t3595*t2834;
  t3846 = 0.9063*t3795*t2994;
  t3853 = t3795*t2994;
  t3855 = t3025 + t3853;
  t3873 = -1.373025*t3855;
  t2918 = 0.9063*t1030*t2834;
  t3011 = -0.9063*t2988*t2994;
  t3108 = -1.*t2988*t2994;
  t3232 = t3025 + t3108;
  t3307 = -1.373025*t3232;
  t3327 = t2918 + t3011 + t3307;
  t3345 = var2[6]*t3327;
  t3890 = -0.4999*t1409*t1550;
  t3916 = t3890 + t3488 + t3668 + t3846 + t3873;
  t3927 = var2[5]*t3916;
  t4031 = t1409*t1550;
  t4053 = t2226*t2540;
  t4057 = t4031 + t4053;
  t3367 = -1.*t1409;
  t3412 = 1. + t3367;
  t4139 = -0.4999*t1550*t2540;
  t4141 = -0.9063*t3595*t2988;
  t4143 = 0.9063*t2834*t2994;
  t4159 = t1030*t2988;
  t4167 = t2834*t2994;
  t4171 = t4159 + t4167;
  t4173 = -1.373025*t4171;
  t4315 = t1030*t3795;
  t4377 = 0.4999*t1550*t2540;
  t4407 = -0.9063*t3595*t3795;
  t4441 = 0.9063*t4057*t2994;
  t4455 = t4057*t2994;
  t4457 = t4315 + t4455;
  t4484 = -1.373025*t4457;
  t4307 = 0.9063*t1030*t3795;
  t4309 = -0.9063*t2834*t2994;
  t4339 = -1.*t2834*t2994;
  t4343 = t4315 + t4339;
  t4357 = -1.373025*t4343;
  t4362 = t4307 + t4309 + t4357;
  t4366 = var2[6]*t4362;
  t4575 = -0.4999*t2226*t1409;
  t4582 = t4575 + t4377 + t4407 + t4441 + t4484;
  t4628 = var2[5]*t4582;
  t3480 = 0.4999*t3412*t1550;
  p_output1[0]=t3345 + t3927 + (t3480 + t3488 + t3668 + t3846 + t3873)*var2[2];
  p_output1[1]=t3345 + t3927 + t3916*var2[2];
  p_output1[2]=t3327*var2[2] + t3327*var2[5] + (t3011 - 0.9063*t1030*t4057 - 1.373025*(t3108 - 1.*t1030*t4057))*var2[6];
  p_output1[3]=1.;
  p_output1[4]=0. - 0.4999*t2226*t3412 + t4139 + t4141 + t4143 + t4173;
  p_output1[5]=0. + 0.4999*t1409*t2226 + t4139 + t4141 + t4143 + t4173;
  p_output1[6]=0. + 0.9063*t1030*t2988 - 0.9063*t2994*t4057 - 1.373025*(-1.*t2994*t4057 + t4159);
  p_output1[7]=t4366 + t4628 + (0.4999*t2226*t3412 + t4377 + t4407 + t4441 + t4484)*var2[2];
  p_output1[8]=t4366 + t4628 + t4582*var2[2];
  p_output1[9]=t4362*var2[2] + t4362*var2[5] + (-0.9063*t1030*t2988 + t4309 - 1.373025*(-1.*t1030*t2988 + t4339))*var2[6];
  p_output1[10]=1.;
  p_output1[11]=0. + t3480 + t3488 + t3668 + t3846 + t3873;
  p_output1[12]=0. + t3488 + t3668 + t3846 + t3873 + t3890;
  p_output1[13]=0. + t2918 + t3011 + t3307;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RightSole_RightSS.hh"

namespace RightSS
{

void J_dh_RightSole_RightSS_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
