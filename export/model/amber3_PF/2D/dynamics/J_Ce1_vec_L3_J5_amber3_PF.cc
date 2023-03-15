/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:31:09 GMT-08:00
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
  double t327;
  double t180;
  double t195;
  double t349;
  double t32;
  double t228;
  double t367;
  double t387;
  double t577;
  double t579;
  double t1154;
  double t1324;
  double t1368;
  double t1428;
  double t1489;
  double t1746;
  double t1747;
  double t1754;
  double t1787;
  double t1792;
  double t1718;
  double t1841;
  double t1881;
  double t1882;
  double t1885;
  double t612;
  double t683;
  double t808;
  double t1903;
  double t2162;
  double t2189;
  double t2205;
  double t2208;
  double t2342;
  double t2410;
  double t2419;
  double t2566;
  double t2581;
  double t2560;
  double t2584;
  double t2605;
  double t2634;
  double t2645;
  double t827;
  double t894;
  double t1622;
  double t969;
  double t1578;
  double t2811;
  double t2819;
  double t2820;
  double t2828;
  double t2832;
  double t2889;
  double t2890;
  double t2907;
  double t2946;
  double t3200;
  double t3357;
  double t2789;
  double t2871;
  double t2873;
  double t2875;
  double t2876;
  double t3635;
  double t3641;
  double t3104;
  double t3190;
  double t3366;
  double t3382;
  double t3450;
  double t3495;
  double t3519;
  double t3527;
  double t3547;
  double t3652;
  double t3695;
  double t3717;
  double t3718;
  double t3725;
  double t3740;
  double t3742;
  double t3757;
  double t3764;
  double t3783;
  double t4120;
  double t4127;
  double t4131;
  double t4180;
  double t4189;
  t327 = Cos(var1[3]);
  t180 = Cos(var1[4]);
  t195 = Sin(var1[3]);
  t349 = Sin(var1[4]);
  t32 = Sin(var1[2]);
  t228 = -1.*t180*t195;
  t367 = -1.*t327*t349;
  t387 = t228 + t367;
  t577 = -1.*t32*t387;
  t579 = Cos(var1[2]);
  t1154 = -1.*t327*t180;
  t1324 = t195*t349;
  t1368 = t1154 + t1324;
  t1428 = t579*t1368;
  t1489 = t577 + t1428;
  t1746 = t180*t195;
  t1747 = t327*t349;
  t1754 = t1746 + t1747;
  t1787 = t32*t1754;
  t1792 = t1787 + t1428;
  t1718 = 0.07323676079999998*var2[2]*t1489;
  t1841 = 0.07323676079999998*var2[3]*t1792;
  t1881 = 0.07323676079999998*var2[4]*t1792;
  t1882 = t1718 + t1841 + t1881;
  t1885 = var2[4]*t1882;
  t612 = t327*t180;
  t683 = -1.*t195*t349;
  t808 = t612 + t683;
  t1903 = t579*t387;
  t2162 = -1.*t32*t808;
  t2189 = t1903 + t2162;
  t2205 = t32*t1368;
  t2208 = t1903 + t2205;
  t2342 = -1.*t579*t387;
  t2410 = -1.*t32*t1368;
  t2419 = t2342 + t2410;
  t2566 = t579*t1754;
  t2581 = t2566 + t2410;
  t2560 = 0.07323676079999998*var2[2]*t2419;
  t2584 = 0.07323676079999998*var2[3]*t2581;
  t2605 = 0.07323676079999998*var2[4]*t2581;
  t2634 = t2560 + t2584 + t2605;
  t2645 = var2[4]*t2634;
  t827 = -1.*t579*t808;
  t894 = t577 + t827;
  t1622 = 0.07323676079999998*var2[4]*t1489;
  t969 = 0.07323676079999998*var2[2]*t894;
  t1578 = 0.07323676079999998*var2[3]*t1489;
  t2811 = -1.*t180;
  t2819 = 1. + t2811;
  t2820 = -0.9063*t2819;
  t2828 = -1.078185*t180;
  t2832 = t2820 + t2828;
  t2889 = -0.4999*t195;
  t2890 = -1.*t2832*t195;
  t2907 = 0.17188499999999995*t327*t349;
  t2946 = t2889 + t2890 + t2907;
  t3200 = t327*t2832;
  t3357 = 0.17188499999999995*t195*t349;
  t2789 = 0.4999*t195;
  t2871 = t2832*t195;
  t2873 = -0.17188499999999995*t327*t349;
  t2875 = t2789 + t2871 + t2873;
  t2876 = t387*t2875;
  t3635 = 0.17188499999999995*t180*t195;
  t3641 = t3635 + t2907;
  t3104 = -0.17188499999999995*t195*t349;
  t3190 = 0.4999*t327;
  t3366 = t3190 + t3200 + t3357;
  t3382 = -1.*t327;
  t3450 = 1. + t3382;
  t3495 = -0.4999*t3450;
  t3519 = t3495 + t3200 + t3357;
  t3527 = t3519*t1368;
  t3547 = t387*t2946;
  t3652 = t387*t3641;
  t3695 = t3641*t1754;
  t3717 = 0.17188499999999995*t327*t180;
  t3718 = t3717 + t3104;
  t3725 = t808*t3718;
  t3740 = t808*t3366;
  t3742 = -0.17188499999999995*t327*t180;
  t3757 = t3742 + t3357;
  t3764 = t808*t3757;
  t3783 = t2876 + t3547 + t3652 + t3695 + t3725 + t3740 + t3764 + t3527;
  t4120 = t2875*t808;
  t4127 = t2946*t808;
  t4131 = t387*t3519;
  t4180 = t1754*t3366;
  t4189 = t4120 + t4127 + t4131 + t4180;
  p_output1[0]=(t1578 + t1622 + t969)*var2[4];
  p_output1[1]=t1885;
  p_output1[2]=t1885;
  p_output1[3]=0.07323676079999998*t2189*var2[4];
  p_output1[4]=0.07323676079999998*t2208*var2[4];
  p_output1[5]=0.07323676079999998*t2189*var2[2] + 0.07323676079999998*t2208*var2[3] + 0.14647352159999996*t2208*var2[4];
  p_output1[6]=var2[4]*(0.07323676079999998*(t2342 + t32*t808)*var2[2] + 0.07323676079999998*t2419*var2[3] + 0.07323676079999998*t2419*var2[4]);
  p_output1[7]=t2645;
  p_output1[8]=t2645;
  p_output1[9]=0.07323676079999998*t894*var2[4];
  p_output1[10]=t1622;
  p_output1[11]=t1578 + t969 + 0.14647352159999996*t1489*var2[4];
  p_output1[12]=var2[4]*(0.07323676079999998*(t2876 + t1754*t2946 + t3527 + 2.*t2946*t387 + (t3104 - 0.4999*t327 - 1.*t2832*t327)*t808 + 2.*t3366*t808)*var2[3] + 0.07323676079999998*t3783*var2[4]);
  p_output1[13]=var2[4]*(0.07323676079999998*t3783*var2[3] + 0.07323676079999998*(t2876 + t3527 + t3695 + t3725 + 2.*t3641*t387 + 2.*t3757*t808)*var2[4]);
  p_output1[14]=0.07323676079999998*t4189*var2[4];
  p_output1[15]=0.07323676079999998*t4189*var2[3] + 0.14647352159999996*(t1754*t3757 + t4120 + t4131 + t3641*t808)*var2[4];
  p_output1[16]=0.07323676079999998*(0. - 0.4999*t180 - 0.17188499999999995*Power(t180,2) - 1.*t180*t2832)*Power(var2[4],2);
  p_output1[17]=0.14647352159999996*(-0.4999*t349 - 0.17188499999999995*t180*t349 - 1.*t2832*t349)*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec_L3_J5_amber3_PF.hh"

namespace RightSS
{

void J_Ce1_vec_L3_J5_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
