/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:25 GMT-08:00
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
  double t1196;
  double t740;
  double t941;
  double t1427;
  double t1651;
  double t1078;
  double t1511;
  double t1537;
  double t297;
  double t2279;
  double t2310;
  double t2362;
  double t2382;
  double t2435;
  double t2667;
  double t2864;
  double t2920;
  double t2957;
  double t2996;
  double t3098;
  double t3444;
  double t3480;
  double t1636;
  double t1793;
  double t1813;
  double t1924;
  double t1939;
  double t1943;
  double t3508;
  double t3523;
  double t3527;
  double t3533;
  double t3572;
  double t3590;
  double t4040;
  double t4052;
  double t4416;
  double t4486;
  double t4522;
  double t4549;
  double t4570;
  double t4591;
  double t4621;
  double t4628;
  double t4971;
  double t5026;
  double t5281;
  double t5300;
  double t5323;
  double t5412;
  double t5413;
  double t4063;
  double t4065;
  double t4070;
  double t3488;
  double t3489;
  double t3504;
  double t3938;
  double t3982;
  double t2217;
  double t2488;
  double t2523;
  double t2643;
  double t3331;
  double t3347;
  double t3348;
  double t3401;
  double t3596;
  double t3597;
  double t3598;
  double t4009;
  double t4057;
  double t4187;
  double t4302;
  double t4381;
  double t4569;
  double t5188;
  double t5242;
  double t5267;
  double t5405;
  double t5411;
  double t5433;
  double t5477;
  double t5509;
  double t5511;
  double t5513;
  double t5521;
  double t5526;
  double t5527;
  double t5534;
  double t5550;
  double t6041;
  double t6140;
  double t6160;
  double t6185;
  double t6240;
  double t5255;
  double t5501;
  double t5514;
  double t5564;
  double t5569;
  double t5817;
  double t5826;
  double t5857;
  double t5907;
  double t5908;
  double t3142;
  double t3443;
  double t3594;
  double t3599;
  double t3603;
  double t6476;
  double t6566;
  double t6574;
  double t6575;
  double t6576;
  t1196 = Cos(var1[3]);
  t740 = Cos(var1[4]);
  t941 = Sin(var1[3]);
  t1427 = Sin(var1[4]);
  t1651 = Sin(var1[2]);
  t1078 = -1.*t740*t941;
  t1511 = -1.*t1196*t1427;
  t1537 = t1078 + t1511;
  t297 = Cos(var1[2]);
  t2279 = -1.*t740;
  t2310 = 1. + t2279;
  t2362 = -0.9063*t2310;
  t2382 = -1.0567*t740;
  t2435 = t2362 + t2382;
  t2667 = t1651*t1537;
  t2864 = t1196*t740;
  t2920 = -1.*t941*t1427;
  t2957 = t2864 + t2920;
  t2996 = t297*t2957;
  t3098 = t2667 + t2996;
  t3444 = 0.4999*t740;
  t3480 = t2435*t740;
  t1636 = t297*t1537;
  t1793 = -1.*t1196*t740;
  t1813 = t941*t1427;
  t1924 = t1793 + t1813;
  t1939 = t1651*t1924;
  t1943 = t1636 + t1939;
  t3508 = t740*t941;
  t3523 = t1196*t1427;
  t3527 = t3508 + t3523;
  t3533 = t297*t3527;
  t3572 = t1651*t2957;
  t3590 = t3533 + t3572;
  t4040 = -1.*t1651*t2957;
  t4052 = t1636 + t4040;
  t4416 = 0.4999*t941;
  t4486 = t2435*t941;
  t4522 = -0.15039999999999998*t1196*t1427;
  t4549 = t4416 + t4486 + t4522;
  t4570 = -1.*t1196;
  t4591 = 1. + t4570;
  t4621 = -0.4999*t4591;
  t4628 = t1196*t2435;
  t4971 = 0.15039999999999998*t941*t1427;
  t5026 = t4621 + t4628 + t4971;
  t5281 = 0.15039999999999998*t740*t941;
  t5300 = 0.15039999999999998*t1196*t1427;
  t5323 = t5281 + t5300;
  t5412 = -0.15039999999999998*t1196*t740;
  t5413 = t5412 + t4971;
  t4063 = -1.*t1651*t1537;
  t4065 = t297*t1924;
  t4070 = t4063 + t4065;
  t3488 = Power(t740,2);
  t3489 = 0.15039999999999998*t3488;
  t3504 = t3444 + t3480 + t3489;
  t3938 = -1.*t1651*t3527;
  t3982 = t3938 + t2996;
  t2217 = -0.4999*t1427;
  t2488 = -1.*t2435*t1427;
  t2523 = -0.15039999999999998*t740*t1427;
  t2643 = t2217 + t2488 + t2523;
  t3331 = 0.4999*t1427;
  t3347 = t2435*t1427;
  t3348 = 0.15039999999999998*t740*t1427;
  t3401 = t3331 + t3347 + t3348;
  t3596 = Power(t1427,2);
  t3597 = -0.15039999999999998*t3596;
  t3598 = t3444 + t3480 + t3597;
  t4009 = 3.5899*t3098*t3982;
  t4057 = 3.5899*t4052*t3590;
  t4187 = 3.5899*t3098*t4070;
  t4302 = 3.5899*t4052*t1943;
  t4381 = t4009 + t4057 + t4187 + t4302;
  t4569 = -1.*t4549*t2957;
  t5188 = -1.*t1537*t5026;
  t5242 = t4569 + t5188;
  t5267 = t4549*t2957;
  t5405 = t5323*t2957;
  t5411 = t1537*t5026;
  t5433 = t3527*t5413;
  t5477 = t5267 + t5405 + t5411 + t5433;
  t5509 = t4549*t3527;
  t5511 = t2957*t5026;
  t5513 = t5509 + t5511;
  t5521 = -1.*t1537*t4549;
  t5526 = -1.*t1537*t5323;
  t5527 = -1.*t2957*t5413;
  t5534 = -1.*t5026*t1924;
  t5550 = t5521 + t5526 + t5527 + t5534;
  t6041 = 3.5899*t4052*t5242;
  t6140 = 3.5899*t4052*t5477;
  t6160 = 3.5899*t5513*t4070;
  t6185 = 3.5899*t3982*t5550;
  t6240 = t6041 + t6140 + t6160 + t6185;
  t5255 = 3.5899*t3098*t5242;
  t5501 = 3.5899*t3098*t5477;
  t5514 = 3.5899*t5513*t1943;
  t5564 = 3.5899*t3590*t5550;
  t5569 = t5255 + t5501 + t5514 + t5564;
  t5817 = 3.5899*t3504*t3982;
  t5826 = 3.5899*t2643*t4052;
  t5857 = 3.5899*t3401*t4052;
  t5907 = 3.5899*t3598*t4070;
  t5908 = t5817 + t5826 + t5857 + t5907;
  t3142 = 3.5899*t2643*t3098;
  t3443 = 3.5899*t3401*t3098;
  t3594 = 3.5899*t3504*t3590;
  t3599 = 3.5899*t3598*t1943;
  t3603 = t3142 + t3443 + t3594 + t3599;
  t6476 = 3.5899*t3504*t5242;
  t6566 = 3.5899*t2643*t5513;
  t6574 = 3.5899*t3598*t5477;
  t6575 = 3.5899*t3401*t5550;
  t6576 = t6476 + t6566 + t6574 + t6575;
  p_output1[0]=var2[4]*(-0.5*(7.1798*t1943*t3098 + 7.1798*t3098*t3590)*var2[0] - 0.5*t4381*var2[1] - 0.5*t5569*var2[2] - 0.5*t3603*var2[3] + 0.26996047999999995*t1943*var2[4]);
  p_output1[1]=var2[4]*(-0.5*t4381*var2[0] - 0.5*(7.1798*t3982*t4052 + 7.1798*t4052*t4070)*var2[1] - 0.5*t6240*var2[2] - 0.5*t5908*var2[3] + 0.26996047999999995*t4070*var2[4]);
  p_output1[2]=var2[4]*(-0.5*t5569*var2[0] - 0.5*t6240*var2[1] - 0.5*(7.1798*t5477*t5513 + 7.1798*t5242*t5550)*var2[2] - 0.5*t6576*var2[3] + 0.26996047999999995*t5477*var2[4]);
  p_output1[3]=var2[4]*(-0.5*t3603*var2[0] - 0.5*t5908*var2[1] - 0.5*t6576*var2[2] - 0.5*(7.1798*t3401*t3504 + 7.1798*t2643*t3598)*var2[3] + 0.26996047999999995*t2643*var2[4]);
  p_output1[4]=(0.26996047999999995*t1943*var2[0] + 0.26996047999999995*t4070*var2[1] + 0.26996047999999995*t5477*var2[2] + 0.26996047999999995*t2643*var2[3])*var2[4];
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
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

#include "Ce2_vec_L3_J5_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L3_J5_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
