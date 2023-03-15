/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:54 GMT-08:00
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
  double t150;
  double t679;
  double t616;
  double t525;
  double t833;
  double t915;
  double t986;
  double t1018;
  double t1083;
  double t560;
  double t738;
  double t790;
  double t1435;
  double t1440;
  double t1448;
  double t1482;
  double t1898;
  double t1495;
  double t1569;
  double t1885;
  double t2098;
  double t2137;
  double t2189;
  double t2236;
  double t2395;
  double t2419;
  double t2424;
  double t2475;
  double t2525;
  double t2545;
  double t2782;
  double t2846;
  double t2868;
  double t2695;
  double t2950;
  double t3174;
  double t3184;
  double t3474;
  double t3547;
  double t3564;
  double t3887;
  double t4000;
  double t4049;
  double t4109;
  double t4130;
  double t4660;
  double t4689;
  double t4880;
  double t3657;
  double t3663;
  double t3667;
  double t4875;
  double t5030;
  double t2298;
  double t3023;
  double t3093;
  double t5929;
  double t5949;
  double t5977;
  t150 = Cos(var1[3]);
  t679 = Sin(var1[3]);
  t616 = Cos(var1[2]);
  t525 = Sin(var1[2]);
  t833 = -1.*t150;
  t915 = 1. + t833;
  t986 = -0.4999*t915;
  t1018 = -0.6493*t150;
  t1083 = t986 + t1018;
  t560 = -1.*t150*t525;
  t738 = -1.*t616*t679;
  t790 = t560 + t738;
  t1435 = t1083*t679;
  t1440 = 0.14939999999999998*t150*t679;
  t1448 = t1435 + t1440;
  t1482 = 3.4261*t790*t1448;
  t1898 = t1083*t150;
  t1495 = -1.*t616*t150;
  t1569 = t525*t679;
  t1885 = t1495 + t1569;
  t2098 = Power(t679,2);
  t2137 = -0.14939999999999998*t2098;
  t2189 = t1898 + t2137;
  t2236 = 3.4261*t1885*t2189;
  t2395 = -1.*t1083*t679;
  t2419 = -0.14939999999999998*t150*t679;
  t2424 = t2395 + t2419;
  t2475 = 3.4261*t790*t2424;
  t2525 = Power(t150,2);
  t2545 = 0.14939999999999998*t2525;
  t2782 = t616*t150;
  t2846 = -1.*t525*t679;
  t2868 = t2782 + t2846;
  t2695 = t1898 + t2545;
  t2950 = 3.4261*t2695*t2868;
  t3174 = 0. + t1898 + t2545;
  t3184 = 3.4261*t3174*t2868;
  t3474 = t150*t525;
  t3547 = t616*t679;
  t3564 = t3474 + t3547;
  t3887 = 3.4261*t1448*t2868;
  t4000 = 3.4261*t790*t2189;
  t4049 = 3.4261*t2695*t3564;
  t4109 = 3.4261*t2424*t2868;
  t4130 = t4049 + t4109 + t3887 + t4000;
  t4660 = 3.4261*t1448*t1885;
  t4689 = 3.4261*t3564*t2189;
  t4880 = 3.4261*t2424*t1885;
  t3657 = -1.*t1083*t150;
  t3663 = -0.14939999999999998*t2525;
  t3667 = 0. + t3657 + t3663;
  t4875 = 3.4261*t2695*t790;
  t5030 = 3.4261*t3174*t790;
  t2298 = t1482 + t2236;
  t3023 = t2475 + t1482 + t2950 + t2236;
  t3093 = -0.5*var2[3]*t3023;
  t5929 = 6.8522*t2695*t1448;
  t5949 = 6.8522*t2424*t2189;
  t5977 = t5929 + t5949;
  p_output1[0]=var2[2]*(t3093 - 0.5*t2298*var2[2]);
  p_output1[1]=var2[2]*(-0.5*(t1482 + t2236 + t2475 + t3184)*var2[2] - 0.5*(t1482 + t2236 + t2950 + t3184 + 3.4261*t2424*t3564 + 3.4261*t2868*t3667 + 6.8522*t2424*t790)*var2[3]);
  p_output1[2]=-1.*(t3887 + t4000)*var2[2] - 0.5*t4130*var2[3];
  p_output1[3]=-0.5*t4130*var2[2];
  p_output1[4]=var2[2]*(-0.5*(t4660 + t4689)*var2[2] - 0.5*(t4660 + t4689 + t4875 + t4880)*var2[3]);
  p_output1[5]=var2[2]*(-0.5*(t4660 + t4689 + t4880 + t5030)*var2[2] - 0.5*(6.8522*t1885*t2424 + t4109 + t4660 + t4689 + t4875 + t5030 + 3.4261*t3667*t790)*var2[3]);
  p_output1[6]=t3093 - 1.*t2298*var2[2];
  p_output1[7]=-0.5*t3023*var2[2];
  p_output1[8]=-0.5*(6.8522*t1448*t2424 + 6.8522*Power(t2424,2) + 6.8522*t2695*t3174 + 6.8522*t2189*t3667)*var2[2]*var2[3];
  p_output1[9]=-0.5*t5977*var2[3];
  p_output1[10]=-0.5*t5977*var2[2];
  p_output1[11]=0.25592966999999994*t3667*var2[2]*var2[3];
  p_output1[12]=0.25592966999999994*t2424*var2[3];
  p_output1[13]=0.25592966999999994*t2424*var2[2];
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

#include "J_Ce1_vec_L2_J3_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L2_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
