/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 14:14:29 GMT-08:00
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
  double t381;
  double t748;
  double t1132;
  double t2935;
  double t2950;
  double t2960;
  double t1741;
  double t3772;
  double t2060;
  double t2092;
  double t2171;
  double t2244;
  double t2337;
  double t2350;
  double t2391;
  double t2409;
  double t2441;
  double t2498;
  double t2514;
  double t2580;
  double t2673;
  double t2720;
  double t2752;
  double t2869;
  double t2898;
  double t3784;
  double t4144;
  double t3018;
  double t3143;
  double t3172;
  double t3252;
  double t3292;
  double t3299;
  double t3369;
  double t3401;
  double t3413;
  double t3423;
  double t3442;
  double t3523;
  double t3546;
  double t3555;
  double t3602;
  double t3636;
  double t3666;
  double t3729;
  double t4148;
  t381 = Cos(var1[2]);
  t748 = 0.014804*t381;
  t1132 = var1[0] + t748;
  t2935 = Sin(var1[2]);
  t2950 = -0.014804*t2935;
  t2960 = var1[1] + t2950;
  t1741 = 0.014787*t381;
  t3772 = -0.4999*t2935;
  t2060 = 0.013168*t381;
  t2092 = 0.010121*t381;
  t2171 = 0.005978*t381;
  t2244 = 0.001187*t381;
  t2337 = -0.003732*t381;
  t2350 = -0.008247*t381;
  t2391 = -0.011869*t381;
  t2409 = -0.014204*t381;
  t2441 = -0.015*t381;
  t2498 = -0.01417*t381;
  t2514 = -0.011805*t381;
  t2580 = -0.008161*t381;
  t2673 = -0.003632*t381;
  t2720 = 0.00129*t381;
  t2752 = 0.006072*t381;
  t2869 = 0.010197*t381;
  t2898 = 0.013217*t381;
  t3784 = var1[0] + t748 + t3772;
  t4144 = -0.4999*t381;
  t3018 = -0.014787*t2935;
  t3143 = -0.013168*t2935;
  t3172 = -0.010121*t2935;
  t3252 = -0.005978*t2935;
  t3292 = -0.001187*t2935;
  t3299 = 0.003732*t2935;
  t3369 = 0.008247*t2935;
  t3401 = 0.011869*t2935;
  t3413 = 0.014204*t2935;
  t3423 = 0.015*t2935;
  t3442 = 0.01417*t2935;
  t3523 = 0.011805*t2935;
  t3546 = 0.008161*t2935;
  t3555 = 0.003632*t2935;
  t3602 = -0.00129*t2935;
  t3636 = -0.006072*t2935;
  t3666 = -0.010197*t2935;
  t3729 = -0.013217*t2935;
  t4148 = var1[1] + t4144 + t2950;
  p_output1[0]=t1132;
  p_output1[1]=t1741 + var1[0];
  p_output1[2]=t2060 + var1[0];
  p_output1[3]=t2092 + var1[0];
  p_output1[4]=t2171 + var1[0];
  p_output1[5]=t2244 + var1[0];
  p_output1[6]=t2337 + var1[0];
  p_output1[7]=t2350 + var1[0];
  p_output1[8]=t2391 + var1[0];
  p_output1[9]=t2409 + var1[0];
  p_output1[10]=t2441 + var1[0];
  p_output1[11]=t2498 + var1[0];
  p_output1[12]=t2514 + var1[0];
  p_output1[13]=t2580 + var1[0];
  p_output1[14]=t2673 + var1[0];
  p_output1[15]=t2720 + var1[0];
  p_output1[16]=t2752 + var1[0];
  p_output1[17]=t2869 + var1[0];
  p_output1[18]=t2898 + var1[0];
  p_output1[19]=t1132;
  p_output1[20]=0.002418;
  p_output1[21]=-0.00252;
  p_output1[22]=-0.007184;
  p_output1[23]=-0.011071;
  p_output1[24]=-0.013757;
  p_output1[25]=-0.014953;
  p_output1[26]=-0.014528;
  p_output1[27]=-0.012529;
  p_output1[28]=-0.009173;
  p_output1[29]=-0.004822;
  p_output1[30]=0.000051;
  p_output1[31]=0.004919;
  p_output1[32]=0.009254;
  p_output1[33]=0.012586;
  p_output1[34]=0.014554;
  p_output1[35]=0.014944;
  p_output1[36]=0.013716;
  p_output1[37]=0.011001;
  p_output1[38]=0.007094;
  p_output1[39]=0.002418;
  p_output1[40]=t2960;
  p_output1[41]=t3018 + var1[1];
  p_output1[42]=t3143 + var1[1];
  p_output1[43]=t3172 + var1[1];
  p_output1[44]=t3252 + var1[1];
  p_output1[45]=t3292 + var1[1];
  p_output1[46]=t3299 + var1[1];
  p_output1[47]=t3369 + var1[1];
  p_output1[48]=t3401 + var1[1];
  p_output1[49]=t3413 + var1[1];
  p_output1[50]=t3423 + var1[1];
  p_output1[51]=t3442 + var1[1];
  p_output1[52]=t3523 + var1[1];
  p_output1[53]=t3546 + var1[1];
  p_output1[54]=t3555 + var1[1];
  p_output1[55]=t3602 + var1[1];
  p_output1[56]=t3636 + var1[1];
  p_output1[57]=t3666 + var1[1];
  p_output1[58]=t3729 + var1[1];
  p_output1[59]=t2960;
  p_output1[60]=t3784;
  p_output1[61]=t1741 + t3772 + var1[0];
  p_output1[62]=t2060 + t3772 + var1[0];
  p_output1[63]=t2092 + t3772 + var1[0];
  p_output1[64]=t2171 + t3772 + var1[0];
  p_output1[65]=t2244 + t3772 + var1[0];
  p_output1[66]=t2337 + t3772 + var1[0];
  p_output1[67]=t2350 + t3772 + var1[0];
  p_output1[68]=t2391 + t3772 + var1[0];
  p_output1[69]=t2409 + t3772 + var1[0];
  p_output1[70]=t2441 + t3772 + var1[0];
  p_output1[71]=t2498 + t3772 + var1[0];
  p_output1[72]=t2514 + t3772 + var1[0];
  p_output1[73]=t2580 + t3772 + var1[0];
  p_output1[74]=t2673 + t3772 + var1[0];
  p_output1[75]=t2720 + t3772 + var1[0];
  p_output1[76]=t2752 + t3772 + var1[0];
  p_output1[77]=t2869 + t3772 + var1[0];
  p_output1[78]=t2898 + t3772 + var1[0];
  p_output1[79]=t3784;
  p_output1[80]=0.002418;
  p_output1[81]=-0.00252;
  p_output1[82]=-0.007184;
  p_output1[83]=-0.011071;
  p_output1[84]=-0.013757;
  p_output1[85]=-0.014953;
  p_output1[86]=-0.014528;
  p_output1[87]=-0.012529;
  p_output1[88]=-0.009173;
  p_output1[89]=-0.004822;
  p_output1[90]=0.000051;
  p_output1[91]=0.004919;
  p_output1[92]=0.009254;
  p_output1[93]=0.012586;
  p_output1[94]=0.014554;
  p_output1[95]=0.014944;
  p_output1[96]=0.013716;
  p_output1[97]=0.011001;
  p_output1[98]=0.007094;
  p_output1[99]=0.002418;
  p_output1[100]=t4148;
  p_output1[101]=t3018 + t4144 + var1[1];
  p_output1[102]=t3143 + t4144 + var1[1];
  p_output1[103]=t3172 + t4144 + var1[1];
  p_output1[104]=t3252 + t4144 + var1[1];
  p_output1[105]=t3292 + t4144 + var1[1];
  p_output1[106]=t3299 + t4144 + var1[1];
  p_output1[107]=t3369 + t4144 + var1[1];
  p_output1[108]=t3401 + t4144 + var1[1];
  p_output1[109]=t3413 + t4144 + var1[1];
  p_output1[110]=t3423 + t4144 + var1[1];
  p_output1[111]=t3442 + t4144 + var1[1];
  p_output1[112]=t3523 + t4144 + var1[1];
  p_output1[113]=t3546 + t4144 + var1[1];
  p_output1[114]=t3555 + t4144 + var1[1];
  p_output1[115]=t3602 + t4144 + var1[1];
  p_output1[116]=t3636 + t4144 + var1[1];
  p_output1[117]=t3666 + t4144 + var1[1];
  p_output1[118]=t3729 + t4144 + var1[1];
  p_output1[119]=t4148;
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

#include "Link_Torso_to_RightHip_bar.hh"

namespace SymFunction
{

void Link_Torso_to_RightHip_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
