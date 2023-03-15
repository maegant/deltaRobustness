/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:26:55 GMT-08:00
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
  double t52;
  double t130;
  double t27;
  double t184;
  double t375;
  double t405;
  double t438;
  double t325;
  double t338;
  double t371;
  double t101;
  double t229;
  double t291;
  double t492;
  double t506;
  double t541;
  double t775;
  double t783;
  double t796;
  double t805;
  double t834;
  double t311;
  double t443;
  double t574;
  double t608;
  double t638;
  double t640;
  double t661;
  double t669;
  double t674;
  double t684;
  double t687;
  double t690;
  double t702;
  double t712;
  double t774;
  double t838;
  double t846;
  double t866;
  double t898;
  double t905;
  double t921;
  double t942;
  double t976;
  double t992;
  double t1351;
  double t1392;
  double t1440;
  double t1511;
  double t1516;
  double t1538;
  double t1592;
  double t1599;
  double t1791;
  double t1796;
  double t1800;
  double t1829;
  double t1848;
  double t1872;
  double t1193;
  double t1196;
  double t1232;
  double t1154;
  double t1162;
  double t1170;
  double t1901;
  double t1917;
  double t1615;
  double t1994;
  double t1999;
  double t999;
  double t1921;
  double t1946;
  double t1966;
  double t1972;
  double t1175;
  double t1233;
  double t1261;
  double t1710;
  double t1715;
  double t1718;
  double t1017;
  double t2305;
  double t2318;
  double t2331;
  double t2356;
  double t1757;
  double t2093;
  t52 = Cos(var1[6]);
  t130 = Sin(var1[2]);
  t27 = Cos(var1[2]);
  t184 = Sin(var1[6]);
  t375 = t27*t52;
  t405 = -1.*t130*t184;
  t438 = t375 + t405;
  t325 = -1.*t52*t130;
  t338 = -1.*t27*t184;
  t371 = t325 + t338;
  t101 = -1.*t27*t52;
  t229 = t130*t184;
  t291 = t101 + t229;
  t492 = t52*t130;
  t506 = t27*t184;
  t541 = t492 + t506;
  t775 = -1.*t52;
  t783 = 1. + t775;
  t796 = -0.4999*t783;
  t805 = -0.6493*t52;
  t834 = t796 + t805;
  t311 = 0.25592966999999994*var2[6]*t291;
  t443 = 10.2783*t371*t438;
  t574 = 3.4261*t541*t438;
  t608 = 10.2783*t371*t291;
  t638 = 3.4261*t541*t291;
  t640 = t443 + t574 + t608 + t638;
  t661 = -0.5*var2[1]*t640;
  t669 = Power(t371,2);
  t674 = 6.8522*t669;
  t684 = 6.8522*t371*t541;
  t687 = Power(t438,2);
  t690 = 6.8522*t687;
  t702 = 6.8522*t438*t291;
  t712 = t674 + t684 + t690 + t702;
  t774 = -0.5*var2[0]*t712;
  t838 = t834*t184;
  t846 = 0.14939999999999998*t52*t184;
  t866 = t838 + t846;
  t898 = 3.4261*t371*t866;
  t905 = t834*t52;
  t921 = Power(t184,2);
  t942 = -0.14939999999999998*t921;
  t976 = t905 + t942;
  t992 = 3.4261*t291*t976;
  t1351 = 6.8522*t371*t438;
  t1392 = 6.8522*t541*t438;
  t1440 = t1351 + t1392;
  t1511 = 3.4261*t669;
  t1516 = 3.4261*t371*t541;
  t1538 = 3.4261*t687;
  t1592 = 3.4261*t438*t291;
  t1599 = t1511 + t1516 + t1538 + t1592;
  t1791 = 0.25592966999999994*var2[6]*t541;
  t1796 = -0.5*var2[0]*t640;
  t1800 = Power(t291,2);
  t1829 = 6.8522*t1800;
  t1848 = t674 + t684 + t702 + t1829;
  t1872 = -0.5*var2[1]*t1848;
  t1193 = Power(t52,2);
  t1196 = 0.14939999999999998*t1193;
  t1232 = 0. + t905 + t1196;
  t1154 = -1.*t834*t184;
  t1162 = -0.14939999999999998*t52*t184;
  t1170 = t1154 + t1162;
  t1901 = 3.4261*t866*t291;
  t1917 = 3.4261*t541*t976;
  t1615 = -0.5*var2[2]*t1599;
  t1994 = 6.8522*t371*t291;
  t1999 = t1351 + t1994;
  t999 = t898 + t992;
  t1921 = t1901 + t1917;
  t1946 = 3.4261*t1232*t371;
  t1966 = 3.4261*t1170*t291;
  t1972 = t1946 + t1966 + t1901 + t1917;
  t1175 = 3.4261*t371*t1170;
  t1233 = 3.4261*t1232*t438;
  t1261 = t1175 + t898 + t1233 + t992;
  t1710 = 3.4261*t866*t438;
  t1715 = 3.4261*t371*t976;
  t1718 = t1710 + t1715;
  t1017 = -0.5*var2[2]*t999;
  t2305 = 0.25592966999999994*var2[1]*t541;
  t2318 = 0.25592966999999994*var2[0]*t291;
  t2331 = t2305 + t2318;
  t2356 = var2[2]*t2331;
  t1757 = 0.25592966999999994*var2[2]*t371;
  t2093 = 0.25592966999999994*var2[2]*t291;
  p_output1[0]=(t1017 + t311 + t661 + t774)*var2[2];
  p_output1[1]=var2[2]*(t311 + t661 + t774 - 0.5*t1261*var2[2]);
  p_output1[2]=-0.5*t1440*var2[2];
  p_output1[3]=t1615;
  p_output1[4]=-0.5*t1440*var2[0] - 0.5*t1599*var2[1] - 1.*t1718*var2[2] + 0.25592966999999994*t371*var2[6];
  p_output1[5]=t1757;
  p_output1[6]=var2[2]*(t1791 + t1796 + t1872 - 0.5*t1921*var2[2]);
  p_output1[7]=var2[2]*(t1791 + t1796 + t1872 - 0.5*t1972*var2[2]);
  p_output1[8]=t1615;
  p_output1[9]=-0.5*t1999*var2[2];
  p_output1[10]=t311 - 0.5*t1599*var2[0] - 0.5*t1999*var2[1] - 1.*t999*var2[2];
  p_output1[11]=t2093;
  p_output1[12]=(-0.5*t999*var2[0] - 0.5*t1921*var2[1])*var2[2];
  p_output1[13]=(-0.5*t1261*var2[0] - 0.5*t1972*var2[1])*var2[2];
  p_output1[14]=-0.5*t1718*var2[2];
  p_output1[15]=t1017;
  p_output1[16]=-0.5*t1718*var2[0] - 0.5*t999*var2[1];
  p_output1[17]=t2356;
  p_output1[18]=t2356;
  p_output1[19]=t1757;
  p_output1[20]=t2093;
  p_output1[21]=0.25592966999999994*t371*var2[0] + 0.25592966999999994*t291*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L5_J3_amber3_feet.hh"

namespace RightSS1
{

void J_Ce2_vec_L5_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
