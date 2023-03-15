/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:45 GMT-08:00
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
  double t760;
  double t486;
  double t518;
  double t1178;
  double t2104;
  double t583;
  double t1316;
  double t1931;
  double t377;
  double t3681;
  double t3720;
  double t3880;
  double t3900;
  double t3924;
  double t1988;
  double t2336;
  double t2374;
  double t2565;
  double t2719;
  double t2785;
  double t4399;
  double t4418;
  double t4427;
  double t4654;
  double t4700;
  double t4709;
  double t4998;
  double t5004;
  double t5019;
  double t5023;
  double t5045;
  double t5090;
  double t5337;
  double t5345;
  double t5880;
  double t5886;
  double t5887;
  double t5937;
  double t6007;
  double t6266;
  double t6296;
  double t6341;
  double t6465;
  double t6488;
  double t6579;
  double t6726;
  double t6733;
  double t6757;
  double t6811;
  double t6831;
  double t5510;
  double t5538;
  double t5549;
  double t3229;
  double t3959;
  double t4202;
  double t4210;
  double t4769;
  double t4928;
  double t4930;
  double t4931;
  double t4937;
  double t5213;
  double t5219;
  double t5332;
  double t5363;
  double t5611;
  double t5625;
  double t5816;
  double t5975;
  double t6524;
  double t6553;
  double t6573;
  double t6774;
  double t6801;
  double t6832;
  double t6835;
  double t6841;
  double t6868;
  double t6911;
  double t7004;
  double t7006;
  double t7038;
  double t7065;
  double t7137;
  double t7523;
  double t7620;
  double t7626;
  double t7655;
  double t7795;
  double t6569;
  double t6839;
  double t6949;
  double t7199;
  double t7229;
  double t7434;
  double t7438;
  double t7441;
  double t4711;
  double t4985;
  double t4987;
  double t8006;
  double t8025;
  double t8030;
  t760 = Cos(var1[5]);
  t486 = Cos(var1[6]);
  t518 = Sin(var1[5]);
  t1178 = Sin(var1[6]);
  t2104 = Sin(var1[2]);
  t583 = -1.*t486*t518;
  t1316 = -1.*t760*t1178;
  t1931 = t583 + t1316;
  t377 = Cos(var1[2]);
  t3681 = -1.*t486;
  t3720 = 1. + t3681;
  t3880 = -0.9063*t3720;
  t3900 = -1.078185*t486;
  t3924 = t3880 + t3900;
  t1988 = t377*t1931;
  t2336 = -1.*t760*t486;
  t2374 = t518*t1178;
  t2565 = t2336 + t2374;
  t2719 = t2104*t2565;
  t2785 = t1988 + t2719;
  t4399 = t2104*t1931;
  t4418 = t760*t486;
  t4427 = -1.*t518*t1178;
  t4654 = t4418 + t4427;
  t4700 = t377*t4654;
  t4709 = t4399 + t4700;
  t4998 = t486*t518;
  t5004 = t760*t1178;
  t5019 = t4998 + t5004;
  t5023 = t377*t5019;
  t5045 = t2104*t4654;
  t5090 = t5023 + t5045;
  t5337 = -1.*t2104*t4654;
  t5345 = t1988 + t5337;
  t5880 = 0.4999*t518;
  t5886 = t3924*t518;
  t5887 = -0.17188499999999995*t760*t1178;
  t5937 = t5880 + t5886 + t5887;
  t6007 = -1.*t760;
  t6266 = 1. + t6007;
  t6296 = -0.4999*t6266;
  t6341 = t760*t3924;
  t6465 = 0.17188499999999995*t518*t1178;
  t6488 = t6296 + t6341 + t6465;
  t6579 = -0.4999*t518;
  t6726 = -1.*t3924*t518;
  t6733 = 0.17188499999999995*t760*t1178;
  t6757 = t6579 + t6726 + t6733;
  t6811 = 0.4999*t760;
  t6831 = t6811 + t6341 + t6465;
  t5510 = -1.*t2104*t1931;
  t5538 = t377*t2565;
  t5549 = t5510 + t5538;
  t3229 = 0.4999*t1178;
  t3959 = t3924*t1178;
  t4202 = 0.17188499999999995*t486*t1178;
  t4210 = t3229 + t3959 + t4202;
  t4769 = 0.4999*t486;
  t4928 = t3924*t486;
  t4930 = Power(t1178,2);
  t4931 = -0.17188499999999995*t4930;
  t4937 = t4769 + t4928 + t4931;
  t5213 = -1.*t2104*t5019;
  t5219 = t5213 + t4700;
  t5332 = 0.85216*t4709*t5219;
  t5363 = 0.85216*t5345*t5090;
  t5611 = 0.85216*t4709*t5549;
  t5625 = 0.85216*t5345*t2785;
  t5816 = t5332 + t5363 + t5611 + t5625;
  t5975 = -1.*t5937*t4654;
  t6524 = -1.*t1931*t6488;
  t6553 = t5975 + t6524;
  t6573 = t5937*t4654;
  t6774 = t6757*t4654;
  t6801 = t1931*t6488;
  t6832 = t5019*t6831;
  t6835 = t6573 + t6774 + t6801 + t6832;
  t6841 = t5937*t5019;
  t6868 = t4654*t6488;
  t6911 = t6841 + t6868;
  t7004 = -1.*t1931*t5937;
  t7006 = -1.*t1931*t6757;
  t7038 = -1.*t4654*t6831;
  t7065 = -1.*t6488*t2565;
  t7137 = t7004 + t7006 + t7038 + t7065;
  t7523 = 0.85216*t5345*t6553;
  t7620 = 0.85216*t5345*t6835;
  t7626 = 0.85216*t6911*t5549;
  t7655 = 0.85216*t5219*t7137;
  t7795 = t7523 + t7620 + t7626 + t7655;
  t6569 = 0.85216*t4709*t6553;
  t6839 = 0.85216*t4709*t6835;
  t6949 = 0.85216*t6911*t2785;
  t7199 = 0.85216*t5090*t7137;
  t7229 = t6569 + t6839 + t6949 + t7199;
  t7434 = 0.85216*t4210*t5345;
  t7438 = 0.85216*t4937*t5549;
  t7441 = t7434 + t7438;
  t4711 = 0.85216*t4210*t4709;
  t4985 = 0.85216*t4937*t2785;
  t4987 = t4711 + t4985;
  t8006 = 0.85216*t4937*t6835;
  t8025 = 0.85216*t4210*t7137;
  t8030 = t8006 + t8025;
  p_output1[0]=var2[5]*(-0.5*(1.70432*t2785*t4709 + 1.70432*t4709*t5090)*var2[0] - 0.5*t5816*var2[1] - 0.5*t7229*var2[2] - 0.5*t4987*var2[5] + 0.07323676079999998*t2785*var2[6]);
  p_output1[1]=var2[5]*(-0.5*t5816*var2[0] - 0.5*(1.70432*t5219*t5345 + 1.70432*t5345*t5549)*var2[1] - 0.5*t7795*var2[2] - 0.5*t7441*var2[5] + 0.07323676079999998*t5549*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t7229*var2[0] - 0.5*t7795*var2[1] - 0.5*(1.70432*t6835*t6911 + 1.70432*t6553*t7137)*var2[2] - 0.5*t8030*var2[5] + 0.07323676079999998*t6835*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*t4987*var2[0] - 0.5*t7441*var2[1] - 0.5*t8030*var2[2])*var2[5];
  p_output1[6]=(0.07323676079999998*t2785*var2[0] + 0.07323676079999998*t5549*var2[1] + 0.07323676079999998*t6835*var2[2])*var2[5];
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

#include "Ce2_vec_L5_J6_amber3_PF.hh"

namespace SymFunction
{

void Ce2_vec_L5_J6_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
