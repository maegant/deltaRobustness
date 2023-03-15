/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 18:06:12 GMT-08:00
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
  double t2629;
  double t2642;
  double t2644;
  double t2645;
  double t2640;
  double t2641;
  double t2643;
  double t2647;
  double t2649;
  double t2652;
  double t2655;
  double t2656;
  double t2657;
  double t2660;
  double t2662;
  double t2665;
  double t2666;
  double t2745;
  double t2746;
  double t2747;
  double t2750;
  double t2752;
  double t2754;
  double t2753;
  double t2756;
  double t2811;
  double t2672;
  double t2681;
  double t2694;
  double t2698;
  double t2704;
  double t2707;
  double t2711;
  double t2713;
  double t2717;
  double t2721;
  double t2728;
  double t2730;
  double t2732;
  double t2734;
  double t2736;
  double t2738;
  double t2740;
  double t2742;
  double t2812;
  double t2757;
  double t2831;
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
  double t2832;
  t2629 = Cos(var1[3]);
  t2642 = Sin(var1[2]);
  t2644 = Cos(var1[2]);
  t2645 = Sin(var1[3]);
  t2640 = -1.*t2629;
  t2641 = 1. + t2640;
  t2643 = -0.4999*t2641*t2642;
  t2647 = 0.4999*t2644*t2645;
  t2649 = t2629*t2642;
  t2652 = t2644*t2645;
  t2655 = t2649 + t2652;
  t2656 = -0.4999*t2655;
  t2657 = t2644*t2629;
  t2660 = -1.*t2642*t2645;
  t2662 = t2657 + t2660;
  t2665 = 0.014739*t2662;
  t2666 = var1[0] + t2643 + t2647 + t2656 + t2665;
  t2745 = -0.4999*t2644*t2641;
  t2746 = -0.4999*t2642*t2645;
  t2747 = -1.*t2629*t2642;
  t2750 = -1.*t2644*t2645;
  t2752 = t2747 + t2750;
  t2754 = -0.4999*t2662;
  t2753 = 0.014739*t2752;
  t2756 = var1[1] + t2745 + t2746 + t2753 + t2754;
  t2811 = -0.9063*t2655;
  t2672 = 0.014845*t2662;
  t2681 = 0.013343*t2662;
  t2694 = 0.010394*t2662;
  t2698 = 0.006319*t2662;
  t2704 = 0.00156*t2662;
  t2707 = -0.003369*t2662;
  t2711 = -0.007932*t2662;
  t2713 = -0.011636*t2662;
  t2717 = -0.014079*t2662;
  t2721 = -0.014997*t2662;
  t2728 = -0.014289*t2662;
  t2730 = -0.012033*t2662;
  t2732 = -0.008472*t2662;
  t2734 = -0.003994*t2662;
  t2736 = 0.000917*t2662;
  t2738 = 0.005729*t2662;
  t2740 = 0.00992*t2662;
  t2742 = 0.013036*t2662;
  t2812 = var1[0] + t2643 + t2647 + t2811 + t2665;
  t2757 = 0.014845*t2752;
  t2831 = -0.9063*t2662;
  t2759 = 0.013343*t2752;
  t2766 = 0.010394*t2752;
  t2768 = 0.006319*t2752;
  t2770 = 0.00156*t2752;
  t2773 = -0.003369*t2752;
  t2775 = -0.007932*t2752;
  t2777 = -0.011636*t2752;
  t2779 = -0.014079*t2752;
  t2787 = -0.014997*t2752;
  t2790 = -0.014289*t2752;
  t2793 = -0.012033*t2752;
  t2797 = -0.008472*t2752;
  t2801 = -0.003994*t2752;
  t2803 = 0.000917*t2752;
  t2805 = 0.005729*t2752;
  t2807 = 0.00992*t2752;
  t2809 = 0.013036*t2752;
  t2832 = var1[1] + t2745 + t2746 + t2753 + t2831;
  p_output1[0]=t2666;
  p_output1[1]=t2643 + t2647 + t2656 + t2672 + var1[0];
  p_output1[2]=t2643 + t2647 + t2656 + t2681 + var1[0];
  p_output1[3]=t2643 + t2647 + t2656 + t2694 + var1[0];
  p_output1[4]=t2643 + t2647 + t2656 + t2698 + var1[0];
  p_output1[5]=t2643 + t2647 + t2656 + t2704 + var1[0];
  p_output1[6]=t2643 + t2647 + t2656 + t2707 + var1[0];
  p_output1[7]=t2643 + t2647 + t2656 + t2711 + var1[0];
  p_output1[8]=t2643 + t2647 + t2656 + t2713 + var1[0];
  p_output1[9]=t2643 + t2647 + t2656 + t2717 + var1[0];
  p_output1[10]=t2643 + t2647 + t2656 + t2721 + var1[0];
  p_output1[11]=t2643 + t2647 + t2656 + t2728 + var1[0];
  p_output1[12]=t2643 + t2647 + t2656 + t2730 + var1[0];
  p_output1[13]=t2643 + t2647 + t2656 + t2732 + var1[0];
  p_output1[14]=t2643 + t2647 + t2656 + t2734 + var1[0];
  p_output1[15]=t2643 + t2647 + t2656 + t2736 + var1[0];
  p_output1[16]=t2643 + t2647 + t2656 + t2738 + var1[0];
  p_output1[17]=t2643 + t2647 + t2656 + t2740 + var1[0];
  p_output1[18]=t2643 + t2647 + t2656 + t2742 + var1[0];
  p_output1[19]=t2666;
  p_output1[20]=0.002787;
  p_output1[21]=-0.00215;
  p_output1[22]=-0.006854;
  p_output1[23]=-0.010815;
  p_output1[24]=-0.013604;
  p_output1[25]=-0.014919;
  p_output1[26]=-0.014617;
  p_output1[27]=-0.012731;
  p_output1[28]=-0.009466;
  p_output1[29]=-0.005175;
  p_output1[30]=-0.000323;
  p_output1[31]=0.004564;
  p_output1[32]=0.008956;
  p_output1[33]=0.012378;
  p_output1[34]=0.014458;
  p_output1[35]=0.014972;
  p_output1[36]=0.013863;
  p_output1[37]=0.011252;
  p_output1[38]=0.007421;
  p_output1[39]=0.002787;
  p_output1[40]=t2756;
  p_output1[41]=t2745 + t2746 + t2754 + t2757 + var1[1];
  p_output1[42]=t2745 + t2746 + t2754 + t2759 + var1[1];
  p_output1[43]=t2745 + t2746 + t2754 + t2766 + var1[1];
  p_output1[44]=t2745 + t2746 + t2754 + t2768 + var1[1];
  p_output1[45]=t2745 + t2746 + t2754 + t2770 + var1[1];
  p_output1[46]=t2745 + t2746 + t2754 + t2773 + var1[1];
  p_output1[47]=t2745 + t2746 + t2754 + t2775 + var1[1];
  p_output1[48]=t2745 + t2746 + t2754 + t2777 + var1[1];
  p_output1[49]=t2745 + t2746 + t2754 + t2779 + var1[1];
  p_output1[50]=t2745 + t2746 + t2754 + t2787 + var1[1];
  p_output1[51]=t2745 + t2746 + t2754 + t2790 + var1[1];
  p_output1[52]=t2745 + t2746 + t2754 + t2793 + var1[1];
  p_output1[53]=t2745 + t2746 + t2754 + t2797 + var1[1];
  p_output1[54]=t2745 + t2746 + t2754 + t2801 + var1[1];
  p_output1[55]=t2745 + t2746 + t2754 + t2803 + var1[1];
  p_output1[56]=t2745 + t2746 + t2754 + t2805 + var1[1];
  p_output1[57]=t2745 + t2746 + t2754 + t2807 + var1[1];
  p_output1[58]=t2745 + t2746 + t2754 + t2809 + var1[1];
  p_output1[59]=t2756;
  p_output1[60]=t2812;
  p_output1[61]=t2643 + t2647 + t2672 + t2811 + var1[0];
  p_output1[62]=t2643 + t2647 + t2681 + t2811 + var1[0];
  p_output1[63]=t2643 + t2647 + t2694 + t2811 + var1[0];
  p_output1[64]=t2643 + t2647 + t2698 + t2811 + var1[0];
  p_output1[65]=t2643 + t2647 + t2704 + t2811 + var1[0];
  p_output1[66]=t2643 + t2647 + t2707 + t2811 + var1[0];
  p_output1[67]=t2643 + t2647 + t2711 + t2811 + var1[0];
  p_output1[68]=t2643 + t2647 + t2713 + t2811 + var1[0];
  p_output1[69]=t2643 + t2647 + t2717 + t2811 + var1[0];
  p_output1[70]=t2643 + t2647 + t2721 + t2811 + var1[0];
  p_output1[71]=t2643 + t2647 + t2728 + t2811 + var1[0];
  p_output1[72]=t2643 + t2647 + t2730 + t2811 + var1[0];
  p_output1[73]=t2643 + t2647 + t2732 + t2811 + var1[0];
  p_output1[74]=t2643 + t2647 + t2734 + t2811 + var1[0];
  p_output1[75]=t2643 + t2647 + t2736 + t2811 + var1[0];
  p_output1[76]=t2643 + t2647 + t2738 + t2811 + var1[0];
  p_output1[77]=t2643 + t2647 + t2740 + t2811 + var1[0];
  p_output1[78]=t2643 + t2647 + t2742 + t2811 + var1[0];
  p_output1[79]=t2812;
  p_output1[80]=0.002787;
  p_output1[81]=-0.00215;
  p_output1[82]=-0.006854;
  p_output1[83]=-0.010815;
  p_output1[84]=-0.013604;
  p_output1[85]=-0.014919;
  p_output1[86]=-0.014617;
  p_output1[87]=-0.012731;
  p_output1[88]=-0.009466;
  p_output1[89]=-0.005175;
  p_output1[90]=-0.000323;
  p_output1[91]=0.004564;
  p_output1[92]=0.008956;
  p_output1[93]=0.012378;
  p_output1[94]=0.014458;
  p_output1[95]=0.014972;
  p_output1[96]=0.013863;
  p_output1[97]=0.011252;
  p_output1[98]=0.007421;
  p_output1[99]=0.002787;
  p_output1[100]=t2832;
  p_output1[101]=t2745 + t2746 + t2757 + t2831 + var1[1];
  p_output1[102]=t2745 + t2746 + t2759 + t2831 + var1[1];
  p_output1[103]=t2745 + t2746 + t2766 + t2831 + var1[1];
  p_output1[104]=t2745 + t2746 + t2768 + t2831 + var1[1];
  p_output1[105]=t2745 + t2746 + t2770 + t2831 + var1[1];
  p_output1[106]=t2745 + t2746 + t2773 + t2831 + var1[1];
  p_output1[107]=t2745 + t2746 + t2775 + t2831 + var1[1];
  p_output1[108]=t2745 + t2746 + t2777 + t2831 + var1[1];
  p_output1[109]=t2745 + t2746 + t2779 + t2831 + var1[1];
  p_output1[110]=t2745 + t2746 + t2787 + t2831 + var1[1];
  p_output1[111]=t2745 + t2746 + t2790 + t2831 + var1[1];
  p_output1[112]=t2745 + t2746 + t2793 + t2831 + var1[1];
  p_output1[113]=t2745 + t2746 + t2797 + t2831 + var1[1];
  p_output1[114]=t2745 + t2746 + t2801 + t2831 + var1[1];
  p_output1[115]=t2745 + t2746 + t2803 + t2831 + var1[1];
  p_output1[116]=t2745 + t2746 + t2805 + t2831 + var1[1];
  p_output1[117]=t2745 + t2746 + t2807 + t2831 + var1[1];
  p_output1[118]=t2745 + t2746 + t2809 + t2831 + var1[1];
  p_output1[119]=t2832;
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

#include "Link_LeftThigh_to_LeftKnee_bar.hh"

namespace SymFunction
{

void Link_LeftThigh_to_LeftKnee_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
