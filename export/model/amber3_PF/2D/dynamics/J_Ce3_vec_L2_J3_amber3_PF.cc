/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:15 GMT-08:00
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
  double t224;
  double t717;
  double t946;
  double t907;
  double t402;
  double t437;
  double t514;
  double t540;
  double t541;
  double t802;
  double t813;
  double t851;
  double t908;
  double t961;
  double t1181;
  double t1417;
  double t1460;
  double t1465;
  double t1485;
  double t1621;
  double t1658;
  double t1673;
  double t1182;
  double t1225;
  double t1313;
  double t1320;
  double t1488;
  double t1926;
  double t1928;
  double t2000;
  double t1686;
  double t1848;
  double t1858;
  double t1865;
  double t1697;
  double t2096;
  double t2157;
  double t2170;
  double t1710;
  double t2355;
  double t2360;
  double t2369;
  double t2024;
  double t2087;
  double t2482;
  double t2682;
  double t2688;
  double t2720;
  double t2503;
  double t1880;
  double t2580;
  double t2181;
  double t2973;
  double t2606;
  double t3088;
  double t3090;
  t224 = Cos(var1[3]);
  t717 = Sin(var1[3]);
  t946 = Sin(var1[2]);
  t907 = Cos(var1[2]);
  t402 = -1.*t224;
  t437 = 1. + t402;
  t514 = -0.4999*t437;
  t540 = -0.6493*t224;
  t541 = t514 + t540;
  t802 = t541*t717;
  t813 = 0.14939999999999998*t224*t717;
  t851 = t802 + t813;
  t908 = -1.*t907*t224;
  t961 = t946*t717;
  t1181 = t908 + t961;
  t1417 = t541*t224;
  t1460 = Power(t717,2);
  t1465 = -0.14939999999999998*t1460;
  t1485 = t1417 + t1465;
  t1621 = -1.*t224*t946;
  t1658 = -1.*t907*t717;
  t1673 = t1621 + t1658;
  t1182 = 3.4261*t851*t1181;
  t1225 = t224*t946;
  t1313 = t907*t717;
  t1320 = t1225 + t1313;
  t1488 = 3.4261*t1320*t1485;
  t1926 = -1.*t541*t717;
  t1928 = -0.14939999999999998*t224*t717;
  t2000 = t1926 + t1928;
  t1686 = 3.4261*t1673*t851;
  t1848 = Power(t224,2);
  t1858 = 0.14939999999999998*t1848;
  t1865 = 0. + t1417 + t1858;
  t1697 = 3.4261*t1181*t1485;
  t2096 = t907*t224;
  t2157 = -1.*t946*t717;
  t2170 = t2096 + t2157;
  t1710 = t1686 + t1697;
  t2355 = 3.4261*t851*t2170;
  t2360 = 3.4261*t1673*t1485;
  t2369 = t2355 + t2360;
  t2024 = 3.4261*t2000*t1181;
  t2087 = 3.4261*t1673*t2000;
  t2482 = t1417 + t1858;
  t2682 = -1.*t541*t224;
  t2688 = -0.14939999999999998*t1848;
  t2720 = 0. + t2682 + t2688;
  t2503 = 3.4261*t2482*t1673;
  t1880 = 3.4261*t1865*t1673;
  t2580 = 3.4261*t2482*t2170;
  t2181 = 3.4261*t1865*t2170;
  t2973 = 3.4261*t2000*t2170;
  t2606 = t2087 + t1686 + t2580 + t1697;
  t3088 = 3.4261*t2482*t1320;
  t3090 = t3088 + t2973 + t2355 + t2360;
  p_output1[0]=(0.5*t1710*var2[0] + 0.5*(t1182 + t1488)*var2[1])*var2[2];
  p_output1[1]=(0.5*(t1686 + t1697 + t2087 + t2181)*var2[0] + 0.5*(t1182 + t1488 + t1880 + t2024)*var2[1])*var2[2];
  p_output1[2]=0.5*t2369*var2[2];
  p_output1[3]=0.5*t1710*var2[2];
  p_output1[4]=0.5*t2369*var2[0] + 0.5*t1710*var2[1];
  p_output1[5]=(0.5*t2606*var2[0] + 0.5*(t1182 + t1488 + t2024 + t2503)*var2[1])*var2[2];
  p_output1[6]=var2[2]*(0.5*(t1686 + t1697 + 3.4261*t1320*t2000 + 6.8522*t1673*t2000 + t2181 + t2580 + 3.4261*t2170*t2720)*var2[0] + 0.5*(t1182 + t1488 + t1880 + 6.8522*t1181*t2000 + t2503 + 3.4261*t1673*t2720 + t2973)*var2[1] + 0.5*(6.8522*Power(t2000,2) + 6.8522*t1865*t2482 + 6.8522*t1485*t2720 + 6.8522*t2000*t851)*var2[2] - 0.25592966999999994*t2720*var2[3]);
  p_output1[7]=0.5*t3090*var2[2];
  p_output1[8]=0.5*t2606*var2[2];
  p_output1[9]=0.5*t3090*var2[0] + 0.5*t2606*var2[1] + (6.8522*t1485*t2000 + 6.8522*t2482*t851)*var2[2] - 0.25592966999999994*t2000*var2[3];
  p_output1[10]=-0.25592966999999994*t2000*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L2_J3_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L2_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
