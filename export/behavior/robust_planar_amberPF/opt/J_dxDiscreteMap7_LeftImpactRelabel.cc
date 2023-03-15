/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:35:15 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t265;
  double t1378;
  double t2604;
  double t2709;
  double t3091;
  double t3350;
  double t3426;
  double t3446;
  double t3769;
  double t3779;
  double t3811;
  double t3955;
  double t1642;
  double t2012;
  double t3219;
  double t3301;
  double t4440;
  double t4446;
  double t4457;
  double t2958;
  double t3645;
  double t3964;
  double t4216;
  double t4231;
  double t4325;
  double t4344;
  double t4424;
  double t4512;
  double t4564;
  double t4648;
  double t4675;
  double t4747;
  double t4754;
  double t5159;
  double t5171;
  double t5197;
  double t2072;
  double t5106;
  double t5024;
  double t5063;
  double t5078;
  double t5082;
  double t5092;
  double t5093;
  double t5097;
  double t5105;
  double t5109;
  double t5111;
  double t5113;
  double t5135;
  double t5140;
  double t5157;
  double t5201;
  double t5211;
  double t5224;
  double t5247;
  double t5262;
  double t5266;
  double t5285;
  double t5287;
  double t5289;
  double t5306;
  double t5309;
  double t5322;
  double t5344;
  double t5352;
  double t5355;
  double t5360;
  double t5432;
  t265 = Cos(var2[2]);
  t1378 = Cos(var2[5]);
  t2604 = Sin(var2[2]);
  t2709 = Sin(var2[5]);
  t3091 = Cos(var2[6]);
  t3350 = -1.*t265*t1378;
  t3426 = t2604*t2709;
  t3446 = t3350 + t3426;
  t3769 = t1378*t2604;
  t3779 = t265*t2709;
  t3811 = t3769 + t3779;
  t3955 = Sin(var2[6]);
  t1642 = -1.*t1378;
  t2012 = 1. + t1642;
  t3219 = -1.*t3091;
  t3301 = 1. + t3219;
  t4440 = -1.*t1378*t2604;
  t4446 = -1.*t265*t2709;
  t4457 = t4440 + t4446;
  t2958 = 0.4999*t2604*t2709;
  t3645 = -0.9063*t3301*t3446;
  t3964 = 0.9063*t3811*t3955;
  t4216 = t3091*t3446;
  t4231 = t3811*t3955;
  t4325 = t4216 + t4231;
  t4344 = -1.373025*t4325;
  t4424 = -0.4999*t265*t2709;
  t4512 = -0.9063*t3301*t4457;
  t4564 = 0.9063*t3446*t3955;
  t4648 = t3091*t4457;
  t4675 = t3446*t3955;
  t4747 = t4648 + t4675;
  t4754 = -1.373025*t4747;
  t5159 = t265*t1378;
  t5171 = -1.*t2604*t2709;
  t5197 = t5159 + t5171;
  t2072 = 0.4999*t265*t2012;
  t5106 = -0.9063*t4457*t3955;
  t5024 = -0.4999*t265*t1378;
  t5063 = t5024 + t2958 + t3645 + t3964 + t4344;
  t5078 = -1.*var4[1]*t5063;
  t5082 = -0.4999*t1378*t2604;
  t5092 = t5082 + t4424 + t4512 + t4564 + t4754;
  t5093 = -1.*var4[0]*t5092;
  t5097 = t5078 + t5093;
  t5105 = 0.9063*t3091*t3446;
  t5109 = -1.*t4457*t3955;
  t5111 = t4216 + t5109;
  t5113 = -1.373025*t5111;
  t5135 = t5105 + t5106 + t5113;
  t5140 = -1.*var4[1]*t5135;
  t5157 = 0.9063*t3091*t4457;
  t5201 = -0.9063*t5197*t3955;
  t5211 = -1.*t5197*t3955;
  t5224 = t4648 + t5211;
  t5247 = -1.373025*t5224;
  t5262 = t5157 + t5201 + t5247;
  t5266 = -1.*var4[0]*t5262;
  t5285 = t5140 + t5266;
  t5287 = 0.9063*t3301*t5197;
  t5289 = t3091*t5197;
  t5306 = t4457*t3955;
  t5309 = t5289 + t5306;
  t5322 = 1.373025*t5309;
  t5344 = 0.4999*t265*t2709;
  t5352 = 0.9063*t3301*t4457;
  t5355 = -0.9063*t3446*t3955;
  t5360 = 1.373025*t4747;
  t5432 = -0.9063*t3091*t5197;
  p_output1[0]=-1.;
  p_output1[1]=-1.;
  p_output1[2]=-1.*(0.4999*t2012*t2604 + t4424 + t4512 + t4564 + t4754)*var4[0] - 1.*(t2072 + t2958 + t3645 + t3964 + t4344)*var4[1];
  p_output1[3]=t5097;
  p_output1[4]=t5285;
  p_output1[5]=0. + t2072 + t2958 + t5106 + t5287 + t5322;
  p_output1[6]=0. - 0.4999*t2012*t2604 + t5344 + t5352 + t5355 + t5360;
  p_output1[7]=t5097;
  p_output1[8]=t5097;
  p_output1[9]=t5285;
  p_output1[10]=0. + t2958 + t5024 + t5106 + t5287 + t5322;
  p_output1[11]=0. + 0.4999*t1378*t2604 + t5344 + t5352 + t5355 + t5360;
  p_output1[12]=t5285;
  p_output1[13]=t5285;
  p_output1[14]=-1.*(-0.9063*t3091*t3811 + t5201 - 1.373025*(-1.*t3091*t3811 + t5211))*var4[0] - 1.*(t5106 - 1.373025*(t5109 - 1.*t3091*t5197) + t5432)*var4[1];
  p_output1[15]=0. + t3964 + 1.373025*(-1.*t3811*t3955 + t5289) + t5432;
  p_output1[16]=0. - 0.9063*t3091*t4457 + 0.9063*t3955*t5197 + 1.373025*t5224;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMap7_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void J_dxDiscreteMap7_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
