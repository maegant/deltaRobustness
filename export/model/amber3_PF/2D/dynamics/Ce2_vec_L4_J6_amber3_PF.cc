/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:39 GMT-08:00
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
  double t436;
  double t546;
  double t597;
  double t669;
  double t779;
  double t1318;
  double t1547;
  double t1761;
  double t1772;
  double t1806;
  double t1923;
  double t2104;
  double t2172;
  double t4015;
  double t4219;
  double t4399;
  double t4427;
  double t4447;
  double t4654;
  double t3536;
  double t3681;
  double t3880;
  double t1915;
  double t2646;
  double t2719;
  double t2833;
  double t3229;
  double t3448;
  double t3900;
  double t3930;
  double t4763;
  double t4769;
  double t4930;
  double t4987;
  double t4989;
  double t4998;
  double t4657;
  double t4662;
  double t4700;
  double t5016;
  double t5019;
  double t5023;
  double t4711;
  double t4931;
  double t5004;
  double t5045;
  double t5064;
  double t5301;
  double t5337;
  double t5345;
  double t5363;
  double t5478;
  t436 = Cos(var1[5]);
  t546 = Sin(var1[2]);
  t597 = -1.*t436*t546;
  t669 = Cos(var1[2]);
  t779 = Sin(var1[5]);
  t1318 = -1.*t669*t779;
  t1547 = t597 + t1318;
  t1761 = t669*t436;
  t1772 = -1.*t546*t779;
  t1806 = t1761 + t1772;
  t1923 = t436*t546;
  t2104 = t669*t779;
  t2172 = t1923 + t2104;
  t4015 = -1.*t436;
  t4219 = 1. + t4015;
  t4399 = -0.4999*t4219;
  t4427 = -0.6493*t436;
  t4447 = t4399 + t4427;
  t4654 = t4447*t436;
  t3536 = -1.*t669*t436;
  t3681 = t546*t779;
  t3880 = t3536 + t3681;
  t1915 = 6.8522*t1547*t1806;
  t2646 = Power(t1547,2);
  t2719 = 3.4261*t2646;
  t2833 = 3.4261*t1547*t2172;
  t3229 = Power(t1806,2);
  t3448 = 3.4261*t3229;
  t3900 = 3.4261*t1806*t3880;
  t3930 = t2719 + t2833 + t3448 + t3900;
  t4763 = -1.*t4447*t779;
  t4769 = -0.14939999999999998*t436*t779;
  t4930 = t4763 + t4769;
  t4987 = t4447*t779;
  t4989 = 0.14939999999999998*t436*t779;
  t4998 = t4987 + t4989;
  t4657 = Power(t436,2);
  t4662 = 0.14939999999999998*t4657;
  t4700 = t4654 + t4662;
  t5016 = Power(t779,2);
  t5019 = -0.14939999999999998*t5016;
  t5023 = t4654 + t5019;
  t4711 = 3.4261*t4700*t2172;
  t4931 = 3.4261*t4930*t1806;
  t5004 = 3.4261*t4998*t1806;
  t5045 = 3.4261*t1547*t5023;
  t5064 = t4711 + t4931 + t5004 + t5045;
  t5301 = 3.4261*t1547*t4930;
  t5337 = 3.4261*t1547*t4998;
  t5345 = 3.4261*t4700*t1806;
  t5363 = 3.4261*t3880*t5023;
  t5478 = t5301 + t5337 + t5345 + t5363;
  p_output1[0]=var2[5]*(-0.5*(t1915 + 6.8522*t1806*t2172)*var2[0] - 0.5*t3930*var2[1] - 0.5*t5064*var2[2] + 0.25592966999999994*t1547*var2[5]);
  p_output1[1]=var2[5]*(-0.5*t3930*var2[0] - 0.5*(t1915 + 6.8522*t1547*t3880)*var2[1] - 0.5*t5478*var2[2] + 0.25592966999999994*t3880*var2[5]);
  p_output1[2]=var2[5]*(-0.5*t5064*var2[0] - 0.5*t5478*var2[1] - 0.5*(6.8522*t4700*t4998 + 6.8522*t4930*t5023)*var2[2] + 0.25592966999999994*t4930*var2[5]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(0.25592966999999994*t1547*var2[0] + 0.25592966999999994*t3880*var2[1] + 0.25592966999999994*t4930*var2[2])*var2[5];
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

#include "Ce2_vec_L4_J6_amber3_PF.hh"

namespace SymFunction
{

void Ce2_vec_L4_J6_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
