/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:31 GMT-08:00
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
  double t321;
  double t2092;
  double t2171;
  double t2240;
  double t1885;
  double t2010;
  double t2110;
  double t2244;
  double t2334;
  double t2337;
  double t2344;
  double t2350;
  double t2354;
  double t2391;
  double t2404;
  double t2409;
  double t2416;
  double t3412;
  double t3413;
  double t3414;
  double t3423;
  double t3436;
  double t3507;
  double t3442;
  double t3523;
  double t4148;
  double t2441;
  double t2498;
  double t2514;
  double t2580;
  double t2673;
  double t2720;
  double t2752;
  double t2869;
  double t2898;
  double t2935;
  double t2960;
  double t3109;
  double t3161;
  double t3201;
  double t3260;
  double t3296;
  double t3365;
  double t3378;
  double t4165;
  double t3540;
  double t4438;
  double t3549;
  double t3573;
  double t3602;
  double t3611;
  double t3638;
  double t3708;
  double t3739;
  double t3784;
  double t3814;
  double t3827;
  double t3941;
  double t3958;
  double t3985;
  double t4013;
  double t4031;
  double t4075;
  double t4086;
  double t4445;
  t321 = Cos(var1[6]);
  t2092 = Sin(var1[2]);
  t2171 = Cos(var1[2]);
  t2240 = Sin(var1[6]);
  t1885 = -1.*t321;
  t2010 = 1. + t1885;
  t2110 = -0.4999*t2010*t2092;
  t2244 = 0.4999*t2171*t2240;
  t2334 = t321*t2092;
  t2337 = t2171*t2240;
  t2344 = t2334 + t2337;
  t2350 = -0.4999*t2344;
  t2354 = t2171*t321;
  t2391 = -1.*t2092*t2240;
  t2404 = t2354 + t2391;
  t2409 = 0.013378*t2404;
  t2416 = var1[0] + t2110 + t2244 + t2350 + t2409;
  t3412 = -0.4999*t2171*t2010;
  t3413 = -0.4999*t2092*t2240;
  t3414 = -1.*t321*t2092;
  t3423 = -1.*t2171*t2240;
  t3436 = t3414 + t3423;
  t3507 = -0.4999*t2404;
  t3442 = 0.013378*t3436;
  t3523 = var1[1] + t3412 + t3413 + t3442 + t3507;
  t4148 = -0.9063*t2344;
  t2441 = 0.014856*t2404;
  t2498 = 0.014724*t2404;
  t2514 = 0.012997*t2404;
  t2580 = 0.009861*t2404;
  t2673 = 0.005656*t2404;
  t2720 = 0.000839*t2404;
  t2752 = -0.00407*t2404;
  t2869 = -0.008537*t2404;
  t2898 = -0.012079*t2404;
  t2935 = -0.014312*t2404;
  t2960 = -0.014995*t2404;
  t3109 = -0.014052*t2404;
  t3161 = -0.011587*t2404;
  t3201 = -0.007866*t2404;
  t3260 = -0.003292*t2404;
  t3296 = 0.001638*t2404;
  t3365 = 0.00639*t2404;
  t3378 = 0.010451*t2404;
  t4165 = var1[0] + t2110 + t2244 + t4148 + t2409;
  t3540 = 0.014856*t3436;
  t4438 = -0.9063*t2404;
  t3549 = 0.014724*t3436;
  t3573 = 0.012997*t3436;
  t3602 = 0.009861*t3436;
  t3611 = 0.005656*t3436;
  t3638 = 0.000839*t3436;
  t3708 = -0.00407*t3436;
  t3739 = -0.008537*t3436;
  t3784 = -0.012079*t3436;
  t3814 = -0.014312*t3436;
  t3827 = -0.014995*t3436;
  t3941 = -0.014052*t3436;
  t3958 = -0.011587*t3436;
  t3985 = -0.007866*t3436;
  t4013 = -0.003292*t3436;
  t4031 = 0.001638*t3436;
  t4075 = 0.00639*t3436;
  t4086 = 0.010451*t3436;
  t4445 = var1[1] + t3412 + t3413 + t3442 + t4438;
  p_output1[0]=t2416;
  p_output1[1]=t2110 + t2244 + t2350 + t2441 + var1[0];
  p_output1[2]=t2110 + t2244 + t2350 + t2498 + var1[0];
  p_output1[3]=t2110 + t2244 + t2350 + t2514 + var1[0];
  p_output1[4]=t2110 + t2244 + t2350 + t2580 + var1[0];
  p_output1[5]=t2110 + t2244 + t2350 + t2673 + var1[0];
  p_output1[6]=t2110 + t2244 + t2350 + t2720 + var1[0];
  p_output1[7]=t2110 + t2244 + t2350 + t2752 + var1[0];
  p_output1[8]=t2110 + t2244 + t2350 + t2869 + var1[0];
  p_output1[9]=t2110 + t2244 + t2350 + t2898 + var1[0];
  p_output1[10]=t2110 + t2244 + t2350 + t2935 + var1[0];
  p_output1[11]=t2110 + t2244 + t2350 + t2960 + var1[0];
  p_output1[12]=t2110 + t2244 + t2350 + t3109 + var1[0];
  p_output1[13]=t2110 + t2244 + t2350 + t3161 + var1[0];
  p_output1[14]=t2110 + t2244 + t2350 + t3201 + var1[0];
  p_output1[15]=t2110 + t2244 + t2350 + t3260 + var1[0];
  p_output1[16]=t2110 + t2244 + t2350 + t3296 + var1[0];
  p_output1[17]=t2110 + t2244 + t2350 + t3365 + var1[0];
  p_output1[18]=t2110 + t2244 + t2350 + t3378 + var1[0];
  p_output1[19]=t2416;
  p_output1[20]=0.006784;
  p_output1[21]=0.002073;
  p_output1[22]=-0.002864;
  p_output1[23]=-0.007489;
  p_output1[24]=-0.011303;
  p_output1[25]=-0.013893;
  p_output1[26]=-0.014977;
  p_output1[27]=-0.014437;
  p_output1[28]=-0.012334;
  p_output1[29]=-0.008894;
  p_output1[30]=-0.00449;
  p_output1[31]=0.000401;
  p_output1[32]=0.005248;
  p_output1[33]=0.009526;
  p_output1[34]=0.012772;
  p_output1[35]=0.014634;
  p_output1[36]=0.01491;
  p_output1[37]=0.013571;
  p_output1[38]=0.01076;
  p_output1[39]=0.006784;
  p_output1[40]=t3523;
  p_output1[41]=t3412 + t3413 + t3507 + t3540 + var1[1];
  p_output1[42]=t3412 + t3413 + t3507 + t3549 + var1[1];
  p_output1[43]=t3412 + t3413 + t3507 + t3573 + var1[1];
  p_output1[44]=t3412 + t3413 + t3507 + t3602 + var1[1];
  p_output1[45]=t3412 + t3413 + t3507 + t3611 + var1[1];
  p_output1[46]=t3412 + t3413 + t3507 + t3638 + var1[1];
  p_output1[47]=t3412 + t3413 + t3507 + t3708 + var1[1];
  p_output1[48]=t3412 + t3413 + t3507 + t3739 + var1[1];
  p_output1[49]=t3412 + t3413 + t3507 + t3784 + var1[1];
  p_output1[50]=t3412 + t3413 + t3507 + t3814 + var1[1];
  p_output1[51]=t3412 + t3413 + t3507 + t3827 + var1[1];
  p_output1[52]=t3412 + t3413 + t3507 + t3941 + var1[1];
  p_output1[53]=t3412 + t3413 + t3507 + t3958 + var1[1];
  p_output1[54]=t3412 + t3413 + t3507 + t3985 + var1[1];
  p_output1[55]=t3412 + t3413 + t3507 + t4013 + var1[1];
  p_output1[56]=t3412 + t3413 + t3507 + t4031 + var1[1];
  p_output1[57]=t3412 + t3413 + t3507 + t4075 + var1[1];
  p_output1[58]=t3412 + t3413 + t3507 + t4086 + var1[1];
  p_output1[59]=t3523;
  p_output1[60]=t4165;
  p_output1[61]=t2110 + t2244 + t2441 + t4148 + var1[0];
  p_output1[62]=t2110 + t2244 + t2498 + t4148 + var1[0];
  p_output1[63]=t2110 + t2244 + t2514 + t4148 + var1[0];
  p_output1[64]=t2110 + t2244 + t2580 + t4148 + var1[0];
  p_output1[65]=t2110 + t2244 + t2673 + t4148 + var1[0];
  p_output1[66]=t2110 + t2244 + t2720 + t4148 + var1[0];
  p_output1[67]=t2110 + t2244 + t2752 + t4148 + var1[0];
  p_output1[68]=t2110 + t2244 + t2869 + t4148 + var1[0];
  p_output1[69]=t2110 + t2244 + t2898 + t4148 + var1[0];
  p_output1[70]=t2110 + t2244 + t2935 + t4148 + var1[0];
  p_output1[71]=t2110 + t2244 + t2960 + t4148 + var1[0];
  p_output1[72]=t2110 + t2244 + t3109 + t4148 + var1[0];
  p_output1[73]=t2110 + t2244 + t3161 + t4148 + var1[0];
  p_output1[74]=t2110 + t2244 + t3201 + t4148 + var1[0];
  p_output1[75]=t2110 + t2244 + t3260 + t4148 + var1[0];
  p_output1[76]=t2110 + t2244 + t3296 + t4148 + var1[0];
  p_output1[77]=t2110 + t2244 + t3365 + t4148 + var1[0];
  p_output1[78]=t2110 + t2244 + t3378 + t4148 + var1[0];
  p_output1[79]=t4165;
  p_output1[80]=0.006784;
  p_output1[81]=0.002073;
  p_output1[82]=-0.002864;
  p_output1[83]=-0.007489;
  p_output1[84]=-0.011303;
  p_output1[85]=-0.013893;
  p_output1[86]=-0.014977;
  p_output1[87]=-0.014437;
  p_output1[88]=-0.012334;
  p_output1[89]=-0.008894;
  p_output1[90]=-0.00449;
  p_output1[91]=0.000401;
  p_output1[92]=0.005248;
  p_output1[93]=0.009526;
  p_output1[94]=0.012772;
  p_output1[95]=0.014634;
  p_output1[96]=0.01491;
  p_output1[97]=0.013571;
  p_output1[98]=0.01076;
  p_output1[99]=0.006784;
  p_output1[100]=t4445;
  p_output1[101]=t3412 + t3413 + t3540 + t4438 + var1[1];
  p_output1[102]=t3412 + t3413 + t3549 + t4438 + var1[1];
  p_output1[103]=t3412 + t3413 + t3573 + t4438 + var1[1];
  p_output1[104]=t3412 + t3413 + t3602 + t4438 + var1[1];
  p_output1[105]=t3412 + t3413 + t3611 + t4438 + var1[1];
  p_output1[106]=t3412 + t3413 + t3638 + t4438 + var1[1];
  p_output1[107]=t3412 + t3413 + t3708 + t4438 + var1[1];
  p_output1[108]=t3412 + t3413 + t3739 + t4438 + var1[1];
  p_output1[109]=t3412 + t3413 + t3784 + t4438 + var1[1];
  p_output1[110]=t3412 + t3413 + t3814 + t4438 + var1[1];
  p_output1[111]=t3412 + t3413 + t3827 + t4438 + var1[1];
  p_output1[112]=t3412 + t3413 + t3941 + t4438 + var1[1];
  p_output1[113]=t3412 + t3413 + t3958 + t4438 + var1[1];
  p_output1[114]=t3412 + t3413 + t3985 + t4438 + var1[1];
  p_output1[115]=t3412 + t3413 + t4013 + t4438 + var1[1];
  p_output1[116]=t3412 + t3413 + t4031 + t4438 + var1[1];
  p_output1[117]=t3412 + t3413 + t4075 + t4438 + var1[1];
  p_output1[118]=t3412 + t3413 + t4086 + t4438 + var1[1];
  p_output1[119]=t4445;
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

#include "Link_RightThigh_to_RightKnee_bar.hh"

namespace SymFunction
{

void Link_RightThigh_to_RightKnee_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
