/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:05 GMT-08:00
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
  double t1240;
  double t511;
  double t535;
  double t1309;
  double t2662;
  double t536;
  double t1794;
  double t1875;
  double t454;
  double t2676;
  double t2964;
  double t3036;
  double t3569;
  double t3053;
  double t452;
  double t4477;
  double t4576;
  double t4586;
  double t1973;
  double t3282;
  double t3570;
  double t3615;
  double t3776;
  double t4634;
  double t4662;
  double t5293;
  double t5448;
  double t5451;
  double t7645;
  double t7647;
  double t7649;
  double t7650;
  double t7651;
  double t7654;
  double t7640;
  double t7642;
  double t7643;
  double t7644;
  double t7655;
  double t7658;
  double t7662;
  double t7664;
  double t7667;
  double t7672;
  double t7686;
  double t7692;
  double t7694;
  double t7696;
  double t7697;
  double t7698;
  double t7639;
  double t7661;
  double t7680;
  double t7681;
  t1240 = Cos(var1[7]);
  t511 = Cos(var1[8]);
  t535 = Sin(var1[7]);
  t1309 = Sin(var1[8]);
  t2662 = Cos(var1[6]);
  t536 = -1.*t511*t535;
  t1794 = -1.*t1240*t1309;
  t1875 = t536 + t1794;
  t454 = Sin(var1[6]);
  t2676 = t1240*t511;
  t2964 = -1.*t535*t1309;
  t3036 = t2676 + t2964;
  t3569 = Sin(var1[2]);
  t3053 = t2662*t3036;
  t452 = Cos(var1[2]);
  t4477 = t511*t535;
  t4576 = t1240*t1309;
  t4586 = t4477 + t4576;
  t1973 = t454*t1875;
  t3282 = t1973 + t3053;
  t3570 = t2662*t1875;
  t3615 = -1.*t454*t3036;
  t3776 = t3570 + t3615;
  t4634 = -1.*t454*t4586;
  t4662 = t4634 + t3053;
  t5293 = t2662*t4586;
  t5448 = t454*t3036;
  t5451 = t5293 + t5448;
  t7645 = -1.*t511;
  t7647 = 1. + t7645;
  t7649 = -1.3127*t7647;
  t7650 = -1.3127*t511;
  t7651 = -0.06*t1309;
  t7654 = t7649 + t7650 + t7651;
  t7640 = -1.*t1240;
  t7642 = 1. + t7640;
  t7643 = -0.9063*t7642;
  t7644 = -0.06*t511*t535;
  t7655 = t1240*t7654;
  t7658 = t7643 + t7644 + t7655;
  t7662 = 0.06*t1240*t511;
  t7664 = 0.9063*t535;
  t7667 = t535*t7654;
  t7672 = t7662 + t7664 + t7667;
  t7686 = -1.*t2662;
  t7692 = 1. + t7686;
  t7694 = -0.4999*t7692;
  t7696 = t2662*t7658;
  t7697 = -1.*t454*t7672;
  t7698 = t7694 + t7696 + t7697;
  t7639 = 0.4999*t454;
  t7661 = t454*t7658;
  t7680 = t2662*t7672;
  t7681 = t7639 + t7661 + t7680;
  p_output1[0]=(t3569*t3776 + t3282*t452)*var2[0] + (t3569*t4662 + t452*t5451)*var2[1];
  p_output1[1]=(-1.*t3282*t3569 + t3776*t452)*var2[0] + (t452*t4662 - 1.*t3569*t5451)*var2[1];
  p_output1[2]=(t5451*t7681 + t4662*t7698)*var2[0] + (-1.*t3282*t7681 - 1.*t3776*t7698)*var2[1] + var2[2];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(0.4999*t3036 + t3036*t7658 + t4586*t7672)*var2[0] + (0.4999*t4586 - 1.*t1875*t7658 - 1.*t3036*t7672)*var2[1] + var2[2];
  p_output1[7]=(0.9063*t511 + 0.06*t1309*t511 + t511*t7654)*var2[0] + (0.9063*t1309 - 0.06*Power(t511,2) + t1309*t7654)*var2[1] + var2[2];
  p_output1[8]=-0.06*var2[1] + var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "fRightSole_vec_RightSS2.hh"

namespace SymFunction
{

void fRightSole_vec_RightSS2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
