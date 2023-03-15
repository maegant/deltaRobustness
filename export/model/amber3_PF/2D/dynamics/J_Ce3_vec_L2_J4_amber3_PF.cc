/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:16 GMT-08:00
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
  double t802;
  double t67;
  double t514;
  double t813;
  double t540;
  double t851;
  double t955;
  double t961;
  double t1129;
  double t1181;
  double t1225;
  double t1313;
  double t1320;
  double t1384;
  double t1417;
  double t1460;
  double t1465;
  double t1485;
  double t1538;
  double t1715;
  double t1770;
  double t1771;
  double t1828;
  double t1848;
  double t1598;
  double t2096;
  double t2170;
  double t2211;
  double t1673;
  t802 = Cos(var1[2]);
  t67 = Cos(var1[3]);
  t514 = Sin(var1[2]);
  t813 = Sin(var1[3]);
  t540 = t67*t514;
  t851 = t802*t813;
  t955 = t540 + t851;
  t961 = -0.25592966999999994*var2[1]*t955;
  t1129 = -1.*t802*t67;
  t1181 = t514*t813;
  t1225 = t1129 + t1181;
  t1313 = -0.25592966999999994*var2[0]*t1225;
  t1320 = t961 + t1313;
  t1384 = var2[3]*t1320;
  t1417 = -1.*t67*t514;
  t1460 = -1.*t802*t813;
  t1465 = t1417 + t1460;
  t1485 = -0.25592966999999994*var2[3]*t1465;
  t1538 = -0.25592966999999994*var2[3]*t1225;
  t1715 = -1.*t67;
  t1770 = 1. + t1715;
  t1771 = -0.4999*t1770;
  t1828 = -0.6493*t67;
  t1848 = t1771 + t1828;
  t1598 = -0.25592966999999994*var2[0]*t1465;
  t2096 = -1.*t1848*t813;
  t2170 = -0.14939999999999998*t67*t813;
  t2211 = t2096 + t2170;
  t1673 = -0.25592966999999994*var2[1]*t1225;
  p_output1[0]=t1384;
  p_output1[1]=t1384;
  p_output1[2]=t1485;
  p_output1[3]=t1538;
  p_output1[4]=t1598 + t1673;
  p_output1[5]=t1384;
  p_output1[6]=(t1313 + t961 - 0.25592966999999994*(0. - 1.*t1848*t67 - 0.14939999999999998*Power(t67,2))*var2[2])*var2[3];
  p_output1[7]=t1485;
  p_output1[8]=t1538;
  p_output1[9]=-0.25592966999999994*t2211*var2[3];
  p_output1[10]=t1598 + t1673 - 0.25592966999999994*t2211*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L2_J4_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L2_J4_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
