/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:32:06 GMT-08:00
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
  double t489;
  double t722;
  double t458;
  double t837;
  double t1833;
  double t1834;
  double t1860;
  double t1773;
  double t1812;
  double t1819;
  double t552;
  double t1459;
  double t1731;
  double t1870;
  double t1888;
  double t1912;
  double t2634;
  double t2647;
  double t2656;
  double t2670;
  double t2675;
  double t3064;
  double t1750;
  double t1866;
  double t1920;
  double t2057;
  double t2091;
  double t2105;
  double t2210;
  double t2223;
  double t2256;
  double t2322;
  double t2375;
  double t2389;
  double t2483;
  double t2527;
  double t2629;
  double t2752;
  double t2806;
  double t2939;
  double t2976;
  double t3027;
  double t3037;
  double t3063;
  double t3122;
  double t3236;
  double t3306;
  double t3315;
  double t3316;
  double t3351;
  double t3379;
  double t3439;
  double t4206;
  double t4209;
  double t4241;
  double t4266;
  double t4273;
  double t4276;
  double t4301;
  double t4308;
  double t4350;
  double t4356;
  double t4408;
  double t4428;
  double t4438;
  double t4540;
  double t4581;
  double t4604;
  double t4607;
  double t4609;
  double t4613;
  double t3580;
  double t3675;
  double t3729;
  double t4619;
  double t3750;
  double t4667;
  double t4726;
  double t4322;
  double t2943;
  double t3444;
  double t4960;
  double t4990;
  double t3503;
  double t4640;
  double t4729;
  double t4817;
  double t4834;
  double t4850;
  double t4881;
  double t3532;
  double t3576;
  double t3739;
  double t3758;
  double t3786;
  double t4456;
  double t5063;
  double t5353;
  double t5361;
  double t5368;
  double t5542;
  double t5623;
  t489 = Cos(var1[3]);
  t722 = Sin(var1[2]);
  t458 = Cos(var1[2]);
  t837 = Sin(var1[3]);
  t1833 = t458*t489;
  t1834 = -1.*t722*t837;
  t1860 = t1833 + t1834;
  t1773 = -1.*t489*t722;
  t1812 = -1.*t458*t837;
  t1819 = t1773 + t1812;
  t552 = -1.*t458*t489;
  t1459 = t722*t837;
  t1731 = t552 + t1459;
  t1870 = t489*t722;
  t1888 = t458*t837;
  t1912 = t1870 + t1888;
  t2634 = -1.*t489;
  t2647 = 1. + t2634;
  t2656 = -0.4999*t2647;
  t2670 = -0.6493*t489;
  t2675 = t2656 + t2670;
  t3064 = t2675*t489;
  t1750 = 0.25592966999999994*var2[3]*t1731;
  t1866 = 10.2783*t1819*t1860;
  t1920 = 3.4261*t1912*t1860;
  t2057 = 10.2783*t1819*t1731;
  t2091 = 3.4261*t1912*t1731;
  t2105 = t1866 + t1920 + t2057 + t2091;
  t2210 = -0.5*var2[1]*t2105;
  t2223 = Power(t1819,2);
  t2256 = 6.8522*t2223;
  t2322 = 6.8522*t1819*t1912;
  t2375 = Power(t1860,2);
  t2389 = 6.8522*t2375;
  t2483 = 6.8522*t1860*t1731;
  t2527 = t2256 + t2322 + t2389 + t2483;
  t2629 = -0.5*var2[0]*t2527;
  t2752 = -1.*t2675*t837;
  t2806 = -0.14939999999999998*t489*t837;
  t2939 = t2752 + t2806;
  t2976 = t2675*t837;
  t3027 = 0.14939999999999998*t489*t837;
  t3037 = t2976 + t3027;
  t3063 = 3.4261*t1819*t3037;
  t3122 = Power(t489,2);
  t3236 = 0.14939999999999998*t3122;
  t3306 = t3064 + t3236;
  t3315 = 3.4261*t3306*t1860;
  t3316 = Power(t837,2);
  t3351 = -0.14939999999999998*t3316;
  t3379 = t3064 + t3351;
  t3439 = 3.4261*t1731*t3379;
  t4206 = 6.8522*t1819*t1860;
  t4209 = 6.8522*t1912*t1860;
  t4241 = t4206 + t4209;
  t4266 = 3.4261*t2223;
  t4273 = 3.4261*t1819*t1912;
  t4276 = 3.4261*t2375;
  t4301 = 3.4261*t1860*t1731;
  t4308 = t4266 + t4273 + t4276 + t4301;
  t4350 = 3.4261*t3306*t1912;
  t4356 = 3.4261*t2939*t1860;
  t4408 = 3.4261*t3037*t1860;
  t4428 = 3.4261*t1819*t3379;
  t4438 = t4350 + t4356 + t4408 + t4428;
  t4540 = 0.25592966999999994*var2[3]*t1912;
  t4581 = -0.5*var2[0]*t2105;
  t4604 = Power(t1731,2);
  t4607 = 6.8522*t4604;
  t4609 = t2256 + t2322 + t2483 + t4607;
  t4613 = -0.5*var2[1]*t4609;
  t3580 = -1.*t2675*t489;
  t3675 = -0.14939999999999998*t3122;
  t3729 = 0. + t3580 + t3675;
  t4619 = 3.4261*t3306*t1819;
  t3750 = 0. + t3064 + t3236;
  t4667 = 3.4261*t3037*t1731;
  t4726 = 3.4261*t1912*t3379;
  t4322 = -0.5*var2[3]*t4308;
  t2943 = 3.4261*t1819*t2939;
  t3444 = t2943 + t3063 + t3315 + t3439;
  t4960 = 6.8522*t1819*t1731;
  t4990 = t4206 + t4960;
  t3503 = -0.5*var2[2]*t3444;
  t4640 = 3.4261*t2939*t1731;
  t4729 = t4619 + t4640 + t4667 + t4726;
  t4817 = 3.4261*t3729*t1819;
  t4834 = 3.4261*t3750*t1819;
  t4850 = 6.8522*t2939*t1731;
  t4881 = t4817 + t4619 + t4834 + t4356 + t4850 + t4667 + t4726;
  t3532 = 6.8522*t1819*t2939;
  t3576 = 3.4261*t1912*t2939;
  t3739 = 3.4261*t3729*t1860;
  t3758 = 3.4261*t3750*t1860;
  t3786 = t3532 + t3576 + t3063 + t3739 + t3315 + t3758 + t3439;
  t4456 = -0.5*var2[3]*t4438;
  t5063 = -0.5*var2[3]*t3444;
  t5353 = 6.8522*t3306*t3037;
  t5361 = 6.8522*t2939*t3379;
  t5368 = t5353 + t5361;
  t5542 = 0.25592966999999994*var2[1]*t1912;
  t5623 = 0.25592966999999994*var2[0]*t1731;
  p_output1[0]=(t1750 + t2210 + t2629 + t3503)*var2[3];
  p_output1[1]=(t1750 + t2210 + t2629 - 0.5*t3786*var2[2])*var2[3];
  p_output1[2]=-0.5*t4241*var2[3];
  p_output1[3]=t4322;
  p_output1[4]=t4456;
  p_output1[5]=-0.5*t4241*var2[0] - 0.5*t4308*var2[1] - 0.5*t4438*var2[2] + 0.5118593399999999*t1819*var2[3];
  p_output1[6]=(t4540 + t4581 + t4613 - 0.5*t4729*var2[2])*var2[3];
  p_output1[7]=(t4540 + t4581 + t4613 - 0.5*t4881*var2[2])*var2[3];
  p_output1[8]=t4322;
  p_output1[9]=-0.5*t4990*var2[3];
  p_output1[10]=t5063;
  p_output1[11]=t3503 - 0.5*t4308*var2[0] - 0.5*t4990*var2[1] + 0.5118593399999999*t1731*var2[3];
  p_output1[12]=(-0.5*t3444*var2[0] - 0.5*t4729*var2[1])*var2[3];
  p_output1[13]=var2[3]*(-0.5*t3786*var2[0] - 0.5*t4881*var2[1] - 0.5*(6.8522*Power(t2939,2) + 6.8522*t2939*t3037 + 6.8522*t3379*t3729 + 6.8522*t3306*t3750)*var2[2] + 0.25592966999999994*t3729*var2[3]);
  p_output1[14]=t4456;
  p_output1[15]=t5063;
  p_output1[16]=-0.5*t5368*var2[3];
  p_output1[17]=-0.5*t4438*var2[0] - 0.5*t3444*var2[1] - 0.5*t5368*var2[2] + 0.5118593399999999*t2939*var2[3];
  p_output1[18]=(t5542 + t5623)*var2[3];
  p_output1[19]=(t5542 + t5623 + 0.25592966999999994*t3729*var2[2])*var2[3];
  p_output1[20]=0.25592966999999994*t1819*var2[3];
  p_output1[21]=t1750;
  p_output1[22]=0.25592966999999994*t2939*var2[3];
  p_output1[23]=0.25592966999999994*t1819*var2[0] + 0.25592966999999994*t1731*var2[1] + 0.25592966999999994*t2939*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 24, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec_L2_J4_amber3_PF.hh"

namespace RightSS
{

void J_Ce2_vec_L2_J4_amber3_PF_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
