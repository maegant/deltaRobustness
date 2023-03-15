/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:27 GMT-08:00
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
static void output1(double *p_output1,const double *var1)
{
  double t1357;
  double t1559;
  double t1701;
  double t1709;
  double t1750;
  double t1926;
  double t1937;
  double t1969;
  double t1773;
  double t1830;
  double t1839;
  double t2019;
  double t1466;
  double t1540;
  double t1582;
  double t1741;
  double t1755;
  double t1757;
  double t1885;
  double t2030;
  double t2051;
  double t2059;
  double t2060;
  double t2085;
  double t2092;
  double t2110;
  double t2111;
  double t2077;
  double t2117;
  double t3047;
  double t3063;
  double t3143;
  double t2950;
  double t2960;
  double t3018;
  double t3161;
  double t3172;
  double t3201;
  double t3252;
  double t3260;
  double t3266;
  double t3292;
  double t3296;
  double t3299;
  double t2170;
  double t4031;
  double t2210;
  double t2231;
  double t2244;
  double t2337;
  double t2355;
  double t2404;
  double t2416;
  double t2467;
  double t2511;
  double t2566;
  double t2616;
  double t2655;
  double t2682;
  double t2742;
  double t2811;
  double t2869;
  double t2898;
  double t4050;
  double t4387;
  double t3365;
  double t3401;
  double t3413;
  double t3423;
  double t3442;
  double t3523;
  double t3546;
  double t3555;
  double t3611;
  double t3638;
  double t3708;
  double t3739;
  double t3784;
  double t3814;
  double t3827;
  double t3941;
  double t3958;
  double t4013;
  double t4399;
  t1357 = Cos(var1[3]);
  t1559 = Sin(var1[2]);
  t1701 = Cos(var1[2]);
  t1709 = Sin(var1[3]);
  t1750 = Cos(var1[4]);
  t1926 = t1701*t1357;
  t1937 = -1.*t1559*t1709;
  t1969 = t1926 + t1937;
  t1773 = t1357*t1559;
  t1830 = t1701*t1709;
  t1839 = t1773 + t1830;
  t2019 = Sin(var1[4]);
  t1466 = -1.*t1357;
  t1540 = 1. + t1466;
  t1582 = -0.4999*t1540*t1559;
  t1741 = 0.4999*t1701*t1709;
  t1755 = -1.*t1750;
  t1757 = 1. + t1755;
  t1885 = -0.9063*t1757*t1839;
  t2030 = 0.9063*t1969*t2019;
  t2051 = t1750*t1969;
  t2059 = -1.*t1839*t2019;
  t2060 = t2051 + t2059;
  t2085 = t1750*t1839;
  t2092 = t1969*t2019;
  t2110 = t2085 + t2092;
  t2111 = -0.9063*t2110;
  t2077 = 0.006807*t2060;
  t2117 = var1[0] + t1582 + t1741 + t1885 + t2030 + t2077 + t2111;
  t3047 = -1.*t1357*t1559;
  t3063 = -1.*t1701*t1709;
  t3143 = t3047 + t3063;
  t2950 = -0.4999*t1701*t1540;
  t2960 = -0.4999*t1559*t1709;
  t3018 = -0.9063*t1757*t1969;
  t3161 = 0.9063*t3143*t2019;
  t3172 = t3143*t2019;
  t3201 = t2051 + t3172;
  t3252 = -0.9063*t3201;
  t3260 = t1750*t3143;
  t3266 = -1.*t1969*t2019;
  t3292 = t3260 + t3266;
  t3296 = 0.006807*t3292;
  t3299 = var1[1] + t2950 + t2960 + t3018 + t3161 + t3252 + t3296;
  t2170 = 0.010778*t2060;
  t4031 = -1.3127*t2110;
  t2210 = 0.013582*t2060;
  t2231 = 0.014913*t2060;
  t2244 = 0.014629*t2060;
  t2337 = 0.012759*t2060;
  t2355 = 0.009506*t2060;
  t2404 = 0.005224*t2060;
  t2416 = 0.000375*t2060;
  t2467 = -0.004514*t2060;
  t2511 = -0.008914*t2060;
  t2566 = -0.012348*t2060;
  t2616 = -0.014444*t2060;
  t2655 = -0.014975*t2060;
  t2682 = -0.013883*t2060;
  t2742 = -0.011287*t2060;
  t2811 = -0.007467*t2060;
  t2869 = -0.002838*t2060;
  t2898 = 0.002098*t2060;
  t4050 = var1[0] + t1582 + t1741 + t1885 + t2030 + t2077 + t4031;
  t4387 = -1.3127*t3201;
  t3365 = 0.010778*t3292;
  t3401 = 0.013582*t3292;
  t3413 = 0.014913*t3292;
  t3423 = 0.014629*t3292;
  t3442 = 0.012759*t3292;
  t3523 = 0.009506*t3292;
  t3546 = 0.005224*t3292;
  t3555 = 0.000375*t3292;
  t3611 = -0.004514*t3292;
  t3638 = -0.008914*t3292;
  t3708 = -0.012348*t3292;
  t3739 = -0.014444*t3292;
  t3784 = -0.014975*t3292;
  t3814 = -0.013883*t3292;
  t3827 = -0.011287*t3292;
  t3941 = -0.007467*t3292;
  t3958 = -0.002838*t3292;
  t4013 = 0.002098*t3292;
  t4399 = var1[1] + t2950 + t2960 + t3018 + t3161 + t4387 + t3296;
  p_output1[0]=t2117;
  p_output1[1]=t1582 + t1741 + t1885 + t2030 + t2111 + t2170 + var1[0];
  p_output1[2]=t1582 + t1741 + t1885 + t2030 + t2111 + t2210 + var1[0];
  p_output1[3]=t1582 + t1741 + t1885 + t2030 + t2111 + t2231 + var1[0];
  p_output1[4]=t1582 + t1741 + t1885 + t2030 + t2111 + t2244 + var1[0];
  p_output1[5]=t1582 + t1741 + t1885 + t2030 + t2111 + t2337 + var1[0];
  p_output1[6]=t1582 + t1741 + t1885 + t2030 + t2111 + t2355 + var1[0];
  p_output1[7]=t1582 + t1741 + t1885 + t2030 + t2111 + t2404 + var1[0];
  p_output1[8]=t1582 + t1741 + t1885 + t2030 + t2111 + t2416 + var1[0];
  p_output1[9]=t1582 + t1741 + t1885 + t2030 + t2111 + t2467 + var1[0];
  p_output1[10]=t1582 + t1741 + t1885 + t2030 + t2111 + t2511 + var1[0];
  p_output1[11]=t1582 + t1741 + t1885 + t2030 + t2111 + t2566 + var1[0];
  p_output1[12]=t1582 + t1741 + t1885 + t2030 + t2111 + t2616 + var1[0];
  p_output1[13]=t1582 + t1741 + t1885 + t2030 + t2111 + t2655 + var1[0];
  p_output1[14]=t1582 + t1741 + t1885 + t2030 + t2111 + t2682 + var1[0];
  p_output1[15]=t1582 + t1741 + t1885 + t2030 + t2111 + t2742 + var1[0];
  p_output1[16]=t1582 + t1741 + t1885 + t2030 + t2111 + t2811 + var1[0];
  p_output1[17]=t1582 + t1741 + t1885 + t2030 + t2111 + t2869 + var1[0];
  p_output1[18]=t1582 + t1741 + t1885 + t2030 + t2111 + t2898 + var1[0];
  p_output1[19]=t2117;
  p_output1[20]=0.013367;
  p_output1[21]=0.010432;
  p_output1[22]=0.006367;
  p_output1[23]=0.001612;
  p_output1[24]=-0.003317;
  p_output1[25]=-0.007887;
  p_output1[26]=-0.011603;
  p_output1[27]=-0.014061;
  p_output1[28]=-0.014995;
  p_output1[29]=-0.014305;
  p_output1[30]=-0.012064;
  p_output1[31]=-0.008516;
  p_output1[32]=-0.004045;
  p_output1[33]=0.000864;
  p_output1[34]=0.00568;
  p_output1[35]=0.00988;
  p_output1[36]=0.013009;
  p_output1[37]=0.014729;
  p_output1[38]=0.014853;
  p_output1[39]=0.013367;
  p_output1[40]=t3299;
  p_output1[41]=t2950 + t2960 + t3018 + t3161 + t3252 + t3365 + var1[1];
  p_output1[42]=t2950 + t2960 + t3018 + t3161 + t3252 + t3401 + var1[1];
  p_output1[43]=t2950 + t2960 + t3018 + t3161 + t3252 + t3413 + var1[1];
  p_output1[44]=t2950 + t2960 + t3018 + t3161 + t3252 + t3423 + var1[1];
  p_output1[45]=t2950 + t2960 + t3018 + t3161 + t3252 + t3442 + var1[1];
  p_output1[46]=t2950 + t2960 + t3018 + t3161 + t3252 + t3523 + var1[1];
  p_output1[47]=t2950 + t2960 + t3018 + t3161 + t3252 + t3546 + var1[1];
  p_output1[48]=t2950 + t2960 + t3018 + t3161 + t3252 + t3555 + var1[1];
  p_output1[49]=t2950 + t2960 + t3018 + t3161 + t3252 + t3611 + var1[1];
  p_output1[50]=t2950 + t2960 + t3018 + t3161 + t3252 + t3638 + var1[1];
  p_output1[51]=t2950 + t2960 + t3018 + t3161 + t3252 + t3708 + var1[1];
  p_output1[52]=t2950 + t2960 + t3018 + t3161 + t3252 + t3739 + var1[1];
  p_output1[53]=t2950 + t2960 + t3018 + t3161 + t3252 + t3784 + var1[1];
  p_output1[54]=t2950 + t2960 + t3018 + t3161 + t3252 + t3814 + var1[1];
  p_output1[55]=t2950 + t2960 + t3018 + t3161 + t3252 + t3827 + var1[1];
  p_output1[56]=t2950 + t2960 + t3018 + t3161 + t3252 + t3941 + var1[1];
  p_output1[57]=t2950 + t2960 + t3018 + t3161 + t3252 + t3958 + var1[1];
  p_output1[58]=t2950 + t2960 + t3018 + t3161 + t3252 + t4013 + var1[1];
  p_output1[59]=t3299;
  p_output1[60]=t4050;
  p_output1[61]=t1582 + t1741 + t1885 + t2030 + t2170 + t4031 + var1[0];
  p_output1[62]=t1582 + t1741 + t1885 + t2030 + t2210 + t4031 + var1[0];
  p_output1[63]=t1582 + t1741 + t1885 + t2030 + t2231 + t4031 + var1[0];
  p_output1[64]=t1582 + t1741 + t1885 + t2030 + t2244 + t4031 + var1[0];
  p_output1[65]=t1582 + t1741 + t1885 + t2030 + t2337 + t4031 + var1[0];
  p_output1[66]=t1582 + t1741 + t1885 + t2030 + t2355 + t4031 + var1[0];
  p_output1[67]=t1582 + t1741 + t1885 + t2030 + t2404 + t4031 + var1[0];
  p_output1[68]=t1582 + t1741 + t1885 + t2030 + t2416 + t4031 + var1[0];
  p_output1[69]=t1582 + t1741 + t1885 + t2030 + t2467 + t4031 + var1[0];
  p_output1[70]=t1582 + t1741 + t1885 + t2030 + t2511 + t4031 + var1[0];
  p_output1[71]=t1582 + t1741 + t1885 + t2030 + t2566 + t4031 + var1[0];
  p_output1[72]=t1582 + t1741 + t1885 + t2030 + t2616 + t4031 + var1[0];
  p_output1[73]=t1582 + t1741 + t1885 + t2030 + t2655 + t4031 + var1[0];
  p_output1[74]=t1582 + t1741 + t1885 + t2030 + t2682 + t4031 + var1[0];
  p_output1[75]=t1582 + t1741 + t1885 + t2030 + t2742 + t4031 + var1[0];
  p_output1[76]=t1582 + t1741 + t1885 + t2030 + t2811 + t4031 + var1[0];
  p_output1[77]=t1582 + t1741 + t1885 + t2030 + t2869 + t4031 + var1[0];
  p_output1[78]=t1582 + t1741 + t1885 + t2030 + t2898 + t4031 + var1[0];
  p_output1[79]=t4050;
  p_output1[80]=0.013367;
  p_output1[81]=0.010432;
  p_output1[82]=0.006367;
  p_output1[83]=0.001612;
  p_output1[84]=-0.003317;
  p_output1[85]=-0.007887;
  p_output1[86]=-0.011603;
  p_output1[87]=-0.014061;
  p_output1[88]=-0.014995;
  p_output1[89]=-0.014305;
  p_output1[90]=-0.012064;
  p_output1[91]=-0.008516;
  p_output1[92]=-0.004045;
  p_output1[93]=0.000864;
  p_output1[94]=0.00568;
  p_output1[95]=0.00988;
  p_output1[96]=0.013009;
  p_output1[97]=0.014729;
  p_output1[98]=0.014853;
  p_output1[99]=0.013367;
  p_output1[100]=t4399;
  p_output1[101]=t2950 + t2960 + t3018 + t3161 + t3365 + t4387 + var1[1];
  p_output1[102]=t2950 + t2960 + t3018 + t3161 + t3401 + t4387 + var1[1];
  p_output1[103]=t2950 + t2960 + t3018 + t3161 + t3413 + t4387 + var1[1];
  p_output1[104]=t2950 + t2960 + t3018 + t3161 + t3423 + t4387 + var1[1];
  p_output1[105]=t2950 + t2960 + t3018 + t3161 + t3442 + t4387 + var1[1];
  p_output1[106]=t2950 + t2960 + t3018 + t3161 + t3523 + t4387 + var1[1];
  p_output1[107]=t2950 + t2960 + t3018 + t3161 + t3546 + t4387 + var1[1];
  p_output1[108]=t2950 + t2960 + t3018 + t3161 + t3555 + t4387 + var1[1];
  p_output1[109]=t2950 + t2960 + t3018 + t3161 + t3611 + t4387 + var1[1];
  p_output1[110]=t2950 + t2960 + t3018 + t3161 + t3638 + t4387 + var1[1];
  p_output1[111]=t2950 + t2960 + t3018 + t3161 + t3708 + t4387 + var1[1];
  p_output1[112]=t2950 + t2960 + t3018 + t3161 + t3739 + t4387 + var1[1];
  p_output1[113]=t2950 + t2960 + t3018 + t3161 + t3784 + t4387 + var1[1];
  p_output1[114]=t2950 + t2960 + t3018 + t3161 + t3814 + t4387 + var1[1];
  p_output1[115]=t2950 + t2960 + t3018 + t3161 + t3827 + t4387 + var1[1];
  p_output1[116]=t2950 + t2960 + t3018 + t3161 + t3941 + t4387 + var1[1];
  p_output1[117]=t2950 + t2960 + t3018 + t3161 + t3958 + t4387 + var1[1];
  p_output1[118]=t2950 + t2960 + t3018 + t3161 + t4013 + t4387 + var1[1];
  p_output1[119]=t4399;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_LeftShin_to_LeftAnkle_bar.hh"

namespace SymFunction
{

void Link_LeftShin_to_LeftAnkle_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
