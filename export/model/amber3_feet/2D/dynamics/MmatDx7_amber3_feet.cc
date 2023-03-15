/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:21:16 GMT-08:00
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
  double t1407;
  double t602;
  double t606;
  double t1433;
  double t1825;
  double t1119;
  double t1443;
  double t1447;
  double t97;
  double t1995;
  double t2061;
  double t2262;
  double t3312;
  double t2291;
  double t81;
  double t5863;
  double t6000;
  double t6018;
  double t4789;
  double t5273;
  double t5275;
  double t5460;
  double t5611;
  double t5630;
  double t1565;
  double t2374;
  double t2658;
  double t3827;
  double t3851;
  double t4031;
  double t4647;
  double t4699;
  double t6206;
  double t6764;
  double t7644;
  double t7680;
  double t7685;
  double t7705;
  double t7719;
  double t7745;
  double t7805;
  double t7811;
  double t7812;
  double t7813;
  double t7814;
  double t7815;
  double t7783;
  double t7784;
  double t7790;
  double t7791;
  double t7874;
  double t7875;
  double t7878;
  double t7879;
  double t7881;
  double t7882;
  double t7869;
  double t7870;
  double t7871;
  double t7872;
  double t7857;
  double t7859;
  double t7861;
  double t4753;
  double t5680;
  double t5740;
  double t5838;
  double t7851;
  double t7853;
  double t7854;
  double t7757;
  double t7766;
  double t7775;
  double t7777;
  double t7778;
  double t7802;
  double t7803;
  double t7816;
  double t7820;
  double t7823;
  double t7824;
  double t7827;
  double t7831;
  double t7856;
  double t7863;
  double t7864;
  double t7873;
  double t7883;
  double t7885;
  double t7887;
  double t7889;
  double t7890;
  double t7913;
  double t7914;
  double t7915;
  double t7886;
  double t7891;
  double t7892;
  double t7822;
  double t7832;
  double t7833;
  double t7901;
  double t7902;
  double t7903;
  double t7926;
  double t7927;
  double t7928;
  double t7944;
  double t7945;
  double t7946;
  double t7749;
  double t7779;
  double t7781;
  double t7896;
  double t7897;
  double t7898;
  double t7922;
  double t7923;
  double t7924;
  double t7962;
  double t7963;
  double t7939;
  double t7940;
  double t7919;
  double t7920;
  t1407 = Cos(var1[7]);
  t602 = Cos(var1[8]);
  t606 = Sin(var1[7]);
  t1433 = Sin(var1[8]);
  t1825 = Cos(var1[6]);
  t1119 = t602*t606;
  t1443 = t1407*t1433;
  t1447 = t1119 + t1443;
  t97 = Sin(var1[6]);
  t1995 = t1407*t602;
  t2061 = -1.*t606*t1433;
  t2262 = t1995 + t2061;
  t3312 = Cos(var1[2]);
  t2291 = t1825*t2262;
  t81 = Sin(var1[2]);
  t5863 = -1.*t602*t606;
  t6000 = -1.*t1407*t1433;
  t6018 = t5863 + t6000;
  t4789 = -1.*t602;
  t5273 = 1. + t4789;
  t5275 = -1.3127*t5273;
  t5460 = -1.3127*t602;
  t5611 = -0.06*t1433;
  t5630 = t5275 + t5460 + t5611;
  t1565 = -1.*t97*t1447;
  t2374 = t1565 + t2291;
  t2658 = t81*t2374;
  t3827 = t1825*t1447;
  t3851 = t97*t2262;
  t4031 = t3827 + t3851;
  t4647 = t3312*t4031;
  t4699 = t2658 + t4647;
  t6206 = t97*t6018;
  t6764 = t6206 + t2291;
  t7644 = t3312*t6764;
  t7680 = t1825*t6018;
  t7685 = -1.*t97*t2262;
  t7705 = t7680 + t7685;
  t7719 = t81*t7705;
  t7745 = t7644 + t7719;
  t7805 = -1.*t1407;
  t7811 = 1. + t7805;
  t7812 = -0.9063*t7811;
  t7813 = -0.06*t602*t606;
  t7814 = t1407*t5630;
  t7815 = t7812 + t7813 + t7814;
  t7783 = 0.06*t1407*t602;
  t7784 = 0.9063*t606;
  t7790 = t606*t5630;
  t7791 = t7783 + t7784 + t7790;
  t7874 = -1.*t1825;
  t7875 = 1. + t7874;
  t7878 = -0.4999*t7875;
  t7879 = t1825*t7815;
  t7881 = -1.*t97*t7791;
  t7882 = t7878 + t7879 + t7881;
  t7869 = 0.4999*t97;
  t7870 = t97*t7815;
  t7871 = t1825*t7791;
  t7872 = t7869 + t7870 + t7871;
  t7857 = t3312*t2374;
  t7859 = -1.*t81*t4031;
  t7861 = t7857 + t7859;
  t4753 = 0.9063*t602;
  t5680 = t602*t5630;
  t5740 = 0.06*t602*t1433;
  t5838 = t4753 + t5680 + t5740;
  t7851 = -1.*t81*t6764;
  t7853 = t3312*t7705;
  t7854 = t7851 + t7853;
  t7757 = Power(t602,2);
  t7766 = -0.06*t7757;
  t7775 = 0.9063*t1433;
  t7777 = t5630*t1433;
  t7778 = t7766 + t7775 + t7777;
  t7802 = t7791*t1447;
  t7803 = 0.4999*t2262;
  t7816 = t7815*t2262;
  t7820 = t7802 + t7803 + t7816;
  t7823 = -1.*t7815*t6018;
  t7824 = 0.4999*t1447;
  t7827 = -1.*t7791*t2262;
  t7831 = t7823 + t7824 + t7827;
  t7856 = 1.142857*t7854*t7745;
  t7863 = 1.142857*t4699*t7861;
  t7864 = t7856 + t7863;
  t7873 = -1.*t7872*t6764;
  t7883 = -1.*t7882*t7705;
  t7885 = t7873 + t7883;
  t7887 = t7882*t2374;
  t7889 = t7872*t4031;
  t7890 = t7887 + t7889;
  t7913 = 1.142857*t7885*t7861;
  t7914 = 1.142857*t7854*t7890;
  t7915 = t7913 + t7914;
  t7886 = 1.142857*t7885*t4699;
  t7891 = 1.142857*t7745*t7890;
  t7892 = t7886 + t7891;
  t7822 = 1.142857*t7820*t7745;
  t7832 = 1.142857*t7831*t4699;
  t7833 = t7822 + t7832;
  t7901 = 1.142857*t7820*t7854;
  t7902 = 1.142857*t7831*t7861;
  t7903 = t7901 + t7902;
  t7926 = 1.142857*t7831*t7885;
  t7927 = 1.142857*t7820*t7890;
  t7928 = 0.0085 + t7926 + t7927;
  t7944 = 1.142857*t5838*t7820;
  t7945 = 1.142857*t7778*t7831;
  t7946 = 0.0085 + t7944 + t7945;
  t7749 = 1.142857*t5838*t7745;
  t7779 = 1.142857*t7778*t4699;
  t7781 = t7749 + t7779;
  t7896 = 1.142857*t5838*t7854;
  t7897 = 1.142857*t7778*t7861;
  t7898 = t7896 + t7897;
  t7922 = 1.142857*t7778*t7885;
  t7923 = 1.142857*t5838*t7890;
  t7924 = 0.0085 + t7922 + t7923;
  t7962 = -0.06857142*t7778;
  t7963 = 0.0085 + t7962;
  t7939 = -0.06857142*t7831;
  t7940 = 0.0085 + t7939;
  t7919 = -0.06857142*t7885;
  t7920 = 0.0085 + t7919;
  p_output1[0]=-1.*(1.142857*Power(t4699,2) + 1.142857*Power(t7745,2))*var2[0] - 1.*t7864*var2[1] - 1.*t7892*var2[2] - 1.*t7833*var2[6] - 1.*t7781*var2[7] + 0.06857142*t4699*var2[8];
  p_output1[1]=-1.*t7864*var2[0] - 1.*(1.142857*Power(t7854,2) + 1.142857*Power(t7861,2))*var2[1] - 1.*t7915*var2[2] - 1.*t7903*var2[6] - 1.*t7898*var2[7] + 0.06857142*t7861*var2[8];
  p_output1[2]=-1.*t7892*var2[0] - 1.*t7915*var2[1] - 1.*(0.0085 + 1.142857*Power(t7885,2) + 1.142857*Power(t7890,2))*var2[2] - 1.*t7928*var2[6] - 1.*t7924*var2[7] - 1.*t7920*var2[8];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=-1.*t7833*var2[0] - 1.*t7903*var2[1] - 1.*t7928*var2[2] - 1.*(0.0085 + 1.142857*Power(t7820,2) + 1.142857*Power(t7831,2))*var2[6] - 1.*t7946*var2[7] - 1.*t7940*var2[8];
  p_output1[7]=-1.*t7781*var2[0] - 1.*t7898*var2[1] - 1.*t7924*var2[2] - 1.*t7946*var2[6] - 1.*(0.0085 + 1.142857*Power(t5838,2) + 1.142857*Power(t7778,2))*var2[7] - 1.*t7963*var2[8];
  p_output1[8]=0.06857142*t4699*var2[0] + 0.06857142*t7861*var2[1] - 1.*t7920*var2[2] - 1.*t7940*var2[6] - 1.*t7963*var2[7] - 0.0126142852*var2[8];
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

#include "MmatDx7_amber3_feet.hh"

namespace SymFunction
{

void MmatDx7_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
