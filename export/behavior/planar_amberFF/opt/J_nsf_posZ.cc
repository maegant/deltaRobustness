/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:34 GMT-08:00
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
  double t836;
  double t173;
  double t1289;
  double t1377;
  double t1493;
  double t1591;
  double t1614;
  double t1615;
  double t1757;
  double t1785;
  double t1818;
  double t1933;
  double t2038;
  double t2166;
  double t2183;
  double t2230;
  double t2245;
  double t2273;
  double t2275;
  double t2284;
  double t913;
  double t2618;
  double t2713;
  double t2822;
  double t2858;
  double t2864;
  double t3063;
  double t3083;
  double t3140;
  double t3178;
  double t3242;
  double t3300;
  double t3319;
  double t3364;
  double t3410;
  double t3427;
  double t3438;
  double t3440;
  double t1380;
  double t1555;
  double t1578;
  double t1701;
  double t1948;
  double t2049;
  double t2143;
  double t2242;
  double t2286;
  double t2326;
  double t2341;
  double t2357;
  double t2390;
  double t2418;
  double t2420;
  double t2485;
  double t2579;
  double t3649;
  double t3653;
  double t3678;
  double t3681;
  double t3706;
  double t3741;
  double t3744;
  double t3805;
  double t3950;
  double t3968;
  double t3971;
  double t3876;
  double t2641;
  double t2721;
  double t2770;
  double t2892;
  double t3192;
  double t3249;
  double t3267;
  double t3390;
  double t3445;
  double t3447;
  double t3451;
  double t3453;
  double t3456;
  double t3457;
  double t3473;
  double t3488;
  double t3511;
  double t4192;
  double t4283;
  double t4287;
  double t4322;
  double t4343;
  double t4416;
  double t4435;
  double t4517;
  double t4758;
  double t4774;
  double t4777;
  double t4683;
  t836 = Sin(var1[2]);
  t173 = Cos(var1[3]);
  t1289 = Cos(var1[2]);
  t1377 = Sin(var1[3]);
  t1493 = Cos(var1[4]);
  t1591 = -1.*t173*t836;
  t1614 = -1.*t1289*t1377;
  t1615 = t1591 + t1614;
  t1757 = -1.*t1289*t173;
  t1785 = t836*t1377;
  t1818 = t1757 + t1785;
  t1933 = Sin(var1[4]);
  t2038 = Cos(var1[5]);
  t2166 = t1493*t1615;
  t2183 = t1818*t1933;
  t2230 = t2166 + t2183;
  t2245 = t1493*t1818;
  t2273 = -1.*t1615*t1933;
  t2275 = t2245 + t2273;
  t2284 = Sin(var1[5]);
  t913 = Cos(var1[6]);
  t2618 = Sin(var1[6]);
  t2713 = Cos(var1[7]);
  t2822 = -1.*t913*t836;
  t2858 = -1.*t1289*t2618;
  t2864 = t2822 + t2858;
  t3063 = -1.*t1289*t913;
  t3083 = t836*t2618;
  t3140 = t3063 + t3083;
  t3178 = Sin(var1[7]);
  t3242 = Cos(var1[8]);
  t3300 = t2713*t2864;
  t3319 = t3140*t3178;
  t3364 = t3300 + t3319;
  t3410 = t2713*t3140;
  t3427 = -1.*t2864*t3178;
  t3438 = t3410 + t3427;
  t3440 = Sin(var1[8]);
  t1380 = -0.4999*t1289*t1377;
  t1555 = -1.*t1493;
  t1578 = 1. + t1555;
  t1701 = -0.9063*t1578*t1615;
  t1948 = 0.9063*t1818*t1933;
  t2049 = -1.*t2038;
  t2143 = 1. + t2049;
  t2242 = -1.3127*t2143*t2230;
  t2286 = 1.3127*t2275*t2284;
  t2326 = t2038*t2230;
  t2341 = t2275*t2284;
  t2357 = t2326 + t2341;
  t2390 = -1.3127*t2357;
  t2418 = t2038*t2275;
  t2420 = -1.*t2230*t2284;
  t2485 = t2418 + t2420;
  t2579 = 0.06*t2485;
  t3649 = t1289*t173;
  t3653 = -1.*t836*t1377;
  t3678 = t3649 + t3653;
  t3681 = -1.*t3678*t1933;
  t3706 = t2166 + t3681;
  t3741 = -1.*t1493*t3678;
  t3744 = t3741 + t2273;
  t3805 = t2038*t3706;
  t3950 = t1493*t3678;
  t3968 = t1615*t1933;
  t3971 = t3950 + t3968;
  t3876 = -1.*t3706*t2284;
  t2641 = 0.4999*t1289*t2618;
  t2721 = -1.*t2713;
  t2770 = 1. + t2721;
  t2892 = 0.9063*t2770*t2864;
  t3192 = -0.9063*t3140*t3178;
  t3249 = -1.*t3242;
  t3267 = 1. + t3249;
  t3390 = 1.3127*t3267*t3364;
  t3445 = -1.3127*t3438*t3440;
  t3447 = t3242*t3364;
  t3451 = t3438*t3440;
  t3453 = t3447 + t3451;
  t3456 = 1.3127*t3453;
  t3457 = t3242*t3438;
  t3473 = -1.*t3364*t3440;
  t3488 = t3457 + t3473;
  t3511 = -0.06*t3488;
  t4192 = t1289*t913;
  t4283 = -1.*t836*t2618;
  t4287 = t4192 + t4283;
  t4322 = -1.*t4287*t3178;
  t4343 = t3300 + t4322;
  t4416 = -1.*t2713*t4287;
  t4435 = t4416 + t3427;
  t4517 = t3242*t4343;
  t4758 = t2713*t4287;
  t4774 = t2864*t3178;
  t4777 = t4758 + t4774;
  t4683 = -1.*t4343*t3440;
  p_output1[0]=t1380 + t1701 + t1948 + t2242 + t2286 + t2390 + t2579 + t2641 + t2892 + t3192 + t3390 + t3445 + t3456 + t3511 + 0.4999*(1. - 1.*t173)*t836 - 0.4999*t836*(1. - 1.*t913);
  p_output1[1]=t1380 + t1701 + t1948 + t2242 + t2286 + t2390 + t2579 - 0.4999*t173*t836;
  p_output1[2]=0.9063*t1493*t1615 - 0.9063*t1933*t3678 - 1.3127*t2143*t3706 + 1.3127*t2284*t3744 - 1.3127*(t2284*t3744 + t3805) + 0.06*(t2038*t3744 + t3876);
  p_output1[3]=1.3127*t2038*t3706 - 1.3127*t2284*t3971 + 0.06*(t3876 - 1.*t2038*t3971) - 1.3127*(t3805 - 1.*t2284*t3971);
  p_output1[4]=t2641 + t2892 + t3192 + t3390 + t3445 + t3456 + t3511 + 0.4999*t836*t913;
  p_output1[5]=-0.9063*t2713*t2864 + 0.9063*t3178*t4287 + 1.3127*t3267*t4343 - 1.3127*t3440*t4435 + 1.3127*(t3440*t4435 + t4517) - 0.06*(t3242*t4435 + t4683);
  p_output1[6]=-1.3127*t3242*t4343 + 1.3127*t3440*t4777 - 0.06*(t4683 - 1.*t3242*t4777) + 1.3127*(t4517 - 1.*t3440*t4777);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_nsf_posZ.hh"

namespace RightSS2
{

void J_nsf_posZ_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
