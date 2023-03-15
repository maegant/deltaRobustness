/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:50 GMT-08:00
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
  double t134;
  double t212;
  double t125;
  double t241;
  double t626;
  double t655;
  double t656;
  double t555;
  double t568;
  double t596;
  double t177;
  double t374;
  double t386;
  double t689;
  double t690;
  double t699;
  double t951;
  double t977;
  double t987;
  double t990;
  double t1012;
  double t406;
  double t685;
  double t703;
  double t734;
  double t738;
  double t767;
  double t776;
  double t784;
  double t817;
  double t840;
  double t854;
  double t855;
  double t872;
  double t876;
  double t941;
  double t1016;
  double t1033;
  double t1096;
  double t1100;
  double t1112;
  double t1119;
  double t1171;
  double t1175;
  double t1215;
  double t1464;
  double t1474;
  double t1563;
  double t1564;
  double t1570;
  double t1617;
  double t1622;
  double t1642;
  double t1279;
  double t1292;
  double t1297;
  double t1310;
  double t1320;
  double t1327;
  double t1759;
  double t1764;
  double t1342;
  double t1355;
  double t1378;
  double t1389;
  double t1397;
  double t1427;
  double t1457;
  double t1610;
  double t1686;
  double t1920;
  double t1940;
  double t1941;
  double t1708;
  t134 = Cos(var1[6]);
  t212 = Sin(var1[2]);
  t125 = Cos(var1[2]);
  t241 = Sin(var1[6]);
  t626 = t125*t134;
  t655 = -1.*t212*t241;
  t656 = t626 + t655;
  t555 = -1.*t134*t212;
  t568 = -1.*t125*t241;
  t596 = t555 + t568;
  t177 = -1.*t125*t134;
  t374 = t212*t241;
  t386 = t177 + t374;
  t689 = t134*t212;
  t690 = t125*t241;
  t699 = t689 + t690;
  t951 = -1.*t134;
  t977 = 1. + t951;
  t987 = -0.4999*t977;
  t990 = -0.6493*t134;
  t1012 = t987 + t990;
  t406 = -0.25592966999999994*var2[6]*t386;
  t685 = 10.2783*t596*t656;
  t703 = 3.4261*t699*t656;
  t734 = 10.2783*t596*t386;
  t738 = 3.4261*t699*t386;
  t767 = t685 + t703 + t734 + t738;
  t776 = 0.5*var2[1]*t767;
  t784 = Power(t596,2);
  t817 = 6.8522*t784;
  t840 = 6.8522*t596*t699;
  t854 = Power(t656,2);
  t855 = 6.8522*t854;
  t872 = 6.8522*t656*t386;
  t876 = t817 + t840 + t855 + t872;
  t941 = 0.5*var2[0]*t876;
  t1016 = t1012*t241;
  t1033 = 0.14939999999999998*t134*t241;
  t1096 = t1016 + t1033;
  t1100 = 3.4261*t596*t1096;
  t1112 = t1012*t134;
  t1119 = Power(t241,2);
  t1171 = -0.14939999999999998*t1119;
  t1175 = t1112 + t1171;
  t1215 = 3.4261*t386*t1175;
  t1464 = 3.4261*t784;
  t1474 = 3.4261*t596*t699;
  t1563 = 3.4261*t854;
  t1564 = 3.4261*t656*t386;
  t1570 = t1464 + t1474 + t1563 + t1564;
  t1617 = 3.4261*t1096*t656;
  t1622 = 3.4261*t596*t1175;
  t1642 = t1617 + t1622;
  t1279 = -1.*t1012*t241;
  t1292 = -0.14939999999999998*t134*t241;
  t1297 = t1279 + t1292;
  t1310 = 3.4261*t596*t1297;
  t1320 = Power(t134,2);
  t1327 = 0.14939999999999998*t1320;
  t1759 = t1112 + t1327;
  t1764 = 3.4261*t1759*t656;
  t1342 = 0. + t1112 + t1327;
  t1355 = 3.4261*t1342*t656;
  t1378 = -0.25592966999999994*var2[6]*t596;
  t1389 = 6.8522*t596*t656;
  t1397 = 6.8522*t699*t656;
  t1427 = t1389 + t1397;
  t1457 = var2[0]*t1427;
  t1610 = 0.5*var2[1]*t1570;
  t1686 = 0.5*var2[0]*t1570;
  t1920 = 3.4261*t1759*t699;
  t1940 = 3.4261*t1297*t656;
  t1941 = t1920 + t1940 + t1617 + t1622;
  t1708 = -0.25592966999999994*var2[0]*t596;
  p_output1[0]=var2[0]*(t406 + t776 + t941 + 0.5*(t1100 + t1215)*var2[2]);
  p_output1[1]=var2[0]*(t406 + t776 + t941 + 0.5*(t1100 + t1215 + t1310 + t1355)*var2[2]);
  p_output1[2]=t1378 + t1457 + t1610 + 0.5*t1642*var2[2];
  p_output1[3]=t1686;
  p_output1[4]=0.5*t1642*var2[0];
  p_output1[5]=t1708;
  p_output1[6]=var2[0]*(t406 + t776 + t941 + 0.5*(t1100 + t1215 + t1310 + t1764)*var2[2]);
  p_output1[7]=var2[0]*(t406 + t776 + t941 + 0.5*(t1100 + t1215 + t1355 + t1764 + 6.8522*t1297*t596 + 3.4261*(0. - 0.14939999999999998*t1320 - 1.*t1012*t134)*t656 + 3.4261*t1297*t699)*var2[2]);
  p_output1[8]=t1378 + t1457 + t1610 + 0.5*t1941*var2[2];
  p_output1[9]=t1686;
  p_output1[10]=0.5*t1941*var2[0];
  p_output1[11]=t1708;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L5_J1_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L5_J1_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
