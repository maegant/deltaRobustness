/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:14 GMT-08:00
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
  double t204;
  double t1394;
  double t2317;
  double t2364;
  double t3868;
  double t4916;
  double t4942;
  double t5482;
  double t6219;
  double t6260;
  double t6827;
  double t6932;
  double t1443;
  double t1570;
  double t4598;
  double t4872;
  double t7711;
  double t7717;
  double t7729;
  double t3507;
  double t6025;
  double t7028;
  double t7132;
  double t7433;
  double t7629;
  double t7631;
  double t7681;
  double t7709;
  double t7736;
  double t7739;
  double t7744;
  double t7753;
  double t7762;
  double t7803;
  double t7804;
  double t7805;
  t204 = Cos(var1[2]);
  t1394 = Cos(var1[5]);
  t2317 = Sin(var1[2]);
  t2364 = Sin(var1[5]);
  t3868 = Cos(var1[6]);
  t4916 = t204*t1394;
  t4942 = -1.*t2317*t2364;
  t5482 = t4916 + t4942;
  t6219 = -1.*t1394*t2317;
  t6260 = -1.*t204*t2364;
  t6827 = t6219 + t6260;
  t6932 = Sin(var1[6]);
  t1443 = -1.*t1394;
  t1570 = 1. + t1443;
  t4598 = -1.*t3868;
  t4872 = 1. + t4598;
  t7711 = -1.*t204*t1394;
  t7717 = t2317*t2364;
  t7729 = t7711 + t7717;
  t3507 = -0.4999*t2317*t2364;
  t6025 = -0.9063*t4872*t5482;
  t7028 = 0.9063*t6827*t6932;
  t7132 = t3868*t5482;
  t7433 = t6827*t6932;
  t7629 = t7132 + t7433;
  t7631 = -1.373025*t7629;
  t7681 = -0.4999*t204*t2364;
  t7709 = -0.9063*t4872*t6827;
  t7736 = 0.9063*t7729*t6932;
  t7739 = t3868*t6827;
  t7744 = t7729*t6932;
  t7753 = t7739 + t7744;
  t7762 = -1.373025*t7753;
  t7803 = t1394*t2317;
  t7804 = t204*t2364;
  t7805 = t7803 + t7804;
  p_output1[0]=var2[0];
  p_output1[1]=var2[1];
  p_output1[2]=(0. - 0.4999*t1570*t204 + t3507 + t6025 + t7028 + t7631)*var2[0] + (0. + 0.4999*t1570*t2317 + t7681 + t7709 + t7736 + t7762)*var2[1];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(0. + 0.4999*t1394*t204 + t3507 + t6025 + t7028 + t7631)*var2[0] + (0. - 0.4999*t1394*t2317 + t7681 + t7709 + t7736 + t7762)*var2[1];
  p_output1[6]=(0. + 0.9063*t3868*t5482 - 0.9063*t6932*t7805 - 1.373025*(t7132 - 1.*t6932*t7805))*var2[0] + (0. + 0.9063*t3868*t6827 - 0.9063*t5482*t6932 - 1.373025*(-1.*t5482*t6932 + t7739))*var2[1];
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
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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

#include "fRightSole_vec_RightSS.hh"

namespace SymFunction
{

void fRightSole_vec_RightSS_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
