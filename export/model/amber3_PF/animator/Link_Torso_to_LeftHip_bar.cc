/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 18:06:09 GMT-08:00
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
  double t2597;
  double t2614;
  double t2616;
  double t2717;
  double t2720;
  double t2721;
  double t2628;
  double t2774;
  double t2636;
  double t2640;
  double t2642;
  double t2644;
  double t2647;
  double t2652;
  double t2656;
  double t2660;
  double t2665;
  double t2672;
  double t2681;
  double t2694;
  double t2698;
  double t2704;
  double t2707;
  double t2711;
  double t2713;
  double t2775;
  double t2806;
  double t2727;
  double t2729;
  double t2731;
  double t2733;
  double t2735;
  double t2737;
  double t2739;
  double t2741;
  double t2744;
  double t2746;
  double t2750;
  double t2753;
  double t2756;
  double t2758;
  double t2765;
  double t2767;
  double t2769;
  double t2772;
  double t2807;
  t2597 = Cos(var1[2]);
  t2614 = 0.013064*t2597;
  t2616 = var1[0] + t2614;
  t2717 = Sin(var1[2]);
  t2720 = -0.013064*t2717;
  t2721 = var1[1] + t2720;
  t2628 = 0.01475*t2597;
  t2774 = -0.4999*t2717;
  t2636 = 0.014837*t2597;
  t2640 = 0.013316*t2597;
  t2642 = 0.010352*t2597;
  t2644 = 0.006267*t2597;
  t2647 = 0.001502*t2597;
  t2652 = -0.003425*t2597;
  t2656 = -0.007982*t2597;
  t2660 = -0.011673*t2597;
  t2665 = -0.014099*t2597;
  t2672 = -0.014998*t2597;
  t2681 = -0.014271*t2597;
  t2694 = -0.011998*t2597;
  t2698 = -0.008424*t2597;
  t2704 = -0.003938*t2597;
  t2707 = 0.000975*t2597;
  t2711 = 0.005782*t2597;
  t2713 = 0.009963*t2597;
  t2775 = var1[0] + t2614 + t2774;
  t2806 = -0.4999*t2597;
  t2727 = -0.01475*t2717;
  t2729 = -0.014837*t2717;
  t2731 = -0.013316*t2717;
  t2733 = -0.010352*t2717;
  t2735 = -0.006267*t2717;
  t2737 = -0.001502*t2717;
  t2739 = 0.003425*t2717;
  t2741 = 0.007982*t2717;
  t2744 = 0.011673*t2717;
  t2746 = 0.014099*t2717;
  t2750 = 0.014998*t2717;
  t2753 = 0.014271*t2717;
  t2756 = 0.011998*t2717;
  t2758 = 0.008424*t2717;
  t2765 = 0.003938*t2717;
  t2767 = -0.000975*t2717;
  t2769 = -0.005782*t2717;
  t2772 = -0.009963*t2717;
  t2807 = var1[1] + t2806 + t2720;
  p_output1[0]=t2616;
  p_output1[1]=t2628 + var1[0];
  p_output1[2]=t2636 + var1[0];
  p_output1[3]=t2640 + var1[0];
  p_output1[4]=t2642 + var1[0];
  p_output1[5]=t2644 + var1[0];
  p_output1[6]=t2647 + var1[0];
  p_output1[7]=t2652 + var1[0];
  p_output1[8]=t2656 + var1[0];
  p_output1[9]=t2660 + var1[0];
  p_output1[10]=t2665 + var1[0];
  p_output1[11]=t2672 + var1[0];
  p_output1[12]=t2681 + var1[0];
  p_output1[13]=t2694 + var1[0];
  p_output1[14]=t2698 + var1[0];
  p_output1[15]=t2704 + var1[0];
  p_output1[16]=t2707 + var1[0];
  p_output1[17]=t2711 + var1[0];
  p_output1[18]=t2713 + var1[0];
  p_output1[19]=t2616;
  p_output1[20]=0.007371;
  p_output1[21]=0.002729;
  p_output1[22]=-0.002208;
  p_output1[23]=-0.006906;
  p_output1[24]=-0.010855;
  p_output1[25]=-0.013628;
  p_output1[26]=-0.014925;
  p_output1[27]=-0.014604;
  p_output1[28]=-0.0127;
  p_output1[29]=-0.00942;
  p_output1[30]=-0.00512;
  p_output1[31]=-0.000264;
  p_output1[32]=0.00462;
  p_output1[33]=0.009003;
  p_output1[34]=0.012411;
  p_output1[35]=0.014474;
  p_output1[36]=0.014968;
  p_output1[37]=0.013841;
  p_output1[38]=0.011213;
  p_output1[39]=0.007371;
  p_output1[40]=t2721;
  p_output1[41]=t2727 + var1[1];
  p_output1[42]=t2729 + var1[1];
  p_output1[43]=t2731 + var1[1];
  p_output1[44]=t2733 + var1[1];
  p_output1[45]=t2735 + var1[1];
  p_output1[46]=t2737 + var1[1];
  p_output1[47]=t2739 + var1[1];
  p_output1[48]=t2741 + var1[1];
  p_output1[49]=t2744 + var1[1];
  p_output1[50]=t2746 + var1[1];
  p_output1[51]=t2750 + var1[1];
  p_output1[52]=t2753 + var1[1];
  p_output1[53]=t2756 + var1[1];
  p_output1[54]=t2758 + var1[1];
  p_output1[55]=t2765 + var1[1];
  p_output1[56]=t2767 + var1[1];
  p_output1[57]=t2769 + var1[1];
  p_output1[58]=t2772 + var1[1];
  p_output1[59]=t2721;
  p_output1[60]=t2775;
  p_output1[61]=t2628 + t2774 + var1[0];
  p_output1[62]=t2636 + t2774 + var1[0];
  p_output1[63]=t2640 + t2774 + var1[0];
  p_output1[64]=t2642 + t2774 + var1[0];
  p_output1[65]=t2644 + t2774 + var1[0];
  p_output1[66]=t2647 + t2774 + var1[0];
  p_output1[67]=t2652 + t2774 + var1[0];
  p_output1[68]=t2656 + t2774 + var1[0];
  p_output1[69]=t2660 + t2774 + var1[0];
  p_output1[70]=t2665 + t2774 + var1[0];
  p_output1[71]=t2672 + t2774 + var1[0];
  p_output1[72]=t2681 + t2774 + var1[0];
  p_output1[73]=t2694 + t2774 + var1[0];
  p_output1[74]=t2698 + t2774 + var1[0];
  p_output1[75]=t2704 + t2774 + var1[0];
  p_output1[76]=t2707 + t2774 + var1[0];
  p_output1[77]=t2711 + t2774 + var1[0];
  p_output1[78]=t2713 + t2774 + var1[0];
  p_output1[79]=t2775;
  p_output1[80]=0.007371;
  p_output1[81]=0.002729;
  p_output1[82]=-0.002208;
  p_output1[83]=-0.006906;
  p_output1[84]=-0.010855;
  p_output1[85]=-0.013628;
  p_output1[86]=-0.014925;
  p_output1[87]=-0.014604;
  p_output1[88]=-0.0127;
  p_output1[89]=-0.00942;
  p_output1[90]=-0.00512;
  p_output1[91]=-0.000264;
  p_output1[92]=0.00462;
  p_output1[93]=0.009003;
  p_output1[94]=0.012411;
  p_output1[95]=0.014474;
  p_output1[96]=0.014968;
  p_output1[97]=0.013841;
  p_output1[98]=0.011213;
  p_output1[99]=0.007371;
  p_output1[100]=t2807;
  p_output1[101]=t2727 + t2806 + var1[1];
  p_output1[102]=t2729 + t2806 + var1[1];
  p_output1[103]=t2731 + t2806 + var1[1];
  p_output1[104]=t2733 + t2806 + var1[1];
  p_output1[105]=t2735 + t2806 + var1[1];
  p_output1[106]=t2737 + t2806 + var1[1];
  p_output1[107]=t2739 + t2806 + var1[1];
  p_output1[108]=t2741 + t2806 + var1[1];
  p_output1[109]=t2744 + t2806 + var1[1];
  p_output1[110]=t2746 + t2806 + var1[1];
  p_output1[111]=t2750 + t2806 + var1[1];
  p_output1[112]=t2753 + t2806 + var1[1];
  p_output1[113]=t2756 + t2806 + var1[1];
  p_output1[114]=t2758 + t2806 + var1[1];
  p_output1[115]=t2765 + t2806 + var1[1];
  p_output1[116]=t2767 + t2806 + var1[1];
  p_output1[117]=t2769 + t2806 + var1[1];
  p_output1[118]=t2772 + t2806 + var1[1];
  p_output1[119]=t2807;
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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

#include "Link_Torso_to_LeftHip_bar.hh"

namespace SymFunction
{

void Link_Torso_to_LeftHip_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
