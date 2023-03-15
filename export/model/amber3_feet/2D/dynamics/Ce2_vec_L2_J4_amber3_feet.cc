/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:18 GMT-08:00
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
  double t316;
  double t336;
  double t423;
  double t424;
  double t453;
  double t707;
  double t769;
  double t997;
  double t1103;
  double t1138;
  double t1327;
  double t1388;
  double t1406;
  double t2151;
  double t2169;
  double t2172;
  double t2177;
  double t2180;
  double t2204;
  double t1837;
  double t1924;
  double t1939;
  double t1281;
  double t1530;
  double t1537;
  double t1541;
  double t1598;
  double t1813;
  double t1943;
  double t2054;
  double t2343;
  double t2435;
  double t2488;
  double t2673;
  double t2752;
  double t2856;
  double t2217;
  double t2279;
  double t2300;
  double t2920;
  double t2957;
  double t3098;
  double t2310;
  double t2523;
  double t2864;
  double t3142;
  double t3305;
  double t3444;
  double t3475;
  double t3480;
  double t3502;
  double t3503;
  t316 = Cos(var1[3]);
  t336 = Sin(var1[2]);
  t423 = -1.*t316*t336;
  t424 = Cos(var1[2]);
  t453 = Sin(var1[3]);
  t707 = -1.*t424*t453;
  t769 = t423 + t707;
  t997 = t424*t316;
  t1103 = -1.*t336*t453;
  t1138 = t997 + t1103;
  t1327 = t316*t336;
  t1388 = t424*t453;
  t1406 = t1327 + t1388;
  t2151 = -1.*t316;
  t2169 = 1. + t2151;
  t2172 = -0.4999*t2169;
  t2177 = -0.6493*t316;
  t2180 = t2172 + t2177;
  t2204 = t2180*t316;
  t1837 = -1.*t424*t316;
  t1924 = t336*t453;
  t1939 = t1837 + t1924;
  t1281 = 6.8522*t769*t1138;
  t1530 = Power(t769,2);
  t1537 = 3.4261*t1530;
  t1541 = 3.4261*t769*t1406;
  t1598 = Power(t1138,2);
  t1813 = 3.4261*t1598;
  t1943 = 3.4261*t1138*t1939;
  t2054 = t1537 + t1541 + t1813 + t1943;
  t2343 = -1.*t2180*t453;
  t2435 = -0.14939999999999998*t316*t453;
  t2488 = t2343 + t2435;
  t2673 = t2180*t453;
  t2752 = 0.14939999999999998*t316*t453;
  t2856 = t2673 + t2752;
  t2217 = Power(t316,2);
  t2279 = 0.14939999999999998*t2217;
  t2300 = t2204 + t2279;
  t2920 = Power(t453,2);
  t2957 = -0.14939999999999998*t2920;
  t3098 = t2204 + t2957;
  t2310 = 3.4261*t2300*t1406;
  t2523 = 3.4261*t2488*t1138;
  t2864 = 3.4261*t2856*t1138;
  t3142 = 3.4261*t769*t3098;
  t3305 = t2310 + t2523 + t2864 + t3142;
  t3444 = 3.4261*t769*t2488;
  t3475 = 3.4261*t769*t2856;
  t3480 = 3.4261*t2300*t1138;
  t3502 = 3.4261*t1939*t3098;
  t3503 = t3444 + t3475 + t3480 + t3502;
  p_output1[0]=var2[3]*(-0.5*(t1281 + 6.8522*t1138*t1406)*var2[0] - 0.5*t2054*var2[1] - 0.5*t3305*var2[2] + 0.25592966999999994*t769*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t2054*var2[0] - 0.5*(t1281 + 6.8522*t1939*t769)*var2[1] - 0.5*t3503*var2[2] + 0.25592966999999994*t1939*var2[3]);
  p_output1[2]=var2[3]*(-0.5*t3305*var2[0] - 0.5*t3503*var2[1] - 0.5*(6.8522*t2300*t2856 + 6.8522*t2488*t3098)*var2[2] + 0.25592966999999994*t2488*var2[3]);
  p_output1[3]=(0.25592966999999994*t769*var2[0] + 0.25592966999999994*t1939*var2[1] + 0.25592966999999994*t2488*var2[2])*var2[3];
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce2_vec_L2_J4_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L2_J4_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
