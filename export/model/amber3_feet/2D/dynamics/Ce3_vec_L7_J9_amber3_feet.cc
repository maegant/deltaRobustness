/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:46 GMT-08:00
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
  double t576;
  double t516;
  double t523;
  double t631;
  double t721;
  double t554;
  double t650;
  double t660;
  double t404;
  double t734;
  double t766;
  double t819;
  double t1118;
  double t664;
  double t823;
  double t1026;
  double t373;
  double t1126;
  double t1192;
  double t1254;
  double t1950;
  double t2015;
  double t2264;
  double t2270;
  double t2284;
  double t2303;
  double t1759;
  double t1794;
  double t1857;
  double t1877;
  double t2315;
  double t2323;
  double t2424;
  double t2446;
  double t2480;
  double t2487;
  double t2499;
  double t2732;
  double t2900;
  double t2914;
  double t2922;
  double t3835;
  double t3840;
  double t3849;
  double t1046;
  double t1307;
  double t4240;
  double t4277;
  double t3239;
  double t3414;
  double t4857;
  double t4890;
  double t4480;
  double t4511;
  double t4519;
  double t4617;
  double t1715;
  double t1721;
  double t1736;
  double t2860;
  double t3167;
  double t5086;
  double t5110;
  double t5159;
  double t3973;
  double t3979;
  double t4062;
  double t4141;
  double t4795;
  double t4811;
  double t5286;
  double t5339;
  double t5393;
  double t5408;
  double t5482;
  double t5484;
  double t5495;
  double t5505;
  double t5529;
  double t6242;
  double t6260;
  double t6285;
  double t6293;
  double t5752;
  double t5824;
  double t5834;
  double t5853;
  double t5856;
  double t5875;
  t576 = Cos(var1[7]);
  t516 = Cos(var1[8]);
  t523 = Sin(var1[7]);
  t631 = Sin(var1[8]);
  t721 = Cos(var1[6]);
  t554 = t516*t523;
  t650 = t576*t631;
  t660 = t554 + t650;
  t404 = Sin(var1[6]);
  t734 = t576*t516;
  t766 = -1.*t523*t631;
  t819 = t734 + t766;
  t1118 = Cos(var1[2]);
  t664 = -1.*t404*t660;
  t823 = t721*t819;
  t1026 = t664 + t823;
  t373 = Sin(var1[2]);
  t1126 = t721*t660;
  t1192 = t404*t819;
  t1254 = t1126 + t1192;
  t1950 = -1.*t516;
  t2015 = 1. + t1950;
  t2264 = -1.3127*t2015;
  t2270 = -1.3127*t516;
  t2284 = -0.06*t631;
  t2303 = t2264 + t2270 + t2284;
  t1759 = -1.*t576;
  t1794 = 1. + t1759;
  t1857 = -0.9063*t1794;
  t1877 = -0.06*t516*t523;
  t2315 = t576*t2303;
  t2323 = t1857 + t1877 + t2315;
  t2424 = t721*t2323;
  t2446 = 0.06*t576*t516;
  t2480 = 0.9063*t523;
  t2487 = t523*t2303;
  t2499 = t2446 + t2480 + t2487;
  t2732 = -1.*t404*t2499;
  t2900 = -1.*t516*t523;
  t2914 = -1.*t576*t631;
  t2922 = t2900 + t2914;
  t3835 = t721*t2922;
  t3840 = -1.*t404*t819;
  t3849 = t3835 + t3840;
  t1046 = -1.*t373*t1026;
  t1307 = t1118*t1026;
  t4240 = -1.*t721*t660;
  t4277 = t4240 + t3840;
  t3239 = t404*t2922;
  t3414 = t3239 + t823;
  t4857 = 0.9063*t576;
  t4890 = t4857 + t1877 + t2315;
  t4480 = -0.06*t576*t516;
  t4511 = -0.9063*t523;
  t4519 = -1.*t523*t2303;
  t4617 = t4480 + t4511 + t4519;
  t1715 = -1.*t721;
  t1721 = 1. + t1715;
  t1736 = -0.4999*t1721;
  t2860 = t1736 + t2424 + t2732;
  t3167 = -1.*t404*t2922;
  t5086 = -1.*t576*t516;
  t5110 = t523*t631;
  t5159 = t5086 + t5110;
  t3973 = 0.4999*t404;
  t3979 = t404*t2323;
  t4062 = t721*t2499;
  t4141 = t3973 + t3979 + t4062;
  t4795 = -1.*t2499*t2922;
  t4811 = 0.4999*t819;
  t5286 = -1.*t2323*t5159;
  t5339 = -1.*t373*t3414;
  t5393 = t1118*t3849;
  t5408 = t5339 + t5393;
  t5482 = -0.03428571*var2[1]*t5408;
  t5484 = t1118*t3414;
  t5495 = t373*t3849;
  t5505 = t5484 + t5495;
  t5529 = -0.03428571*var2[0]*t5505;
  t6242 = -0.06*t576*t631;
  t6260 = t1877 + t6242;
  t6285 = 0.06*t523*t631;
  t6293 = t4480 + t6285;
  t5752 = t721*t5159;
  t5824 = t3167 + t5752;
  t5834 = -1.*t2860*t5824;
  t5853 = t404*t5159;
  t5856 = t3835 + t5853;
  t5875 = -1.*t4141*t5856;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.03428571*(t1307 - 1.*t1254*t373)*var2[0] - 0.03428571*(t1046 - 1.*t1118*t1254)*var2[1])*var2[8];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-0.03428571*(t1307 + t373*t4277)*var2[0] - 0.03428571*(t1046 + t1118*t4277)*var2[1] - 0.03428571*(-1.*t3849*t4141 - 1.*t3414*(t2424 + t2732 + 0.4999*t721) - 1.*t3849*(-0.4999*t404 - 1.*t2323*t404 - 1.*t2499*t721) - 1.*t2860*(t3167 - 1.*t721*t819))*var2[2])*var2[8];
  p_output1[7]=(t5482 + t5529 - 0.03428571*(t5834 + t5875 - 1.*t3849*(-1.*t404*t4890 + t4617*t721) - 1.*t3414*(t404*t4617 + t4890*t721))*var2[2] - 0.03428571*(-1.*t2922*t4617 + t4795 + t4811 + t5286 - 1.*t4890*t819)*var2[6])*var2[8];
  p_output1[8]=(t5482 + t5529 - 0.03428571*(t5834 + t5875 - 1.*t3414*(t404*t6293 + t6260*t721) - 1.*t3849*(-1.*t404*t6260 + t6293*t721))*var2[2] - 0.03428571*(t4795 + t4811 + t5286 - 1.*t2922*t6293 - 1.*t6260*t819)*var2[6] - 0.03428571*(0.9063*t516 + t2303*t516 + 0.06*t516*t631)*var2[7])*var2[8];
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

#include "Ce3_vec_L7_J9_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L7_J9_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
