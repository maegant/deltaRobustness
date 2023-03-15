/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:44 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t1497;
  double t2159;
  double t1079;
  double t2619;
  double t1577;
  double t3117;
  double t3160;
  double t4313;
  double t4444;
  double t4539;
  double t5049;
  double t5120;
  double t5210;
  double t5219;
  double t5231;
  double t879;
  double t1027;
  double t4076;
  double t4153;
  double t4206;
  double t4637;
  double t4651;
  double t4225;
  double t4554;
  double t4571;
  double t3810;
  double t3974;
  double t4747;
  double t4886;
  double t4986;
  double t5007;
  double t5249;
  double t5344;
  double t5346;
  double t5360;
  double t5408;
  double t5429;
  double t5440;
  double t5672;
  double t5690;
  double t5697;
  double t5347;
  double t5455;
  double t5509;
  double t5736;
  double t5751;
  t1497 = Cos(var2[6]);
  t2159 = Sin(var2[2]);
  t1079 = Cos(var2[2]);
  t2619 = Sin(var2[6]);
  t1577 = t1079*t1497;
  t3117 = -1.*t2159*t2619;
  t3160 = t1577 + t3117;
  t4313 = t1497*t2159;
  t4444 = t1079*t2619;
  t4539 = t4313 + t4444;
  t5049 = -1.*t1497;
  t5120 = 1. + t5049;
  t5210 = -0.4999*t5120;
  t5219 = -0.6493*t1497;
  t5231 = t5210 + t5219;
  t879 = -1.*var1[3];
  t1027 = var3[6] + t879;
  t4076 = -1.*t1497*t2159;
  t4153 = -1.*t1079*t2619;
  t4206 = t4076 + t4153;
  t4637 = -1.*var1[0];
  t4651 = var3[0] + t4637;
  t4225 = 3.4261*t4206*t3160;
  t4554 = 3.4261*t4539*t3160;
  t4571 = t4225 + t4554;
  t3810 = -1.*var1[1];
  t3974 = var3[1] + t3810;
  t4747 = Power(t3160,2);
  t4886 = 3.4261*t4747;
  t4986 = -1.*var1[2];
  t5007 = var3[2] + t4986;
  t5249 = t5231*t2619;
  t5344 = 0.14939999999999998*t1497*t2619;
  t5346 = t5249 + t5344;
  t5360 = t5231*t1497;
  t5408 = Power(t2619,2);
  t5429 = -0.14939999999999998*t5408;
  t5440 = t5360 + t5429;
  t5672 = 3.4261*t5346*t3160;
  t5690 = 3.4261*t4206*t5440;
  t5697 = t5672 + t5690;
  t5347 = 3.4261*t4539*t5346;
  t5455 = 3.4261*t3160*t5440;
  t5509 = t5347 + t5455;
  t5736 = -0.5118593399999999*t5440;
  t5751 = 0.0389 + t5736;
  p_output1[0]=-0.5118593399999999*t1027*t3160 + t3974*t4571 + t4651*(3.4261*Power(t4539,2) + t4886) + t5007*t5509;
  p_output1[1]=-0.5118593399999999*t1027*t4206 + t4571*t4651 + t3974*(3.4261*Power(t4206,2) + t4886) + t5007*t5697;
  p_output1[2]=t5007*(0.0389 + 3.4261*Power(t5346,2) + 3.4261*Power(t5440,2)) + t4651*t5509 + t3974*t5697 + t1027*t5751;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0.11537178539599996*t1027 - 0.5118593399999999*t3974*t4206 - 0.5118593399999999*t3160*t4651 + t5007*t5751;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMap5_LeftLateImpactRelabel.hh"

namespace LeftLateImpactRelabel
{

void dxDiscreteMap5_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
