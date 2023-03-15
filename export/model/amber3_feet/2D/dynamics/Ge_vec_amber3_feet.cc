/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:23:53 GMT-08:00
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
  double t28;
  double t173;
  double t734;
  double t823;
  double t554;
  double t555;
  double t650;
  double t1040;
  double t1126;
  double t1137;
  double t1192;
  double t1390;
  double t1599;
  double t1615;
  double t1632;
  double t1678;
  double t1518;
  double t1560;
  double t1574;
  double t1736;
  double t1784;
  double t1785;
  double t1857;
  double t2240;
  double t2284;
  double t2315;
  double t2424;
  double t2446;
  double t2941;
  double t3215;
  double t2945;
  double t2946;
  double t3169;
  double t3216;
  double t3217;
  double t3232;
  double t3238;
  double t3396;
  double t3646;
  double t3719;
  double t3734;
  double t3752;
  double t3511;
  double t3515;
  double t3626;
  double t3835;
  double t3949;
  double t3962;
  double t3973;
  double t4136;
  double t4153;
  double t4155;
  double t4200;
  double t4277;
  double t1255;
  double t4754;
  double t1877;
  double t2264;
  double t2270;
  double t2276;
  double t2474;
  double t2480;
  double t2487;
  double t2521;
  double t2623;
  double t2749;
  double t2750;
  double t2766;
  double t2825;
  double t5326;
  double t5393;
  double t5395;
  double t5288;
  double t5408;
  double t5482;
  double t5484;
  double t5573;
  double t5577;
  double t5585;
  double t6079;
  double t6111;
  double t6124;
  double t5690;
  double t3239;
  double t6318;
  double t3979;
  double t4140;
  double t4145;
  double t4148;
  double t4308;
  double t4318;
  double t4344;
  double t4388;
  double t4389;
  double t4437;
  double t4459;
  double t4461;
  double t4480;
  double t6459;
  double t6467;
  double t6468;
  double t6434;
  double t6475;
  double t6516;
  double t6529;
  double t6770;
  double t6839;
  double t6937;
  double t7251;
  double t7303;
  double t7313;
  double t7077;
  t28 = Sin(var1[2]);
  t173 = Cos(var1[3]);
  t734 = Cos(var1[2]);
  t823 = Sin(var1[3]);
  t554 = -1.*t173;
  t555 = 1. + t554;
  t650 = 0.4999*t555*t28;
  t1040 = -0.4999*t734*t823;
  t1126 = -1.*t173*t28;
  t1137 = -1.*t734*t823;
  t1192 = t1126 + t1137;
  t1390 = Cos(var1[4]);
  t1599 = -1.*t734*t173;
  t1615 = t28*t823;
  t1632 = t1599 + t1615;
  t1678 = Sin(var1[4]);
  t1518 = -1.*t1390;
  t1560 = 1. + t1518;
  t1574 = -0.9063*t1560*t1192;
  t1736 = 0.9063*t1632*t1678;
  t1784 = t1390*t1192;
  t1785 = t1632*t1678;
  t1857 = t1784 + t1785;
  t2240 = Cos(var1[5]);
  t2284 = t1390*t1632;
  t2315 = -1.*t1192*t1678;
  t2424 = t2284 + t2315;
  t2446 = Sin(var1[5]);
  t2941 = Cos(var1[6]);
  t3215 = Sin(var1[6]);
  t2945 = -1.*t2941;
  t2946 = 1. + t2945;
  t3169 = 0.4999*t2946*t28;
  t3216 = -0.4999*t734*t3215;
  t3217 = -1.*t2941*t28;
  t3232 = -1.*t734*t3215;
  t3238 = t3217 + t3232;
  t3396 = Cos(var1[7]);
  t3646 = -1.*t734*t2941;
  t3719 = t28*t3215;
  t3734 = t3646 + t3719;
  t3752 = Sin(var1[7]);
  t3511 = -1.*t3396;
  t3515 = 1. + t3511;
  t3626 = -0.9063*t3515*t3238;
  t3835 = 0.9063*t3734*t3752;
  t3949 = t3396*t3238;
  t3962 = t3734*t3752;
  t3973 = t3949 + t3962;
  t4136 = Cos(var1[8]);
  t4153 = t3396*t3734;
  t4155 = -1.*t3238*t3752;
  t4200 = t4153 + t4155;
  t4277 = Sin(var1[8]);
  t1255 = -0.6493*t1192;
  t4754 = -0.4999*t173*t28;
  t1877 = -1.0567*t1857;
  t2264 = -1.*t2240;
  t2270 = 1. + t2264;
  t2276 = -1.3127*t2270*t1857;
  t2474 = 1.3127*t2424*t2446;
  t2480 = t2240*t1857;
  t2487 = t2424*t2446;
  t2521 = t2480 + t2487;
  t2623 = -1.3127*t2521;
  t2749 = t2240*t2424;
  t2750 = -1.*t1857*t2446;
  t2766 = t2749 + t2750;
  t2825 = 0.06*t2766;
  t5326 = t734*t173;
  t5393 = -1.*t28*t823;
  t5395 = t5326 + t5393;
  t5288 = 0.9063*t1390*t1192;
  t5408 = -0.9063*t5395*t1678;
  t5482 = -1.*t5395*t1678;
  t5484 = t1784 + t5482;
  t5573 = -1.*t1390*t5395;
  t5577 = t5573 + t2315;
  t5585 = t2240*t5484;
  t6079 = t1390*t5395;
  t6111 = t1192*t1678;
  t6124 = t6079 + t6111;
  t5690 = -1.*t5484*t2446;
  t3239 = -0.6493*t3238;
  t6318 = -0.4999*t2941*t28;
  t3979 = -1.0567*t3973;
  t4140 = -1.*t4136;
  t4145 = 1. + t4140;
  t4148 = -1.3127*t4145*t3973;
  t4308 = 1.3127*t4200*t4277;
  t4318 = t4136*t3973;
  t4344 = t4200*t4277;
  t4388 = t4318 + t4344;
  t4389 = -1.3127*t4388;
  t4437 = t4136*t4200;
  t4459 = -1.*t3973*t4277;
  t4461 = t4437 + t4459;
  t4480 = 0.06*t4461;
  t6459 = t734*t2941;
  t6467 = -1.*t28*t3215;
  t6468 = t6459 + t6467;
  t6434 = 0.9063*t3396*t3238;
  t6475 = -0.9063*t6468*t3752;
  t6516 = -1.*t6468*t3752;
  t6529 = t3949 + t6516;
  t6770 = -1.*t3396*t6468;
  t6839 = t6770 + t4155;
  t6937 = t4136*t6529;
  t7251 = t3396*t6468;
  t7303 = t3238*t3752;
  t7313 = t7251 + t7303;
  t7077 = -1.*t6529*t4277;
  p_output1[0]=0;
  p_output1[1]=-287.60677434;
  p_output1[2]=-36.3549771*t28 - 33.610041*(t3169 + t3216 + t3239) - 35.216919000000004*(t3169 + t3216 + t3626 + t3835 + t3979) - 11.21142717*(t3169 + t3216 + t3626 + t3835 + t4148 + t4308 + t4389 + t4480) - 33.610041*(t1040 + t1255 + t650) - 35.216919000000004*(t1040 + t1574 + t1736 + t1877 + t650) - 11.21142717*(t1040 + t1574 + t1736 + t2276 + t2474 + t2623 + t2825 + t650);
  p_output1[3]=-33.610041*(t1040 + t1255 + t4754) - 35.216919000000004*(t1040 + t1574 + t1736 + t1877 + t4754) - 11.21142717*(t1040 + t1574 + t1736 + t2276 + t2474 + t2623 + t2825 + t4754);
  p_output1[4]=-35.216919000000004*(t5288 + t5408 - 1.0567*t5484) - 11.21142717*(t5288 + t5408 - 1.3127*t2270*t5484 + 1.3127*t2446*t5577 - 1.3127*(t2446*t5577 + t5585) + 0.06*(t2240*t5577 + t5690));
  p_output1[5]=-11.21142717*(1.3127*t2240*t5484 - 1.3127*t2446*t6124 + 0.06*(t5690 - 1.*t2240*t6124) - 1.3127*(t5585 - 1.*t2446*t6124));
  p_output1[6]=-33.610041*(t3216 + t3239 + t6318) - 35.216919000000004*(t3216 + t3626 + t3835 + t3979 + t6318) - 11.21142717*(t3216 + t3626 + t3835 + t4148 + t4308 + t4389 + t4480 + t6318);
  p_output1[7]=-35.216919000000004*(t6434 + t6475 - 1.0567*t6529) - 11.21142717*(t6434 + t6475 - 1.3127*t4145*t6529 + 1.3127*t4277*t6839 - 1.3127*(t4277*t6839 + t6937) + 0.06*(t4136*t6839 + t7077));
  p_output1[8]=-11.21142717*(1.3127*t4136*t6529 - 1.3127*t4277*t7313 + 0.06*(t7077 - 1.*t4136*t7313) - 1.3127*(t6937 - 1.*t4277*t7313));
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

#include "Ge_vec_amber3_feet.hh"

namespace SymFunction
{

void Ge_vec_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
