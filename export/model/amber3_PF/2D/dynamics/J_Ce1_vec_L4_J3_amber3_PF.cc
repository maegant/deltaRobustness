/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:31:17 GMT-08:00
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
  double t142;
  double t957;
  double t824;
  double t191;
  double t1505;
  double t1530;
  double t1539;
  double t1557;
  double t1578;
  double t197;
  double t990;
  double t1253;
  double t1583;
  double t1616;
  double t1622;
  double t1648;
  double t1746;
  double t1665;
  double t1701;
  double t1718;
  double t1787;
  double t1791;
  double t1792;
  double t1818;
  double t1938;
  double t1948;
  double t2052;
  double t2208;
  double t2220;
  double t2237;
  double t2245;
  double t2257;
  double t2300;
  double t2242;
  double t2307;
  double t2463;
  double t2523;
  double t2634;
  double t2645;
  double t2670;
  double t3104;
  double t3200;
  double t3371;
  double t3519;
  double t3528;
  double t3599;
  double t3624;
  double t3718;
  double t2690;
  double t2873;
  double t2875;
  double t3717;
  double t3860;
  double t1864;
  double t2388;
  double t2409;
  double t4284;
  double t4350;
  double t4355;
  t142 = Cos(var1[5]);
  t957 = Sin(var1[5]);
  t824 = Cos(var1[2]);
  t191 = Sin(var1[2]);
  t1505 = -1.*t142;
  t1530 = 1. + t1505;
  t1539 = -0.4999*t1530;
  t1557 = -0.6493*t142;
  t1578 = t1539 + t1557;
  t197 = -1.*t142*t191;
  t990 = -1.*t824*t957;
  t1253 = t197 + t990;
  t1583 = t1578*t957;
  t1616 = 0.14939999999999998*t142*t957;
  t1622 = t1583 + t1616;
  t1648 = 3.4261*t1253*t1622;
  t1746 = t1578*t142;
  t1665 = -1.*t824*t142;
  t1701 = t191*t957;
  t1718 = t1665 + t1701;
  t1787 = Power(t957,2);
  t1791 = -0.14939999999999998*t1787;
  t1792 = t1746 + t1791;
  t1818 = 3.4261*t1718*t1792;
  t1938 = -1.*t1578*t957;
  t1948 = -0.14939999999999998*t142*t957;
  t2052 = t1938 + t1948;
  t2208 = 3.4261*t1253*t2052;
  t2220 = Power(t142,2);
  t2237 = 0.14939999999999998*t2220;
  t2245 = t824*t142;
  t2257 = -1.*t191*t957;
  t2300 = t2245 + t2257;
  t2242 = t1746 + t2237;
  t2307 = 3.4261*t2242*t2300;
  t2463 = 0. + t1746 + t2237;
  t2523 = 3.4261*t2463*t2300;
  t2634 = t142*t191;
  t2645 = t824*t957;
  t2670 = t2634 + t2645;
  t3104 = 3.4261*t1622*t2300;
  t3200 = 3.4261*t1253*t1792;
  t3371 = 3.4261*t2242*t2670;
  t3519 = 3.4261*t2052*t2300;
  t3528 = t3371 + t3519 + t3104 + t3200;
  t3599 = 3.4261*t1622*t1718;
  t3624 = 3.4261*t2670*t1792;
  t3718 = 3.4261*t2052*t1718;
  t2690 = -1.*t1578*t142;
  t2873 = -0.14939999999999998*t2220;
  t2875 = 0. + t2690 + t2873;
  t3717 = 3.4261*t2242*t1253;
  t3860 = 3.4261*t2463*t1253;
  t1864 = t1648 + t1818;
  t2388 = t2208 + t1648 + t2307 + t1818;
  t2409 = -0.5*var2[5]*t2388;
  t4284 = 6.8522*t2242*t1622;
  t4350 = 6.8522*t2052*t1792;
  t4355 = t4284 + t4350;
  p_output1[0]=var2[2]*(t2409 - 0.5*t1864*var2[2]);
  p_output1[1]=var2[2]*(-0.5*(t1648 + t1818 + t2208 + t2523)*var2[2] - 0.5*(t1648 + t1818 + 6.8522*t1253*t2052 + t2307 + t2523 + 3.4261*t2052*t2670 + 3.4261*t2300*t2875)*var2[5]);
  p_output1[2]=-1.*(t3104 + t3200)*var2[2] - 0.5*t3528*var2[5];
  p_output1[3]=-0.5*t3528*var2[2];
  p_output1[4]=var2[2]*(-0.5*(t3599 + t3624)*var2[2] - 0.5*(t3599 + t3624 + t3717 + t3718)*var2[5]);
  p_output1[5]=var2[2]*(-0.5*(t3599 + t3624 + t3718 + t3860)*var2[2] - 0.5*(6.8522*t1718*t2052 + 3.4261*t1253*t2875 + t3519 + t3599 + t3624 + t3717 + t3860)*var2[5]);
  p_output1[6]=t2409 - 1.*t1864*var2[2];
  p_output1[7]=-0.5*t2388*var2[2];
  p_output1[8]=-0.5*(6.8522*t1622*t2052 + 6.8522*Power(t2052,2) + 6.8522*t2242*t2463 + 6.8522*t1792*t2875)*var2[2]*var2[5];
  p_output1[9]=-0.5*t4355*var2[5];
  p_output1[10]=-0.5*t4355*var2[2];
  p_output1[11]=0.25592966999999994*t2875*var2[2]*var2[5];
  p_output1[12]=0.25592966999999994*t2052*var2[5];
  p_output1[13]=0.25592966999999994*t2052*var2[2];
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

#include "J_Ce1_vec_L4_J3_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L4_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
