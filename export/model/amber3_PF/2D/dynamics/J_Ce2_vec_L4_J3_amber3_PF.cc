/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:32:28 GMT-08:00
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
  double t30;
  double t120;
  double t10;
  double t146;
  double t491;
  double t496;
  double t502;
  double t357;
  double t453;
  double t487;
  double t60;
  double t192;
  double t278;
  double t523;
  double t548;
  double t569;
  double t1134;
  double t1192;
  double t1209;
  double t1210;
  double t1220;
  double t281;
  double t503;
  double t630;
  double t671;
  double t696;
  double t724;
  double t763;
  double t774;
  double t835;
  double t965;
  double t975;
  double t984;
  double t1054;
  double t1063;
  double t1090;
  double t1258;
  double t1396;
  double t1434;
  double t1441;
  double t1514;
  double t1556;
  double t1559;
  double t1584;
  double t1621;
  double t2091;
  double t2153;
  double t2158;
  double t2211;
  double t2234;
  double t2261;
  double t2322;
  double t2330;
  double t2590;
  double t2591;
  double t2596;
  double t2600;
  double t2612;
  double t2615;
  double t1867;
  double t1912;
  double t1917;
  double t1762;
  double t1788;
  double t1807;
  double t2620;
  double t2699;
  double t2349;
  double t2866;
  double t2899;
  double t1629;
  double t2706;
  double t2801;
  double t2806;
  double t2808;
  double t1866;
  double t1928;
  double t1937;
  double t2497;
  double t2506;
  double t2514;
  double t1646;
  double t3286;
  double t3290;
  double t3303;
  double t3306;
  double t2586;
  double t3037;
  t30 = Cos(var1[5]);
  t120 = Sin(var1[2]);
  t10 = Cos(var1[2]);
  t146 = Sin(var1[5]);
  t491 = t10*t30;
  t496 = -1.*t120*t146;
  t502 = t491 + t496;
  t357 = -1.*t30*t120;
  t453 = -1.*t10*t146;
  t487 = t357 + t453;
  t60 = -1.*t10*t30;
  t192 = t120*t146;
  t278 = t60 + t192;
  t523 = t30*t120;
  t548 = t10*t146;
  t569 = t523 + t548;
  t1134 = -1.*t30;
  t1192 = 1. + t1134;
  t1209 = -0.4999*t1192;
  t1210 = -0.6493*t30;
  t1220 = t1209 + t1210;
  t281 = 0.25592966999999994*var2[5]*t278;
  t503 = 10.2783*t487*t502;
  t630 = 3.4261*t569*t502;
  t671 = 10.2783*t487*t278;
  t696 = 3.4261*t569*t278;
  t724 = t503 + t630 + t671 + t696;
  t763 = -0.5*var2[1]*t724;
  t774 = Power(t487,2);
  t835 = 6.8522*t774;
  t965 = 6.8522*t487*t569;
  t975 = Power(t502,2);
  t984 = 6.8522*t975;
  t1054 = 6.8522*t502*t278;
  t1063 = t835 + t965 + t984 + t1054;
  t1090 = -0.5*var2[0]*t1063;
  t1258 = t1220*t146;
  t1396 = 0.14939999999999998*t30*t146;
  t1434 = t1258 + t1396;
  t1441 = 3.4261*t487*t1434;
  t1514 = t1220*t30;
  t1556 = Power(t146,2);
  t1559 = -0.14939999999999998*t1556;
  t1584 = t1514 + t1559;
  t1621 = 3.4261*t278*t1584;
  t2091 = 6.8522*t487*t502;
  t2153 = 6.8522*t569*t502;
  t2158 = t2091 + t2153;
  t2211 = 3.4261*t774;
  t2234 = 3.4261*t487*t569;
  t2261 = 3.4261*t975;
  t2322 = 3.4261*t502*t278;
  t2330 = t2211 + t2234 + t2261 + t2322;
  t2590 = 0.25592966999999994*var2[5]*t569;
  t2591 = -0.5*var2[0]*t724;
  t2596 = Power(t278,2);
  t2600 = 6.8522*t2596;
  t2612 = t835 + t965 + t1054 + t2600;
  t2615 = -0.5*var2[1]*t2612;
  t1867 = Power(t30,2);
  t1912 = 0.14939999999999998*t1867;
  t1917 = 0. + t1514 + t1912;
  t1762 = -1.*t1220*t146;
  t1788 = -0.14939999999999998*t30*t146;
  t1807 = t1762 + t1788;
  t2620 = 3.4261*t1434*t278;
  t2699 = 3.4261*t569*t1584;
  t2349 = -0.5*var2[2]*t2330;
  t2866 = 6.8522*t487*t278;
  t2899 = t2091 + t2866;
  t1629 = t1441 + t1621;
  t2706 = t2620 + t2699;
  t2801 = 3.4261*t1917*t487;
  t2806 = 3.4261*t1807*t278;
  t2808 = t2801 + t2806 + t2620 + t2699;
  t1866 = 3.4261*t487*t1807;
  t1928 = 3.4261*t1917*t502;
  t1937 = t1866 + t1441 + t1928 + t1621;
  t2497 = 3.4261*t1434*t502;
  t2506 = 3.4261*t487*t1584;
  t2514 = t2497 + t2506;
  t1646 = -0.5*var2[2]*t1629;
  t3286 = 0.25592966999999994*var2[1]*t569;
  t3290 = 0.25592966999999994*var2[0]*t278;
  t3303 = t3286 + t3290;
  t3306 = var2[2]*t3303;
  t2586 = 0.25592966999999994*var2[2]*t487;
  t3037 = 0.25592966999999994*var2[2]*t278;
  p_output1[0]=(t1090 + t1646 + t281 + t763)*var2[2];
  p_output1[1]=var2[2]*(t1090 + t281 + t763 - 0.5*t1937*var2[2]);
  p_output1[2]=-0.5*t2158*var2[2];
  p_output1[3]=t2349;
  p_output1[4]=-0.5*t2158*var2[0] - 0.5*t2330*var2[1] - 1.*t2514*var2[2] + 0.25592966999999994*t487*var2[5];
  p_output1[5]=t2586;
  p_output1[6]=var2[2]*(t2590 + t2591 + t2615 - 0.5*t2706*var2[2]);
  p_output1[7]=var2[2]*(t2590 + t2591 + t2615 - 0.5*t2808*var2[2]);
  p_output1[8]=t2349;
  p_output1[9]=-0.5*t2899*var2[2];
  p_output1[10]=t281 - 0.5*t2330*var2[0] - 0.5*t2899*var2[1] - 1.*t1629*var2[2];
  p_output1[11]=t3037;
  p_output1[12]=(-0.5*t1629*var2[0] - 0.5*t2706*var2[1])*var2[2];
  p_output1[13]=(-0.5*t1937*var2[0] - 0.5*t2808*var2[1])*var2[2];
  p_output1[14]=-0.5*t2514*var2[2];
  p_output1[15]=t1646;
  p_output1[16]=-0.5*t2514*var2[0] - 0.5*t1629*var2[1];
  p_output1[17]=t3306;
  p_output1[18]=t3306;
  p_output1[19]=t2586;
  p_output1[20]=t3037;
  p_output1[21]=0.25592966999999994*t487*var2[0] + 0.25592966999999994*t278*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L4_J3_amber3_PF.hh"

namespace RightSS
{

void J_Ce2_vec_L4_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
