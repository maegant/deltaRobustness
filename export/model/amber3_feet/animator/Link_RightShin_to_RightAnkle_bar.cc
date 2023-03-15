/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:33 GMT-08:00
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
static void output1(double *p_output1,const double *var1)
{
  double t508;
  double t1286;
  double t2344;
  double t2409;
  double t2424;
  double t2655;
  double t2673;
  double t2682;
  double t2498;
  double t2514;
  double t2566;
  double t2720;
  double t1061;
  double t1151;
  double t2244;
  double t2416;
  double t2441;
  double t2467;
  double t2580;
  double t2742;
  double t2752;
  double t2832;
  double t2869;
  double t2935;
  double t2938;
  double t2950;
  double t2960;
  double t2912;
  double t3018;
  double t3821;
  double t3827;
  double t3902;
  double t3784;
  double t3788;
  double t3814;
  double t3941;
  double t3953;
  double t3958;
  double t3976;
  double t3985;
  double t3989;
  double t4013;
  double t4023;
  double t4031;
  double t3109;
  double t4654;
  double t3161;
  double t3201;
  double t3260;
  double t3296;
  double t3365;
  double t3378;
  double t3412;
  double t3436;
  double t3507;
  double t3540;
  double t3549;
  double t3573;
  double t3602;
  double t3611;
  double t3638;
  double t3708;
  double t3739;
  double t4692;
  double t4828;
  double t4050;
  double t4084;
  double t4144;
  double t4165;
  double t4170;
  double t4209;
  double t4232;
  double t4256;
  double t4290;
  double t4305;
  double t4344;
  double t4387;
  double t4400;
  double t4430;
  double t4445;
  double t4509;
  double t4542;
  double t4590;
  double t4840;
  t508 = Cos(var1[6]);
  t1286 = Sin(var1[2]);
  t2344 = Cos(var1[2]);
  t2409 = Sin(var1[6]);
  t2424 = Cos(var1[7]);
  t2655 = t2344*t508;
  t2673 = -1.*t1286*t2409;
  t2682 = t2655 + t2673;
  t2498 = t508*t1286;
  t2514 = t2344*t2409;
  t2566 = t2498 + t2514;
  t2720 = Sin(var1[7]);
  t1061 = -1.*t508;
  t1151 = 1. + t1061;
  t2244 = -0.4999*t1151*t1286;
  t2416 = 0.4999*t2344*t2409;
  t2441 = -1.*t2424;
  t2467 = 1. + t2441;
  t2580 = -0.9063*t2467*t2566;
  t2742 = 0.9063*t2682*t2720;
  t2752 = t2424*t2682;
  t2832 = -1.*t2566*t2720;
  t2869 = t2752 + t2832;
  t2935 = t2424*t2566;
  t2938 = t2682*t2720;
  t2950 = t2935 + t2938;
  t2960 = -0.9063*t2950;
  t2912 = 0.004783*t2869;
  t3018 = var1[0] + t2244 + t2416 + t2580 + t2742 + t2912 + t2960;
  t3821 = -1.*t508*t1286;
  t3827 = -1.*t2344*t2409;
  t3902 = t3821 + t3827;
  t3784 = -0.4999*t2344*t1151;
  t3788 = -0.4999*t1286*t2409;
  t3814 = -0.9063*t2467*t2682;
  t3941 = 0.9063*t3902*t2720;
  t3953 = t3902*t2720;
  t3958 = t2752 + t3953;
  t3976 = -0.9063*t3958;
  t3985 = t2424*t3902;
  t3989 = -1.*t2682*t2720;
  t4013 = t3985 + t3989;
  t4023 = 0.004783*t4013;
  t4031 = var1[1] + t3784 + t3788 + t3814 + t3941 + t3976 + t4023;
  t3109 = 0.00914*t2869;
  t4654 = -1.3127*t2950;
  t3161 = 0.012507*t2869;
  t3201 = 0.014518*t2869;
  t3260 = 0.014956*t2869;
  t3296 = 0.013774*t2869;
  t3365 = 0.011098*t2869;
  t3378 = 0.007221*t2869;
  t3412 = 0.00256*t2869;
  t3436 = -0.002378*t2869;
  t3507 = -0.007058*t2869;
  t3540 = -0.010973*t2869;
  t3549 = -0.013699*t2869;
  t3573 = -0.014941*t2869;
  t3602 = -0.014563*t2869;
  t3611 = -0.012608*t2869;
  t3638 = -0.009286*t2869;
  t3708 = -0.004958*t2869;
  t3739 = -0.000093*t2869;
  t4692 = var1[0] + t2244 + t2416 + t2580 + t2742 + t2912 + t4654;
  t4828 = -1.3127*t3958;
  t4050 = 0.00914*t4013;
  t4084 = 0.012507*t4013;
  t4144 = 0.014518*t4013;
  t4165 = 0.014956*t4013;
  t4170 = 0.013774*t4013;
  t4209 = 0.011098*t4013;
  t4232 = 0.007221*t4013;
  t4256 = 0.00256*t4013;
  t4290 = -0.002378*t4013;
  t4305 = -0.007058*t4013;
  t4344 = -0.010973*t4013;
  t4387 = -0.013699*t4013;
  t4400 = -0.014941*t4013;
  t4430 = -0.014563*t4013;
  t4445 = -0.012608*t4013;
  t4509 = -0.009286*t4013;
  t4542 = -0.004958*t4013;
  t4590 = -0.000093*t4013;
  t4840 = var1[1] + t3784 + t3788 + t3814 + t3941 + t4828 + t4023;
  p_output1[0]=t3018;
  p_output1[1]=t2244 + t2416 + t2580 + t2742 + t2960 + t3109 + var1[0];
  p_output1[2]=t2244 + t2416 + t2580 + t2742 + t2960 + t3161 + var1[0];
  p_output1[3]=t2244 + t2416 + t2580 + t2742 + t2960 + t3201 + var1[0];
  p_output1[4]=t2244 + t2416 + t2580 + t2742 + t2960 + t3260 + var1[0];
  p_output1[5]=t2244 + t2416 + t2580 + t2742 + t2960 + t3296 + var1[0];
  p_output1[6]=t2244 + t2416 + t2580 + t2742 + t2960 + t3365 + var1[0];
  p_output1[7]=t2244 + t2416 + t2580 + t2742 + t2960 + t3378 + var1[0];
  p_output1[8]=t2244 + t2416 + t2580 + t2742 + t2960 + t3412 + var1[0];
  p_output1[9]=t2244 + t2416 + t2580 + t2742 + t2960 + t3436 + var1[0];
  p_output1[10]=t2244 + t2416 + t2580 + t2742 + t2960 + t3507 + var1[0];
  p_output1[11]=t2244 + t2416 + t2580 + t2742 + t2960 + t3540 + var1[0];
  p_output1[12]=t2244 + t2416 + t2580 + t2742 + t2960 + t3549 + var1[0];
  p_output1[13]=t2244 + t2416 + t2580 + t2742 + t2960 + t3573 + var1[0];
  p_output1[14]=t2244 + t2416 + t2580 + t2742 + t2960 + t3602 + var1[0];
  p_output1[15]=t2244 + t2416 + t2580 + t2742 + t2960 + t3611 + var1[0];
  p_output1[16]=t2244 + t2416 + t2580 + t2742 + t2960 + t3638 + var1[0];
  p_output1[17]=t2244 + t2416 + t2580 + t2742 + t2960 + t3708 + var1[0];
  p_output1[18]=t2244 + t2416 + t2580 + t2742 + t2960 + t3739 + var1[0];
  p_output1[19]=t3018;
  p_output1[20]=0.014217;
  p_output1[21]=0.011894;
  p_output1[22]=0.008282;
  p_output1[23]=0.003772;
  p_output1[24]=-0.001146;
  p_output1[25]=-0.005941;
  p_output1[26]=-0.010091;
  p_output1[27]=-0.013148;
  p_output1[28]=-0.01478;
  p_output1[29]=-0.01481;
  p_output1[30]=-0.013236;
  p_output1[31]=-0.010227;
  p_output1[32]=-0.00611;
  p_output1[33]=-0.001331;
  p_output1[34]=0.003592;
  p_output1[35]=0.008127;
  p_output1[36]=0.01178;
  p_output1[37]=0.014157;
  p_output1[38]=0.015;
  p_output1[39]=0.014217;
  p_output1[40]=t4031;
  p_output1[41]=t3784 + t3788 + t3814 + t3941 + t3976 + t4050 + var1[1];
  p_output1[42]=t3784 + t3788 + t3814 + t3941 + t3976 + t4084 + var1[1];
  p_output1[43]=t3784 + t3788 + t3814 + t3941 + t3976 + t4144 + var1[1];
  p_output1[44]=t3784 + t3788 + t3814 + t3941 + t3976 + t4165 + var1[1];
  p_output1[45]=t3784 + t3788 + t3814 + t3941 + t3976 + t4170 + var1[1];
  p_output1[46]=t3784 + t3788 + t3814 + t3941 + t3976 + t4209 + var1[1];
  p_output1[47]=t3784 + t3788 + t3814 + t3941 + t3976 + t4232 + var1[1];
  p_output1[48]=t3784 + t3788 + t3814 + t3941 + t3976 + t4256 + var1[1];
  p_output1[49]=t3784 + t3788 + t3814 + t3941 + t3976 + t4290 + var1[1];
  p_output1[50]=t3784 + t3788 + t3814 + t3941 + t3976 + t4305 + var1[1];
  p_output1[51]=t3784 + t3788 + t3814 + t3941 + t3976 + t4344 + var1[1];
  p_output1[52]=t3784 + t3788 + t3814 + t3941 + t3976 + t4387 + var1[1];
  p_output1[53]=t3784 + t3788 + t3814 + t3941 + t3976 + t4400 + var1[1];
  p_output1[54]=t3784 + t3788 + t3814 + t3941 + t3976 + t4430 + var1[1];
  p_output1[55]=t3784 + t3788 + t3814 + t3941 + t3976 + t4445 + var1[1];
  p_output1[56]=t3784 + t3788 + t3814 + t3941 + t3976 + t4509 + var1[1];
  p_output1[57]=t3784 + t3788 + t3814 + t3941 + t3976 + t4542 + var1[1];
  p_output1[58]=t3784 + t3788 + t3814 + t3941 + t3976 + t4590 + var1[1];
  p_output1[59]=t4031;
  p_output1[60]=t4692;
  p_output1[61]=t2244 + t2416 + t2580 + t2742 + t3109 + t4654 + var1[0];
  p_output1[62]=t2244 + t2416 + t2580 + t2742 + t3161 + t4654 + var1[0];
  p_output1[63]=t2244 + t2416 + t2580 + t2742 + t3201 + t4654 + var1[0];
  p_output1[64]=t2244 + t2416 + t2580 + t2742 + t3260 + t4654 + var1[0];
  p_output1[65]=t2244 + t2416 + t2580 + t2742 + t3296 + t4654 + var1[0];
  p_output1[66]=t2244 + t2416 + t2580 + t2742 + t3365 + t4654 + var1[0];
  p_output1[67]=t2244 + t2416 + t2580 + t2742 + t3378 + t4654 + var1[0];
  p_output1[68]=t2244 + t2416 + t2580 + t2742 + t3412 + t4654 + var1[0];
  p_output1[69]=t2244 + t2416 + t2580 + t2742 + t3436 + t4654 + var1[0];
  p_output1[70]=t2244 + t2416 + t2580 + t2742 + t3507 + t4654 + var1[0];
  p_output1[71]=t2244 + t2416 + t2580 + t2742 + t3540 + t4654 + var1[0];
  p_output1[72]=t2244 + t2416 + t2580 + t2742 + t3549 + t4654 + var1[0];
  p_output1[73]=t2244 + t2416 + t2580 + t2742 + t3573 + t4654 + var1[0];
  p_output1[74]=t2244 + t2416 + t2580 + t2742 + t3602 + t4654 + var1[0];
  p_output1[75]=t2244 + t2416 + t2580 + t2742 + t3611 + t4654 + var1[0];
  p_output1[76]=t2244 + t2416 + t2580 + t2742 + t3638 + t4654 + var1[0];
  p_output1[77]=t2244 + t2416 + t2580 + t2742 + t3708 + t4654 + var1[0];
  p_output1[78]=t2244 + t2416 + t2580 + t2742 + t3739 + t4654 + var1[0];
  p_output1[79]=t4692;
  p_output1[80]=0.014217;
  p_output1[81]=0.011894;
  p_output1[82]=0.008282;
  p_output1[83]=0.003772;
  p_output1[84]=-0.001146;
  p_output1[85]=-0.005941;
  p_output1[86]=-0.010091;
  p_output1[87]=-0.013148;
  p_output1[88]=-0.01478;
  p_output1[89]=-0.01481;
  p_output1[90]=-0.013236;
  p_output1[91]=-0.010227;
  p_output1[92]=-0.00611;
  p_output1[93]=-0.001331;
  p_output1[94]=0.003592;
  p_output1[95]=0.008127;
  p_output1[96]=0.01178;
  p_output1[97]=0.014157;
  p_output1[98]=0.015;
  p_output1[99]=0.014217;
  p_output1[100]=t4840;
  p_output1[101]=t3784 + t3788 + t3814 + t3941 + t4050 + t4828 + var1[1];
  p_output1[102]=t3784 + t3788 + t3814 + t3941 + t4084 + t4828 + var1[1];
  p_output1[103]=t3784 + t3788 + t3814 + t3941 + t4144 + t4828 + var1[1];
  p_output1[104]=t3784 + t3788 + t3814 + t3941 + t4165 + t4828 + var1[1];
  p_output1[105]=t3784 + t3788 + t3814 + t3941 + t4170 + t4828 + var1[1];
  p_output1[106]=t3784 + t3788 + t3814 + t3941 + t4209 + t4828 + var1[1];
  p_output1[107]=t3784 + t3788 + t3814 + t3941 + t4232 + t4828 + var1[1];
  p_output1[108]=t3784 + t3788 + t3814 + t3941 + t4256 + t4828 + var1[1];
  p_output1[109]=t3784 + t3788 + t3814 + t3941 + t4290 + t4828 + var1[1];
  p_output1[110]=t3784 + t3788 + t3814 + t3941 + t4305 + t4828 + var1[1];
  p_output1[111]=t3784 + t3788 + t3814 + t3941 + t4344 + t4828 + var1[1];
  p_output1[112]=t3784 + t3788 + t3814 + t3941 + t4387 + t4828 + var1[1];
  p_output1[113]=t3784 + t3788 + t3814 + t3941 + t4400 + t4828 + var1[1];
  p_output1[114]=t3784 + t3788 + t3814 + t3941 + t4430 + t4828 + var1[1];
  p_output1[115]=t3784 + t3788 + t3814 + t3941 + t4445 + t4828 + var1[1];
  p_output1[116]=t3784 + t3788 + t3814 + t3941 + t4509 + t4828 + var1[1];
  p_output1[117]=t3784 + t3788 + t3814 + t3941 + t4542 + t4828 + var1[1];
  p_output1[118]=t3784 + t3788 + t3814 + t3941 + t4590 + t4828 + var1[1];
  p_output1[119]=t4840;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_RightShin_to_RightAnkle_bar.hh"

namespace SymFunction
{

void Link_RightShin_to_RightAnkle_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
