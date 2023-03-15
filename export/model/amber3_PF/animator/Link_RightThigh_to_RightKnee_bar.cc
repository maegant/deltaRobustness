/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 18:06:17 GMT-08:00
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
  double t2693;
  double t2705;
  double t2708;
  double t2711;
  double t2700;
  double t2704;
  double t2707;
  double t2712;
  double t2713;
  double t2714;
  double t2717;
  double t2720;
  double t2728;
  double t2729;
  double t2730;
  double t2731;
  double t2732;
  double t2789;
  double t2790;
  double t2792;
  double t2793;
  double t2794;
  double t2798;
  double t2797;
  double t2801;
  double t2838;
  double t2733;
  double t2735;
  double t2737;
  double t2739;
  double t2741;
  double t2744;
  double t2746;
  double t2753;
  double t2756;
  double t2758;
  double t2765;
  double t2767;
  double t2769;
  double t2772;
  double t2774;
  double t2776;
  double t2778;
  double t2786;
  double t2839;
  double t2802;
  double t2859;
  double t2804;
  double t2806;
  double t2808;
  double t2810;
  double t2812;
  double t2814;
  double t2816;
  double t2818;
  double t2820;
  double t2822;
  double t2824;
  double t2826;
  double t2828;
  double t2830;
  double t2832;
  double t2834;
  double t2836;
  double t2860;
  t2693 = Cos(var1[5]);
  t2705 = Sin(var1[2]);
  t2708 = Cos(var1[2]);
  t2711 = Sin(var1[5]);
  t2700 = -1.*t2693;
  t2704 = 1. + t2700;
  t2707 = -0.4999*t2704*t2705;
  t2712 = 0.4999*t2708*t2711;
  t2713 = t2693*t2705;
  t2714 = t2708*t2711;
  t2717 = t2713 + t2714;
  t2720 = -0.4999*t2717;
  t2728 = t2708*t2693;
  t2729 = -1.*t2705*t2711;
  t2730 = t2728 + t2729;
  t2731 = 0.014895*t2730;
  t2732 = var1[0] + t2707 + t2712 + t2720 + t2731;
  t2789 = -0.4999*t2708*t2704;
  t2790 = -0.4999*t2705*t2711;
  t2792 = -1.*t2693*t2705;
  t2793 = -1.*t2708*t2711;
  t2794 = t2792 + t2793;
  t2798 = -0.4999*t2730;
  t2797 = 0.014895*t2794;
  t2801 = var1[1] + t2789 + t2790 + t2797 + t2798;
  t2838 = -0.9063*t2717;
  t2733 = 0.014663*t2730;
  t2735 = 0.012843*t2730;
  t2737 = 0.009631*t2730;
  t2739 = 0.005375*t2730;
  t2741 = 0.000536*t2730;
  t2744 = -0.00436*t2730;
  t2746 = -0.008784*t2730;
  t2753 = -0.012256*t2730;
  t2756 = -0.0144*t2730;
  t2758 = -0.014984*t2730;
  t2765 = -0.013943*t2730;
  t2767 = -0.011392*t2730;
  t2769 = -0.007606*t2730;
  t2772 = -0.002996*t2730;
  t2774 = 0.001938*t2730;
  t2776 = 0.006663*t2730;
  t2778 = 0.010665*t2730;
  t2786 = 0.013512*t2730;
  t2839 = var1[0] + t2707 + t2712 + t2838 + t2731;
  t2802 = 0.014663*t2794;
  t2859 = -0.9063*t2730;
  t2804 = 0.012843*t2794;
  t2806 = 0.009631*t2794;
  t2808 = 0.005375*t2794;
  t2810 = 0.000536*t2794;
  t2812 = -0.00436*t2794;
  t2814 = -0.008784*t2794;
  t2816 = -0.012256*t2794;
  t2818 = -0.0144*t2794;
  t2820 = -0.014984*t2794;
  t2822 = -0.013943*t2794;
  t2824 = -0.011392*t2794;
  t2826 = -0.007606*t2794;
  t2828 = -0.002996*t2794;
  t2830 = 0.001938*t2794;
  t2832 = 0.006663*t2794;
  t2834 = 0.010665*t2794;
  t2836 = 0.013512*t2794;
  t2860 = var1[1] + t2789 + t2790 + t2797 + t2859;
  p_output1[0]=t2732;
  p_output1[1]=t2707 + t2712 + t2720 + t2733 + var1[0];
  p_output1[2]=t2707 + t2712 + t2720 + t2735 + var1[0];
  p_output1[3]=t2707 + t2712 + t2720 + t2737 + var1[0];
  p_output1[4]=t2707 + t2712 + t2720 + t2739 + var1[0];
  p_output1[5]=t2707 + t2712 + t2720 + t2741 + var1[0];
  p_output1[6]=t2707 + t2712 + t2720 + t2744 + var1[0];
  p_output1[7]=t2707 + t2712 + t2720 + t2746 + var1[0];
  p_output1[8]=t2707 + t2712 + t2720 + t2753 + var1[0];
  p_output1[9]=t2707 + t2712 + t2720 + t2756 + var1[0];
  p_output1[10]=t2707 + t2712 + t2720 + t2758 + var1[0];
  p_output1[11]=t2707 + t2712 + t2720 + t2765 + var1[0];
  p_output1[12]=t2707 + t2712 + t2720 + t2767 + var1[0];
  p_output1[13]=t2707 + t2712 + t2720 + t2769 + var1[0];
  p_output1[14]=t2707 + t2712 + t2720 + t2772 + var1[0];
  p_output1[15]=t2707 + t2712 + t2720 + t2774 + var1[0];
  p_output1[16]=t2707 + t2712 + t2720 + t2776 + var1[0];
  p_output1[17]=t2707 + t2712 + t2720 + t2778 + var1[0];
  p_output1[18]=t2707 + t2712 + t2720 + t2786 + var1[0];
  p_output1[19]=t2732;
  p_output1[20]=0.001772;
  p_output1[21]=-0.00316;
  p_output1[22]=-0.00775;
  p_output1[23]=-0.0115;
  p_output1[24]=-0.014004;
  p_output1[25]=-0.01499;
  p_output1[26]=-0.014352;
  p_output1[27]=-0.012159;
  p_output1[28]=-0.008648;
  p_output1[29]=-0.0042;
  p_output1[30]=0.000703;
  p_output1[31]=0.00553;
  p_output1[32]=0.009758;
  p_output1[33]=0.012928;
  p_output1[34]=0.014698;
  p_output1[35]=0.014874;
  p_output1[36]=0.013439;
  p_output1[37]=0.010547;
  p_output1[38]=0.006513;
  p_output1[39]=0.001772;
  p_output1[40]=t2801;
  p_output1[41]=t2789 + t2790 + t2798 + t2802 + var1[1];
  p_output1[42]=t2789 + t2790 + t2798 + t2804 + var1[1];
  p_output1[43]=t2789 + t2790 + t2798 + t2806 + var1[1];
  p_output1[44]=t2789 + t2790 + t2798 + t2808 + var1[1];
  p_output1[45]=t2789 + t2790 + t2798 + t2810 + var1[1];
  p_output1[46]=t2789 + t2790 + t2798 + t2812 + var1[1];
  p_output1[47]=t2789 + t2790 + t2798 + t2814 + var1[1];
  p_output1[48]=t2789 + t2790 + t2798 + t2816 + var1[1];
  p_output1[49]=t2789 + t2790 + t2798 + t2818 + var1[1];
  p_output1[50]=t2789 + t2790 + t2798 + t2820 + var1[1];
  p_output1[51]=t2789 + t2790 + t2798 + t2822 + var1[1];
  p_output1[52]=t2789 + t2790 + t2798 + t2824 + var1[1];
  p_output1[53]=t2789 + t2790 + t2798 + t2826 + var1[1];
  p_output1[54]=t2789 + t2790 + t2798 + t2828 + var1[1];
  p_output1[55]=t2789 + t2790 + t2798 + t2830 + var1[1];
  p_output1[56]=t2789 + t2790 + t2798 + t2832 + var1[1];
  p_output1[57]=t2789 + t2790 + t2798 + t2834 + var1[1];
  p_output1[58]=t2789 + t2790 + t2798 + t2836 + var1[1];
  p_output1[59]=t2801;
  p_output1[60]=t2839;
  p_output1[61]=t2707 + t2712 + t2733 + t2838 + var1[0];
  p_output1[62]=t2707 + t2712 + t2735 + t2838 + var1[0];
  p_output1[63]=t2707 + t2712 + t2737 + t2838 + var1[0];
  p_output1[64]=t2707 + t2712 + t2739 + t2838 + var1[0];
  p_output1[65]=t2707 + t2712 + t2741 + t2838 + var1[0];
  p_output1[66]=t2707 + t2712 + t2744 + t2838 + var1[0];
  p_output1[67]=t2707 + t2712 + t2746 + t2838 + var1[0];
  p_output1[68]=t2707 + t2712 + t2753 + t2838 + var1[0];
  p_output1[69]=t2707 + t2712 + t2756 + t2838 + var1[0];
  p_output1[70]=t2707 + t2712 + t2758 + t2838 + var1[0];
  p_output1[71]=t2707 + t2712 + t2765 + t2838 + var1[0];
  p_output1[72]=t2707 + t2712 + t2767 + t2838 + var1[0];
  p_output1[73]=t2707 + t2712 + t2769 + t2838 + var1[0];
  p_output1[74]=t2707 + t2712 + t2772 + t2838 + var1[0];
  p_output1[75]=t2707 + t2712 + t2774 + t2838 + var1[0];
  p_output1[76]=t2707 + t2712 + t2776 + t2838 + var1[0];
  p_output1[77]=t2707 + t2712 + t2778 + t2838 + var1[0];
  p_output1[78]=t2707 + t2712 + t2786 + t2838 + var1[0];
  p_output1[79]=t2839;
  p_output1[80]=0.001772;
  p_output1[81]=-0.00316;
  p_output1[82]=-0.00775;
  p_output1[83]=-0.0115;
  p_output1[84]=-0.014004;
  p_output1[85]=-0.01499;
  p_output1[86]=-0.014352;
  p_output1[87]=-0.012159;
  p_output1[88]=-0.008648;
  p_output1[89]=-0.0042;
  p_output1[90]=0.000703;
  p_output1[91]=0.00553;
  p_output1[92]=0.009758;
  p_output1[93]=0.012928;
  p_output1[94]=0.014698;
  p_output1[95]=0.014874;
  p_output1[96]=0.013439;
  p_output1[97]=0.010547;
  p_output1[98]=0.006513;
  p_output1[99]=0.001772;
  p_output1[100]=t2860;
  p_output1[101]=t2789 + t2790 + t2802 + t2859 + var1[1];
  p_output1[102]=t2789 + t2790 + t2804 + t2859 + var1[1];
  p_output1[103]=t2789 + t2790 + t2806 + t2859 + var1[1];
  p_output1[104]=t2789 + t2790 + t2808 + t2859 + var1[1];
  p_output1[105]=t2789 + t2790 + t2810 + t2859 + var1[1];
  p_output1[106]=t2789 + t2790 + t2812 + t2859 + var1[1];
  p_output1[107]=t2789 + t2790 + t2814 + t2859 + var1[1];
  p_output1[108]=t2789 + t2790 + t2816 + t2859 + var1[1];
  p_output1[109]=t2789 + t2790 + t2818 + t2859 + var1[1];
  p_output1[110]=t2789 + t2790 + t2820 + t2859 + var1[1];
  p_output1[111]=t2789 + t2790 + t2822 + t2859 + var1[1];
  p_output1[112]=t2789 + t2790 + t2824 + t2859 + var1[1];
  p_output1[113]=t2789 + t2790 + t2826 + t2859 + var1[1];
  p_output1[114]=t2789 + t2790 + t2828 + t2859 + var1[1];
  p_output1[115]=t2789 + t2790 + t2830 + t2859 + var1[1];
  p_output1[116]=t2789 + t2790 + t2832 + t2859 + var1[1];
  p_output1[117]=t2789 + t2790 + t2834 + t2859 + var1[1];
  p_output1[118]=t2789 + t2790 + t2836 + t2859 + var1[1];
  p_output1[119]=t2860;
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
