/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:38 GMT-08:00
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
  double t1076;
  double t585;
  double t2971;
  double t2476;
  double t1370;
  double t1745;
  double t1760;
  double t1856;
  double t1892;
  double t3493;
  double t2195;
  double t3496;
  double t3498;
  double t3565;
  double t3819;
  double t4087;
  double t4091;
  double t4118;
  double t4170;
  double t4194;
  double t4225;
  double t4251;
  double t652;
  double t1902;
  double t1930;
  double t2174;
  double t2525;
  double t3008;
  double t3424;
  double t4297;
  double t4286;
  double t4298;
  double t4375;
  double t3708;
  double t4715;
  double t4804;
  double t4883;
  double t5950;
  double t5954;
  double t5313;
  double t5372;
  double t5391;
  double t5421;
  double t5632;
  double t5755;
  double t5853;
  double t5855;
  double t6017;
  double t6021;
  double t5881;
  double t5892;
  double t5910;
  double t5996;
  double t6287;
  double t6303;
  double t6314;
  double t6331;
  double t6338;
  double t6340;
  double t6345;
  double t3484;
  double t3709;
  double t4697;
  double t4907;
  double t4977;
  double t5032;
  double t5110;
  double t5127;
  double t5177;
  double t5178;
  double t5187;
  double t5254;
  double t5506;
  double t6011;
  double t6112;
  double t7009;
  double t7058;
  double t7115;
  double t7121;
  double t6218;
  t1076 = Cos(var1[7]);
  t585 = Sin(var1[7]);
  t2971 = Cos(var1[6]);
  t2476 = Sin(var1[6]);
  t1370 = -1.*t1076;
  t1745 = 1. + t1370;
  t1760 = -0.9063*t1745;
  t1856 = -1.0567*t1076;
  t1892 = t1760 + t1856;
  t3493 = Cos(var1[2]);
  t2195 = Sin(var1[2]);
  t3496 = t2971*t1076;
  t3498 = -1.*t2476*t585;
  t3565 = t3496 + t3498;
  t3819 = 0.4999*t1076;
  t4087 = t1892*t1076;
  t4091 = Power(t585,2);
  t4118 = -0.15039999999999998*t4091;
  t4170 = t3819 + t4087 + t4118;
  t4194 = -1.*t1076*t2476;
  t4225 = -1.*t2971*t585;
  t4251 = t4194 + t4225;
  t652 = 0.4999*t585;
  t1902 = t1892*t585;
  t1930 = 0.15039999999999998*t1076*t585;
  t2174 = t652 + t1902 + t1930;
  t2525 = t1076*t2476;
  t3008 = t2971*t585;
  t3424 = t2525 + t3008;
  t4297 = -1.*t2195*t3565;
  t4286 = t3493*t4251;
  t4298 = t4286 + t4297;
  t4375 = -1.*t2195*t4251;
  t3708 = t3493*t3565;
  t4715 = -1.*t2971*t1076;
  t4804 = t2476*t585;
  t4883 = t4715 + t4804;
  t5950 = t2971*t1892;
  t5954 = 0.15039999999999998*t2476*t585;
  t5313 = 0.4999*t2476;
  t5372 = t1892*t2476;
  t5391 = -0.15039999999999998*t2971*t585;
  t5421 = t5313 + t5372 + t5391;
  t5632 = -0.4999*t2476;
  t5755 = -1.*t1892*t2476;
  t5853 = 0.15039999999999998*t2971*t585;
  t5855 = t5632 + t5755 + t5853;
  t6017 = 0.4999*t2971;
  t6021 = t6017 + t5950 + t5954;
  t5881 = -1.*t2971;
  t5892 = 1. + t5881;
  t5910 = -0.4999*t5892;
  t5996 = t5910 + t5950 + t5954;
  t6287 = -0.4999*t585;
  t6303 = -1.*t1892*t585;
  t6314 = -0.15039999999999998*t1076*t585;
  t6331 = t6287 + t6303 + t6314;
  t6338 = Power(t1076,2);
  t6340 = 0.15039999999999998*t6338;
  t6345 = t3819 + t4087 + t6340;
  t3484 = -1.*t2195*t3424;
  t3709 = t3484 + t3708;
  t4697 = 3.5899*t2174*t4298;
  t4907 = t3493*t4883;
  t4977 = t4375 + t4907;
  t5032 = 3.5899*t4170*t4977;
  t5110 = t2195*t4251;
  t5127 = t5110 + t3708;
  t5177 = 3.5899*t2174*t5127;
  t5178 = t2195*t4883;
  t5187 = t4286 + t5178;
  t5254 = 3.5899*t4170*t5187;
  t5506 = t5421*t3565;
  t6011 = t4251*t5996;
  t6112 = -1.*t4251*t5421;
  t7009 = 0.15039999999999998*t1076*t2476;
  t7058 = t7009 + t5853;
  t7115 = -0.15039999999999998*t2971*t1076;
  t7121 = t7115 + t5954;
  t6218 = -1.*t5996*t4883;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(3.5899*t2174*t3709 + 3.5899*t4170*t4298)*var2[0] + 0.5*(3.5899*t2174*(-1.*t3424*t3493 + t4297) + 3.5899*t4170*(-1.*t3493*t3565 + t4375))*var2[1])*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(0.5*(t5177 + t5254)*var2[0] + 0.5*(t4697 + t5032)*var2[1] + 0.5*(3.5899*t4170*(t5506 + t3565*t5855 + t6011 + t3424*t6021) + 3.5899*t2174*(-1.*t4251*t5855 - 1.*t3565*t6021 + t6112 + t6218))*var2[2])*var2[6];
  p_output1[7]=var2[6]*(0.5*(t5177 + t5254 + 3.5899*t5127*t6331 + 3.5899*(t3424*t3493 + t2195*t3565)*t6345)*var2[0] + 0.5*(t4697 + t5032 + 3.5899*t4298*t6331 + 3.5899*t3709*t6345)*var2[1] + 0.5*(3.5899*(t3424*t5421 + t3565*t5996)*t6331 + 3.5899*(-1.*t3565*t5421 - 1.*t4251*t5996)*t6345 + 3.5899*t4170*(t5506 + t6011 + t3565*t7058 + t3424*t7121) + 3.5899*t2174*(t6112 + t6218 - 1.*t4251*t7058 - 1.*t3565*t7121))*var2[2] + 0.5*(7.1798*t4170*t6331 + 7.1798*t2174*t6345)*var2[6] - 0.26996047999999995*t6331*var2[7]);
  p_output1[8]=0;
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

#include "Ce3_vec_L6_J7_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L6_J7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
