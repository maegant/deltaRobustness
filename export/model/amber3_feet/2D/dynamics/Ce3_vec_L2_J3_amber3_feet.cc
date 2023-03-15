/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:09 GMT-08:00
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
  double t1089;
  double t2528;
  double t3030;
  double t2919;
  double t1190;
  double t1621;
  double t2009;
  double t2042;
  double t2140;
  double t3336;
  double t3341;
  double t3352;
  double t2614;
  double t2646;
  double t2689;
  double t3355;
  double t3379;
  double t3398;
  double t3585;
  double t4109;
  double t4110;
  double t4129;
  double t2930;
  double t3225;
  double t3331;
  double t3335;
  double t3625;
  double t4315;
  double t4450;
  double t4510;
  double t3711;
  double t3838;
  double t3889;
  double t3917;
  double t3954;
  t1089 = Cos(var1[3]);
  t2528 = Sin(var1[3]);
  t3030 = Sin(var1[2]);
  t2919 = Cos(var1[2]);
  t1190 = -1.*t1089;
  t1621 = 1. + t1190;
  t2009 = -0.4999*t1621;
  t2042 = -0.6493*t1089;
  t2140 = t2009 + t2042;
  t3336 = -1.*t1089*t3030;
  t3341 = -1.*t2919*t2528;
  t3352 = t3336 + t3341;
  t2614 = t2140*t2528;
  t2646 = 0.14939999999999998*t1089*t2528;
  t2689 = t2614 + t2646;
  t3355 = t2140*t1089;
  t3379 = Power(t2528,2);
  t3398 = -0.14939999999999998*t3379;
  t3585 = t3355 + t3398;
  t4109 = -1.*t2140*t2528;
  t4110 = -0.14939999999999998*t1089*t2528;
  t4129 = t4109 + t4110;
  t2930 = t2919*t1089;
  t3225 = -1.*t3030*t2528;
  t3331 = t2930 + t3225;
  t3335 = 3.4261*t2689*t3331;
  t3625 = 3.4261*t3352*t3585;
  t4315 = Power(t1089,2);
  t4450 = 0.14939999999999998*t4315;
  t4510 = t3355 + t4450;
  t3711 = 3.4261*t3352*t2689;
  t3838 = -1.*t2919*t1089;
  t3889 = t3030*t2528;
  t3917 = t3838 + t3889;
  t3954 = 3.4261*t3917*t3585;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.5*(t3335 + t3625)*var2[0] + 0.5*(t3711 + t3954)*var2[1])*var2[2];
  p_output1[3]=var2[2]*(0.5*(t3335 + t3625 + 3.4261*t3331*t4129 + 3.4261*(t2528*t2919 + t1089*t3030)*t4510)*var2[0] + 0.5*(t3711 + t3954 + 3.4261*t3352*t4129 + 3.4261*t3331*t4510)*var2[1] + 0.5*(6.8522*t3585*t4129 + 6.8522*t2689*t4510)*var2[2] - 0.25592966999999994*t4129*var2[3]);
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec_L2_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce3_vec_L2_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
