/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:31 GMT-08:00
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
  double t742;
  double t1962;
  double t2288;
  double t2495;
  double t2956;
  double t2995;
  double t3023;
  double t3174;
  double t3193;
  double t3197;
  double t3265;
  double t3285;
  double t3870;
  double t5679;
  double t5711;
  double t5719;
  double t5809;
  double t5837;
  double t3092;
  double t3248;
  double t4130;
  double t4586;
  double t4810;
  double t5066;
  double t5072;
  double t5216;
  double t5442;
  double t5445;
  double t5473;
  double t5539;
  double t5551;
  double t5554;
  double t5563;
  double t5601;
  double t6033;
  double t5841;
  double t5853;
  double t5859;
  double t5879;
  double t6057;
  double t6257;
  double t6327;
  double t6344;
  double t7459;
  double t7514;
  double t7539;
  double t7569;
  double t7599;
  double t6672;
  double t6720;
  double t6728;
  double t7604;
  double t6510;
  double t6529;
  double t6549;
  double t7608;
  double t7216;
  double t7294;
  double t7309;
  double t7019;
  double t6392;
  double t7621;
  double t6550;
  double t6768;
  double t6774;
  double t7720;
  double t7916;
  double t7980;
  double t7329;
  double t7334;
  double t7373;
  double t8062;
  double t8063;
  double t8066;
  double t8116;
  double t8117;
  double t7438;
  double t8067;
  double t8111;
  double t8112;
  t742 = Cos(var1[3]);
  t1962 = Sin(var1[2]);
  t2288 = -1.*t742*t1962;
  t2495 = Cos(var1[2]);
  t2956 = Sin(var1[3]);
  t2995 = -1.*t2495*t2956;
  t3023 = t2288 + t2995;
  t3174 = t2495*t742;
  t3193 = -1.*t1962*t2956;
  t3197 = t3174 + t3193;
  t3265 = t742*t1962;
  t3285 = t2495*t2956;
  t3870 = t3265 + t3285;
  t5679 = -1.*t742;
  t5711 = 1. + t5679;
  t5719 = -0.4999*t5711;
  t5809 = -0.6493*t742;
  t5837 = t5719 + t5809;
  t3092 = 0.5118593399999999*var2[3]*t3023;
  t3248 = 6.8522*t3023*t3197;
  t4130 = 6.8522*t3870*t3197;
  t4586 = t3248 + t4130;
  t4810 = -1.*var2[0]*t4586;
  t5066 = Power(t3023,2);
  t5072 = 3.4261*t5066;
  t5216 = 3.4261*t3023*t3870;
  t5442 = Power(t3197,2);
  t5445 = 3.4261*t5442;
  t5473 = -1.*t2495*t742;
  t5539 = t1962*t2956;
  t5551 = t5473 + t5539;
  t5554 = 3.4261*t3197*t5551;
  t5563 = t5072 + t5216 + t5445 + t5554;
  t5601 = -1.*var2[1]*t5563;
  t6033 = t5837*t742;
  t5841 = t5837*t2956;
  t5853 = 0.14939999999999998*t742*t2956;
  t5859 = t5841 + t5853;
  t5879 = 3.4261*t5859*t3197;
  t6057 = Power(t2956,2);
  t6257 = -0.14939999999999998*t6057;
  t6327 = t6033 + t6257;
  t6344 = 3.4261*t3023*t6327;
  t7459 = 0.5118593399999999*var2[3]*t5551;
  t7514 = 6.8522*t3023*t5551;
  t7539 = t3248 + t7514;
  t7569 = -1.*var2[1]*t7539;
  t7599 = -1.*var2[0]*t5563;
  t6672 = -1.*t5837*t2956;
  t6720 = -0.14939999999999998*t742*t2956;
  t6728 = t6672 + t6720;
  t7604 = 3.4261*t3023*t5859;
  t6510 = Power(t742,2);
  t6529 = 0.14939999999999998*t6510;
  t6549 = 0. + t6033 + t6529;
  t7608 = 3.4261*t5551*t6327;
  t7216 = -3.4261*t3023*t3197;
  t7294 = -3.4261*t3870*t3197;
  t7309 = t7216 + t7294;
  t7019 = -3.4261*t5442;
  t6392 = t5879 + t6344;
  t7621 = t7604 + t7608;
  t6550 = 3.4261*t6549*t3870;
  t6768 = 3.4261*t6728*t3197;
  t6774 = t6550 + t6768 + t5879 + t6344;
  t7720 = 3.4261*t3023*t6728;
  t7916 = 3.4261*t6549*t3197;
  t7980 = t7720 + t7604 + t7916 + t7608;
  t7329 = -3.4261*t3870*t5859;
  t7334 = -3.4261*t3197*t6327;
  t7373 = t7329 + t7334;
  t8062 = -3.4261*t5859*t3197;
  t8063 = -3.4261*t3023*t6327;
  t8066 = t8062 + t8063;
  t8116 = 0.5118593399999999*var2[0]*t3023;
  t8117 = 0.5118593399999999*var2[1]*t5551;
  t7438 = 0.5118593399999999*t3197;
  t8067 = 0.5118593399999999*t3023;
  t8111 = 0.5118593399999999*t6327;
  t8112 = -0.0389 + t8111;
  p_output1[0]=t3092 + t4810 + t5601 - 1.*t6392*var2[2];
  p_output1[1]=t3092 + t4810 + t5601 - 1.*t6774*var2[2];
  p_output1[2]=-3.4261*Power(t3870,2) + t7019;
  p_output1[3]=t7309;
  p_output1[4]=t7373;
  p_output1[5]=t7438;
  p_output1[6]=t7459 + t7569 + t7599 - 1.*t7621*var2[2];
  p_output1[7]=t7459 + t7569 + t7599 - 1.*t7980*var2[2];
  p_output1[8]=t7309;
  p_output1[9]=-3.4261*t5066 + t7019;
  p_output1[10]=t8066;
  p_output1[11]=t8067;
  p_output1[12]=-1.*t6392*var2[0] - 1.*t7621*var2[1];
  p_output1[13]=-1.*t6774*var2[0] - 1.*t7980*var2[1] - 1.*(6.8522*t5859*t6549 + 6.8522*t6327*t6728)*var2[2] + 0.5118593399999999*t6728*var2[3];
  p_output1[14]=t7373;
  p_output1[15]=t8066;
  p_output1[16]=-0.0389 - 3.4261*Power(t5859,2) - 3.4261*Power(t6327,2);
  p_output1[17]=t8112;
  p_output1[18]=t8116 + t8117;
  p_output1[19]=t8116 + t8117 + 0.5118593399999999*t6728*var2[2];
  p_output1[20]=t7438;
  p_output1[21]=t8067;
  p_output1[22]=t8112;
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

#include "J_MmatDx2_amber3_PF.hh"

namespace RightSS
{

void J_MmatDx2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
