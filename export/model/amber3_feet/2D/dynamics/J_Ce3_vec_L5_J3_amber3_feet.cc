/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:54 GMT-08:00
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
  double t77;
  double t454;
  double t699;
  double t689;
  double t163;
  double t319;
  double t374;
  double t383;
  double t384;
  double t565;
  double t626;
  double t656;
  double t690;
  double t734;
  double t738;
  double t872;
  double t881;
  double t895;
  double t899;
  double t990;
  double t1016;
  double t1033;
  double t784;
  double t817;
  double t824;
  double t855;
  double t909;
  double t1369;
  double t1371;
  double t1389;
  double t1175;
  double t1327;
  double t1342;
  double t1352;
  double t1264;
  double t1474;
  double t1475;
  double t1569;
  double t1269;
  double t1708;
  double t1759;
  double t1772;
  double t1397;
  double t1469;
  double t1826;
  double t2014;
  double t2045;
  double t2087;
  double t1863;
  double t1360;
  double t1912;
  double t1617;
  double t2171;
  double t1940;
  double t2266;
  double t2268;
  t77 = Cos(var1[6]);
  t454 = Sin(var1[6]);
  t699 = Sin(var1[2]);
  t689 = Cos(var1[2]);
  t163 = -1.*t77;
  t319 = 1. + t163;
  t374 = -0.4999*t319;
  t383 = -0.6493*t77;
  t384 = t374 + t383;
  t565 = t384*t454;
  t626 = 0.14939999999999998*t77*t454;
  t656 = t565 + t626;
  t690 = -1.*t689*t77;
  t734 = t699*t454;
  t738 = t690 + t734;
  t872 = t384*t77;
  t881 = Power(t454,2);
  t895 = -0.14939999999999998*t881;
  t899 = t872 + t895;
  t990 = -1.*t77*t699;
  t1016 = -1.*t689*t454;
  t1033 = t990 + t1016;
  t784 = 3.4261*t656*t738;
  t817 = t77*t699;
  t824 = t689*t454;
  t855 = t817 + t824;
  t909 = 3.4261*t855*t899;
  t1369 = -1.*t384*t454;
  t1371 = -0.14939999999999998*t77*t454;
  t1389 = t1369 + t1371;
  t1175 = 3.4261*t1033*t656;
  t1327 = Power(t77,2);
  t1342 = 0.14939999999999998*t1327;
  t1352 = 0. + t872 + t1342;
  t1264 = 3.4261*t738*t899;
  t1474 = t689*t77;
  t1475 = -1.*t699*t454;
  t1569 = t1474 + t1475;
  t1269 = t1175 + t1264;
  t1708 = 3.4261*t656*t1569;
  t1759 = 3.4261*t1033*t899;
  t1772 = t1708 + t1759;
  t1397 = 3.4261*t1389*t738;
  t1469 = 3.4261*t1033*t1389;
  t1826 = t872 + t1342;
  t2014 = -1.*t384*t77;
  t2045 = -0.14939999999999998*t1327;
  t2087 = 0. + t2014 + t2045;
  t1863 = 3.4261*t1826*t1033;
  t1360 = 3.4261*t1352*t1033;
  t1912 = 3.4261*t1826*t1569;
  t1617 = 3.4261*t1352*t1569;
  t2171 = 3.4261*t1389*t1569;
  t1940 = t1469 + t1175 + t1912 + t1264;
  t2266 = 3.4261*t1826*t855;
  t2268 = t2266 + t2171 + t1708 + t1759;
  p_output1[0]=(0.5*t1269*var2[0] + 0.5*(t784 + t909)*var2[1])*var2[2];
  p_output1[1]=(0.5*(t1175 + t1264 + t1469 + t1617)*var2[0] + 0.5*(t1360 + t1397 + t784 + t909)*var2[1])*var2[2];
  p_output1[2]=0.5*t1772*var2[2];
  p_output1[3]=0.5*t1269*var2[2];
  p_output1[4]=0.5*t1772*var2[0] + 0.5*t1269*var2[1];
  p_output1[5]=(0.5*t1940*var2[0] + 0.5*(t1397 + t1863 + t784 + t909)*var2[1])*var2[2];
  p_output1[6]=var2[2]*(0.5*(t1175 + t1264 + 6.8522*t1033*t1389 + t1617 + t1912 + 3.4261*t1569*t2087 + 3.4261*t1389*t855)*var2[0] + 0.5*(t1360 + t1863 + 3.4261*t1033*t2087 + t2171 + 6.8522*t1389*t738 + t784 + t909)*var2[1] + 0.5*(6.8522*Power(t1389,2) + 6.8522*t1352*t1826 + 6.8522*t1389*t656 + 6.8522*t2087*t899)*var2[2] - 0.25592966999999994*t2087*var2[6]);
  p_output1[7]=0.5*t2268*var2[2];
  p_output1[8]=0.5*t1940*var2[2];
  p_output1[9]=0.5*t2268*var2[0] + 0.5*t1940*var2[1] + (6.8522*t1826*t656 + 6.8522*t1389*t899)*var2[2] - 0.25592966999999994*t1389*var2[6];
  p_output1[10]=-0.25592966999999994*t1389*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L5_J3_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L5_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
