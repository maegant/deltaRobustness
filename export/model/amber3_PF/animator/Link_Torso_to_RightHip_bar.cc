/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 18:06:15 GMT-08:00
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
  double t2655;
  double t2662;
  double t2679;
  double t2756;
  double t2757;
  double t2758;
  double t2681;
  double t2813;
  double t2694;
  double t2700;
  double t2705;
  double t2708;
  double t2712;
  double t2714;
  double t2720;
  double t2729;
  double t2731;
  double t2733;
  double t2735;
  double t2737;
  double t2739;
  double t2741;
  double t2744;
  double t2746;
  double t2753;
  double t2814;
  double t2833;
  double t2759;
  double t2766;
  double t2768;
  double t2770;
  double t2773;
  double t2775;
  double t2777;
  double t2779;
  double t2787;
  double t2790;
  double t2793;
  double t2797;
  double t2801;
  double t2803;
  double t2805;
  double t2807;
  double t2809;
  double t2811;
  double t2834;
  t2655 = Cos(var1[2]);
  t2662 = 0.008354*t2655;
  t2679 = var1[0] + t2662;
  t2756 = Sin(var1[2]);
  t2757 = -0.008354*t2756;
  t2758 = var1[1] + t2757;
  t2681 = 0.011947*t2655;
  t2813 = -0.4999*t2756;
  t2694 = 0.014245*t2655;
  t2700 = 0.014999*t2655;
  t2705 = 0.014128*t2655;
  t2708 = 0.011726*t2655;
  t2712 = 0.008053*t2655;
  t2714 = 0.003508*t2655;
  t2720 = -0.001418*t2655;
  t2729 = -0.006189*t2655;
  t2731 = -0.010291*t2655;
  t2733 = -0.013277*t2655;
  t2735 = -0.014824*t2655;
  t2737 = -0.014765*t2655;
  t2739 = -0.013106*t2655;
  t2741 = -0.010026*t2655;
  t2744 = -0.005861*t2655;
  t2746 = -0.00106*t2655;
  t2753 = 0.003856*t2655;
  t2814 = var1[0] + t2662 + t2813;
  t2833 = -0.4999*t2655;
  t2759 = -0.011947*t2756;
  t2766 = -0.014245*t2756;
  t2768 = -0.014999*t2756;
  t2770 = -0.014128*t2756;
  t2773 = -0.011726*t2756;
  t2775 = -0.008053*t2756;
  t2777 = -0.003508*t2756;
  t2779 = 0.001418*t2756;
  t2787 = 0.006189*t2756;
  t2790 = 0.010291*t2756;
  t2793 = 0.013277*t2756;
  t2797 = 0.014824*t2756;
  t2801 = 0.014765*t2756;
  t2803 = 0.013106*t2756;
  t2805 = 0.010026*t2756;
  t2807 = 0.005861*t2756;
  t2809 = 0.00106*t2756;
  t2811 = -0.003856*t2756;
  t2834 = var1[1] + t2833 + t2757;
  p_output1[0]=t2679;
  p_output1[1]=t2681 + var1[0];
  p_output1[2]=t2694 + var1[0];
  p_output1[3]=t2700 + var1[0];
  p_output1[4]=t2705 + var1[0];
  p_output1[5]=t2708 + var1[0];
  p_output1[6]=t2712 + var1[0];
  p_output1[7]=t2714 + var1[0];
  p_output1[8]=t2720 + var1[0];
  p_output1[9]=t2729 + var1[0];
  p_output1[10]=t2731 + var1[0];
  p_output1[11]=t2733 + var1[0];
  p_output1[12]=t2735 + var1[0];
  p_output1[13]=t2737 + var1[0];
  p_output1[14]=t2739 + var1[0];
  p_output1[15]=t2741 + var1[0];
  p_output1[16]=t2744 + var1[0];
  p_output1[17]=t2746 + var1[0];
  p_output1[18]=t2753 + var1[0];
  p_output1[19]=t2679;
  p_output1[20]=0.012458;
  p_output1[21]=0.009071;
  p_output1[22]=0.0047;
  p_output1[23]=-0.00018;
  p_output1[24]=-0.00504;
  p_output1[25]=-0.009354;
  p_output1[26]=-0.012655;
  p_output1[27]=-0.014584;
  p_output1[28]=-0.014933;
  p_output1[29]=-0.013663;
  p_output1[30]=-0.010913;
  p_output1[31]=-0.006981;
  p_output1[32]=-0.002292;
  p_output1[33]=0.002646;
  p_output1[34]=0.007297;
  p_output1[35]=0.011157;
  p_output1[36]=0.013808;
  p_output1[37]=0.014963;
  p_output1[38]=0.014496;
  p_output1[39]=0.012458;
  p_output1[40]=t2758;
  p_output1[41]=t2759 + var1[1];
  p_output1[42]=t2766 + var1[1];
  p_output1[43]=t2768 + var1[1];
  p_output1[44]=t2770 + var1[1];
  p_output1[45]=t2773 + var1[1];
  p_output1[46]=t2775 + var1[1];
  p_output1[47]=t2777 + var1[1];
  p_output1[48]=t2779 + var1[1];
  p_output1[49]=t2787 + var1[1];
  p_output1[50]=t2790 + var1[1];
  p_output1[51]=t2793 + var1[1];
  p_output1[52]=t2797 + var1[1];
  p_output1[53]=t2801 + var1[1];
  p_output1[54]=t2803 + var1[1];
  p_output1[55]=t2805 + var1[1];
  p_output1[56]=t2807 + var1[1];
  p_output1[57]=t2809 + var1[1];
  p_output1[58]=t2811 + var1[1];
  p_output1[59]=t2758;
  p_output1[60]=t2814;
  p_output1[61]=t2681 + t2813 + var1[0];
  p_output1[62]=t2694 + t2813 + var1[0];
  p_output1[63]=t2700 + t2813 + var1[0];
  p_output1[64]=t2705 + t2813 + var1[0];
  p_output1[65]=t2708 + t2813 + var1[0];
  p_output1[66]=t2712 + t2813 + var1[0];
  p_output1[67]=t2714 + t2813 + var1[0];
  p_output1[68]=t2720 + t2813 + var1[0];
  p_output1[69]=t2729 + t2813 + var1[0];
  p_output1[70]=t2731 + t2813 + var1[0];
  p_output1[71]=t2733 + t2813 + var1[0];
  p_output1[72]=t2735 + t2813 + var1[0];
  p_output1[73]=t2737 + t2813 + var1[0];
  p_output1[74]=t2739 + t2813 + var1[0];
  p_output1[75]=t2741 + t2813 + var1[0];
  p_output1[76]=t2744 + t2813 + var1[0];
  p_output1[77]=t2746 + t2813 + var1[0];
  p_output1[78]=t2753 + t2813 + var1[0];
  p_output1[79]=t2814;
  p_output1[80]=0.012458;
  p_output1[81]=0.009071;
  p_output1[82]=0.0047;
  p_output1[83]=-0.00018;
  p_output1[84]=-0.00504;
  p_output1[85]=-0.009354;
  p_output1[86]=-0.012655;
  p_output1[87]=-0.014584;
  p_output1[88]=-0.014933;
  p_output1[89]=-0.013663;
  p_output1[90]=-0.010913;
  p_output1[91]=-0.006981;
  p_output1[92]=-0.002292;
  p_output1[93]=0.002646;
  p_output1[94]=0.007297;
  p_output1[95]=0.011157;
  p_output1[96]=0.013808;
  p_output1[97]=0.014963;
  p_output1[98]=0.014496;
  p_output1[99]=0.012458;
  p_output1[100]=t2834;
  p_output1[101]=t2759 + t2833 + var1[1];
  p_output1[102]=t2766 + t2833 + var1[1];
  p_output1[103]=t2768 + t2833 + var1[1];
  p_output1[104]=t2770 + t2833 + var1[1];
  p_output1[105]=t2773 + t2833 + var1[1];
  p_output1[106]=t2775 + t2833 + var1[1];
  p_output1[107]=t2777 + t2833 + var1[1];
  p_output1[108]=t2779 + t2833 + var1[1];
  p_output1[109]=t2787 + t2833 + var1[1];
  p_output1[110]=t2790 + t2833 + var1[1];
  p_output1[111]=t2793 + t2833 + var1[1];
  p_output1[112]=t2797 + t2833 + var1[1];
  p_output1[113]=t2801 + t2833 + var1[1];
  p_output1[114]=t2803 + t2833 + var1[1];
  p_output1[115]=t2805 + t2833 + var1[1];
  p_output1[116]=t2807 + t2833 + var1[1];
  p_output1[117]=t2809 + t2833 + var1[1];
  p_output1[118]=t2811 + t2833 + var1[1];
  p_output1[119]=t2834;
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
