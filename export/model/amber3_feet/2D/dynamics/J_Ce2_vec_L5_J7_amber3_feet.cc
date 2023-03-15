/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:27:01 GMT-08:00
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
  double t194;
  double t201;
  double t191;
  double t229;
  double t492;
  double t506;
  double t519;
  double t438;
  double t443;
  double t466;
  double t197;
  double t291;
  double t371;
  double t534;
  double t541;
  double t574;
  double t866;
  double t898;
  double t905;
  double t921;
  double t942;
  double t1175;
  double t375;
  double t520;
  double t597;
  double t608;
  double t638;
  double t669;
  double t674;
  double t684;
  double t687;
  double t690;
  double t702;
  double t796;
  double t805;
  double t838;
  double t846;
  double t957;
  double t976;
  double t992;
  double t1111;
  double t1127;
  double t1162;
  double t1170;
  double t1193;
  double t1196;
  double t1232;
  double t1233;
  double t1286;
  double t1290;
  double t1314;
  double t1351;
  double t1744;
  double t1757;
  double t1800;
  double t1901;
  double t1917;
  double t1942;
  double t1943;
  double t1944;
  double t1966;
  double t1980;
  double t1984;
  double t1986;
  double t1994;
  double t2099;
  double t2104;
  double t2112;
  double t2114;
  double t2115;
  double t2138;
  double t1511;
  double t1516;
  double t1538;
  double t2139;
  double t1636;
  double t2221;
  double t2262;
  double t1946;
  double t1067;
  double t1374;
  double t2402;
  double t2403;
  double t1375;
  double t2173;
  double t2270;
  double t2318;
  double t2331;
  double t2337;
  double t2356;
  double t1443;
  double t1503;
  double t1592;
  double t1659;
  double t1693;
  double t2015;
  double t2440;
  double t2694;
  double t2711;
  double t2718;
  double t2789;
  double t2796;
  t194 = Cos(var1[6]);
  t201 = Sin(var1[2]);
  t191 = Cos(var1[2]);
  t229 = Sin(var1[6]);
  t492 = t191*t194;
  t506 = -1.*t201*t229;
  t519 = t492 + t506;
  t438 = -1.*t194*t201;
  t443 = -1.*t191*t229;
  t466 = t438 + t443;
  t197 = -1.*t191*t194;
  t291 = t201*t229;
  t371 = t197 + t291;
  t534 = t194*t201;
  t541 = t191*t229;
  t574 = t534 + t541;
  t866 = -1.*t194;
  t898 = 1. + t866;
  t905 = -0.4999*t898;
  t921 = -0.6493*t194;
  t942 = t905 + t921;
  t1175 = t942*t194;
  t375 = 0.25592966999999994*var2[6]*t371;
  t520 = 10.2783*t466*t519;
  t597 = 3.4261*t574*t519;
  t608 = 10.2783*t466*t371;
  t638 = 3.4261*t574*t371;
  t669 = t520 + t597 + t608 + t638;
  t674 = -0.5*var2[1]*t669;
  t684 = Power(t466,2);
  t687 = 6.8522*t684;
  t690 = 6.8522*t466*t574;
  t702 = Power(t519,2);
  t796 = 6.8522*t702;
  t805 = 6.8522*t519*t371;
  t838 = t687 + t690 + t796 + t805;
  t846 = -0.5*var2[0]*t838;
  t957 = -1.*t942*t229;
  t976 = -0.14939999999999998*t194*t229;
  t992 = t957 + t976;
  t1111 = t942*t229;
  t1127 = 0.14939999999999998*t194*t229;
  t1162 = t1111 + t1127;
  t1170 = 3.4261*t466*t1162;
  t1193 = Power(t194,2);
  t1196 = 0.14939999999999998*t1193;
  t1232 = t1175 + t1196;
  t1233 = 3.4261*t1232*t519;
  t1286 = Power(t229,2);
  t1290 = -0.14939999999999998*t1286;
  t1314 = t1175 + t1290;
  t1351 = 3.4261*t371*t1314;
  t1744 = 6.8522*t466*t519;
  t1757 = 6.8522*t574*t519;
  t1800 = t1744 + t1757;
  t1901 = 3.4261*t684;
  t1917 = 3.4261*t466*t574;
  t1942 = 3.4261*t702;
  t1943 = 3.4261*t519*t371;
  t1944 = t1901 + t1917 + t1942 + t1943;
  t1966 = 3.4261*t1232*t574;
  t1980 = 3.4261*t992*t519;
  t1984 = 3.4261*t1162*t519;
  t1986 = 3.4261*t466*t1314;
  t1994 = t1966 + t1980 + t1984 + t1986;
  t2099 = 0.25592966999999994*var2[6]*t574;
  t2104 = -0.5*var2[0]*t669;
  t2112 = Power(t371,2);
  t2114 = 6.8522*t2112;
  t2115 = t687 + t690 + t805 + t2114;
  t2138 = -0.5*var2[1]*t2115;
  t1511 = -1.*t942*t194;
  t1516 = -0.14939999999999998*t1193;
  t1538 = 0. + t1511 + t1516;
  t2139 = 3.4261*t1232*t466;
  t1636 = 0. + t1175 + t1196;
  t2221 = 3.4261*t1162*t371;
  t2262 = 3.4261*t574*t1314;
  t1946 = -0.5*var2[6]*t1944;
  t1067 = 3.4261*t466*t992;
  t1374 = t1067 + t1170 + t1233 + t1351;
  t2402 = 6.8522*t466*t371;
  t2403 = t1744 + t2402;
  t1375 = -0.5*var2[2]*t1374;
  t2173 = 3.4261*t992*t371;
  t2270 = t2139 + t2173 + t2221 + t2262;
  t2318 = 3.4261*t1538*t466;
  t2331 = 3.4261*t1636*t466;
  t2337 = 6.8522*t992*t371;
  t2356 = t2318 + t2139 + t2331 + t1980 + t2337 + t2221 + t2262;
  t1443 = 6.8522*t466*t992;
  t1503 = 3.4261*t574*t992;
  t1592 = 3.4261*t1538*t519;
  t1659 = 3.4261*t1636*t519;
  t1693 = t1443 + t1503 + t1170 + t1592 + t1233 + t1659 + t1351;
  t2015 = -0.5*var2[6]*t1994;
  t2440 = -0.5*var2[6]*t1374;
  t2694 = 6.8522*t1232*t1162;
  t2711 = 6.8522*t992*t1314;
  t2718 = t2694 + t2711;
  t2789 = 0.25592966999999994*var2[1]*t574;
  t2796 = 0.25592966999999994*var2[0]*t371;
  p_output1[0]=(t1375 + t375 + t674 + t846)*var2[6];
  p_output1[1]=(t375 + t674 + t846 - 0.5*t1693*var2[2])*var2[6];
  p_output1[2]=-0.5*t1800*var2[6];
  p_output1[3]=t1946;
  p_output1[4]=t2015;
  p_output1[5]=-0.5*t1800*var2[0] - 0.5*t1944*var2[1] - 0.5*t1994*var2[2] + 0.5118593399999999*t466*var2[6];
  p_output1[6]=(t2099 + t2104 + t2138 - 0.5*t2270*var2[2])*var2[6];
  p_output1[7]=(t2099 + t2104 + t2138 - 0.5*t2356*var2[2])*var2[6];
  p_output1[8]=t1946;
  p_output1[9]=-0.5*t2403*var2[6];
  p_output1[10]=t2440;
  p_output1[11]=t1375 - 0.5*t1944*var2[0] - 0.5*t2403*var2[1] + 0.5118593399999999*t371*var2[6];
  p_output1[12]=(-0.5*t1374*var2[0] - 0.5*t2270*var2[1])*var2[6];
  p_output1[13]=var2[6]*(-0.5*t1693*var2[0] - 0.5*t2356*var2[1] - 0.5*(6.8522*t1314*t1538 + 6.8522*t1232*t1636 + 6.8522*t1162*t992 + 6.8522*Power(t992,2))*var2[2] + 0.25592966999999994*t1538*var2[6]);
  p_output1[14]=t2015;
  p_output1[15]=t2440;
  p_output1[16]=-0.5*t2718*var2[6];
  p_output1[17]=-0.5*t1994*var2[0] - 0.5*t1374*var2[1] - 0.5*t2718*var2[2] + 0.5118593399999999*t992*var2[6];
  p_output1[18]=(t2789 + t2796)*var2[6];
  p_output1[19]=(t2789 + t2796 + 0.25592966999999994*t1538*var2[2])*var2[6];
  p_output1[20]=0.25592966999999994*t466*var2[6];
  p_output1[21]=t375;
  p_output1[22]=0.25592966999999994*t992*var2[6];
  p_output1[23]=0.25592966999999994*t466*var2[0] + 0.25592966999999994*t371*var2[1] + 0.25592966999999994*t992*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 24, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L5_J7_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L5_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
