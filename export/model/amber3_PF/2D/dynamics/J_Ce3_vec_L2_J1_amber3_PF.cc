/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:11 GMT-08:00
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
  double t163;
  double t274;
  double t71;
  double t286;
  double t442;
  double t520;
  double t540;
  double t382;
  double t417;
  double t437;
  double t256;
  double t314;
  double t315;
  double t625;
  double t641;
  double t657;
  double t1131;
  double t1155;
  double t1181;
  double t1230;
  double t1237;
  double t363;
  double t541;
  double t717;
  double t813;
  double t819;
  double t825;
  double t838;
  double t851;
  double t907;
  double t908;
  double t929;
  double t946;
  double t961;
  double t1035;
  double t1096;
  double t1260;
  double t1313;
  double t1320;
  double t1346;
  double t1460;
  double t1465;
  double t1490;
  double t1513;
  double t1520;
  double t1928;
  double t1963;
  double t2000;
  double t2028;
  double t2031;
  double t2085;
  double t2087;
  double t2091;
  double t1652;
  double t1658;
  double t1673;
  double t1681;
  double t1686;
  double t1695;
  double t2234;
  double t2253;
  double t1697;
  double t1707;
  double t1847;
  double t1848;
  double t1858;
  double t1880;
  double t1901;
  double t2066;
  double t2178;
  double t2578;
  double t2580;
  double t2602;
  double t2211;
  t163 = Cos(var1[3]);
  t274 = Sin(var1[2]);
  t71 = Cos(var1[2]);
  t286 = Sin(var1[3]);
  t442 = t71*t163;
  t520 = -1.*t274*t286;
  t540 = t442 + t520;
  t382 = -1.*t163*t274;
  t417 = -1.*t71*t286;
  t437 = t382 + t417;
  t256 = -1.*t71*t163;
  t314 = t274*t286;
  t315 = t256 + t314;
  t625 = t163*t274;
  t641 = t71*t286;
  t657 = t625 + t641;
  t1131 = -1.*t163;
  t1155 = 1. + t1131;
  t1181 = -0.4999*t1155;
  t1230 = -0.6493*t163;
  t1237 = t1181 + t1230;
  t363 = -0.25592966999999994*var2[3]*t315;
  t541 = 10.2783*t437*t540;
  t717 = 3.4261*t657*t540;
  t813 = 10.2783*t437*t315;
  t819 = 3.4261*t657*t315;
  t825 = t541 + t717 + t813 + t819;
  t838 = 0.5*var2[1]*t825;
  t851 = Power(t437,2);
  t907 = 6.8522*t851;
  t908 = 6.8522*t437*t657;
  t929 = Power(t540,2);
  t946 = 6.8522*t929;
  t961 = 6.8522*t540*t315;
  t1035 = t907 + t908 + t946 + t961;
  t1096 = 0.5*var2[0]*t1035;
  t1260 = t1237*t286;
  t1313 = 0.14939999999999998*t163*t286;
  t1320 = t1260 + t1313;
  t1346 = 3.4261*t437*t1320;
  t1460 = t1237*t163;
  t1465 = Power(t286,2);
  t1490 = -0.14939999999999998*t1465;
  t1513 = t1460 + t1490;
  t1520 = 3.4261*t315*t1513;
  t1928 = 3.4261*t851;
  t1963 = 3.4261*t437*t657;
  t2000 = 3.4261*t929;
  t2028 = 3.4261*t540*t315;
  t2031 = t1928 + t1963 + t2000 + t2028;
  t2085 = 3.4261*t1320*t540;
  t2087 = 3.4261*t437*t1513;
  t2091 = t2085 + t2087;
  t1652 = -1.*t1237*t286;
  t1658 = -0.14939999999999998*t163*t286;
  t1673 = t1652 + t1658;
  t1681 = 3.4261*t437*t1673;
  t1686 = Power(t163,2);
  t1695 = 0.14939999999999998*t1686;
  t2234 = t1460 + t1695;
  t2253 = 3.4261*t2234*t540;
  t1697 = 0. + t1460 + t1695;
  t1707 = 3.4261*t1697*t540;
  t1847 = -0.25592966999999994*var2[3]*t437;
  t1848 = 6.8522*t437*t540;
  t1858 = 6.8522*t657*t540;
  t1880 = t1848 + t1858;
  t1901 = var2[0]*t1880;
  t2066 = 0.5*var2[1]*t2031;
  t2178 = 0.5*var2[0]*t2031;
  t2578 = 3.4261*t2234*t657;
  t2580 = 3.4261*t1673*t540;
  t2602 = t2578 + t2580 + t2085 + t2087;
  t2211 = -0.25592966999999994*var2[0]*t437;
  p_output1[0]=var2[0]*(t1096 + t363 + t838 + 0.5*(t1346 + t1520)*var2[2]);
  p_output1[1]=var2[0]*(t1096 + t363 + t838 + 0.5*(t1346 + t1520 + t1681 + t1707)*var2[2]);
  p_output1[2]=t1847 + t1901 + t2066 + 0.5*t2091*var2[2];
  p_output1[3]=t2178;
  p_output1[4]=0.5*t2091*var2[0];
  p_output1[5]=t2211;
  p_output1[6]=var2[0]*(t1096 + t363 + t838 + 0.5*(t1346 + t1520 + t1681 + t2253)*var2[2]);
  p_output1[7]=var2[0]*(t1096 + t363 + t838 + 0.5*(t1346 + t1520 + t1707 + t2253 + 6.8522*t1673*t437 + 3.4261*(0. - 1.*t1237*t163 - 0.14939999999999998*t1686)*t540 + 3.4261*t1673*t657)*var2[2]);
  p_output1[8]=t1847 + t1901 + t2066 + 0.5*t2602*var2[2];
  p_output1[9]=t2178;
  p_output1[10]=0.5*t2602*var2[0];
  p_output1[11]=t2211;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L2_J1_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L2_J1_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
