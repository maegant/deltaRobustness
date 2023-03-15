/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:25 GMT-08:00
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
  double t863;
  double t1202;
  double t1246;
  double t1252;
  double t1017;
  double t1176;
  double t1245;
  double t1262;
  double t1308;
  double t1344;
  double t1357;
  double t1414;
  double t1431;
  double t1454;
  double t1466;
  double t1467;
  double t1468;
  double t2240;
  double t2244;
  double t2282;
  double t2286;
  double t2334;
  double t2354;
  double t2337;
  double t2355;
  double t3292;
  double t1498;
  double t1559;
  double t1701;
  double t1710;
  double t1750;
  double t1757;
  double t1830;
  double t1885;
  double t1937;
  double t1992;
  double t2019;
  double t2051;
  double t2060;
  double t2085;
  double t2110;
  double t2117;
  double t2171;
  double t2226;
  double t3296;
  double t2391;
  double t3636;
  double t2409;
  double t2441;
  double t2498;
  double t2514;
  double t2580;
  double t2629;
  double t2673;
  double t2720;
  double t2811;
  double t2869;
  double t2898;
  double t2950;
  double t3018;
  double t3063;
  double t3161;
  double t3201;
  double t3260;
  double t3638;
  t863 = Cos(var1[3]);
  t1202 = Sin(var1[2]);
  t1246 = Cos(var1[2]);
  t1252 = Sin(var1[3]);
  t1017 = -1.*t863;
  t1176 = 1. + t1017;
  t1245 = -0.4999*t1176*t1202;
  t1262 = 0.4999*t1246*t1252;
  t1308 = t863*t1202;
  t1344 = t1246*t1252;
  t1357 = t1308 + t1344;
  t1414 = -0.4999*t1357;
  t1431 = t1246*t863;
  t1454 = -1.*t1202*t1252;
  t1466 = t1431 + t1454;
  t1467 = 0.012333*t1466;
  t1468 = var1[0] + t1245 + t1262 + t1414 + t1467;
  t2240 = -0.4999*t1246*t1176;
  t2244 = -0.4999*t1202*t1252;
  t2282 = -1.*t863*t1202;
  t2286 = -1.*t1246*t1252;
  t2334 = t2282 + t2286;
  t2354 = -0.4999*t1466;
  t2337 = 0.012333*t2334;
  t2355 = var1[1] + t2240 + t2244 + t2337 + t2354;
  t3292 = -0.9063*t1357;
  t1498 = 0.014437*t1466;
  t1559 = 0.014977*t1466;
  t1701 = 0.013893*t1466;
  t1710 = 0.011305*t1466;
  t1750 = 0.007491*t1466;
  t1757 = 0.002865*t1466;
  t1830 = -0.002071*t1466;
  t1885 = -0.006783*t1466;
  t1937 = -0.010759*t1466;
  t1992 = -0.01357*t1466;
  t2019 = -0.01491*t1466;
  t2051 = -0.014635*t1466;
  t2060 = -0.012773*t1466;
  t2085 = -0.009528*t1466;
  t2110 = -0.00525*t1466;
  t2117 = -0.000403*t1466;
  t2171 = 0.004488*t1466;
  t2226 = 0.008892*t1466;
  t3296 = var1[0] + t1245 + t1262 + t3292 + t1467;
  t2391 = 0.014437*t2334;
  t3636 = -0.9063*t1466;
  t2409 = 0.014977*t2334;
  t2441 = 0.013893*t2334;
  t2498 = 0.011305*t2334;
  t2514 = 0.007491*t2334;
  t2580 = 0.002865*t2334;
  t2629 = -0.002071*t2334;
  t2673 = -0.006783*t2334;
  t2720 = -0.010759*t2334;
  t2811 = -0.01357*t2334;
  t2869 = -0.01491*t2334;
  t2898 = -0.014635*t2334;
  t2950 = -0.012773*t2334;
  t3018 = -0.009528*t2334;
  t3063 = -0.00525*t2334;
  t3161 = -0.000403*t2334;
  t3201 = 0.004488*t2334;
  t3260 = 0.008892*t2334;
  t3638 = var1[1] + t2240 + t2244 + t2337 + t3636;
  p_output1[0]=t1468;
  p_output1[1]=t1245 + t1262 + t1414 + t1498 + var1[0];
  p_output1[2]=t1245 + t1262 + t1414 + t1559 + var1[0];
  p_output1[3]=t1245 + t1262 + t1414 + t1701 + var1[0];
  p_output1[4]=t1245 + t1262 + t1414 + t1710 + var1[0];
  p_output1[5]=t1245 + t1262 + t1414 + t1750 + var1[0];
  p_output1[6]=t1245 + t1262 + t1414 + t1757 + var1[0];
  p_output1[7]=t1245 + t1262 + t1414 + t1830 + var1[0];
  p_output1[8]=t1245 + t1262 + t1414 + t1885 + var1[0];
  p_output1[9]=t1245 + t1262 + t1414 + t1937 + var1[0];
  p_output1[10]=t1245 + t1262 + t1414 + t1992 + var1[0];
  p_output1[11]=t1245 + t1262 + t1414 + t2019 + var1[0];
  p_output1[12]=t1245 + t1262 + t1414 + t2051 + var1[0];
  p_output1[13]=t1245 + t1262 + t1414 + t2060 + var1[0];
  p_output1[14]=t1245 + t1262 + t1414 + t2085 + var1[0];
  p_output1[15]=t1245 + t1262 + t1414 + t2110 + var1[0];
  p_output1[16]=t1245 + t1262 + t1414 + t2117 + var1[0];
  p_output1[17]=t1245 + t1262 + t1414 + t2171 + var1[0];
  p_output1[18]=t1245 + t1262 + t1414 + t2226 + var1[0];
  p_output1[19]=t1468;
  p_output1[20]=0.008538;
  p_output1[21]=0.004071;
  p_output1[22]=-0.000837;
  p_output1[23]=-0.005655;
  p_output1[24]=-0.009859;
  p_output1[25]=-0.012996;
  p_output1[26]=-0.014724;
  p_output1[27]=-0.014856;
  p_output1[28]=-0.013379;
  p_output1[29]=-0.010452;
  p_output1[30]=-0.006392;
  p_output1[31]=-0.00164;
  p_output1[32]=0.003291;
  p_output1[33]=0.007864;
  p_output1[34]=0.011586;
  p_output1[35]=0.014051;
  p_output1[36]=0.014995;
  p_output1[37]=0.014313;
  p_output1[38]=0.01208;
  p_output1[39]=0.008538;
  p_output1[40]=t2355;
  p_output1[41]=t2240 + t2244 + t2354 + t2391 + var1[1];
  p_output1[42]=t2240 + t2244 + t2354 + t2409 + var1[1];
  p_output1[43]=t2240 + t2244 + t2354 + t2441 + var1[1];
  p_output1[44]=t2240 + t2244 + t2354 + t2498 + var1[1];
  p_output1[45]=t2240 + t2244 + t2354 + t2514 + var1[1];
  p_output1[46]=t2240 + t2244 + t2354 + t2580 + var1[1];
  p_output1[47]=t2240 + t2244 + t2354 + t2629 + var1[1];
  p_output1[48]=t2240 + t2244 + t2354 + t2673 + var1[1];
  p_output1[49]=t2240 + t2244 + t2354 + t2720 + var1[1];
  p_output1[50]=t2240 + t2244 + t2354 + t2811 + var1[1];
  p_output1[51]=t2240 + t2244 + t2354 + t2869 + var1[1];
  p_output1[52]=t2240 + t2244 + t2354 + t2898 + var1[1];
  p_output1[53]=t2240 + t2244 + t2354 + t2950 + var1[1];
  p_output1[54]=t2240 + t2244 + t2354 + t3018 + var1[1];
  p_output1[55]=t2240 + t2244 + t2354 + t3063 + var1[1];
  p_output1[56]=t2240 + t2244 + t2354 + t3161 + var1[1];
  p_output1[57]=t2240 + t2244 + t2354 + t3201 + var1[1];
  p_output1[58]=t2240 + t2244 + t2354 + t3260 + var1[1];
  p_output1[59]=t2355;
  p_output1[60]=t3296;
  p_output1[61]=t1245 + t1262 + t1498 + t3292 + var1[0];
  p_output1[62]=t1245 + t1262 + t1559 + t3292 + var1[0];
  p_output1[63]=t1245 + t1262 + t1701 + t3292 + var1[0];
  p_output1[64]=t1245 + t1262 + t1710 + t3292 + var1[0];
  p_output1[65]=t1245 + t1262 + t1750 + t3292 + var1[0];
  p_output1[66]=t1245 + t1262 + t1757 + t3292 + var1[0];
  p_output1[67]=t1245 + t1262 + t1830 + t3292 + var1[0];
  p_output1[68]=t1245 + t1262 + t1885 + t3292 + var1[0];
  p_output1[69]=t1245 + t1262 + t1937 + t3292 + var1[0];
  p_output1[70]=t1245 + t1262 + t1992 + t3292 + var1[0];
  p_output1[71]=t1245 + t1262 + t2019 + t3292 + var1[0];
  p_output1[72]=t1245 + t1262 + t2051 + t3292 + var1[0];
  p_output1[73]=t1245 + t1262 + t2060 + t3292 + var1[0];
  p_output1[74]=t1245 + t1262 + t2085 + t3292 + var1[0];
  p_output1[75]=t1245 + t1262 + t2110 + t3292 + var1[0];
  p_output1[76]=t1245 + t1262 + t2117 + t3292 + var1[0];
  p_output1[77]=t1245 + t1262 + t2171 + t3292 + var1[0];
  p_output1[78]=t1245 + t1262 + t2226 + t3292 + var1[0];
  p_output1[79]=t3296;
  p_output1[80]=0.008538;
  p_output1[81]=0.004071;
  p_output1[82]=-0.000837;
  p_output1[83]=-0.005655;
  p_output1[84]=-0.009859;
  p_output1[85]=-0.012996;
  p_output1[86]=-0.014724;
  p_output1[87]=-0.014856;
  p_output1[88]=-0.013379;
  p_output1[89]=-0.010452;
  p_output1[90]=-0.006392;
  p_output1[91]=-0.00164;
  p_output1[92]=0.003291;
  p_output1[93]=0.007864;
  p_output1[94]=0.011586;
  p_output1[95]=0.014051;
  p_output1[96]=0.014995;
  p_output1[97]=0.014313;
  p_output1[98]=0.01208;
  p_output1[99]=0.008538;
  p_output1[100]=t3638;
  p_output1[101]=t2240 + t2244 + t2391 + t3636 + var1[1];
  p_output1[102]=t2240 + t2244 + t2409 + t3636 + var1[1];
  p_output1[103]=t2240 + t2244 + t2441 + t3636 + var1[1];
  p_output1[104]=t2240 + t2244 + t2498 + t3636 + var1[1];
  p_output1[105]=t2240 + t2244 + t2514 + t3636 + var1[1];
  p_output1[106]=t2240 + t2244 + t2580 + t3636 + var1[1];
  p_output1[107]=t2240 + t2244 + t2629 + t3636 + var1[1];
  p_output1[108]=t2240 + t2244 + t2673 + t3636 + var1[1];
  p_output1[109]=t2240 + t2244 + t2720 + t3636 + var1[1];
  p_output1[110]=t2240 + t2244 + t2811 + t3636 + var1[1];
  p_output1[111]=t2240 + t2244 + t2869 + t3636 + var1[1];
  p_output1[112]=t2240 + t2244 + t2898 + t3636 + var1[1];
  p_output1[113]=t2240 + t2244 + t2950 + t3636 + var1[1];
  p_output1[114]=t2240 + t2244 + t3018 + t3636 + var1[1];
  p_output1[115]=t2240 + t2244 + t3063 + t3636 + var1[1];
  p_output1[116]=t2240 + t2244 + t3161 + t3636 + var1[1];
  p_output1[117]=t2240 + t2244 + t3201 + t3636 + var1[1];
  p_output1[118]=t2240 + t2244 + t3260 + t3636 + var1[1];
  p_output1[119]=t3638;
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

#include "Link_LeftThigh_to_LeftKnee_bar.hh"

namespace SymFunction
{

void Link_LeftThigh_to_LeftKnee_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
