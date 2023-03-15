/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:04 GMT-08:00
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
  double t2546;
  double t1205;
  double t2056;
  double t5489;
  double t606;
  double t2083;
  double t5512;
  double t5908;
  double t6677;
  double t6693;
  double t6704;
  double t6883;
  double t6891;
  double t7500;
  double t7512;
  double t7520;
  double t7433;
  double t7456;
  double t7474;
  double t7489;
  double t7534;
  double t7549;
  double t7629;
  double t7641;
  double t7326;
  double t7348;
  double t7709;
  double t7736;
  double t7739;
  double t7742;
  double t7732;
  double t7735;
  double t7744;
  double t7751;
  double t7753;
  double t7762;
  double t6462;
  double t6886;
  double t6965;
  double t6971;
  double t7109;
  double t7132;
  double t7163;
  double t7679;
  double t7680;
  double t7681;
  double t7697;
  double t7702;
  double t7710;
  double t7711;
  double t7715;
  double t7717;
  double t7729;
  double t7772;
  double t7773;
  double t7775;
  t2546 = Cos(var1[2]);
  t1205 = Cos(var1[5]);
  t2056 = Sin(var1[2]);
  t5489 = Sin(var1[5]);
  t606 = Cos(var1[6]);
  t2083 = -1.*t1205*t2056;
  t5512 = -1.*t2546*t5489;
  t5908 = t2083 + t5512;
  t6677 = t2546*t1205;
  t6693 = -1.*t2056*t5489;
  t6704 = t6677 + t6693;
  t6883 = Sin(var1[6]);
  t6891 = t606*t5908;
  t7500 = -1.*t2546*t1205;
  t7512 = t2056*t5489;
  t7520 = t7500 + t7512;
  t7433 = -0.4999*t2546*t5489;
  t7456 = -1.*t606;
  t7474 = 1. + t7456;
  t7489 = -0.9063*t7474*t5908;
  t7534 = 0.9063*t7520*t6883;
  t7549 = t7520*t6883;
  t7629 = t6891 + t7549;
  t7641 = -1.373025*t7629;
  t7326 = -1.*t1205;
  t7348 = 1. + t7326;
  t7709 = t606*t7520;
  t7736 = t1205*t2056;
  t7739 = t2546*t5489;
  t7742 = t7736 + t7739;
  t7732 = 0.4999*t2056*t5489;
  t7735 = -0.9063*t7474*t7520;
  t7744 = 0.9063*t7742*t6883;
  t7751 = t7742*t6883;
  t7753 = t7709 + t7751;
  t7762 = -1.373025*t7753;
  t6462 = 0.9063*t606*t5908;
  t6886 = -0.9063*t6704*t6883;
  t6965 = -1.*t6704*t6883;
  t6971 = t6891 + t6965;
  t7109 = -1.373025*t6971;
  t7132 = t6462 + t6886 + t7109;
  t7163 = var2[6]*t7132;
  t7679 = -0.4999*t1205*t2056;
  t7680 = t7679 + t7433 + t7489 + t7534 + t7641;
  t7681 = var2[5]*t7680;
  t7697 = 0.9063*t606*t7520;
  t7702 = -0.9063*t5908*t6883;
  t7710 = -1.*t5908*t6883;
  t7711 = t7709 + t7710;
  t7715 = -1.373025*t7711;
  t7717 = t7697 + t7702 + t7715;
  t7729 = var2[6]*t7717;
  t7772 = -0.4999*t2546*t1205;
  t7773 = t7772 + t7732 + t7735 + t7744 + t7762;
  t7775 = var2[5]*t7773;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=t7163 + t7681 + (0.4999*t2056*t7348 + t7433 + t7489 + t7534 + t7641)*var2[2];
  p_output1[5]=t7729 + t7775 + (0.4999*t2546*t7348 + t7732 + t7735 + t7744 + t7762)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=t7163 + t7681 + t7680*var2[2];
  p_output1[11]=t7729 + t7775 + t7773*var2[2];
  p_output1[12]=t7132*var2[2] + t7132*var2[5] + (t6886 - 0.9063*t606*t7742 - 1.373025*(t6965 - 1.*t606*t7742))*var2[6];
  p_output1[13]=t7717*var2[2] + t7717*var2[5] + (-0.9063*t606*t6704 + t7702 - 1.373025*(-1.*t606*t6704 + t7710))*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_RightSole_RightSS.hh"

namespace SymFunction
{

void dJh_RightSole_RightSS_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
