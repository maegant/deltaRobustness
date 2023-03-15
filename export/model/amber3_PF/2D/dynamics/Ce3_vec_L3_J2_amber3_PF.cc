/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:30:05 GMT-08:00
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
  double t1821;
  double t511;
  double t933;
  double t1887;
  double t103;
  double t1234;
  double t2335;
  double t2431;
  double t2501;
  double t2631;
  double t2640;
  double t2686;
  double t2929;
  double t2942;
  double t2987;
  double t3360;
  double t3447;
  double t3504;
  double t3535;
  double t3637;
  double t4413;
  double t4208;
  double t4210;
  double t4281;
  double t4364;
  double t4513;
  double t4794;
  double t4775;
  double t4827;
  double t4711;
  double t4741;
  double t5219;
  double t5242;
  double t5332;
  double t5363;
  double t5517;
  double t5549;
  double t5580;
  double t5611;
  double t5861;
  double t5873;
  double t3987;
  double t3994;
  double t4190;
  double t4202;
  double t3234;
  double t3639;
  double t3897;
  double t3900;
  double t3903;
  double t6839;
  double t6841;
  double t6843;
  double t6870;
  double t6911;
  double t4931;
  double t4985;
  double t5072;
  double t5090;
  double t5117;
  double t5390;
  double t5880;
  double t5886;
  double t6344;
  double t6345;
  double t6401;
  double t7836;
  double t7866;
  double t7916;
  double t7918;
  double t7930;
  double t7969;
  double t6949;
  double t7136;
  double t7140;
  double t7216;
  double t7251;
  double t7301;
  double t7395;
  double t7405;
  double t7438;
  double t7447;
  double t7481;
  double t7493;
  double t7514;
  double t7523;
  double t7533;
  double t7592;
  double t7626;
  double t7925;
  double t8008;
  double t8025;
  double t8089;
  double t8091;
  double t8095;
  double t8096;
  double t8050;
  t1821 = Cos(var1[3]);
  t511 = Cos(var1[4]);
  t933 = Sin(var1[3]);
  t1887 = Sin(var1[4]);
  t103 = Sin(var1[2]);
  t1234 = -1.*t511*t933;
  t2335 = -1.*t1821*t1887;
  t2431 = t1234 + t2335;
  t2501 = -1.*t103*t2431;
  t2631 = Cos(var1[2]);
  t2640 = t1821*t511;
  t2686 = -1.*t933*t1887;
  t2929 = t2640 + t2686;
  t2942 = -1.*t2631*t2929;
  t2987 = t2501 + t2942;
  t3360 = -1.*t511;
  t3447 = 1. + t3360;
  t3504 = -0.9063*t3447;
  t3535 = -1.078185*t511;
  t3637 = t3504 + t3535;
  t4413 = -1.*t103*t2929;
  t4208 = t511*t933;
  t4210 = t1821*t1887;
  t4281 = t4208 + t4210;
  t4364 = -1.*t2631*t4281;
  t4513 = t4364 + t4413;
  t4794 = t2631*t2929;
  t4775 = -1.*t103*t4281;
  t4827 = t4775 + t4794;
  t4711 = t2631*t2431;
  t4741 = t4711 + t4413;
  t5219 = 0.4999*t933;
  t5242 = t3637*t933;
  t5332 = -0.17188499999999995*t1821*t1887;
  t5363 = t5219 + t5242 + t5332;
  t5517 = -1.*t1821;
  t5549 = 1. + t5517;
  t5580 = -0.4999*t5549;
  t5611 = t1821*t3637;
  t5861 = 0.17188499999999995*t933*t1887;
  t5873 = t5580 + t5611 + t5861;
  t3987 = 0.4999*t1887;
  t3994 = t3637*t1887;
  t4190 = 0.17188499999999995*t511*t1887;
  t4202 = t3987 + t3994 + t4190;
  t3234 = 0.4999*t511;
  t3639 = t3637*t511;
  t3897 = Power(t1887,2);
  t3900 = -0.17188499999999995*t3897;
  t3903 = t3234 + t3639 + t3900;
  t6839 = -1.*t1821*t511;
  t6841 = t933*t1887;
  t6843 = t6839 + t6841;
  t6870 = t2631*t6843;
  t6911 = t2501 + t6870;
  t4931 = t103*t2431;
  t4985 = t4931 + t4794;
  t5072 = t2631*t4281;
  t5090 = t103*t2929;
  t5117 = t5072 + t5090;
  t5390 = -1.*t5363*t2929;
  t5880 = -1.*t2431*t5873;
  t5886 = t5390 + t5880;
  t6344 = t5363*t4281;
  t6345 = t2929*t5873;
  t6401 = t6344 + t6345;
  t7836 = -0.4999*t933;
  t7866 = -1.*t3637*t933;
  t7916 = 0.17188499999999995*t1821*t1887;
  t7918 = t7836 + t7866 + t7916;
  t7930 = 0.4999*t1821;
  t7969 = t7930 + t5611 + t5861;
  t6949 = -0.07323676079999998*var2[4]*t6911;
  t7136 = 0.85216*t4202*t4741;
  t7140 = 0.85216*t3903*t6911;
  t7216 = 1.70432*t4827*t4741;
  t7251 = 1.70432*t4741*t6911;
  t7301 = t7216 + t7251;
  t7395 = 0.5*var2[1]*t7301;
  t7405 = 0.85216*t4985*t4827;
  t7438 = 0.85216*t4741*t5117;
  t7447 = 0.85216*t4985*t6911;
  t7481 = t103*t6843;
  t7493 = t4711 + t7481;
  t7514 = 0.85216*t4741*t7493;
  t7523 = t7405 + t7438 + t7447 + t7514;
  t7533 = 0.5*var2[0]*t7523;
  t7592 = 0.85216*t4741*t5886;
  t7626 = t5363*t2929;
  t7925 = t2431*t5873;
  t8008 = 0.85216*t6401*t6911;
  t8025 = -1.*t2431*t5363;
  t8089 = 0.17188499999999995*t511*t933;
  t8091 = t8089 + t7916;
  t8095 = -0.17188499999999995*t1821*t511;
  t8096 = t8095 + t5861;
  t8050 = -1.*t5873*t6843;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(0.5*(0.85216*Power(t4741,2) + 0.85216*Power(t4827,2) + 0.85216*t2987*t4985 + 0.85216*t4513*t5117)*var2[0] + 0.5*(1.70432*t2987*t4741 + 1.70432*t4513*t4827)*var2[1] + 0.5*(0.85216*t4513*t5886 + 0.85216*t2987*t6401)*var2[2] + 0.5*(0.85216*t2987*t3903 + 0.85216*t4202*t4513)*var2[3] - 0.07323676079999998*t2987*var2[4]);
  p_output1[3]=var2[1]*(t6949 + t7395 + t7533 + 0.5*(t7592 + 0.85216*t4741*(t7626 + t2929*t7918 + t7925 + t4281*t7969) + t8008 + 0.85216*t4827*(-1.*t2431*t7918 - 1.*t2929*t7969 + t8025 + t8050))*var2[2] + 0.5*(t7136 + t7140)*var2[3]);
  p_output1[4]=var2[1]*(t6949 + t7395 + t7533 + 0.5*(t7592 + t8008 + 0.85216*t4827*(t8025 + t8050 - 1.*t2431*t8091 - 1.*t2929*t8096) + 0.85216*t4741*(t7626 + t7925 + t2929*t8091 + t4281*t8096))*var2[2] + 0.5*(0.85216*t4741*(-0.4999*t1887 - 1.*t1887*t3637 - 0.17188499999999995*t1887*t511) + 0.85216*t4827*(t3234 + t3639 + 0.17188499999999995*Power(t511,2)) + t7136 + t7140)*var2[3]);
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

#include "Ce3_vec_L3_J2_amber3_PF.hh"

namespace SymFunction
{

void Ce3_vec_L3_J2_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
