/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:46 GMT-08:00
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
  double t300;
  double t75;
  double t97;
  double t377;
  double t953;
  double t216;
  double t446;
  double t500;
  double t36;
  double t2374;
  double t2592;
  double t2719;
  double t2785;
  double t2833;
  double t3959;
  double t4026;
  double t4030;
  double t4052;
  double t4202;
  double t4210;
  double t4741;
  double t4769;
  double t570;
  double t964;
  double t1016;
  double t1020;
  double t1601;
  double t1751;
  double t4930;
  double t4931;
  double t4937;
  double t4985;
  double t4989;
  double t4998;
  double t5538;
  double t5549;
  double t6344;
  double t6345;
  double t6465;
  double t6553;
  double t6569;
  double t6573;
  double t6579;
  double t6733;
  double t6774;
  double t6801;
  double t6841;
  double t6843;
  double t6868;
  double t7136;
  double t7137;
  double t5625;
  double t5873;
  double t5880;
  double t4827;
  double t4829;
  double t4928;
  double t5345;
  double t5363;
  double t1988;
  double t3229;
  double t3880;
  double t3900;
  double t4418;
  double t4547;
  double t4700;
  double t4709;
  double t5023;
  double t5045;
  double t5090;
  double t5517;
  double t5611;
  double t5886;
  double t5887;
  double t6296;
  double t6562;
  double t6811;
  double t6832;
  double t6839;
  double t6911;
  double t6949;
  double t7140;
  double t7162;
  double t7199;
  double t7205;
  double t7216;
  double t7357;
  double t7412;
  double t7414;
  double t7434;
  double t7438;
  double t8039;
  double t8040;
  double t8042;
  double t8050;
  double t8052;
  double t6835;
  double t7196;
  double t7301;
  double t7447;
  double t7487;
  double t7523;
  double t7620;
  double t7626;
  double t7655;
  double t7860;
  double t4399;
  double t4711;
  double t5004;
  double t5117;
  double t5160;
  double t8063;
  double t8065;
  double t8066;
  double t8067;
  double t8074;
  t300 = Cos(var1[5]);
  t75 = Cos(var1[6]);
  t97 = Sin(var1[5]);
  t377 = Sin(var1[6]);
  t953 = Sin(var1[2]);
  t216 = -1.*t75*t97;
  t446 = -1.*t300*t377;
  t500 = t216 + t446;
  t36 = Cos(var1[2]);
  t2374 = -1.*t75;
  t2592 = 1. + t2374;
  t2719 = -0.9063*t2592;
  t2785 = -1.078185*t75;
  t2833 = t2719 + t2785;
  t3959 = t953*t500;
  t4026 = t300*t75;
  t4030 = -1.*t97*t377;
  t4052 = t4026 + t4030;
  t4202 = t36*t4052;
  t4210 = t3959 + t4202;
  t4741 = 0.4999*t75;
  t4769 = t2833*t75;
  t570 = t36*t500;
  t964 = -1.*t300*t75;
  t1016 = t97*t377;
  t1020 = t964 + t1016;
  t1601 = t953*t1020;
  t1751 = t570 + t1601;
  t4930 = t75*t97;
  t4931 = t300*t377;
  t4937 = t4930 + t4931;
  t4985 = t36*t4937;
  t4989 = t953*t4052;
  t4998 = t4985 + t4989;
  t5538 = -1.*t953*t4052;
  t5549 = t570 + t5538;
  t6344 = 0.4999*t97;
  t6345 = t2833*t97;
  t6465 = -0.17188499999999995*t300*t377;
  t6553 = t6344 + t6345 + t6465;
  t6569 = -1.*t300;
  t6573 = 1. + t6569;
  t6579 = -0.4999*t6573;
  t6733 = t300*t2833;
  t6774 = 0.17188499999999995*t97*t377;
  t6801 = t6579 + t6733 + t6774;
  t6841 = 0.17188499999999995*t75*t97;
  t6843 = 0.17188499999999995*t300*t377;
  t6868 = t6841 + t6843;
  t7136 = -0.17188499999999995*t300*t75;
  t7137 = t7136 + t6774;
  t5625 = -1.*t953*t500;
  t5873 = t36*t1020;
  t5880 = t5625 + t5873;
  t4827 = Power(t75,2);
  t4829 = 0.17188499999999995*t4827;
  t4928 = t4741 + t4769 + t4829;
  t5345 = -1.*t953*t4937;
  t5363 = t5345 + t4202;
  t1988 = -0.4999*t377;
  t3229 = -1.*t2833*t377;
  t3880 = -0.17188499999999995*t75*t377;
  t3900 = t1988 + t3229 + t3880;
  t4418 = 0.4999*t377;
  t4547 = t2833*t377;
  t4700 = 0.17188499999999995*t75*t377;
  t4709 = t4418 + t4547 + t4700;
  t5023 = Power(t377,2);
  t5045 = -0.17188499999999995*t5023;
  t5090 = t4741 + t4769 + t5045;
  t5517 = 0.85216*t4210*t5363;
  t5611 = 0.85216*t5549*t4998;
  t5886 = 0.85216*t4210*t5880;
  t5887 = 0.85216*t5549*t1751;
  t6296 = t5517 + t5611 + t5886 + t5887;
  t6562 = -1.*t6553*t4052;
  t6811 = -1.*t500*t6801;
  t6832 = t6562 + t6811;
  t6839 = t6553*t4052;
  t6911 = t6868*t4052;
  t6949 = t500*t6801;
  t7140 = t4937*t7137;
  t7162 = t6839 + t6911 + t6949 + t7140;
  t7199 = t6553*t4937;
  t7205 = t4052*t6801;
  t7216 = t7199 + t7205;
  t7357 = -1.*t500*t6553;
  t7412 = -1.*t500*t6868;
  t7414 = -1.*t4052*t7137;
  t7434 = -1.*t6801*t1020;
  t7438 = t7357 + t7412 + t7414 + t7434;
  t8039 = 0.85216*t5549*t6832;
  t8040 = 0.85216*t5549*t7162;
  t8042 = 0.85216*t7216*t5880;
  t8050 = 0.85216*t5363*t7438;
  t8052 = t8039 + t8040 + t8042 + t8050;
  t6835 = 0.85216*t4210*t6832;
  t7196 = 0.85216*t4210*t7162;
  t7301 = 0.85216*t7216*t1751;
  t7447 = 0.85216*t4998*t7438;
  t7487 = t6835 + t7196 + t7301 + t7447;
  t7523 = 0.85216*t4928*t5363;
  t7620 = 0.85216*t3900*t5549;
  t7626 = 0.85216*t4709*t5549;
  t7655 = 0.85216*t5090*t5880;
  t7860 = t7523 + t7620 + t7626 + t7655;
  t4399 = 0.85216*t3900*t4210;
  t4711 = 0.85216*t4709*t4210;
  t5004 = 0.85216*t4928*t4998;
  t5117 = 0.85216*t5090*t1751;
  t5160 = t4399 + t4711 + t5004 + t5117;
  t8063 = 0.85216*t4928*t6832;
  t8065 = 0.85216*t3900*t7216;
  t8066 = 0.85216*t5090*t7162;
  t8067 = 0.85216*t4709*t7438;
  t8074 = t8063 + t8065 + t8066 + t8067;
  p_output1[0]=var2[6]*(-0.5*(1.70432*t1751*t4210 + 1.70432*t4210*t4998)*var2[0] - 0.5*t6296*var2[1] - 0.5*t7487*var2[2] - 0.5*t5160*var2[5] + 0.07323676079999998*t1751*var2[6]);
  p_output1[1]=var2[6]*(-0.5*t6296*var2[0] - 0.5*(1.70432*t5363*t5549 + 1.70432*t5549*t5880)*var2[1] - 0.5*t8052*var2[2] - 0.5*t7860*var2[5] + 0.07323676079999998*t5880*var2[6]);
  p_output1[2]=var2[6]*(-0.5*t7487*var2[0] - 0.5*t8052*var2[1] - 0.5*(1.70432*t7162*t7216 + 1.70432*t6832*t7438)*var2[2] - 0.5*t8074*var2[5] + 0.07323676079999998*t7162*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[6]*(-0.5*t5160*var2[0] - 0.5*t7860*var2[1] - 0.5*t8074*var2[2] - 0.5*(1.70432*t4709*t4928 + 1.70432*t3900*t5090)*var2[5] + 0.07323676079999998*t3900*var2[6]);
  p_output1[6]=(0.07323676079999998*t1751*var2[0] + 0.07323676079999998*t5880*var2[1] + 0.07323676079999998*t7162*var2[2] + 0.07323676079999998*t3900*var2[5])*var2[6];
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

#include "Ce2_vec_L5_J7_amber3_PF.hh"

namespace SymFunction
{

void Ce2_vec_L5_J7_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
