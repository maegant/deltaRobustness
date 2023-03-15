/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:33:55 GMT-08:00
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
  double t88;
  double t653;
  double t925;
  double t892;
  double t275;
  double t411;
  double t433;
  double t454;
  double t483;
  double t1353;
  double t782;
  double t1362;
  double t1398;
  double t1446;
  double t1800;
  double t1846;
  double t1851;
  double t1883;
  double t1888;
  double t1964;
  double t2050;
  double t1475;
  double t164;
  double t643;
  double t699;
  double t711;
  double t773;
  double t904;
  double t1026;
  double t1028;
  double t2154;
  double t1161;
  double t1591;
  double t2362;
  double t2627;
  double t2637;
  double t2662;
  double t2556;
  double t2613;
  double t2617;
  double t2668;
  double t2679;
  double t2716;
  double t3213;
  double t3222;
  double t3278;
  double t3296;
  double t2753;
  double t2940;
  double t2986;
  double t2992;
  double t2092;
  double t2164;
  double t2758;
  double t2780;
  double t2796;
  double t2996;
  double t3002;
  double t3026;
  double t1743;
  double t2207;
  double t2240;
  double t3762;
  double t3766;
  double t3772;
  double t2720;
  double t2726;
  double t2810;
  double t2826;
  double t2842;
  double t2909;
  double t2264;
  double t4357;
  double t4366;
  double t4196;
  double t4199;
  double t4200;
  double t4214;
  double t4575;
  double t4582;
  double t4634;
  double t4639;
  double t4221;
  double t4290;
  double t4291;
  double t4297;
  double t4441;
  double t4468;
  double t4331;
  double t4338;
  double t4343;
  double t4391;
  double t3875;
  double t3883;
  double t3894;
  double t3901;
  double t4085;
  double t4093;
  double t4143;
  double t4167;
  double t4168;
  double t4396;
  double t4645;
  double t5297;
  double t5311;
  double t4698;
  double t5352;
  double t5364;
  double t5381;
  double t5397;
  double t4795;
  double t4893;
  double t5042;
  double t5195;
  double t5246;
  double t5257;
  double t5285;
  double t5295;
  double t5449;
  double t5450;
  double t5457;
  double t5470;
  double t5477;
  double t5734;
  double t5737;
  double t5777;
  double t5807;
  double t5815;
  double t5817;
  double t3302;
  double t3388;
  double t5902;
  double t4853;
  double t5131;
  double t5296;
  double t5326;
  double t5369;
  double t5378;
  double t5401;
  double t5409;
  double t5411;
  double t5420;
  double t5442;
  double t5493;
  double t5501;
  double t5533;
  double t5566;
  double t5585;
  double t5589;
  double t5604;
  double t5610;
  double t6290;
  double t6292;
  double t6297;
  double t6304;
  double t6055;
  double t4844;
  double t6079;
  double t5122;
  double t2391;
  double t6765;
  double t6791;
  double t6798;
  double t6559;
  double t5906;
  double t5923;
  double t6610;
  double t6629;
  double t6630;
  double t6671;
  double t6686;
  double t6689;
  double t6708;
  double t6712;
  double t6719;
  double t6927;
  double t6952;
  double t6959;
  double t7028;
  double t7034;
  double t7035;
  double t7041;
  double t7042;
  t88 = Cos(var1[6]);
  t653 = Sin(var1[6]);
  t925 = Cos(var1[5]);
  t892 = Sin(var1[5]);
  t275 = -1.*t88;
  t411 = 1. + t275;
  t433 = -0.9063*t411;
  t454 = -1.078185*t88;
  t483 = t433 + t454;
  t1353 = Cos(var1[2]);
  t782 = Sin(var1[2]);
  t1362 = t925*t88;
  t1398 = -1.*t892*t653;
  t1446 = t1362 + t1398;
  t1800 = 0.4999*t653;
  t1846 = t483*t653;
  t1851 = 0.17188499999999995*t88*t653;
  t1883 = t1800 + t1846 + t1851;
  t1888 = t88*t892;
  t1964 = t925*t653;
  t2050 = t1888 + t1964;
  t1475 = -1.*t1353*t1446;
  t164 = 0.4999*t88;
  t643 = t483*t88;
  t699 = Power(t653,2);
  t711 = -0.17188499999999995*t699;
  t773 = t164 + t643 + t711;
  t904 = -1.*t88*t892;
  t1026 = -1.*t925*t653;
  t1028 = t904 + t1026;
  t2154 = -1.*t782*t1446;
  t1161 = -1.*t782*t1028;
  t1591 = t1161 + t1475;
  t2362 = -1.*t1353*t1028;
  t2627 = -1.*t925*t88;
  t2637 = t892*t653;
  t2662 = t2627 + t2637;
  t2556 = t1353*t1028;
  t2613 = t2556 + t2154;
  t2617 = 0.85216*t1883*t2613;
  t2668 = t1353*t2662;
  t2679 = t1161 + t2668;
  t2716 = 0.85216*t773*t2679;
  t3213 = -0.4999*t653;
  t3222 = -1.*t483*t653;
  t3278 = -0.17188499999999995*t88*t653;
  t3296 = t3213 + t3222 + t3278;
  t2753 = 0.85216*t1883*t1591;
  t2940 = Power(t88,2);
  t2986 = 0.17188499999999995*t2940;
  t2992 = 0. + t164 + t643 + t2986;
  t2092 = -1.*t1353*t2050;
  t2164 = t2092 + t2154;
  t2758 = -1.*t782*t2662;
  t2780 = t2362 + t2758;
  t2796 = 0.85216*t773*t2780;
  t2996 = -1.*t782*t2050;
  t3002 = t1353*t1446;
  t3026 = t2996 + t3002;
  t1743 = 0.85216*t773*t1591;
  t2207 = 0.85216*t1883*t2164;
  t2240 = t1743 + t2207;
  t3762 = 0.85216*t1883*t3026;
  t3766 = 0.85216*t773*t2613;
  t3772 = t3762 + t3766;
  t2720 = t2617 + t2716;
  t2726 = 0.5*var2[0]*t2720;
  t2810 = t2753 + t2796;
  t2826 = 0.5*var2[1]*t2810;
  t2842 = t2726 + t2826;
  t2909 = var2[5]*t2842;
  t2264 = t782*t2050;
  t4357 = t925*t483;
  t4366 = 0.17188499999999995*t892*t653;
  t4196 = -0.4999*t892;
  t4199 = -1.*t483*t892;
  t4200 = 0.17188499999999995*t925*t653;
  t4214 = t4196 + t4199 + t4200;
  t4575 = 0.4999*t892;
  t4582 = t483*t892;
  t4634 = -0.17188499999999995*t925*t653;
  t4639 = t4575 + t4582 + t4634;
  t4221 = -0.4999*t925;
  t4290 = -1.*t925*t483;
  t4291 = -0.17188499999999995*t892*t653;
  t4297 = t4221 + t4290 + t4291;
  t4441 = 0.4999*t925;
  t4468 = t4441 + t4357 + t4366;
  t4331 = -1.*t925;
  t4338 = 1. + t4331;
  t4343 = -0.4999*t4338;
  t4391 = t4343 + t4357 + t4366;
  t3875 = 0.85216*t1883*t2679;
  t3883 = t1353*t2050;
  t3894 = t3883 + t2758;
  t3901 = 0.85216*t773*t3894;
  t4085 = t2264 + t2668;
  t4093 = 0.85216*t773*t4085;
  t4143 = t782*t2662;
  t4167 = t2556 + t4143;
  t4168 = 0.85216*t1883*t4167;
  t4396 = -1.*t2050*t4391;
  t4645 = -1.*t4639*t2662;
  t5297 = 0.17188499999999995*t88*t892;
  t5311 = t5297 + t4200;
  t4698 = t1028*t4639;
  t5352 = 0.17188499999999995*t925*t88;
  t5364 = t5352 + t4291;
  t5381 = -0.17188499999999995*t925*t88;
  t5397 = t5381 + t4366;
  t4795 = t4391*t2662;
  t4893 = t782*t1028;
  t5042 = t4893 + t3002;
  t5195 = t4639*t1446;
  t5246 = t4214*t1446;
  t5257 = t1028*t4391;
  t5285 = t2050*t4468;
  t5295 = t5195 + t5246 + t5257 + t5285;
  t5449 = -1.*t1028*t4639;
  t5450 = -1.*t1028*t4214;
  t5457 = -1.*t1446*t4468;
  t5470 = -1.*t4391*t2662;
  t5477 = t5449 + t5450 + t5457 + t5470;
  t5734 = 0.85216*t1883*t5042;
  t5737 = 0.85216*t773*t4167;
  t5777 = t5734 + t5737;
  t5807 = 0.85216*t773*t5295;
  t5815 = 0.85216*t1883*t5477;
  t5817 = t5807 + t5815;
  t3302 = 0.85216*t3296*t2613;
  t3388 = 0.85216*t3296*t1591;
  t5902 = t164 + t643 + t2986;
  t4853 = 0.85216*t3296*t2679;
  t5131 = 0.85216*t3296*t4167;
  t5296 = 0.85216*t3296*t5295;
  t5326 = -1.*t5311*t1446;
  t5369 = -1.*t1028*t5364;
  t5378 = -1.*t1028*t4468;
  t5401 = -1.*t1028*t5397;
  t5409 = -1.*t4214*t2662;
  t5411 = -1.*t5311*t2662;
  t5420 = t5326 + t5369 + t4396 + t5378 + t5401 + t4645 + t5409 + t5411;
  t5442 = 0.85216*t1883*t5420;
  t5493 = t1028*t4214;
  t5501 = t1028*t5311;
  t5533 = t5311*t2050;
  t5566 = t1446*t5364;
  t5585 = t1446*t4468;
  t5589 = t1446*t5397;
  t5604 = t4698 + t5493 + t5501 + t5533 + t5566 + t5585 + t5589 + t4795;
  t5610 = 0.85216*t773*t5604;
  t6290 = -0.4999*t88;
  t6292 = -1.*t483*t88;
  t6297 = -0.17188499999999995*t2940;
  t6304 = 0. + t6290 + t6292 + t6297;
  t6055 = 0.85216*t5902*t2613;
  t4844 = 0.85216*t2992*t2613;
  t6079 = 0.85216*t5902*t5042;
  t5122 = 0.85216*t2992*t5042;
  t2391 = t782*t1446;
  t6765 = -1.*t1028*t5311;
  t6791 = -1.*t1446*t5397;
  t6798 = t5449 + t6765 + t6791 + t5470;
  t6559 = t3883 + t2391;
  t5906 = 0.85216*t5902*t3026;
  t5923 = t5906 + t3302 + t2617 + t2716;
  t6610 = -1.*t4639*t1446;
  t6629 = -1.*t1028*t4391;
  t6630 = t6610 + t6629;
  t6671 = t4639*t2050;
  t6686 = t1446*t4391;
  t6689 = t6671 + t6686;
  t6708 = t5311*t1446;
  t6712 = t2050*t5397;
  t6719 = t5195 + t6708 + t5257 + t6712;
  t6927 = 0.85216*t3296*t5042;
  t6952 = 0.85216*t5902*t6559;
  t6959 = t6927 + t5734 + t6952 + t5737;
  t7028 = 0.85216*t5902*t6630;
  t7034 = 0.85216*t3296*t6689;
  t7035 = 0.85216*t773*t6719;
  t7041 = 0.85216*t1883*t6798;
  t7042 = t7028 + t7034 + t7035 + t7041;
  p_output1[0]=(0.5*t2240*var2[0] + 0.5*(0.85216*t1883*(t1475 + t2264) + 0.85216*(t2362 + t2391)*t773)*var2[1])*var2[5];
  p_output1[1]=t2909;
  p_output1[2]=(0.5*(t2617 + t2716 + 0.85216*t2992*t3026 + t3302)*var2[0] + 0.5*(t2753 + t2796 + 0.85216*t2164*t2992 + t3388)*var2[1])*var2[5];
  p_output1[3]=0.5*t3772*var2[5];
  p_output1[4]=0.5*t2240*var2[5];
  p_output1[5]=0.5*t3772*var2[0] + 0.5*t2240*var2[1];
  p_output1[6]=t2909;
  p_output1[7]=(0.5*(t4093 + t4168)*var2[0] + 0.5*(t3875 + t3901)*var2[1] + 0.5*(0.85216*t1883*(-1.*t1446*t4214 - 2.*t2662*t4214 - 1.*t1028*t4297 + t4396 - 2.*t1028*t4468 + t4645) + 0.85216*(2.*t1028*t4214 + t2050*t4214 + t1446*t4297 + 2.*t1446*t4468 + t4698 + t4795)*t773)*var2[2])*var2[5];
  p_output1[8]=(0.5*(t4093 + t4168 + t5122 + t5131)*var2[0] + 0.5*(t3875 + t3901 + t4844 + t4853)*var2[1] + 0.5*(t5296 + t5442 + 0.85216*t2992*t5477 + t5610)*var2[2])*var2[5];
  p_output1[9]=0.5*t5777*var2[5];
  p_output1[10]=0.5*t2720*var2[5];
  p_output1[11]=0.5*t5817*var2[5];
  p_output1[12]=0.5*t5777*var2[0] + 0.5*t2720*var2[1] + 0.5*t5817*var2[2];
  p_output1[13]=(0.5*t5923*var2[0] + 0.5*(t2753 + t2796 + t3388 + 0.85216*t2164*t5902)*var2[1])*var2[5];
  p_output1[14]=(0.5*(t4093 + t4168 + t5131 + t6079)*var2[0] + 0.5*(t3875 + t3901 + t4853 + t6055)*var2[1] + 0.5*(t5296 + t5442 + t5610 + 0.85216*t5477*t5902)*var2[2])*var2[5];
  p_output1[15]=var2[5]*(0.5*(t4093 + 1.70432*t3296*t4167 + t4168 + t5122 + t6079 + 0.85216*t5042*t6304 + 0.85216*t3296*t6559)*var2[0] + 0.5*(1.70432*t2679*t3296 + 0.85216*t3026*t3296 + t3875 + t3901 + t4844 + t6055 + 0.85216*t2613*t6304)*var2[1] + 0.5*(0.85216*t1883*(t4396 + t4645 - 2.*t2662*t5311 + t5326 + t5369 - 2.*t1028*t5397) + 0.85216*t3296*t6630 + 0.85216*t6304*t6689 + 1.70432*t3296*t6719 + 0.85216*t2992*t6798 + 0.85216*t5902*t6798 + 0.85216*(t4698 + t4795 + 2.*t1028*t5311 + 2.*t1446*t5397 + t5533 + t5566)*t773)*var2[2] + 0.5*(1.70432*t1883*t3296 + 1.70432*Power(t3296,2) + 1.70432*t2992*t5902 + 1.70432*t6304*t773)*var2[5] - 0.07323676079999998*t6304*var2[6]);
  p_output1[16]=0.5*t6959*var2[5];
  p_output1[17]=0.5*t5923*var2[5];
  p_output1[18]=0.5*t7042*var2[5];
  p_output1[19]=0.5*t6959*var2[0] + 0.5*t5923*var2[1] + 0.5*t7042*var2[2] + (1.70432*t1883*t5902 + 1.70432*t3296*t773)*var2[5] - 0.07323676079999998*t3296*var2[6];
  p_output1[20]=-0.07323676079999998*t3296*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L5_J6_amber3_PF.hh"

namespace RightSS
{

void J_Ce3_vec_L5_J6_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
