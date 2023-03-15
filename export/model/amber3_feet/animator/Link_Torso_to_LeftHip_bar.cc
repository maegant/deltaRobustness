/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:21 GMT-08:00
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
  double t159;
  double t524;
  double t563;
  double t1937;
  double t1969;
  double t1992;
  double t737;
  double t2616;
  double t865;
  double t1017;
  double t1202;
  double t1246;
  double t1262;
  double t1344;
  double t1414;
  double t1454;
  double t1467;
  double t1498;
  double t1559;
  double t1701;
  double t1710;
  double t1750;
  double t1757;
  double t1830;
  double t1885;
  double t2629;
  double t3201;
  double t1996;
  double t2030;
  double t2059;
  double t2077;
  double t2092;
  double t2111;
  double t2170;
  double t2210;
  double t2231;
  double t2244;
  double t2286;
  double t2337;
  double t2355;
  double t2404;
  double t2416;
  double t2467;
  double t2511;
  double t2566;
  double t3252;
  t159 = Cos(var1[2]);
  t524 = 0.010031*t159;
  t563 = var1[0] + t524;
  t1937 = Sin(var1[2]);
  t1969 = -0.010031*t1937;
  t1992 = var1[1] + t1969;
  t737 = 0.013109*t159;
  t2616 = -0.4999*t1937;
  t865 = 0.014766*t159;
  t1017 = 0.014823*t159;
  t1202 = 0.013274*t159;
  t1246 = 0.010286*t159;
  t1262 = 0.006184*t159;
  t1344 = 0.001411*t159;
  t1414 = -0.003514*t159;
  t1454 = -0.008059*t159;
  t1467 = -0.01173*t159;
  t1498 = -0.01413*t159;
  t1559 = -0.014999*t159;
  t1701 = -0.014243*t159;
  t1710 = -0.011943*t159;
  t1750 = -0.008349*t159;
  t1757 = -0.00385*t159;
  t1830 = 0.001066*t159;
  t1885 = 0.005866*t159;
  t2629 = var1[0] + t524 + t2616;
  t3201 = -0.4999*t159;
  t1996 = -0.013109*t1937;
  t2030 = -0.014766*t1937;
  t2059 = -0.014823*t1937;
  t2077 = -0.013274*t1937;
  t2092 = -0.010286*t1937;
  t2111 = -0.006184*t1937;
  t2170 = -0.001411*t1937;
  t2210 = 0.003514*t1937;
  t2231 = 0.008059*t1937;
  t2244 = 0.01173*t1937;
  t2286 = 0.01413*t1937;
  t2337 = 0.014999*t1937;
  t2355 = 0.014243*t1937;
  t2404 = 0.011943*t1937;
  t2416 = 0.008349*t1937;
  t2467 = 0.00385*t1937;
  t2511 = -0.001066*t1937;
  t2566 = -0.005866*t1937;
  t3252 = var1[1] + t3201 + t1969;
  p_output1[0]=t563;
  p_output1[1]=t737 + var1[0];
  p_output1[2]=t865 + var1[0];
  p_output1[3]=t1017 + var1[0];
  p_output1[4]=t1202 + var1[0];
  p_output1[5]=t1246 + var1[0];
  p_output1[6]=t1262 + var1[0];
  p_output1[7]=t1344 + var1[0];
  p_output1[8]=t1414 + var1[0];
  p_output1[9]=t1454 + var1[0];
  p_output1[10]=t1467 + var1[0];
  p_output1[11]=t1498 + var1[0];
  p_output1[12]=t1559 + var1[0];
  p_output1[13]=t1701 + var1[0];
  p_output1[14]=t1710 + var1[0];
  p_output1[15]=t1750 + var1[0];
  p_output1[16]=t1757 + var1[0];
  p_output1[17]=t1830 + var1[0];
  p_output1[18]=t1885 + var1[0];
  p_output1[19]=t563;
  p_output1[20]=0.011152;
  p_output1[21]=0.007291;
  p_output1[22]=0.00264;
  p_output1[23]=-0.002298;
  p_output1[24]=-0.006986;
  p_output1[25]=-0.010918;
  p_output1[26]=-0.013666;
  p_output1[27]=-0.014933;
  p_output1[28]=-0.014583;
  p_output1[29]=-0.012651;
  p_output1[30]=-0.009349;
  p_output1[31]=-0.005034;
  p_output1[32]=-0.000173;
  p_output1[33]=0.004706;
  p_output1[34]=0.009076;
  p_output1[35]=0.012462;
  p_output1[36]=0.014498;
  p_output1[37]=0.014962;
  p_output1[38]=0.013805;
  p_output1[39]=0.011152;
  p_output1[40]=t1992;
  p_output1[41]=t1996 + var1[1];
  p_output1[42]=t2030 + var1[1];
  p_output1[43]=t2059 + var1[1];
  p_output1[44]=t2077 + var1[1];
  p_output1[45]=t2092 + var1[1];
  p_output1[46]=t2111 + var1[1];
  p_output1[47]=t2170 + var1[1];
  p_output1[48]=t2210 + var1[1];
  p_output1[49]=t2231 + var1[1];
  p_output1[50]=t2244 + var1[1];
  p_output1[51]=t2286 + var1[1];
  p_output1[52]=t2337 + var1[1];
  p_output1[53]=t2355 + var1[1];
  p_output1[54]=t2404 + var1[1];
  p_output1[55]=t2416 + var1[1];
  p_output1[56]=t2467 + var1[1];
  p_output1[57]=t2511 + var1[1];
  p_output1[58]=t2566 + var1[1];
  p_output1[59]=t1992;
  p_output1[60]=t2629;
  p_output1[61]=t2616 + t737 + var1[0];
  p_output1[62]=t2616 + t865 + var1[0];
  p_output1[63]=t1017 + t2616 + var1[0];
  p_output1[64]=t1202 + t2616 + var1[0];
  p_output1[65]=t1246 + t2616 + var1[0];
  p_output1[66]=t1262 + t2616 + var1[0];
  p_output1[67]=t1344 + t2616 + var1[0];
  p_output1[68]=t1414 + t2616 + var1[0];
  p_output1[69]=t1454 + t2616 + var1[0];
  p_output1[70]=t1467 + t2616 + var1[0];
  p_output1[71]=t1498 + t2616 + var1[0];
  p_output1[72]=t1559 + t2616 + var1[0];
  p_output1[73]=t1701 + t2616 + var1[0];
  p_output1[74]=t1710 + t2616 + var1[0];
  p_output1[75]=t1750 + t2616 + var1[0];
  p_output1[76]=t1757 + t2616 + var1[0];
  p_output1[77]=t1830 + t2616 + var1[0];
  p_output1[78]=t1885 + t2616 + var1[0];
  p_output1[79]=t2629;
  p_output1[80]=0.011152;
  p_output1[81]=0.007291;
  p_output1[82]=0.00264;
  p_output1[83]=-0.002298;
  p_output1[84]=-0.006986;
  p_output1[85]=-0.010918;
  p_output1[86]=-0.013666;
  p_output1[87]=-0.014933;
  p_output1[88]=-0.014583;
  p_output1[89]=-0.012651;
  p_output1[90]=-0.009349;
  p_output1[91]=-0.005034;
  p_output1[92]=-0.000173;
  p_output1[93]=0.004706;
  p_output1[94]=0.009076;
  p_output1[95]=0.012462;
  p_output1[96]=0.014498;
  p_output1[97]=0.014962;
  p_output1[98]=0.013805;
  p_output1[99]=0.011152;
  p_output1[100]=t3252;
  p_output1[101]=t1996 + t3201 + var1[1];
  p_output1[102]=t2030 + t3201 + var1[1];
  p_output1[103]=t2059 + t3201 + var1[1];
  p_output1[104]=t2077 + t3201 + var1[1];
  p_output1[105]=t2092 + t3201 + var1[1];
  p_output1[106]=t2111 + t3201 + var1[1];
  p_output1[107]=t2170 + t3201 + var1[1];
  p_output1[108]=t2210 + t3201 + var1[1];
  p_output1[109]=t2231 + t3201 + var1[1];
  p_output1[110]=t2244 + t3201 + var1[1];
  p_output1[111]=t2286 + t3201 + var1[1];
  p_output1[112]=t2337 + t3201 + var1[1];
  p_output1[113]=t2355 + t3201 + var1[1];
  p_output1[114]=t2404 + t3201 + var1[1];
  p_output1[115]=t2416 + t3201 + var1[1];
  p_output1[116]=t2467 + t3201 + var1[1];
  p_output1[117]=t2511 + t3201 + var1[1];
  p_output1[118]=t2566 + t3201 + var1[1];
  p_output1[119]=t3252;
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

#include "Link_Torso_to_LeftHip_bar.hh"

namespace SymFunction
{

void Link_Torso_to_LeftHip_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
