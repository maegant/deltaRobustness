/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:50 GMT-08:00
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
  double t1721;
  double t917;
  double t1273;
  double t1844;
  double t2971;
  double t324;
  double t2998;
  double t3019;
  double t3047;
  double t1670;
  double t2386;
  double t2643;
  double t2901;
  double t3102;
  double t3541;
  double t3969;
  double t3974;
  double t3978;
  double t4003;
  double t4236;
  double t4304;
  double t4967;
  double t5002;
  double t5003;
  double t5007;
  double t5136;
  double t4944;
  double t5196;
  double t5210;
  double t5220;
  double t5307;
  double t5346;
  double t5410;
  double t5459;
  double t5509;
  double t5571;
  double t4539;
  double t4544;
  double t4747;
  double t6160;
  double t6162;
  double t6167;
  double t6177;
  double t4815;
  double t4859;
  double t5820;
  double t5861;
  double t5979;
  double t6031;
  double t6049;
  double t5233;
  double t5579;
  double t5644;
  double t5672;
  double t5697;
  double t5725;
  double t6318;
  double t6362;
  double t6374;
  double t6376;
  double t6638;
  double t6639;
  double t6642;
  double t6644;
  double t6649;
  double t6410;
  double t6419;
  double t6473;
  double t6474;
  double t6477;
  double t6600;
  double t6616;
  double t6792;
  double t6800;
  double t6804;
  double t6812;
  double t6833;
  double t6839;
  double t6661;
  double t6666;
  double t6671;
  double t6688;
  double t6692;
  double t6700;
  double t6718;
  double t6722;
  double t6725;
  double t6739;
  double t6751;
  double t6755;
  double t6760;
  double t6768;
  double t6783;
  double t6784;
  double t6788;
  double t6826;
  double t6888;
  double t6899;
  double t7045;
  double t7048;
  double t7057;
  double t7067;
  double t6934;
  double t3597;
  double t4307;
  double t4750;
  double t4886;
  double t4892;
  double t6555;
  double t6570;
  double t6525;
  double t6527;
  double t6578;
  double t6583;
  double t6553;
  double t6564;
  double t6574;
  double t6590;
  double t6593;
  double t6813;
  double t6840;
  double t6860;
  double t6908;
  double t6929;
  double t6944;
  double t7490;
  double t6994;
  double t7016;
  double t7027;
  double t6963;
  double t6967;
  double t6982;
  double t6985;
  double t7491;
  double t7496;
  double t7516;
  double t7518;
  double t7530;
  double t7535;
  double t7541;
  double t7544;
  double t7055;
  double t7074;
  double t7084;
  double t7548;
  double t7094;
  double t7098;
  double t7099;
  double t7190;
  double t7192;
  double t7204;
  double t6620;
  double t6621;
  double t6633;
  double t6395;
  double t6402;
  double t6405;
  double t5661;
  double t5741;
  double t5808;
  double t7266;
  double t7286;
  double t7291;
  double t7398;
  double t7399;
  double t7408;
  double t7547;
  double t7552;
  double t7553;
  double t6865;
  double t6948;
  double t6953;
  double t7578;
  double t7581;
  double t7582;
  double t7086;
  double t7105;
  double t7117;
  double t7211;
  double t7213;
  double t7218;
  double t7598;
  double t7601;
  double t6137;
  double t6188;
  double t6202;
  double t7292;
  double t7297;
  double t7300;
  double t7613;
  double t7614;
  double t7615;
  double t7316;
  double t7319;
  double t7322;
  double t7497;
  double t6675;
  double t7640;
  double t7641;
  double t7644;
  double t7568;
  double t7570;
  double t7571;
  double t6990;
  double t7040;
  double t7043;
  double t7683;
  double t7689;
  double t7692;
  double t7693;
  double t7704;
  double t7219;
  double t7225;
  double t7241;
  double t7720;
  double t7721;
  double t7722;
  double t7729;
  double t7734;
  double t6317;
  double t7303;
  double t7617;
  double t7618;
  double t7737;
  double t7739;
  double t7781;
  double t7782;
  double t7244;
  double t7594;
  double t7723;
  double t7726;
  double t7774;
  double t7775;
  t1721 = Cos(var2[3]);
  t917 = Cos(var2[4]);
  t1273 = Sin(var2[3]);
  t1844 = Sin(var2[4]);
  t2971 = Cos(var2[2]);
  t324 = Sin(var2[2]);
  t2998 = t1721*t917;
  t3019 = -1.*t1273*t1844;
  t3047 = t2998 + t3019;
  t1670 = -1.*t917*t1273;
  t2386 = -1.*t1721*t1844;
  t2643 = t1670 + t2386;
  t2901 = t324*t2643;
  t3102 = t2971*t3047;
  t3541 = t2901 + t3102;
  t3969 = t917*t1273;
  t3974 = t1721*t1844;
  t3978 = t3969 + t3974;
  t4003 = t2971*t3978;
  t4236 = t324*t3047;
  t4304 = t4003 + t4236;
  t4967 = -1.*t917;
  t5002 = 1. + t4967;
  t5003 = -0.9063*t5002;
  t5007 = -1.0567*t917;
  t5136 = t5003 + t5007;
  t4944 = 0.4999*t1273;
  t5196 = t5136*t1273;
  t5210 = -0.15039999999999998*t1721*t1844;
  t5220 = t4944 + t5196 + t5210;
  t5307 = -1.*t1721;
  t5346 = 1. + t5307;
  t5410 = -0.4999*t5346;
  t5459 = t1721*t5136;
  t5509 = 0.15039999999999998*t1273*t1844;
  t5571 = t5410 + t5459 + t5509;
  t4539 = t2971*t2643;
  t4544 = -1.*t324*t3047;
  t4747 = t4539 + t4544;
  t6160 = 0.4999*t1844;
  t6162 = t5136*t1844;
  t6167 = 0.15039999999999998*t917*t1844;
  t6177 = t6160 + t6162 + t6167;
  t4815 = -1.*t324*t3978;
  t4859 = t4815 + t3102;
  t5820 = 0.4999*t917;
  t5861 = t5136*t917;
  t5979 = Power(t1844,2);
  t6031 = -0.15039999999999998*t5979;
  t6049 = t5820 + t5861 + t6031;
  t5233 = -1.*t5220*t3047;
  t5579 = -1.*t2643*t5571;
  t5644 = t5233 + t5579;
  t5672 = t5220*t3978;
  t5697 = t3047*t5571;
  t5725 = t5672 + t5697;
  t6318 = -1.*var1[7];
  t6362 = var3[4] + t6318;
  t6374 = -1.*var1[6];
  t6376 = var3[3] + t6374;
  t6638 = -1.*t1721*t917;
  t6639 = t1273*t1844;
  t6642 = t6638 + t6639;
  t6644 = t324*t6642;
  t6649 = t4539 + t6644;
  t6410 = -1.*var1[0];
  t6419 = var3[0] + t6410;
  t6473 = -1.*var1[1];
  t6474 = var3[1] + t6473;
  t6477 = -1.*t324*t2643;
  t6600 = -1.*var1[2];
  t6616 = var3[2] + t6600;
  t6792 = -0.4999*t1273;
  t6800 = -1.*t5136*t1273;
  t6804 = 0.15039999999999998*t1721*t1844;
  t6812 = t6792 + t6800 + t6804;
  t6833 = 0.4999*t1721;
  t6839 = t6833 + t5459 + t5509;
  t6661 = -0.5399209599999999*t6362*t6649;
  t6666 = 3.5899*t6177*t3541;
  t6671 = 3.5899*t6049*t6649;
  t6688 = 7.1798*t3541*t4304;
  t6692 = 7.1798*t3541*t6649;
  t6700 = t6688 + t6692;
  t6718 = t6419*t6700;
  t6722 = 3.5899*t3541*t4859;
  t6725 = 3.5899*t4747*t4304;
  t6739 = t2971*t6642;
  t6751 = t6477 + t6739;
  t6755 = 3.5899*t3541*t6751;
  t6760 = 3.5899*t4747*t6649;
  t6768 = t6722 + t6725 + t6755 + t6760;
  t6783 = t6474*t6768;
  t6784 = 3.5899*t3541*t5644;
  t6788 = t5220*t3047;
  t6826 = t2643*t5571;
  t6888 = 3.5899*t5725*t6649;
  t6899 = -1.*t2643*t5220;
  t7045 = 0.15039999999999998*t917*t1273;
  t7048 = t7045 + t6804;
  t7057 = -0.15039999999999998*t1721*t917;
  t7067 = t7057 + t5509;
  t6934 = -1.*t5571*t6642;
  t3597 = Power(t3541,2);
  t4307 = Power(t4304,2);
  t4750 = -3.5899*t3541*t4747;
  t4886 = -3.5899*t4859*t4304;
  t4892 = t4750 + t4886;
  t6555 = Power(t4859,2);
  t6570 = Power(t4747,2);
  t6525 = -1.*t2971*t3047;
  t6527 = t6477 + t6525;
  t6578 = -1.*t2971*t3978;
  t6583 = t6578 + t4544;
  t6553 = 3.5899*t6527*t3541;
  t6564 = 3.5899*t6555;
  t6574 = 3.5899*t6570;
  t6590 = 3.5899*t6583*t4304;
  t6593 = t6553 + t6564 + t6574 + t6590;
  t6813 = t6812*t3047;
  t6840 = t3978*t6839;
  t6860 = t6788 + t6813 + t6826 + t6840;
  t6908 = -1.*t2643*t6812;
  t6929 = -1.*t3047*t6839;
  t6944 = t6899 + t6908 + t6929 + t6934;
  t7490 = -0.5399209599999999*t6362*t6751;
  t6994 = Power(t917,2);
  t7016 = 0.15039999999999998*t6994;
  t7027 = 0. + t5820 + t5861 + t7016;
  t6963 = -0.4999*t1844;
  t6967 = -1.*t5136*t1844;
  t6982 = -0.15039999999999998*t917*t1844;
  t6985 = t6963 + t6967 + t6982;
  t7491 = 3.5899*t6177*t4747;
  t7496 = 3.5899*t6049*t6751;
  t7516 = 7.1798*t4859*t4747;
  t7518 = 7.1798*t4747*t6751;
  t7530 = t7516 + t7518;
  t7535 = t6474*t7530;
  t7541 = t6419*t6768;
  t7544 = 3.5899*t4747*t5644;
  t7055 = t7048*t3047;
  t7074 = t3978*t7067;
  t7084 = t6788 + t7055 + t6826 + t7074;
  t7548 = 3.5899*t5725*t6751;
  t7094 = -1.*t2643*t7048;
  t7098 = -1.*t3047*t7067;
  t7099 = t6899 + t7094 + t7098 + t6934;
  t7190 = 3.5899*t3541*t4747;
  t7192 = 3.5899*t4859*t4304;
  t7204 = t7190 + t7192;
  t6620 = 3.5899*t4859*t5644;
  t6621 = 3.5899*t4747*t5725;
  t6633 = t6620 + t6621;
  t6395 = 3.5899*t6177*t4859;
  t6402 = 3.5899*t6049*t4747;
  t6405 = t6395 + t6402;
  t5661 = -3.5899*t4304*t5644;
  t5741 = -3.5899*t3541*t5725;
  t5808 = t5661 + t5741;
  t7266 = -3.5899*t4859*t5644;
  t7286 = -3.5899*t4747*t5725;
  t7291 = t7266 + t7286;
  t7398 = 3.5899*t6583*t5644;
  t7399 = 3.5899*t6527*t5725;
  t7408 = t7398 + t7399;
  t7547 = 3.5899*t4747*t6860;
  t7552 = 3.5899*t4859*t6944;
  t7553 = t7544 + t7547 + t7548 + t7552;
  t6865 = 3.5899*t3541*t6860;
  t6948 = 3.5899*t4304*t6944;
  t6953 = t6784 + t6865 + t6888 + t6948;
  t7578 = 3.5899*t4747*t7084;
  t7581 = 3.5899*t4859*t7099;
  t7582 = t7544 + t7578 + t7548 + t7581;
  t7086 = 3.5899*t3541*t7084;
  t7105 = 3.5899*t4304*t7099;
  t7117 = t6784 + t7086 + t6888 + t7105;
  t7211 = 3.5899*t4304*t5644;
  t7213 = 3.5899*t3541*t5725;
  t7218 = t7211 + t7213;
  t7598 = Power(t5644,2);
  t7601 = Power(t5725,2);
  t6137 = -3.5899*t6049*t3541;
  t6188 = -3.5899*t6177*t4304;
  t6202 = t6137 + t6188;
  t7292 = -3.5899*t6177*t4859;
  t7297 = -3.5899*t6049*t4747;
  t7300 = t7292 + t7297;
  t7613 = -3.5899*t6177*t5644;
  t7614 = -3.5899*t6049*t5725;
  t7615 = -0.0378 + t7613 + t7614;
  t7316 = 3.5899*t6049*t6527;
  t7319 = 3.5899*t6177*t6583;
  t7322 = t7316 + t7319;
  t7497 = t7491 + t7496;
  t6675 = t6666 + t6671;
  t7640 = 3.5899*t6049*t6860;
  t7641 = 3.5899*t6177*t6944;
  t7644 = t7640 + t7641;
  t7568 = 3.5899*t7027*t4859;
  t7570 = 3.5899*t6985*t4747;
  t7571 = t7568 + t7570 + t7491 + t7496;
  t6990 = 3.5899*t6985*t3541;
  t7040 = 3.5899*t7027*t4304;
  t7043 = t6990 + t6666 + t7040 + t6671;
  t7683 = 3.5899*t7027*t5644;
  t7689 = 3.5899*t6985*t5725;
  t7692 = 3.5899*t6049*t7084;
  t7693 = 3.5899*t6177*t7099;
  t7704 = t7683 + t7689 + t7692 + t7693;
  t7219 = 3.5899*t6049*t3541;
  t7225 = 3.5899*t6177*t4304;
  t7241 = t7219 + t7225;
  t7720 = 3.5899*t6177*t5644;
  t7721 = 3.5899*t6049*t5725;
  t7722 = 0.0378 + t7720 + t7721;
  t7729 = Power(t6177,2);
  t7734 = Power(t6049,2);
  t6317 = 0.5399209599999999*t3541;
  t7303 = 0.5399209599999999*t4747;
  t7617 = 0.5399209599999999*t5725;
  t7618 = -0.0378 + t7617;
  t7737 = 0.5399209599999999*t6049;
  t7739 = -0.0378 + t7737;
  t7781 = -0.5399209599999999*t6474*t6751;
  t7782 = -0.5399209599999999*t6419*t6649;
  t7244 = -0.5399209599999999*t3541;
  t7594 = -0.5399209599999999*t4747;
  t7723 = -0.5399209599999999*t5725;
  t7726 = 0.0378 + t7723;
  t7774 = -0.5399209599999999*t6049;
  t7775 = 0.0378 + t7774;
  p_output1[0]=-3.5899*t3597 - 3.5899*t4307;
  p_output1[1]=t4892;
  p_output1[2]=t5808;
  p_output1[3]=t6202;
  p_output1[4]=t6317;
  p_output1[5]=-0.5399209599999999*t4747*t6362 + t6376*t6405 + (7.1798*t3541*t4747 + 7.1798*t4304*t4859)*t6419 + t6474*t6593 + t6616*t6633;
  p_output1[6]=t6661 + t6376*t6675 + t6718 + t6783 + t6616*t6953;
  p_output1[7]=t6661 + t6718 + t6783 + t6376*t7043 + t6616*t7117;
  p_output1[8]=3.5899*t3597 + 3.5899*t4307;
  p_output1[9]=t7204;
  p_output1[10]=t7218;
  p_output1[11]=t7241;
  p_output1[12]=t7244;
  p_output1[13]=t4892;
  p_output1[14]=-3.5899*t6555 - 3.5899*t6570;
  p_output1[15]=t7291;
  p_output1[16]=t7300;
  p_output1[17]=t7303;
  p_output1[18]=-0.5399209599999999*t6362*t6527 + t6474*(7.1798*t4747*t6527 + 7.1798*t4859*t6583) + t6419*t6593 + t6376*t7322 + t6616*t7408;
  p_output1[19]=t7490 + t6376*t7497 + t7535 + t7541 + t6616*t7553;
  p_output1[20]=t7490 + t7535 + t7541 + t6376*t7571 + t6616*t7582;
  p_output1[21]=t7204;
  p_output1[22]=t6564 + t6574;
  p_output1[23]=t6633;
  p_output1[24]=t6405;
  p_output1[25]=t7594;
  p_output1[26]=t5808;
  p_output1[27]=t7291;
  p_output1[28]=-0.0378 - 3.5899*t7598 - 3.5899*t7601;
  p_output1[29]=t7615;
  p_output1[30]=t7618;
  p_output1[31]=t6419*t6633 + t6474*t7408;
  p_output1[32]=-0.5399209599999999*t6362*t6860 + t6616*(7.1798*t5725*t6860 + 7.1798*t5644*t6944) + t6419*t6953 + t6474*t7553 + t6376*t7644;
  p_output1[33]=-0.5399209599999999*t6362*t7084 + t6616*(7.1798*t5725*t7084 + 7.1798*t5644*t7099) + t6419*t7117 + t6474*t7582 + t6376*t7704;
  p_output1[34]=t7218;
  p_output1[35]=t6633;
  p_output1[36]=0.0378 + 3.5899*t7598 + 3.5899*t7601;
  p_output1[37]=t7722;
  p_output1[38]=t7726;
  p_output1[39]=t6202;
  p_output1[40]=t7300;
  p_output1[41]=t7615;
  p_output1[42]=-0.0378 - 3.5899*t7729 - 3.5899*t7734;
  p_output1[43]=t7739;
  p_output1[44]=t6405*t6419 + t6474*t7322;
  p_output1[45]=t6419*t6675 + t6474*t7497 + t6616*t7644;
  p_output1[46]=-0.5399209599999999*t6362*t6985 + t6376*(7.1798*t6049*t6985 + 7.1798*t6177*t7027) + t6419*t7043 + t6474*t7571 + t6616*t7704;
  p_output1[47]=t7241;
  p_output1[48]=t6405;
  p_output1[49]=t7722;
  p_output1[50]=0.0378 + 3.5899*t7729 + 3.5899*t7734;
  p_output1[51]=t7775;
  p_output1[52]=t6317;
  p_output1[53]=t7303;
  p_output1[54]=t7618;
  p_output1[55]=t7739;
  p_output1[56]=-0.11900411238399997;
  p_output1[57]=-0.5399209599999999*t4747*t6419 - 0.5399209599999999*t6474*t6527;
  p_output1[58]=-0.5399209599999999*t6616*t6860 + t7781 + t7782;
  p_output1[59]=-0.5399209599999999*t6376*t6985 - 0.5399209599999999*t6616*t7084 + t7781 + t7782;
  p_output1[60]=t7244;
  p_output1[61]=t7594;
  p_output1[62]=t7726;
  p_output1[63]=t7775;
  p_output1[64]=0.11900411238399997;
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 65, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMap3_LeftLateImpactRelabel.hh"

namespace LeftLateImpactRelabel
{

void J_dxDiscreteMap3_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
