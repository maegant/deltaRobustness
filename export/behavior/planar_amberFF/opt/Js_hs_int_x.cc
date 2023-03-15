/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:05 GMT-08:00
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
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=2;
  p_output1[8]=2;
  p_output1[9]=2;
  p_output1[10]=2;
  p_output1[11]=2;
  p_output1[12]=2;
  p_output1[13]=2;
  p_output1[14]=3;
  p_output1[15]=3;
  p_output1[16]=3;
  p_output1[17]=3;
  p_output1[18]=3;
  p_output1[19]=3;
  p_output1[20]=3;
  p_output1[21]=4;
  p_output1[22]=4;
  p_output1[23]=4;
  p_output1[24]=4;
  p_output1[25]=4;
  p_output1[26]=4;
  p_output1[27]=4;
  p_output1[28]=5;
  p_output1[29]=5;
  p_output1[30]=5;
  p_output1[31]=5;
  p_output1[32]=5;
  p_output1[33]=5;
  p_output1[34]=5;
  p_output1[35]=6;
  p_output1[36]=6;
  p_output1[37]=6;
  p_output1[38]=6;
  p_output1[39]=6;
  p_output1[40]=6;
  p_output1[41]=6;
  p_output1[42]=7;
  p_output1[43]=7;
  p_output1[44]=7;
  p_output1[45]=7;
  p_output1[46]=7;
  p_output1[47]=7;
  p_output1[48]=7;
  p_output1[49]=8;
  p_output1[50]=8;
  p_output1[51]=8;
  p_output1[52]=8;
  p_output1[53]=8;
  p_output1[54]=8;
  p_output1[55]=8;
  p_output1[56]=9;
  p_output1[57]=9;
  p_output1[58]=9;
  p_output1[59]=9;
  p_output1[60]=9;
  p_output1[61]=9;
  p_output1[62]=9;
  p_output1[63]=10;
  p_output1[64]=10;
  p_output1[65]=10;
  p_output1[66]=10;
  p_output1[67]=10;
  p_output1[68]=10;
  p_output1[69]=10;
  p_output1[70]=11;
  p_output1[71]=11;
  p_output1[72]=11;
  p_output1[73]=11;
  p_output1[74]=11;
  p_output1[75]=11;
  p_output1[76]=11;
  p_output1[77]=12;
  p_output1[78]=12;
  p_output1[79]=12;
  p_output1[80]=12;
  p_output1[81]=12;
  p_output1[82]=12;
  p_output1[83]=12;
  p_output1[84]=13;
  p_output1[85]=13;
  p_output1[86]=13;
  p_output1[87]=13;
  p_output1[88]=13;
  p_output1[89]=13;
  p_output1[90]=13;
  p_output1[91]=14;
  p_output1[92]=14;
  p_output1[93]=14;
  p_output1[94]=14;
  p_output1[95]=14;
  p_output1[96]=14;
  p_output1[97]=14;
  p_output1[98]=15;
  p_output1[99]=15;
  p_output1[100]=15;
  p_output1[101]=15;
  p_output1[102]=15;
  p_output1[103]=15;
  p_output1[104]=15;
  p_output1[105]=16;
  p_output1[106]=16;
  p_output1[107]=16;
  p_output1[108]=16;
  p_output1[109]=16;
  p_output1[110]=16;
  p_output1[111]=16;
  p_output1[112]=17;
  p_output1[113]=17;
  p_output1[114]=17;
  p_output1[115]=17;
  p_output1[116]=17;
  p_output1[117]=17;
  p_output1[118]=17;
  p_output1[119]=18;
  p_output1[120]=18;
  p_output1[121]=18;
  p_output1[122]=18;
  p_output1[123]=18;
  p_output1[124]=18;
  p_output1[125]=18;
  p_output1[126]=1;
  p_output1[127]=2;
  p_output1[128]=3;
  p_output1[129]=12;
  p_output1[130]=30;
  p_output1[131]=39;
  p_output1[132]=48;
  p_output1[133]=1;
  p_output1[134]=2;
  p_output1[135]=4;
  p_output1[136]=13;
  p_output1[137]=31;
  p_output1[138]=40;
  p_output1[139]=49;
  p_output1[140]=1;
  p_output1[141]=2;
  p_output1[142]=5;
  p_output1[143]=14;
  p_output1[144]=32;
  p_output1[145]=41;
  p_output1[146]=50;
  p_output1[147]=1;
  p_output1[148]=2;
  p_output1[149]=6;
  p_output1[150]=15;
  p_output1[151]=33;
  p_output1[152]=42;
  p_output1[153]=51;
  p_output1[154]=1;
  p_output1[155]=2;
  p_output1[156]=7;
  p_output1[157]=16;
  p_output1[158]=34;
  p_output1[159]=43;
  p_output1[160]=52;
  p_output1[161]=1;
  p_output1[162]=2;
  p_output1[163]=8;
  p_output1[164]=17;
  p_output1[165]=35;
  p_output1[166]=44;
  p_output1[167]=53;
  p_output1[168]=1;
  p_output1[169]=2;
  p_output1[170]=9;
  p_output1[171]=18;
  p_output1[172]=36;
  p_output1[173]=45;
  p_output1[174]=54;
  p_output1[175]=1;
  p_output1[176]=2;
  p_output1[177]=10;
  p_output1[178]=19;
  p_output1[179]=37;
  p_output1[180]=46;
  p_output1[181]=55;
  p_output1[182]=1;
  p_output1[183]=2;
  p_output1[184]=11;
  p_output1[185]=20;
  p_output1[186]=38;
  p_output1[187]=47;
  p_output1[188]=56;
  p_output1[189]=1;
  p_output1[190]=2;
  p_output1[191]=3;
  p_output1[192]=12;
  p_output1[193]=21;
  p_output1[194]=39;
  p_output1[195]=48;
  p_output1[196]=1;
  p_output1[197]=2;
  p_output1[198]=4;
  p_output1[199]=13;
  p_output1[200]=22;
  p_output1[201]=40;
  p_output1[202]=49;
  p_output1[203]=1;
  p_output1[204]=2;
  p_output1[205]=5;
  p_output1[206]=14;
  p_output1[207]=23;
  p_output1[208]=41;
  p_output1[209]=50;
  p_output1[210]=1;
  p_output1[211]=2;
  p_output1[212]=6;
  p_output1[213]=15;
  p_output1[214]=24;
  p_output1[215]=42;
  p_output1[216]=51;
  p_output1[217]=1;
  p_output1[218]=2;
  p_output1[219]=7;
  p_output1[220]=16;
  p_output1[221]=25;
  p_output1[222]=43;
  p_output1[223]=52;
  p_output1[224]=1;
  p_output1[225]=2;
  p_output1[226]=8;
  p_output1[227]=17;
  p_output1[228]=26;
  p_output1[229]=44;
  p_output1[230]=53;
  p_output1[231]=1;
  p_output1[232]=2;
  p_output1[233]=9;
  p_output1[234]=18;
  p_output1[235]=27;
  p_output1[236]=45;
  p_output1[237]=54;
  p_output1[238]=1;
  p_output1[239]=2;
  p_output1[240]=10;
  p_output1[241]=19;
  p_output1[242]=28;
  p_output1[243]=46;
  p_output1[244]=55;
  p_output1[245]=1;
  p_output1[246]=2;
  p_output1[247]=11;
  p_output1[248]=20;
  p_output1[249]=29;
  p_output1[250]=47;
  p_output1[251]=56;
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 126, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_hs_int_x.hh"

namespace RightSS2
{

void Js_hs_int_x_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
