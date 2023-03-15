/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:32 GMT-08:00
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
  double t1123;
  double t509;
  double t698;
  double t1183;
  double t2865;
  double t998;
  double t1295;
  double t1327;
  double t471;
  double t4102;
  double t4207;
  double t4219;
  double t4399;
  double t4473;
  double t2749;
  double t3361;
  double t3430;
  double t3482;
  double t3491;
  double t3791;
  double t4711;
  double t4716;
  double t4798;
  double t4939;
  double t5090;
  double t5160;
  double t5997;
  double t6063;
  double t6149;
  double t6341;
  double t6378;
  double t6453;
  double t6837;
  double t6841;
  double t7438;
  double t7443;
  double t7447;
  double t7550;
  double t7565;
  double t7686;
  double t7795;
  double t7860;
  double t7866;
  double t7899;
  double t7985;
  double t7990;
  double t7993;
  double t8004;
  double t8009;
  double t8020;
  double t6880;
  double t6949;
  double t7085;
  double t4015;
  double t4621;
  double t4657;
  double t4700;
  double t5213;
  double t5268;
  double t5337;
  double t5345;
  double t5538;
  double t6746;
  double t6774;
  double t6831;
  double t6868;
  double t7137;
  double t7199;
  double t7371;
  double t7564;
  double t7902;
  double t7959;
  double t7983;
  double t8005;
  double t8006;
  double t8022;
  double t8025;
  double t8039;
  double t8040;
  double t8042;
  double t8045;
  double t8046;
  double t8047;
  double t8049;
  double t8050;
  double t8073;
  double t8074;
  double t8075;
  double t8076;
  double t8077;
  double t7973;
  double t8030;
  double t8043;
  double t8052;
  double t8055;
  double t8062;
  double t8063;
  double t8064;
  double t5179;
  double t5710;
  double t5865;
  double t8082;
  double t8083;
  double t8084;
  t1123 = Cos(var1[3]);
  t509 = Cos(var1[4]);
  t698 = Sin(var1[3]);
  t1183 = Sin(var1[4]);
  t2865 = Sin(var1[2]);
  t998 = -1.*t509*t698;
  t1295 = -1.*t1123*t1183;
  t1327 = t998 + t1295;
  t471 = Cos(var1[2]);
  t4102 = -1.*t509;
  t4207 = 1. + t4102;
  t4219 = -0.9063*t4207;
  t4399 = -1.078185*t509;
  t4473 = t4219 + t4399;
  t2749 = t471*t1327;
  t3361 = -1.*t1123*t509;
  t3430 = t698*t1183;
  t3482 = t3361 + t3430;
  t3491 = t2865*t3482;
  t3791 = t2749 + t3491;
  t4711 = t2865*t1327;
  t4716 = t1123*t509;
  t4798 = -1.*t698*t1183;
  t4939 = t4716 + t4798;
  t5090 = t471*t4939;
  t5160 = t4711 + t5090;
  t5997 = t509*t698;
  t6063 = t1123*t1183;
  t6149 = t5997 + t6063;
  t6341 = t471*t6149;
  t6378 = t2865*t4939;
  t6453 = t6341 + t6378;
  t6837 = -1.*t2865*t4939;
  t6841 = t2749 + t6837;
  t7438 = 0.4999*t698;
  t7443 = t4473*t698;
  t7447 = -0.17188499999999995*t1123*t1183;
  t7550 = t7438 + t7443 + t7447;
  t7565 = -1.*t1123;
  t7686 = 1. + t7565;
  t7795 = -0.4999*t7686;
  t7860 = t1123*t4473;
  t7866 = 0.17188499999999995*t698*t1183;
  t7899 = t7795 + t7860 + t7866;
  t7985 = -0.4999*t698;
  t7990 = -1.*t4473*t698;
  t7993 = 0.17188499999999995*t1123*t1183;
  t8004 = t7985 + t7990 + t7993;
  t8009 = 0.4999*t1123;
  t8020 = t8009 + t7860 + t7866;
  t6880 = -1.*t2865*t1327;
  t6949 = t471*t3482;
  t7085 = t6880 + t6949;
  t4015 = 0.4999*t1183;
  t4621 = t4473*t1183;
  t4657 = 0.17188499999999995*t509*t1183;
  t4700 = t4015 + t4621 + t4657;
  t5213 = 0.4999*t509;
  t5268 = t4473*t509;
  t5337 = Power(t1183,2);
  t5345 = -0.17188499999999995*t5337;
  t5538 = t5213 + t5268 + t5345;
  t6746 = -1.*t2865*t6149;
  t6774 = t6746 + t5090;
  t6831 = 0.85216*t5160*t6774;
  t6868 = 0.85216*t6841*t6453;
  t7137 = 0.85216*t5160*t7085;
  t7199 = 0.85216*t6841*t3791;
  t7371 = t6831 + t6868 + t7137 + t7199;
  t7564 = -1.*t7550*t4939;
  t7902 = -1.*t1327*t7899;
  t7959 = t7564 + t7902;
  t7983 = t7550*t4939;
  t8005 = t8004*t4939;
  t8006 = t1327*t7899;
  t8022 = t6149*t8020;
  t8025 = t7983 + t8005 + t8006 + t8022;
  t8039 = t7550*t6149;
  t8040 = t4939*t7899;
  t8042 = t8039 + t8040;
  t8045 = -1.*t1327*t7550;
  t8046 = -1.*t1327*t8004;
  t8047 = -1.*t4939*t8020;
  t8049 = -1.*t7899*t3482;
  t8050 = t8045 + t8046 + t8047 + t8049;
  t8073 = 0.85216*t6841*t7959;
  t8074 = 0.85216*t6841*t8025;
  t8075 = 0.85216*t8042*t7085;
  t8076 = 0.85216*t6774*t8050;
  t8077 = t8073 + t8074 + t8075 + t8076;
  t7973 = 0.85216*t5160*t7959;
  t8030 = 0.85216*t5160*t8025;
  t8043 = 0.85216*t8042*t3791;
  t8052 = 0.85216*t6453*t8050;
  t8055 = t7973 + t8030 + t8043 + t8052;
  t8062 = 0.85216*t4700*t6841;
  t8063 = 0.85216*t5538*t7085;
  t8064 = t8062 + t8063;
  t5179 = 0.85216*t4700*t5160;
  t5710 = 0.85216*t5538*t3791;
  t5865 = t5179 + t5710;
  t8082 = 0.85216*t5538*t8025;
  t8083 = 0.85216*t4700*t8050;
  t8084 = t8082 + t8083;
  p_output1[0]=var2[3]*(-0.5*(1.70432*t3791*t5160 + 1.70432*t5160*t6453)*var2[0] - 0.5*t7371*var2[1] - 0.5*t8055*var2[2] - 0.5*t5865*var2[3] + 0.07323676079999998*t3791*var2[4]);
  p_output1[1]=var2[3]*(-0.5*t7371*var2[0] - 0.5*(1.70432*t6774*t6841 + 1.70432*t6841*t7085)*var2[1] - 0.5*t8077*var2[2] - 0.5*t8064*var2[3] + 0.07323676079999998*t7085*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t8055*var2[0] - 0.5*t8077*var2[1] - 0.5*(1.70432*t8025*t8042 + 1.70432*t7959*t8050)*var2[2] - 0.5*t8084*var2[3] + 0.07323676079999998*t8025*var2[4]);
  p_output1[3]=(-0.5*t5865*var2[0] - 0.5*t8064*var2[1] - 0.5*t8084*var2[2])*var2[3];
  p_output1[4]=(0.07323676079999998*t3791*var2[0] + 0.07323676079999998*t7085*var2[1] + 0.07323676079999998*t8025*var2[2])*var2[3];
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

#include "Ce2_vec_L3_J4_amber3_PF.hh"

namespace SymFunction
{

void Ce2_vec_L3_J4_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
