/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:22:17 GMT-08:00
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
  double t96;
  double t131;
  double t142;
  double t213;
  double t245;
  double t385;
  double t453;
  double t769;
  double t770;
  double t980;
  double t1103;
  double t1138;
  double t1281;
  double t2100;
  double t2133;
  double t2169;
  double t2177;
  double t2204;
  double t1916;
  double t1924;
  double t1939;
  double t997;
  double t1487;
  double t1537;
  double t1541;
  double t1813;
  double t1837;
  double t1943;
  double t2076;
  double t2217;
  double t2300;
  double t2310;
  double t2435;
  double t2488;
  double t2523;
  double t2673;
  double t2343;
  double t2752;
  double t2788;
  double t3347;
  double t3348;
  double t3356;
  t96 = Cos(var1[3]);
  t131 = Sin(var1[2]);
  t142 = -1.*t96*t131;
  t213 = Cos(var1[2]);
  t245 = Sin(var1[3]);
  t385 = -1.*t213*t245;
  t453 = t142 + t385;
  t769 = t213*t96;
  t770 = -1.*t131*t245;
  t980 = t769 + t770;
  t1103 = t96*t131;
  t1138 = t213*t245;
  t1281 = t1103 + t1138;
  t2100 = -1.*t96;
  t2133 = 1. + t2100;
  t2169 = -0.4999*t2133;
  t2177 = -0.6493*t96;
  t2204 = t2169 + t2177;
  t1916 = -1.*t213*t96;
  t1924 = t131*t245;
  t1939 = t1916 + t1924;
  t997 = 6.8522*t453*t980;
  t1487 = Power(t453,2);
  t1537 = 3.4261*t1487;
  t1541 = 3.4261*t453*t1281;
  t1813 = Power(t980,2);
  t1837 = 3.4261*t1813;
  t1943 = 3.4261*t980*t1939;
  t2076 = t1537 + t1541 + t1837 + t1943;
  t2217 = t2204*t245;
  t2300 = 0.14939999999999998*t96*t245;
  t2310 = t2217 + t2300;
  t2435 = t2204*t96;
  t2488 = Power(t245,2);
  t2523 = -0.14939999999999998*t2488;
  t2673 = t2435 + t2523;
  t2343 = 3.4261*t2310*t980;
  t2752 = 3.4261*t453*t2673;
  t2788 = t2343 + t2752;
  t3347 = 3.4261*t453*t2310;
  t3348 = 3.4261*t1939*t2673;
  t3356 = t3347 + t3348;
  p_output1[0]=var2[2]*(-0.5*(6.8522*t1281*t980 + t997)*var2[0] - 0.5*t2076*var2[1] - 0.5*t2788*var2[2] + 0.25592966999999994*t453*var2[3]);
  p_output1[1]=var2[2]*(-0.5*t2076*var2[0] - 0.5*(6.8522*t1939*t453 + t997)*var2[1] - 0.5*t3356*var2[2] + 0.25592966999999994*t1939*var2[3]);
  p_output1[2]=(-0.5*t2788*var2[0] - 0.5*t3356*var2[1])*var2[2];
  p_output1[3]=(0.25592966999999994*t453*var2[0] + 0.25592966999999994*t1939*var2[1])*var2[2];
  p_output1[4]=0;
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

#include "Ce2_vec_L2_J3_amber3_feet.hh"

namespace SymFunction
{

void Ce2_vec_L2_J3_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
