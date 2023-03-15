/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:28:52 GMT-08:00
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
  double t45;
  double t66;
  double t91;
  double t369;
  double t77;
  double t374;
  double t384;
  double t656;
  double t685;
  double t689;
  double t596;
  double t624;
  double t626;
  double t703;
  double t734;
  double t738;
  double t1119;
  double t1171;
  double t1175;
  double t1264;
  double t1267;
  double t386;
  double t690;
  double t699;
  double t784;
  double t817;
  double t840;
  double t854;
  double t855;
  double t872;
  double t987;
  double t990;
  double t1016;
  double t1033;
  double t1096;
  double t1112;
  double t1320;
  double t1269;
  double t1273;
  double t1292;
  double t1297;
  double t1327;
  double t1342;
  double t1360;
  double t1365;
  double t1759;
  double t1772;
  double t1784;
  double t1794;
  double t1799;
  double t1805;
  double t1905;
  double t1912;
  double t1920;
  double t1427;
  double t1464;
  double t1564;
  double t1617;
  double t1622;
  double t1649;
  double t2014;
  double t2038;
  double t1474;
  double t1563;
  double t1809;
  double t1810;
  double t1813;
  double t1826;
  double t1863;
  double t1866;
  double t1888;
  double t2191;
  double t2195;
  double t2213;
  double t1961;
  t45 = Cos(var1[6]);
  t66 = Sin(var1[2]);
  t91 = Cos(var1[2]);
  t369 = Sin(var1[6]);
  t77 = t45*t66;
  t374 = t91*t369;
  t384 = t77 + t374;
  t656 = t91*t45;
  t685 = -1.*t66*t369;
  t689 = t656 + t685;
  t596 = -1.*t45*t66;
  t624 = -1.*t91*t369;
  t626 = t596 + t624;
  t703 = -1.*t91*t45;
  t734 = t66*t369;
  t738 = t703 + t734;
  t1119 = -1.*t45;
  t1171 = 1. + t1119;
  t1175 = -0.4999*t1171;
  t1264 = -0.6493*t45;
  t1267 = t1175 + t1264;
  t386 = -0.25592966999999994*var2[6]*t384;
  t690 = 10.2783*t626*t689;
  t699 = 3.4261*t384*t689;
  t784 = 10.2783*t626*t738;
  t817 = 3.4261*t384*t738;
  t840 = t690 + t699 + t784 + t817;
  t854 = 0.5*var2[0]*t840;
  t855 = Power(t626,2);
  t872 = 6.8522*t855;
  t987 = 6.8522*t626*t384;
  t990 = 6.8522*t689*t738;
  t1016 = Power(t738,2);
  t1033 = 6.8522*t1016;
  t1096 = t872 + t987 + t990 + t1033;
  t1112 = 0.5*var2[1]*t1096;
  t1320 = t1267*t45;
  t1269 = t1267*t369;
  t1273 = 0.14939999999999998*t45*t369;
  t1292 = t1269 + t1273;
  t1297 = 3.4261*t1292*t738;
  t1327 = Power(t369,2);
  t1342 = -0.14939999999999998*t1327;
  t1360 = t1320 + t1342;
  t1365 = 3.4261*t384*t1360;
  t1759 = 3.4261*t855;
  t1772 = 3.4261*t626*t384;
  t1784 = Power(t689,2);
  t1794 = 3.4261*t1784;
  t1799 = 3.4261*t689*t738;
  t1805 = t1759 + t1772 + t1794 + t1799;
  t1905 = 3.4261*t626*t1292;
  t1912 = 3.4261*t738*t1360;
  t1920 = t1905 + t1912;
  t1427 = Power(t45,2);
  t1464 = 0.14939999999999998*t1427;
  t1564 = -1.*t1267*t369;
  t1617 = -0.14939999999999998*t45*t369;
  t1622 = t1564 + t1617;
  t1649 = 3.4261*t1622*t738;
  t2014 = t1320 + t1464;
  t2038 = 3.4261*t2014*t626;
  t1474 = 0. + t1320 + t1464;
  t1563 = 3.4261*t1474*t626;
  t1809 = 0.5*var2[1]*t1805;
  t1810 = -0.25592966999999994*var2[6]*t738;
  t1813 = 6.8522*t626*t689;
  t1826 = 6.8522*t626*t738;
  t1863 = t1813 + t1826;
  t1866 = var2[1]*t1863;
  t1888 = 0.5*var2[0]*t1805;
  t2191 = 3.4261*t626*t1622;
  t2195 = 3.4261*t2014*t689;
  t2213 = t2191 + t1905 + t2195 + t1912;
  t1961 = -0.25592966999999994*var2[1]*t738;
  p_output1[0]=var2[1]*(t1112 + t386 + t854 + 0.5*(t1297 + t1365)*var2[2]);
  p_output1[1]=var2[1]*(t1112 + t386 + t854 + 0.5*(t1297 + t1365 + t1563 + t1649)*var2[2]);
  p_output1[2]=t1809;
  p_output1[3]=t1810 + t1866 + t1888 + 0.5*t1920*var2[2];
  p_output1[4]=0.5*t1920*var2[1];
  p_output1[5]=t1961;
  p_output1[6]=var2[1]*(t1112 + t386 + t854 + 0.5*(t1297 + t1365 + t1649 + t2038)*var2[2]);
  p_output1[7]=var2[1]*(t1112 + t386 + t854 + 0.5*(t1297 + t1365 + t1563 + t2038 + 3.4261*(0. - 0.14939999999999998*t1427 - 1.*t1267*t45)*t626 + 3.4261*t1622*t689 + 6.8522*t1622*t738)*var2[2]);
  p_output1[8]=t1809;
  p_output1[9]=t1810 + t1866 + t1888 + 0.5*t2213*var2[2];
  p_output1[10]=0.5*t2213*var2[1];
  p_output1[11]=t1961;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec_L5_J2_amber3_feet.hh"

namespace RightSS1
{

void J_Ce3_vec_L5_J2_amber3_feet_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
