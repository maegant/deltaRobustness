/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:20:50 GMT-08:00
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
  double t350;
  double t247;
  double t337;
  double t522;
  double t1491;
  double t340;
  double t1228;
  double t1404;
  double t225;
  double t1498;
  double t1502;
  double t1513;
  double t3501;
  double t1479;
  double t2182;
  double t3026;
  double t224;
  double t3506;
  double t3538;
  double t3655;
  double t4669;
  double t4670;
  double t4916;
  double t4938;
  double t4983;
  double t4991;
  double t4464;
  double t4467;
  double t4511;
  double t4601;
  double t5116;
  double t5244;
  double t5448;
  double t5451;
  double t5452;
  double t5453;
  double t5468;
  double t5562;
  double t5612;
  double t5832;
  double t6122;
  double t7323;
  double t7330;
  double t7338;
  double t7284;
  double t7296;
  double t7306;
  double t7317;
  double t4037;
  double t4077;
  double t4402;
  double t5435;
  double t5457;
  double t5466;
  t350 = Cos(var1[7]);
  t247 = Cos(var1[8]);
  t337 = Sin(var1[7]);
  t522 = Sin(var1[8]);
  t1491 = Cos(var1[6]);
  t340 = -1.*t247*t337;
  t1228 = -1.*t350*t522;
  t1404 = t340 + t1228;
  t225 = Sin(var1[6]);
  t1498 = t350*t247;
  t1502 = -1.*t337*t522;
  t1513 = t1498 + t1502;
  t3501 = Sin(var1[2]);
  t1479 = t225*t1404;
  t2182 = t1491*t1513;
  t3026 = t1479 + t2182;
  t224 = Cos(var1[2]);
  t3506 = t1491*t1404;
  t3538 = -1.*t225*t1513;
  t3655 = t3506 + t3538;
  t4669 = -1.*t247;
  t4670 = 1. + t4669;
  t4916 = -1.3127*t4670;
  t4938 = -1.3127*t247;
  t4983 = -0.06*t522;
  t4991 = t4916 + t4938 + t4983;
  t4464 = -1.*t350;
  t4467 = 1. + t4464;
  t4511 = -0.9063*t4467;
  t4601 = -0.06*t247*t337;
  t5116 = t350*t4991;
  t5244 = t4511 + t4601 + t5116;
  t5448 = 0.06*t350*t247;
  t5451 = 0.9063*t337;
  t5452 = t337*t4991;
  t5453 = t5448 + t5451 + t5452;
  t5468 = t247*t337;
  t5562 = t350*t522;
  t5612 = t5468 + t5562;
  t5832 = -1.*t225*t5612;
  t6122 = t5832 + t2182;
  t7323 = t1491*t5612;
  t7330 = t225*t1513;
  t7338 = t7323 + t7330;
  t7284 = 0.4999*t225;
  t7296 = t225*t5244;
  t7306 = t1491*t5453;
  t7317 = t7284 + t7296 + t7306;
  t4037 = -1.*t1491;
  t4077 = 1. + t4037;
  t4402 = -0.4999*t4077;
  t5435 = t1491*t5244;
  t5457 = -1.*t225*t5453;
  t5466 = t4402 + t5435 + t5457;
  p_output1[0]=t224*t3026 + t3501*t3655;
  p_output1[1]=-1.*t3026*t3501 + t224*t3655;
  p_output1[2]=t5466*t6122 + t7317*t7338;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0.4999*t1513 + t1513*t5244 + t5453*t5612;
  p_output1[7]=0.9063*t247 + t247*t4991 + 0.06*t247*t522;
  p_output1[8]=0;
  p_output1[9]=t3501*t6122 + t224*t7338;
  p_output1[10]=t224*t6122 - 1.*t3501*t7338;
  p_output1[11]=-1.*t3655*t5466 - 1.*t3026*t7317;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-1.*t1404*t5244 - 1.*t1513*t5453 + 0.4999*t5612;
  p_output1[16]=-0.06*Power(t247,2) + 0.9063*t522 + t4991*t522;
  p_output1[17]=-0.06;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=1.;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=1.;
  p_output1[25]=1.;
  p_output1[26]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightSole_map_RightSS1.hh"

namespace SymFunction
{

void fRightSole_map_RightSS1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
