/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:08 GMT-08:00
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
  double t303;
  double t453;
  double t971;
  double t999;
  double t1197;
  double t1233;
  double t1314;
  double t1364;
  double t1713;
  double t1734;
  double t2150;
  double t2869;
  double t3292;
  double t3715;
  double t4333;
  double t4997;
  double t5050;
  double t6901;
  double t7132;
  double t7629;
  double t7641;
  double t7673;
  double t7675;
  double t7679;
  double t7680;
  double t7681;
  double t7682;
  double t7697;
  double t7702;
  double t7709;
  double t7772;
  double t7773;
  double t7775;
  double t7779;
  double t7780;
  double t7784;
  double t7786;
  double t7787;
  double t7789;
  double t7795;
  double t7796;
  double t7820;
  double t7821;
  double t7824;
  double t7825;
  double t7826;
  double t7829;
  double t7830;
  double t7831;
  double t7832;
  double t7835;
  double t7838;
  double t7872;
  double t7873;
  double t7874;
  double t7877;
  double t7878;
  double t7883;
  double t7885;
  double t7886;
  double t7892;
  double t7893;
  double t7895;
  t303 = -1.*var4[1];
  t453 = var4[0] + t303;
  t971 = 1/t453;
  t999 = 0.8731249999999999*var1[2];
  t1197 = 0.8731249999999999*var1[5];
  t1233 = 0.46672499999999995*var1[6];
  t1314 = t303 + t999 + t1197 + t1233;
  t1364 = -1.*t971*t1314;
  t1713 = 1. + t1364;
  t1734 = Power(t1713,4);
  t2150 = Power(t453,-2);
  t2869 = Power(t1713,3);
  t3292 = Power(t453,-3);
  t3715 = Power(t1713,2);
  t4333 = Power(t1314,2);
  t4997 = Power(t453,-4);
  t5050 = Power(t1314,3);
  t6901 = Power(t453,-5);
  t7132 = Power(t1314,4);
  t7629 = -4.365625*var3[0]*t971*t1734;
  t7641 = 4.365625*var3[4]*t971*t1734;
  t7673 = -17.4625*var3[4]*t2150*t2869*t1314;
  t7675 = 17.4625*var3[8]*t2150*t2869*t1314;
  t7679 = -26.193749999999998*var3[8]*t3292*t3715*t4333;
  t7680 = 26.193749999999998*var3[12]*t3292*t3715*t4333;
  t7681 = -17.4625*var3[12]*t4997*t1713*t5050;
  t7682 = 17.4625*var3[16]*t4997*t1713*t5050;
  t7697 = -4.365625*var3[16]*t6901*t7132;
  t7702 = 4.365625*var3[20]*t6901*t7132;
  t7709 = t7629 + t7641 + t7673 + t7675 + t7679 + t7680 + t7681 + t7682 + t7697 + t7702;
  t7772 = -4.365625*var3[1]*t971*t1734;
  t7773 = 4.365625*var3[5]*t971*t1734;
  t7775 = -17.4625*var3[5]*t2150*t2869*t1314;
  t7779 = 17.4625*var3[9]*t2150*t2869*t1314;
  t7780 = -26.193749999999998*var3[9]*t3292*t3715*t4333;
  t7784 = 26.193749999999998*var3[13]*t3292*t3715*t4333;
  t7786 = -17.4625*var3[13]*t4997*t1713*t5050;
  t7787 = 17.4625*var3[17]*t4997*t1713*t5050;
  t7789 = -4.365625*var3[17]*t6901*t7132;
  t7795 = 4.365625*var3[21]*t6901*t7132;
  t7796 = t7772 + t7773 + t7775 + t7779 + t7780 + t7784 + t7786 + t7787 + t7789 + t7795;
  t7820 = -4.365625*var3[2]*t971*t1734;
  t7821 = 4.365625*var3[6]*t971*t1734;
  t7824 = -17.4625*var3[6]*t2150*t2869*t1314;
  t7825 = 17.4625*var3[10]*t2150*t2869*t1314;
  t7826 = -26.193749999999998*var3[10]*t3292*t3715*t4333;
  t7829 = 26.193749999999998*var3[14]*t3292*t3715*t4333;
  t7830 = -17.4625*var3[14]*t4997*t1713*t5050;
  t7831 = 17.4625*var3[18]*t4997*t1713*t5050;
  t7832 = -4.365625*var3[18]*t6901*t7132;
  t7835 = 4.365625*var3[22]*t6901*t7132;
  t7838 = t7820 + t7821 + t7824 + t7825 + t7826 + t7829 + t7830 + t7831 + t7832 + t7835;
  t7872 = -4.365625*var3[3]*t971*t1734;
  t7873 = 4.365625*var3[7]*t971*t1734;
  t7874 = -17.4625*var3[7]*t2150*t2869*t1314;
  t7877 = 17.4625*var3[11]*t2150*t2869*t1314;
  t7878 = -26.193749999999998*var3[11]*t3292*t3715*t4333;
  t7883 = 26.193749999999998*var3[15]*t3292*t3715*t4333;
  t7885 = -17.4625*var3[15]*t4997*t1713*t5050;
  t7886 = 17.4625*var3[19]*t4997*t1713*t5050;
  t7892 = -4.365625*var3[19]*t6901*t7132;
  t7893 = 4.365625*var3[23]*t6901*t7132;
  t7895 = t7872 + t7873 + t7874 + t7877 + t7878 + t7883 + t7885 + t7886 + t7892 + t7893;
  p_output1[0]=t7709*var2[2] + t7709*var2[5] + var2[6]*(-2.3336249999999996*t1734*t971*var3[0] - 9.334499999999998*t1314*t2150*t2869*var3[4] + 2.3336249999999996*t1734*t971*var3[4] + 9.334499999999998*t1314*t2150*t2869*var3[8] - 14.00175*t3292*t3715*t4333*var3[8] + 14.00175*t3292*t3715*t4333*var3[12] - 9.334499999999998*t1713*t4997*t5050*var3[12] + 9.334499999999998*t1713*t4997*t5050*var3[16] - 2.3336249999999996*t6901*t7132*var3[16] + 2.3336249999999996*t6901*t7132*var3[20]);
  p_output1[1]=t7796*var2[2] + t7796*var2[5] + var2[6]*(-2.3336249999999996*t1734*t971*var3[1] - 9.334499999999998*t1314*t2150*t2869*var3[5] + 2.3336249999999996*t1734*t971*var3[5] + 9.334499999999998*t1314*t2150*t2869*var3[9] - 14.00175*t3292*t3715*t4333*var3[9] + 14.00175*t3292*t3715*t4333*var3[13] - 9.334499999999998*t1713*t4997*t5050*var3[13] + 9.334499999999998*t1713*t4997*t5050*var3[17] - 2.3336249999999996*t6901*t7132*var3[17] + 2.3336249999999996*t6901*t7132*var3[21]);
  p_output1[2]=t7838*var2[2] + t7838*var2[5] + var2[6]*(-2.3336249999999996*t1734*t971*var3[2] - 9.334499999999998*t1314*t2150*t2869*var3[6] + 2.3336249999999996*t1734*t971*var3[6] + 9.334499999999998*t1314*t2150*t2869*var3[10] - 14.00175*t3292*t3715*t4333*var3[10] + 14.00175*t3292*t3715*t4333*var3[14] - 9.334499999999998*t1713*t4997*t5050*var3[14] + 9.334499999999998*t1713*t4997*t5050*var3[18] - 2.3336249999999996*t6901*t7132*var3[18] + 2.3336249999999996*t6901*t7132*var3[22]);
  p_output1[3]=t7895*var2[2] + t7895*var2[5] + var2[6]*(-2.3336249999999996*t1734*t971*var3[3] - 9.334499999999998*t1314*t2150*t2869*var3[7] + 2.3336249999999996*t1734*t971*var3[7] + 9.334499999999998*t1314*t2150*t2869*var3[11] - 14.00175*t3292*t3715*t4333*var3[11] + 14.00175*t3292*t3715*t4333*var3[15] - 9.334499999999998*t1713*t4997*t5050*var3[15] + 9.334499999999998*t1713*t4997*t5050*var3[19] - 2.3336249999999996*t6901*t7132*var3[19] + 2.3336249999999996*t6901*t7132*var3[23]);
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "d1yd_position_RightSS.hh"

namespace SymFunction
{

void d1yd_position_RightSS_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
