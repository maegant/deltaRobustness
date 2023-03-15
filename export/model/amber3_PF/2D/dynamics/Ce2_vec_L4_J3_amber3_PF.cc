/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:29:37 GMT-08:00
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
  double t42;
  double t76;
  double t110;
  double t231;
  double t239;
  double t258;
  double t436;
  double t597;
  double t607;
  double t669;
  double t1318;
  double t1547;
  double t1624;
  double t3573;
  double t3791;
  double t3930;
  double t3959;
  double t4015;
  double t2458;
  double t2508;
  double t2833;
  double t779;
  double t1915;
  double t2104;
  double t2172;
  double t2336;
  double t2369;
  double t3229;
  double t3401;
  double t4219;
  double t4399;
  double t4427;
  double t4657;
  double t4662;
  double t4700;
  double t4711;
  double t4447;
  double t4763;
  double t4978;
  double t5090;
  double t5117;
  double t5121;
  t42 = Cos(var1[5]);
  t76 = Sin(var1[2]);
  t110 = -1.*t42*t76;
  t231 = Cos(var1[2]);
  t239 = Sin(var1[5]);
  t258 = -1.*t231*t239;
  t436 = t110 + t258;
  t597 = t231*t42;
  t607 = -1.*t76*t239;
  t669 = t597 + t607;
  t1318 = t42*t76;
  t1547 = t231*t239;
  t1624 = t1318 + t1547;
  t3573 = -1.*t42;
  t3791 = 1. + t3573;
  t3930 = -0.4999*t3791;
  t3959 = -0.6493*t42;
  t4015 = t3930 + t3959;
  t2458 = -1.*t231*t42;
  t2508 = t76*t239;
  t2833 = t2458 + t2508;
  t779 = 6.8522*t436*t669;
  t1915 = Power(t436,2);
  t2104 = 3.4261*t1915;
  t2172 = 3.4261*t436*t1624;
  t2336 = Power(t669,2);
  t2369 = 3.4261*t2336;
  t3229 = 3.4261*t669*t2833;
  t3401 = t2104 + t2172 + t2369 + t3229;
  t4219 = t4015*t239;
  t4399 = 0.14939999999999998*t42*t239;
  t4427 = t4219 + t4399;
  t4657 = t4015*t42;
  t4662 = Power(t239,2);
  t4700 = -0.14939999999999998*t4662;
  t4711 = t4657 + t4700;
  t4447 = 3.4261*t4427*t669;
  t4763 = 3.4261*t436*t4711;
  t4978 = t4447 + t4763;
  t5090 = 3.4261*t436*t4427;
  t5117 = 3.4261*t2833*t4711;
  t5121 = t5090 + t5117;
  p_output1[0]=var2[2]*(-0.5*(6.8522*t1624*t669 + t779)*var2[0] - 0.5*t3401*var2[1] - 0.5*t4978*var2[2] + 0.25592966999999994*t436*var2[5]);
  p_output1[1]=var2[2]*(-0.5*t3401*var2[0] - 0.5*(6.8522*t2833*t436 + t779)*var2[1] - 0.5*t5121*var2[2] + 0.25592966999999994*t2833*var2[5]);
  p_output1[2]=(-0.5*t4978*var2[0] - 0.5*t5121*var2[1])*var2[2];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(0.25592966999999994*t436*var2[0] + 0.25592966999999994*t2833*var2[1])*var2[2];
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

#include "Ce2_vec_L4_J3_amber3_PF.hh"

namespace SymFunction
{

void Ce2_vec_L4_J3_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
