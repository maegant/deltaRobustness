/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:14 GMT-08:00
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
  double t751;
  double t813;
  double t311;
  double t1017;
  double t768;
  double t1179;
  double t1291;
  double t2061;
  double t2374;
  double t2658;
  double t5077;
  double t5193;
  double t5273;
  double t5275;
  double t5460;
  double t1704;
  double t1739;
  double t1755;
  double t1825;
  double t3312;
  double t3316;
  double t4647;
  double t4732;
  double t5611;
  double t5680;
  double t5863;
  double t6018;
  double t6206;
  double t6504;
  double t6764;
  double t7750;
  double t7757;
  double t7759;
  double t6000;
  double t7644;
  double t7662;
  double t7775;
  double t7776;
  t751 = Cos(var1[6]);
  t813 = Sin(var1[2]);
  t311 = Cos(var1[2]);
  t1017 = Sin(var1[6]);
  t768 = t311*t751;
  t1179 = -1.*t813*t1017;
  t1291 = t768 + t1179;
  t2061 = t751*t813;
  t2374 = t311*t1017;
  t2658 = t2061 + t2374;
  t5077 = -1.*t751;
  t5193 = 1. + t5077;
  t5273 = -0.4999*t5193;
  t5275 = -0.6493*t751;
  t5460 = t5273 + t5275;
  t1704 = -1.*t751*t813;
  t1739 = -1.*t311*t1017;
  t1755 = t1704 + t1739;
  t1825 = 3.4261*t1755*t1291;
  t3312 = 3.4261*t2658*t1291;
  t3316 = t1825 + t3312;
  t4647 = Power(t1291,2);
  t4732 = 3.4261*t4647;
  t5611 = t5460*t1017;
  t5680 = 0.14939999999999998*t751*t1017;
  t5863 = t5611 + t5680;
  t6018 = t5460*t751;
  t6206 = Power(t1017,2);
  t6504 = -0.14939999999999998*t6206;
  t6764 = t6018 + t6504;
  t7750 = 3.4261*t5863*t1291;
  t7757 = 3.4261*t1755*t6764;
  t7759 = t7750 + t7757;
  t6000 = 3.4261*t2658*t5863;
  t7644 = 3.4261*t1291*t6764;
  t7662 = t6000 + t7644;
  t7775 = -0.5118593399999999*t6764;
  t7776 = 0.0389 + t7775;
  p_output1[0]=-1.*(3.4261*Power(t2658,2) + t4732)*var2[0] - 1.*t3316*var2[1] - 1.*t7662*var2[2] + 0.5118593399999999*t1291*var2[6];
  p_output1[1]=-1.*t3316*var2[0] - 1.*(3.4261*Power(t1755,2) + t4732)*var2[1] - 1.*t7759*var2[2] + 0.5118593399999999*t1755*var2[6];
  p_output1[2]=-1.*t7662*var2[0] - 1.*t7759*var2[1] - 1.*(0.0389 + 3.4261*Power(t5863,2) + 3.4261*Power(t6764,2))*var2[2] - 1.*t7776*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0.5118593399999999*t1291*var2[0] + 0.5118593399999999*t1755*var2[1] - 1.*t7776*var2[2] - 0.11537178539599996*var2[6];
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

#include "MmatDx5_amber3_feet.hh"

namespace SymFunction
{

void MmatDx5_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
