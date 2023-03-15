/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:35:08 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t788;
  double t534;
  double t608;
  double t945;
  double t2893;
  double t3970;
  double t4073;
  double t649;
  double t959;
  double t1403;
  double t4407;
  double t4420;
  double t4440;
  double t4441;
  double t4455;
  double t4346;
  double t4347;
  double t4349;
  double t4153;
  double t4457;
  double t4484;
  double t4495;
  double t4617;
  double t4628;
  double t4648;
  double t4675;
  double t4742;
  double t4746;
  double t4747;
  double t4750;
  double t4754;
  double t4765;
  double t4818;
  double t4825;
  double t4837;
  double t4840;
  double t4849;
  double t4860;
  double t4862;
  double t4887;
  double t4890;
  double t4982;
  double t4992;
  double t5000;
  double t5013;
  double t5021;
  double t5024;
  double t5038;
  double t5043;
  double t5054;
  double t5063;
  double t1574;
  double t4357;
  double t4376;
  double t4387;
  double t4304;
  double t5322;
  double t5325;
  double t5329;
  double t5332;
  double t5335;
  double t5133;
  double t5135;
  double t5138;
  double t5336;
  double t5105;
  double t5106;
  double t5109;
  double t5340;
  double t5207;
  double t5211;
  double t5224;
  double t5082;
  double t4512;
  double t4680;
  double t4703;
  double t5295;
  double t5296;
  double t5306;
  double t5344;
  double t5111;
  double t5140;
  double t5157;
  double t5360;
  double t5367;
  double t5403;
  double t5236;
  double t5262;
  double t5266;
  double t5426;
  double t5432;
  double t4710;
  double t5309;
  double t5435;
  double t5440;
  double t5521;
  double t5530;
  double t5280;
  double t5420;
  double t5496;
  double t5501;
  t788 = Cos(var2[2]);
  t534 = Cos(var2[3]);
  t608 = Sin(var2[2]);
  t945 = Sin(var2[3]);
  t2893 = t788*t534;
  t3970 = -1.*t608*t945;
  t4073 = t2893 + t3970;
  t649 = t534*t608;
  t959 = t788*t945;
  t1403 = t649 + t959;
  t4407 = -1.*t534;
  t4420 = 1. + t4407;
  t4440 = -0.4999*t4420;
  t4441 = -0.6493*t534;
  t4455 = t4440 + t4441;
  t4346 = -1.*t534*t608;
  t4347 = -1.*t788*t945;
  t4349 = t4346 + t4347;
  t4153 = Power(t4073,2);
  t4457 = t4455*t945;
  t4484 = 0.14939999999999998*t534*t945;
  t4495 = t4457 + t4484;
  t4617 = t4455*t534;
  t4628 = Power(t945,2);
  t4648 = -0.14939999999999998*t4628;
  t4675 = t4617 + t4648;
  t4742 = -1.*var1[5];
  t4746 = var3[3] + t4742;
  t4747 = -0.5118593399999999*t4746*t4349;
  t4750 = -1.*var1[0];
  t4754 = var3[0] + t4750;
  t4765 = 6.8522*t4349*t4073;
  t4818 = 6.8522*t1403*t4073;
  t4825 = t4765 + t4818;
  t4837 = t4754*t4825;
  t4840 = -1.*var1[1];
  t4849 = var3[1] + t4840;
  t4860 = Power(t4349,2);
  t4862 = 3.4261*t4860;
  t4887 = 3.4261*t4349*t1403;
  t4890 = 3.4261*t4153;
  t4982 = -1.*t788*t534;
  t4992 = t608*t945;
  t5000 = t4982 + t4992;
  t5013 = 3.4261*t4073*t5000;
  t5021 = t4862 + t4887 + t4890 + t5013;
  t5024 = t4849*t5021;
  t5038 = -1.*var1[2];
  t5043 = var3[2] + t5038;
  t5054 = 3.4261*t4495*t4073;
  t5063 = 3.4261*t4349*t4675;
  t1574 = Power(t1403,2);
  t4357 = -3.4261*t4349*t4073;
  t4376 = -3.4261*t1403*t4073;
  t4387 = t4357 + t4376;
  t4304 = -3.4261*t4153;
  t5322 = -0.5118593399999999*t4746*t5000;
  t5325 = 6.8522*t4349*t5000;
  t5329 = t4765 + t5325;
  t5332 = t4849*t5329;
  t5335 = t4754*t5021;
  t5133 = -1.*t4455*t945;
  t5135 = -0.14939999999999998*t534*t945;
  t5138 = t5133 + t5135;
  t5336 = 3.4261*t4349*t4495;
  t5105 = Power(t534,2);
  t5106 = 0.14939999999999998*t5105;
  t5109 = 0. + t4617 + t5106;
  t5340 = 3.4261*t5000*t4675;
  t5207 = 3.4261*t4349*t4073;
  t5211 = 3.4261*t1403*t4073;
  t5224 = t5207 + t5211;
  t5082 = t5054 + t5063;
  t4512 = -3.4261*t1403*t4495;
  t4680 = -3.4261*t4073*t4675;
  t4703 = t4512 + t4680;
  t5295 = -3.4261*t4495*t4073;
  t5296 = -3.4261*t4349*t4675;
  t5306 = t5295 + t5296;
  t5344 = t5336 + t5340;
  t5111 = 3.4261*t5109*t1403;
  t5140 = 3.4261*t5138*t4073;
  t5157 = t5111 + t5140 + t5054 + t5063;
  t5360 = 3.4261*t4349*t5138;
  t5367 = 3.4261*t5109*t4073;
  t5403 = t5360 + t5336 + t5367 + t5340;
  t5236 = 3.4261*t1403*t4495;
  t5262 = 3.4261*t4073*t4675;
  t5266 = t5236 + t5262;
  t5426 = Power(t4495,2);
  t5432 = Power(t4675,2);
  t4710 = 0.5118593399999999*t4073;
  t5309 = 0.5118593399999999*t4349;
  t5435 = 0.5118593399999999*t4675;
  t5440 = -0.0389 + t5435;
  t5521 = -0.5118593399999999*t4754*t4349;
  t5530 = -0.5118593399999999*t4849*t5000;
  t5280 = -0.5118593399999999*t4073;
  t5420 = -0.5118593399999999*t4349;
  t5496 = -0.5118593399999999*t4675;
  t5501 = 0.0389 + t5496;
  p_output1[0]=-3.4261*t1574 + t4304;
  p_output1[1]=t4387;
  p_output1[2]=t4703;
  p_output1[3]=t4710;
  p_output1[4]=t4747 + t4837 + t5024 + t5043*t5082;
  p_output1[5]=t4747 + t4837 + t5024 + t5043*t5157;
  p_output1[6]=3.4261*t1574 + t4890;
  p_output1[7]=t5224;
  p_output1[8]=t5266;
  p_output1[9]=t5280;
  p_output1[10]=t4387;
  p_output1[11]=t4304 - 3.4261*t4860;
  p_output1[12]=t5306;
  p_output1[13]=t5309;
  p_output1[14]=t5322 + t5332 + t5335 + t5043*t5344;
  p_output1[15]=t5322 + t5332 + t5335 + t5043*t5403;
  p_output1[16]=t5224;
  p_output1[17]=t4862 + t4890;
  p_output1[18]=t5082;
  p_output1[19]=t5420;
  p_output1[20]=t4703;
  p_output1[21]=t5306;
  p_output1[22]=-0.0389 - 3.4261*t5426 - 3.4261*t5432;
  p_output1[23]=t5440;
  p_output1[24]=t4754*t5082 + t4849*t5344;
  p_output1[25]=-0.5118593399999999*t4746*t5138 + t5043*(6.8522*t4495*t5109 + 6.8522*t4675*t5138) + t4754*t5157 + t4849*t5403;
  p_output1[26]=t5266;
  p_output1[27]=t5082;
  p_output1[28]=0.0389 + 3.4261*t5426 + 3.4261*t5432;
  p_output1[29]=t5501;
  p_output1[30]=t4710;
  p_output1[31]=t5309;
  p_output1[32]=t5440;
  p_output1[33]=-0.11537178539599996;
  p_output1[34]=t5521 + t5530;
  p_output1[35]=-0.5118593399999999*t5043*t5138 + t5521 + t5530;
  p_output1[36]=t5280;
  p_output1[37]=t5420;
  p_output1[38]=t5501;
  p_output1[39]=0.11537178539599996;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMap2_LeftImpactRelabel.hh"

namespace LeftImpactRelabel
{

void J_dxDiscreteMap2_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
