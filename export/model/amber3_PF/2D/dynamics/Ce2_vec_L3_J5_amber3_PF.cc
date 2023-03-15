/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:33 GMT-08:00
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
  double t2139;
  double t463;
  double t471;
  double t2573;
  double t3430;
  double t2133;
  double t2749;
  double t3326;
  double t436;
  double t4069;
  double t4117;
  double t4219;
  double t4399;
  double t4548;
  double t4700;
  double t4711;
  double t4716;
  double t5033;
  double t5090;
  double t5117;
  double t5337;
  double t5345;
  double t3401;
  double t3491;
  double t3573;
  double t3772;
  double t3791;
  double t3930;
  double t5816;
  double t5975;
  double t5997;
  double t6063;
  double t6296;
  double t6341;
  double t7036;
  double t7038;
  double t7795;
  double t7860;
  double t7866;
  double t7959;
  double t7983;
  double t7985;
  double t7993;
  double t8005;
  double t8006;
  double t8009;
  double t8040;
  double t8042;
  double t8043;
  double t8056;
  double t8057;
  double t7085;
  double t7137;
  double t7199;
  double t5510;
  double t5538;
  double t5710;
  double t6929;
  double t6949;
  double t4015;
  double t4621;
  double t4657;
  double t4662;
  double t5160;
  double t5179;
  double t5213;
  double t5268;
  double t6453;
  double t6524;
  double t6696;
  double t6995;
  double t7065;
  double t7434;
  double t7438;
  double t7443;
  double t7973;
  double t8022;
  double t8025;
  double t8039;
  double t8050;
  double t8052;
  double t8060;
  double t8061;
  double t8063;
  double t8065;
  double t8066;
  double t8068;
  double t8070;
  double t8071;
  double t8073;
  double t8074;
  double t8095;
  double t8096;
  double t8097;
  double t8098;
  double t8101;
  double t8030;
  double t8062;
  double t8067;
  double t8075;
  double t8076;
  double t8082;
  double t8083;
  double t8085;
  double t8086;
  double t8087;
  double t5121;
  double t5301;
  double t6378;
  double t6726;
  double t6729;
  double t8106;
  double t8107;
  double t8108;
  double t8109;
  double t8110;
  t2139 = Cos(var1[3]);
  t463 = Cos(var1[4]);
  t471 = Sin(var1[3]);
  t2573 = Sin(var1[4]);
  t3430 = Sin(var1[2]);
  t2133 = -1.*t463*t471;
  t2749 = -1.*t2139*t2573;
  t3326 = t2133 + t2749;
  t436 = Cos(var1[2]);
  t4069 = -1.*t463;
  t4117 = 1. + t4069;
  t4219 = -0.9063*t4117;
  t4399 = -1.078185*t463;
  t4548 = t4219 + t4399;
  t4700 = t3430*t3326;
  t4711 = t2139*t463;
  t4716 = -1.*t471*t2573;
  t5033 = t4711 + t4716;
  t5090 = t436*t5033;
  t5117 = t4700 + t5090;
  t5337 = 0.4999*t463;
  t5345 = t4548*t463;
  t3401 = t436*t3326;
  t3491 = -1.*t2139*t463;
  t3573 = t471*t2573;
  t3772 = t3491 + t3573;
  t3791 = t3430*t3772;
  t3930 = t3401 + t3791;
  t5816 = t463*t471;
  t5975 = t2139*t2573;
  t5997 = t5816 + t5975;
  t6063 = t436*t5997;
  t6296 = t3430*t5033;
  t6341 = t6063 + t6296;
  t7036 = -1.*t3430*t5033;
  t7038 = t3401 + t7036;
  t7795 = 0.4999*t471;
  t7860 = t4548*t471;
  t7866 = -0.17188499999999995*t2139*t2573;
  t7959 = t7795 + t7860 + t7866;
  t7983 = -1.*t2139;
  t7985 = 1. + t7983;
  t7993 = -0.4999*t7985;
  t8005 = t2139*t4548;
  t8006 = 0.17188499999999995*t471*t2573;
  t8009 = t7993 + t8005 + t8006;
  t8040 = 0.17188499999999995*t463*t471;
  t8042 = 0.17188499999999995*t2139*t2573;
  t8043 = t8040 + t8042;
  t8056 = -0.17188499999999995*t2139*t463;
  t8057 = t8056 + t8006;
  t7085 = -1.*t3430*t3326;
  t7137 = t436*t3772;
  t7199 = t7085 + t7137;
  t5510 = Power(t463,2);
  t5538 = 0.17188499999999995*t5510;
  t5710 = t5337 + t5345 + t5538;
  t6929 = -1.*t3430*t5997;
  t6949 = t6929 + t5090;
  t4015 = -0.4999*t2573;
  t4621 = -1.*t4548*t2573;
  t4657 = -0.17188499999999995*t463*t2573;
  t4662 = t4015 + t4621 + t4657;
  t5160 = 0.4999*t2573;
  t5179 = t4548*t2573;
  t5213 = 0.17188499999999995*t463*t2573;
  t5268 = t5160 + t5179 + t5213;
  t6453 = Power(t2573,2);
  t6524 = -0.17188499999999995*t6453;
  t6696 = t5337 + t5345 + t6524;
  t6995 = 0.85216*t5117*t6949;
  t7065 = 0.85216*t7038*t6341;
  t7434 = 0.85216*t5117*t7199;
  t7438 = 0.85216*t7038*t3930;
  t7443 = t6995 + t7065 + t7434 + t7438;
  t7973 = -1.*t7959*t5033;
  t8022 = -1.*t3326*t8009;
  t8025 = t7973 + t8022;
  t8039 = t7959*t5033;
  t8050 = t8043*t5033;
  t8052 = t3326*t8009;
  t8060 = t5997*t8057;
  t8061 = t8039 + t8050 + t8052 + t8060;
  t8063 = t7959*t5997;
  t8065 = t5033*t8009;
  t8066 = t8063 + t8065;
  t8068 = -1.*t3326*t7959;
  t8070 = -1.*t3326*t8043;
  t8071 = -1.*t5033*t8057;
  t8073 = -1.*t8009*t3772;
  t8074 = t8068 + t8070 + t8071 + t8073;
  t8095 = 0.85216*t7038*t8025;
  t8096 = 0.85216*t7038*t8061;
  t8097 = 0.85216*t8066*t7199;
  t8098 = 0.85216*t6949*t8074;
  t8101 = t8095 + t8096 + t8097 + t8098;
  t8030 = 0.85216*t5117*t8025;
  t8062 = 0.85216*t5117*t8061;
  t8067 = 0.85216*t8066*t3930;
  t8075 = 0.85216*t6341*t8074;
  t8076 = t8030 + t8062 + t8067 + t8075;
  t8082 = 0.85216*t5710*t6949;
  t8083 = 0.85216*t4662*t7038;
  t8085 = 0.85216*t5268*t7038;
  t8086 = 0.85216*t6696*t7199;
  t8087 = t8082 + t8083 + t8085 + t8086;
  t5121 = 0.85216*t4662*t5117;
  t5301 = 0.85216*t5268*t5117;
  t6378 = 0.85216*t5710*t6341;
  t6726 = 0.85216*t6696*t3930;
  t6729 = t5121 + t5301 + t6378 + t6726;
  t8106 = 0.85216*t5710*t8025;
  t8107 = 0.85216*t4662*t8066;
  t8108 = 0.85216*t6696*t8061;
  t8109 = 0.85216*t5268*t8074;
  t8110 = t8106 + t8107 + t8108 + t8109;
  p_output1[0]=var2[4]*(-0.5*(1.70432*t3930*t5117 + 1.70432*t5117*t6341)*var2[0] - 0.5*t7443*var2[1] - 0.5*t8076*var2[2] - 0.5*t6729*var2[3] + 0.07323676079999998*t3930*var2[4]);
  p_output1[1]=var2[4]*(-0.5*t7443*var2[0] - 0.5*(1.70432*t6949*t7038 + 1.70432*t7038*t7199)*var2[1] - 0.5*t8101*var2[2] - 0.5*t8087*var2[3] + 0.07323676079999998*t7199*var2[4]);
  p_output1[2]=var2[4]*(-0.5*t8076*var2[0] - 0.5*t8101*var2[1] - 0.5*(1.70432*t8061*t8066 + 1.70432*t8025*t8074)*var2[2] - 0.5*t8110*var2[3] + 0.07323676079999998*t8061*var2[4]);
  p_output1[3]=var2[4]*(-0.5*t6729*var2[0] - 0.5*t8087*var2[1] - 0.5*t8110*var2[2] - 0.5*(1.70432*t5268*t5710 + 1.70432*t4662*t6696)*var2[3] + 0.07323676079999998*t4662*var2[4]);
  p_output1[4]=(0.07323676079999998*t3930*var2[0] + 0.07323676079999998*t7199*var2[1] + 0.07323676079999998*t8061*var2[2] + 0.07323676079999998*t4662*var2[3])*var2[4];
  p_output1[5]=0;
  p_output1[6]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce2_vec_L3_J5_amber3_PF.hh"

namespace SymFunction
{

void Ce2_vec_L3_J5_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
