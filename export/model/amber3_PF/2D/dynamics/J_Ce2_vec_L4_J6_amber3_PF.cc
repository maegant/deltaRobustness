/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:32:33 GMT-08:00
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
  double t278;
  double t432;
  double t192;
  double t487;
  double t630;
  double t671;
  double t696;
  double t523;
  double t548;
  double t569;
  double t297;
  double t491;
  double t502;
  double t835;
  double t965;
  double t975;
  double t1441;
  double t1514;
  double t1522;
  double t1542;
  double t1556;
  double t1866;
  double t503;
  double t774;
  double t976;
  double t984;
  double t1035;
  double t1054;
  double t1167;
  double t1184;
  double t1209;
  double t1210;
  double t1258;
  double t1286;
  double t1320;
  double t1396;
  double t1434;
  double t1559;
  double t1584;
  double t1621;
  double t1707;
  double t1738;
  double t1788;
  double t1807;
  double t1867;
  double t1912;
  double t1917;
  double t1928;
  double t1985;
  double t2028;
  double t2057;
  double t2091;
  double t2558;
  double t2580;
  double t2586;
  double t2600;
  double t2620;
  double t2653;
  double t2658;
  double t2694;
  double t2733;
  double t2741;
  double t2770;
  double t2793;
  double t2801;
  double t2949;
  double t2975;
  double t2976;
  double t3009;
  double t3016;
  double t3019;
  double t2285;
  double t2295;
  double t2322;
  double t3037;
  double t2337;
  double t3061;
  double t3064;
  double t2699;
  double t1652;
  double t2153;
  double t3303;
  double t3306;
  double t2177;
  double t3053;
  double t3080;
  double t3211;
  double t3228;
  double t3236;
  double t3266;
  double t2234;
  double t2261;
  double t2334;
  double t2402;
  double t2408;
  double t2806;
  double t3322;
  double t3781;
  double t3799;
  double t3817;
  double t4070;
  double t4106;
  t278 = Cos(var1[5]);
  t432 = Sin(var1[2]);
  t192 = Cos(var1[2]);
  t487 = Sin(var1[5]);
  t630 = t192*t278;
  t671 = -1.*t432*t487;
  t696 = t630 + t671;
  t523 = -1.*t278*t432;
  t548 = -1.*t192*t487;
  t569 = t523 + t548;
  t297 = -1.*t192*t278;
  t491 = t432*t487;
  t502 = t297 + t491;
  t835 = t278*t432;
  t965 = t192*t487;
  t975 = t835 + t965;
  t1441 = -1.*t278;
  t1514 = 1. + t1441;
  t1522 = -0.4999*t1514;
  t1542 = -0.6493*t278;
  t1556 = t1522 + t1542;
  t1866 = t1556*t278;
  t503 = 0.25592966999999994*var2[5]*t502;
  t774 = 10.2783*t569*t696;
  t976 = 3.4261*t975*t696;
  t984 = 10.2783*t569*t502;
  t1035 = 3.4261*t975*t502;
  t1054 = t774 + t976 + t984 + t1035;
  t1167 = -0.5*var2[1]*t1054;
  t1184 = Power(t569,2);
  t1209 = 6.8522*t1184;
  t1210 = 6.8522*t569*t975;
  t1258 = Power(t696,2);
  t1286 = 6.8522*t1258;
  t1320 = 6.8522*t696*t502;
  t1396 = t1209 + t1210 + t1286 + t1320;
  t1434 = -0.5*var2[0]*t1396;
  t1559 = -1.*t1556*t487;
  t1584 = -0.14939999999999998*t278*t487;
  t1621 = t1559 + t1584;
  t1707 = t1556*t487;
  t1738 = 0.14939999999999998*t278*t487;
  t1788 = t1707 + t1738;
  t1807 = 3.4261*t569*t1788;
  t1867 = Power(t278,2);
  t1912 = 0.14939999999999998*t1867;
  t1917 = t1866 + t1912;
  t1928 = 3.4261*t1917*t696;
  t1985 = Power(t487,2);
  t2028 = -0.14939999999999998*t1985;
  t2057 = t1866 + t2028;
  t2091 = 3.4261*t502*t2057;
  t2558 = 6.8522*t569*t696;
  t2580 = 6.8522*t975*t696;
  t2586 = t2558 + t2580;
  t2600 = 3.4261*t1184;
  t2620 = 3.4261*t569*t975;
  t2653 = 3.4261*t1258;
  t2658 = 3.4261*t696*t502;
  t2694 = t2600 + t2620 + t2653 + t2658;
  t2733 = 3.4261*t1917*t975;
  t2741 = 3.4261*t1621*t696;
  t2770 = 3.4261*t1788*t696;
  t2793 = 3.4261*t569*t2057;
  t2801 = t2733 + t2741 + t2770 + t2793;
  t2949 = 0.25592966999999994*var2[5]*t975;
  t2975 = -0.5*var2[0]*t1054;
  t2976 = Power(t502,2);
  t3009 = 6.8522*t2976;
  t3016 = t1209 + t1210 + t1320 + t3009;
  t3019 = -0.5*var2[1]*t3016;
  t2285 = -1.*t1556*t278;
  t2295 = -0.14939999999999998*t1867;
  t2322 = 0. + t2285 + t2295;
  t3037 = 3.4261*t1917*t569;
  t2337 = 0. + t1866 + t1912;
  t3061 = 3.4261*t1788*t502;
  t3064 = 3.4261*t975*t2057;
  t2699 = -0.5*var2[5]*t2694;
  t1652 = 3.4261*t569*t1621;
  t2153 = t1652 + t1807 + t1928 + t2091;
  t3303 = 6.8522*t569*t502;
  t3306 = t2558 + t3303;
  t2177 = -0.5*var2[2]*t2153;
  t3053 = 3.4261*t1621*t502;
  t3080 = t3037 + t3053 + t3061 + t3064;
  t3211 = 3.4261*t2322*t569;
  t3228 = 3.4261*t2337*t569;
  t3236 = 6.8522*t1621*t502;
  t3266 = t3211 + t3037 + t3228 + t2741 + t3236 + t3061 + t3064;
  t2234 = 6.8522*t569*t1621;
  t2261 = 3.4261*t975*t1621;
  t2334 = 3.4261*t2322*t696;
  t2402 = 3.4261*t2337*t696;
  t2408 = t2234 + t2261 + t1807 + t2334 + t1928 + t2402 + t2091;
  t2806 = -0.5*var2[5]*t2801;
  t3322 = -0.5*var2[5]*t2153;
  t3781 = 6.8522*t1917*t1788;
  t3799 = 6.8522*t1621*t2057;
  t3817 = t3781 + t3799;
  t4070 = 0.25592966999999994*var2[1]*t975;
  t4106 = 0.25592966999999994*var2[0]*t502;
  p_output1[0]=(t1167 + t1434 + t2177 + t503)*var2[5];
  p_output1[1]=(t1167 + t1434 + t503 - 0.5*t2408*var2[2])*var2[5];
  p_output1[2]=-0.5*t2586*var2[5];
  p_output1[3]=t2699;
  p_output1[4]=t2806;
  p_output1[5]=-0.5*t2586*var2[0] - 0.5*t2694*var2[1] - 0.5*t2801*var2[2] + 0.5118593399999999*t569*var2[5];
  p_output1[6]=(t2949 + t2975 + t3019 - 0.5*t3080*var2[2])*var2[5];
  p_output1[7]=(t2949 + t2975 + t3019 - 0.5*t3266*var2[2])*var2[5];
  p_output1[8]=t2699;
  p_output1[9]=-0.5*t3306*var2[5];
  p_output1[10]=t3322;
  p_output1[11]=t2177 - 0.5*t2694*var2[0] - 0.5*t3306*var2[1] + 0.5118593399999999*t502*var2[5];
  p_output1[12]=(-0.5*t2153*var2[0] - 0.5*t3080*var2[1])*var2[5];
  p_output1[13]=var2[5]*(-0.5*t2408*var2[0] - 0.5*t3266*var2[1] - 0.5*(6.8522*Power(t1621,2) + 6.8522*t1621*t1788 + 6.8522*t2057*t2322 + 6.8522*t1917*t2337)*var2[2] + 0.25592966999999994*t2322*var2[5]);
  p_output1[14]=t2806;
  p_output1[15]=t3322;
  p_output1[16]=-0.5*t3817*var2[5];
  p_output1[17]=-0.5*t2801*var2[0] - 0.5*t2153*var2[1] - 0.5*t3817*var2[2] + 0.5118593399999999*t1621*var2[5];
  p_output1[18]=(t4070 + t4106)*var2[5];
  p_output1[19]=(t4070 + t4106 + 0.25592966999999994*t2322*var2[2])*var2[5];
  p_output1[20]=0.25592966999999994*t569*var2[5];
  p_output1[21]=t503;
  p_output1[22]=0.25592966999999994*t1621*var2[5];
  p_output1[23]=0.25592966999999994*t569*var2[0] + 0.25592966999999994*t502*var2[1] + 0.25592966999999994*t1621*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 24, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L4_J6_amber3_PF.hh"

namespace RightSS
{

void J_Ce2_vec_L4_J6_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
