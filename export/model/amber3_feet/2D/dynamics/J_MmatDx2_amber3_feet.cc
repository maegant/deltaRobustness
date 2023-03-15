/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:56 GMT-08:00
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
  double t65;
  double t146;
  double t650;
  double t685;
  double t704;
  double t763;
  double t764;
  double t975;
  double t1040;
  double t1255;
  double t1270;
  double t1574;
  double t1615;
  double t2424;
  double t2474;
  double t2480;
  double t2487;
  double t2521;
  double t938;
  double t1266;
  double t1632;
  double t1736;
  double t1784;
  double t1785;
  double t1849;
  double t1877;
  double t1967;
  double t2044;
  double t2145;
  double t2156;
  double t2186;
  double t2221;
  double t2276;
  double t2284;
  double t2917;
  double t2623;
  double t2749;
  double t2766;
  double t2825;
  double t2918;
  double t2931;
  double t3169;
  double t3177;
  double t4389;
  double t4437;
  double t4461;
  double t4480;
  double t4511;
  double t3626;
  double t3719;
  double t3734;
  double t4619;
  double t3309;
  double t3314;
  double t3383;
  double t4684;
  double t4153;
  double t4200;
  double t4308;
  double t4062;
  double t3178;
  double t4724;
  double t3521;
  double t3835;
  double t3949;
  double t4837;
  double t4857;
  double t4929;
  double t4318;
  double t4326;
  double t4344;
  double t5184;
  double t5282;
  double t5283;
  double t5853;
  double t5882;
  double t4388;
  double t5288;
  double t5752;
  double t5804;
  t65 = Cos(var1[3]);
  t146 = Sin(var1[2]);
  t650 = -1.*t65*t146;
  t685 = Cos(var1[2]);
  t704 = Sin(var1[3]);
  t763 = -1.*t685*t704;
  t764 = t650 + t763;
  t975 = t685*t65;
  t1040 = -1.*t146*t704;
  t1255 = t975 + t1040;
  t1270 = t65*t146;
  t1574 = t685*t704;
  t1615 = t1270 + t1574;
  t2424 = -1.*t65;
  t2474 = 1. + t2424;
  t2480 = -0.4999*t2474;
  t2487 = -0.6493*t65;
  t2521 = t2480 + t2487;
  t938 = 0.5118593399999999*var2[3]*t764;
  t1266 = 6.8522*t764*t1255;
  t1632 = 6.8522*t1615*t1255;
  t1736 = t1266 + t1632;
  t1784 = -1.*var2[0]*t1736;
  t1785 = Power(t764,2);
  t1849 = 3.4261*t1785;
  t1877 = 3.4261*t764*t1615;
  t1967 = Power(t1255,2);
  t2044 = 3.4261*t1967;
  t2145 = -1.*t685*t65;
  t2156 = t146*t704;
  t2186 = t2145 + t2156;
  t2221 = 3.4261*t1255*t2186;
  t2276 = t1849 + t1877 + t2044 + t2221;
  t2284 = -1.*var2[1]*t2276;
  t2917 = t2521*t65;
  t2623 = t2521*t704;
  t2749 = 0.14939999999999998*t65*t704;
  t2766 = t2623 + t2749;
  t2825 = 3.4261*t2766*t1255;
  t2918 = Power(t704,2);
  t2931 = -0.14939999999999998*t2918;
  t3169 = t2917 + t2931;
  t3177 = 3.4261*t764*t3169;
  t4389 = 0.5118593399999999*var2[3]*t2186;
  t4437 = 6.8522*t764*t2186;
  t4461 = t1266 + t4437;
  t4480 = -1.*var2[1]*t4461;
  t4511 = -1.*var2[0]*t2276;
  t3626 = -1.*t2521*t704;
  t3719 = -0.14939999999999998*t65*t704;
  t3734 = t3626 + t3719;
  t4619 = 3.4261*t764*t2766;
  t3309 = Power(t65,2);
  t3314 = 0.14939999999999998*t3309;
  t3383 = 0. + t2917 + t3314;
  t4684 = 3.4261*t2186*t3169;
  t4153 = -3.4261*t764*t1255;
  t4200 = -3.4261*t1615*t1255;
  t4308 = t4153 + t4200;
  t4062 = -3.4261*t1967;
  t3178 = t2825 + t3177;
  t4724 = t4619 + t4684;
  t3521 = 3.4261*t3383*t1615;
  t3835 = 3.4261*t3734*t1255;
  t3949 = t3521 + t3835 + t2825 + t3177;
  t4837 = 3.4261*t764*t3734;
  t4857 = 3.4261*t3383*t1255;
  t4929 = t4837 + t4619 + t4857 + t4684;
  t4318 = -3.4261*t1615*t2766;
  t4326 = -3.4261*t1255*t3169;
  t4344 = t4318 + t4326;
  t5184 = -3.4261*t2766*t1255;
  t5282 = -3.4261*t764*t3169;
  t5283 = t5184 + t5282;
  t5853 = 0.5118593399999999*var2[0]*t764;
  t5882 = 0.5118593399999999*var2[1]*t2186;
  t4388 = 0.5118593399999999*t1255;
  t5288 = 0.5118593399999999*t764;
  t5752 = 0.5118593399999999*t3169;
  t5804 = -0.0389 + t5752;
  p_output1[0]=t1784 + t2284 + t938 - 1.*t3178*var2[2];
  p_output1[1]=t1784 + t2284 + t938 - 1.*t3949*var2[2];
  p_output1[2]=-3.4261*Power(t1615,2) + t4062;
  p_output1[3]=t4308;
  p_output1[4]=t4344;
  p_output1[5]=t4388;
  p_output1[6]=t4389 + t4480 + t4511 - 1.*t4724*var2[2];
  p_output1[7]=t4389 + t4480 + t4511 - 1.*t4929*var2[2];
  p_output1[8]=t4308;
  p_output1[9]=-3.4261*t1785 + t4062;
  p_output1[10]=t5283;
  p_output1[11]=t5288;
  p_output1[12]=-1.*t3178*var2[0] - 1.*t4724*var2[1];
  p_output1[13]=-1.*t3949*var2[0] - 1.*t4929*var2[1] - 1.*(6.8522*t2766*t3383 + 6.8522*t3169*t3734)*var2[2] + 0.5118593399999999*t3734*var2[3];
  p_output1[14]=t4344;
  p_output1[15]=t5283;
  p_output1[16]=-0.0389 - 3.4261*Power(t2766,2) - 3.4261*Power(t3169,2);
  p_output1[17]=t5804;
  p_output1[18]=t5853 + t5882;
  p_output1[19]=t5853 + t5882 + 0.5118593399999999*t3734*var2[2];
  p_output1[20]=t4388;
  p_output1[21]=t5288;
  p_output1[22]=t5804;
  p_output1[23]=-0.11537178539599996;
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

#include "J_MmatDx2_amber3_feet.hh"

namespace RightSS1
{

void J_MmatDx2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
