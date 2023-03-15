/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:55 GMT-08:00
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
  double t1972;
  double t1271;
  double t1355;
  double t2036;
  double t2180;
  double t35;
  double t2217;
  double t2254;
  double t2296;
  double t1604;
  double t2042;
  double t2073;
  double t2084;
  double t2764;
  double t2786;
  double t3166;
  double t3180;
  double t3331;
  double t3414;
  double t3597;
  double t3607;
  double t4675;
  double t4747;
  double t4750;
  double t4823;
  double t4837;
  double t4659;
  double t4859;
  double t4886;
  double t4892;
  double t4936;
  double t4953;
  double t4971;
  double t4976;
  double t5051;
  double t5103;
  double t3974;
  double t4003;
  double t4062;
  double t5820;
  double t5868;
  double t5945;
  double t6049;
  double t4395;
  double t4455;
  double t5604;
  double t5643;
  double t5644;
  double t5661;
  double t5673;
  double t4935;
  double t5123;
  double t5200;
  double t5262;
  double t5366;
  double t5410;
  double t6167;
  double t6176;
  double t6178;
  double t6188;
  double t6639;
  double t6644;
  double t6649;
  double t6661;
  double t6671;
  double t6271;
  double t6309;
  double t6405;
  double t6407;
  double t6419;
  double t6590;
  double t6595;
  double t6840;
  double t6859;
  double t6860;
  double t6865;
  double t6917;
  double t6924;
  double t6673;
  double t6675;
  double t6686;
  double t6718;
  double t6722;
  double t6725;
  double t6735;
  double t6755;
  double t6760;
  double t6762;
  double t6784;
  double t6788;
  double t6792;
  double t6804;
  double t6810;
  double t6813;
  double t6826;
  double t6910;
  double t6961;
  double t6963;
  double t7165;
  double t7166;
  double t7190;
  double t7192;
  double t7016;
  double t2787;
  double t3796;
  double t4376;
  double t4539;
  double t4612;
  double t6470;
  double t6506;
  double t6431;
  double t6447;
  double t6553;
  double t6555;
  double t6455;
  double t6474;
  double t6527;
  double t6564;
  double t6570;
  double t6888;
  double t6944;
  double t6953;
  double t6990;
  double t6994;
  double t7027;
  double t7600;
  double t7099;
  double t7105;
  double t7117;
  double t7055;
  double t7057;
  double t7074;
  double t7084;
  double t7601;
  double t7602;
  double t7614;
  double t7615;
  double t7617;
  double t7622;
  double t7627;
  double t7630;
  double t7183;
  double t7194;
  double t7201;
  double t7640;
  double t7211;
  double t7218;
  double t7241;
  double t7316;
  double t7319;
  double t7322;
  double t6616;
  double t6620;
  double t6621;
  double t6202;
  double t6211;
  double t6230;
  double t5259;
  double t5457;
  double t5509;
  double t7486;
  double t7491;
  double t7496;
  double t7588;
  double t7592;
  double t7593;
  double t7632;
  double t7641;
  double t7645;
  double t6954;
  double t7040;
  double t7043;
  double t7683;
  double t7687;
  double t7689;
  double t7204;
  double t7286;
  double t7291;
  double t7332;
  double t7341;
  double t7342;
  double t7709;
  double t7711;
  double t5808;
  double t6137;
  double t6160;
  double t7497;
  double t7512;
  double t7516;
  double t7714;
  double t7715;
  double t7717;
  double t7535;
  double t7541;
  double t7547;
  double t7610;
  double t6688;
  double t7730;
  double t7734;
  double t7735;
  double t7669;
  double t7670;
  double t7679;
  double t7086;
  double t7118;
  double t7125;
  double t7755;
  double t7758;
  double t7762;
  double t7763;
  double t7764;
  double t7378;
  double t7379;
  double t7382;
  double t7787;
  double t7795;
  double t7796;
  double t7800;
  double t7802;
  double t6162;
  double t7518;
  double t7718;
  double t7721;
  double t7806;
  double t7807;
  double t7855;
  double t7856;
  double t7384;
  double t7708;
  double t7798;
  double t7799;
  double t7842;
  double t7843;
  t1972 = Cos(var2[6]);
  t1271 = Cos(var2[7]);
  t1355 = Sin(var2[6]);
  t2036 = Sin(var2[7]);
  t2180 = Cos(var2[2]);
  t35 = Sin(var2[2]);
  t2217 = t1972*t1271;
  t2254 = -1.*t1355*t2036;
  t2296 = t2217 + t2254;
  t1604 = -1.*t1271*t1355;
  t2042 = -1.*t1972*t2036;
  t2073 = t1604 + t2042;
  t2084 = t35*t2073;
  t2764 = t2180*t2296;
  t2786 = t2084 + t2764;
  t3166 = t1271*t1355;
  t3180 = t1972*t2036;
  t3331 = t3166 + t3180;
  t3414 = t2180*t3331;
  t3597 = t35*t2296;
  t3607 = t3414 + t3597;
  t4675 = -1.*t1271;
  t4747 = 1. + t4675;
  t4750 = -0.9063*t4747;
  t4823 = -1.0567*t1271;
  t4837 = t4750 + t4823;
  t4659 = 0.4999*t1355;
  t4859 = t4837*t1355;
  t4886 = -0.15039999999999998*t1972*t2036;
  t4892 = t4659 + t4859 + t4886;
  t4936 = -1.*t1972;
  t4953 = 1. + t4936;
  t4971 = -0.4999*t4953;
  t4976 = t1972*t4837;
  t5051 = 0.15039999999999998*t1355*t2036;
  t5103 = t4971 + t4976 + t5051;
  t3974 = t2180*t2073;
  t4003 = -1.*t35*t2296;
  t4062 = t3974 + t4003;
  t5820 = 0.4999*t2036;
  t5868 = t4837*t2036;
  t5945 = 0.15039999999999998*t1271*t2036;
  t6049 = t5820 + t5868 + t5945;
  t4395 = -1.*t35*t3331;
  t4455 = t4395 + t2764;
  t5604 = 0.4999*t1271;
  t5643 = t4837*t1271;
  t5644 = Power(t2036,2);
  t5661 = -0.15039999999999998*t5644;
  t5673 = t5604 + t5643 + t5661;
  t4935 = -1.*t4892*t2296;
  t5123 = -1.*t2073*t5103;
  t5200 = t4935 + t5123;
  t5262 = t4892*t3331;
  t5366 = t2296*t5103;
  t5410 = t5262 + t5366;
  t6167 = -1.*var1[4];
  t6176 = var3[7] + t6167;
  t6178 = -1.*var1[3];
  t6188 = var3[6] + t6178;
  t6639 = -1.*t1972*t1271;
  t6644 = t1355*t2036;
  t6649 = t6639 + t6644;
  t6661 = t35*t6649;
  t6671 = t3974 + t6661;
  t6271 = -1.*var1[0];
  t6309 = var3[0] + t6271;
  t6405 = -1.*var1[1];
  t6407 = var3[1] + t6405;
  t6419 = -1.*t35*t2073;
  t6590 = -1.*var1[2];
  t6595 = var3[2] + t6590;
  t6840 = -0.4999*t1355;
  t6859 = -1.*t4837*t1355;
  t6860 = 0.15039999999999998*t1972*t2036;
  t6865 = t6840 + t6859 + t6860;
  t6917 = 0.4999*t1972;
  t6924 = t6917 + t4976 + t5051;
  t6673 = -0.5399209599999999*t6176*t6671;
  t6675 = 3.5899*t6049*t2786;
  t6686 = 3.5899*t5673*t6671;
  t6718 = 7.1798*t2786*t3607;
  t6722 = 7.1798*t2786*t6671;
  t6725 = t6718 + t6722;
  t6735 = t6309*t6725;
  t6755 = 3.5899*t2786*t4455;
  t6760 = 3.5899*t4062*t3607;
  t6762 = t2180*t6649;
  t6784 = t6419 + t6762;
  t6788 = 3.5899*t2786*t6784;
  t6792 = 3.5899*t4062*t6671;
  t6804 = t6755 + t6760 + t6788 + t6792;
  t6810 = t6407*t6804;
  t6813 = 3.5899*t2786*t5200;
  t6826 = t4892*t2296;
  t6910 = t2073*t5103;
  t6961 = 3.5899*t5410*t6671;
  t6963 = -1.*t2073*t4892;
  t7165 = 0.15039999999999998*t1271*t1355;
  t7166 = t7165 + t6860;
  t7190 = -0.15039999999999998*t1972*t1271;
  t7192 = t7190 + t5051;
  t7016 = -1.*t5103*t6649;
  t2787 = Power(t2786,2);
  t3796 = Power(t3607,2);
  t4376 = -3.5899*t2786*t4062;
  t4539 = -3.5899*t4455*t3607;
  t4612 = t4376 + t4539;
  t6470 = Power(t4455,2);
  t6506 = Power(t4062,2);
  t6431 = -1.*t2180*t2296;
  t6447 = t6419 + t6431;
  t6553 = -1.*t2180*t3331;
  t6555 = t6553 + t4003;
  t6455 = 3.5899*t6447*t2786;
  t6474 = 3.5899*t6470;
  t6527 = 3.5899*t6506;
  t6564 = 3.5899*t6555*t3607;
  t6570 = t6455 + t6474 + t6527 + t6564;
  t6888 = t6865*t2296;
  t6944 = t3331*t6924;
  t6953 = t6826 + t6888 + t6910 + t6944;
  t6990 = -1.*t2073*t6865;
  t6994 = -1.*t2296*t6924;
  t7027 = t6963 + t6990 + t6994 + t7016;
  t7600 = -0.5399209599999999*t6176*t6784;
  t7099 = Power(t1271,2);
  t7105 = 0.15039999999999998*t7099;
  t7117 = 0. + t5604 + t5643 + t7105;
  t7055 = -0.4999*t2036;
  t7057 = -1.*t4837*t2036;
  t7074 = -0.15039999999999998*t1271*t2036;
  t7084 = t7055 + t7057 + t7074;
  t7601 = 3.5899*t6049*t4062;
  t7602 = 3.5899*t5673*t6784;
  t7614 = 7.1798*t4455*t4062;
  t7615 = 7.1798*t4062*t6784;
  t7617 = t7614 + t7615;
  t7622 = t6407*t7617;
  t7627 = t6309*t6804;
  t7630 = 3.5899*t4062*t5200;
  t7183 = t7166*t2296;
  t7194 = t3331*t7192;
  t7201 = t6826 + t7183 + t6910 + t7194;
  t7640 = 3.5899*t5410*t6784;
  t7211 = -1.*t2073*t7166;
  t7218 = -1.*t2296*t7192;
  t7241 = t6963 + t7211 + t7218 + t7016;
  t7316 = 3.5899*t2786*t4062;
  t7319 = 3.5899*t4455*t3607;
  t7322 = t7316 + t7319;
  t6616 = 3.5899*t4455*t5200;
  t6620 = 3.5899*t4062*t5410;
  t6621 = t6616 + t6620;
  t6202 = 3.5899*t6049*t4455;
  t6211 = 3.5899*t5673*t4062;
  t6230 = t6202 + t6211;
  t5259 = -3.5899*t3607*t5200;
  t5457 = -3.5899*t2786*t5410;
  t5509 = t5259 + t5457;
  t7486 = -3.5899*t4455*t5200;
  t7491 = -3.5899*t4062*t5410;
  t7496 = t7486 + t7491;
  t7588 = 3.5899*t6555*t5200;
  t7592 = 3.5899*t6447*t5410;
  t7593 = t7588 + t7592;
  t7632 = 3.5899*t4062*t6953;
  t7641 = 3.5899*t4455*t7027;
  t7645 = t7630 + t7632 + t7640 + t7641;
  t6954 = 3.5899*t2786*t6953;
  t7040 = 3.5899*t3607*t7027;
  t7043 = t6813 + t6954 + t6961 + t7040;
  t7683 = 3.5899*t4062*t7201;
  t7687 = 3.5899*t4455*t7241;
  t7689 = t7630 + t7683 + t7640 + t7687;
  t7204 = 3.5899*t2786*t7201;
  t7286 = 3.5899*t3607*t7241;
  t7291 = t6813 + t7204 + t6961 + t7286;
  t7332 = 3.5899*t3607*t5200;
  t7341 = 3.5899*t2786*t5410;
  t7342 = t7332 + t7341;
  t7709 = Power(t5200,2);
  t7711 = Power(t5410,2);
  t5808 = -3.5899*t5673*t2786;
  t6137 = -3.5899*t6049*t3607;
  t6160 = t5808 + t6137;
  t7497 = -3.5899*t6049*t4455;
  t7512 = -3.5899*t5673*t4062;
  t7516 = t7497 + t7512;
  t7714 = -3.5899*t6049*t5200;
  t7715 = -3.5899*t5673*t5410;
  t7717 = -0.0378 + t7714 + t7715;
  t7535 = 3.5899*t5673*t6447;
  t7541 = 3.5899*t6049*t6555;
  t7547 = t7535 + t7541;
  t7610 = t7601 + t7602;
  t6688 = t6675 + t6686;
  t7730 = 3.5899*t5673*t6953;
  t7734 = 3.5899*t6049*t7027;
  t7735 = t7730 + t7734;
  t7669 = 3.5899*t7117*t4455;
  t7670 = 3.5899*t7084*t4062;
  t7679 = t7669 + t7670 + t7601 + t7602;
  t7086 = 3.5899*t7084*t2786;
  t7118 = 3.5899*t7117*t3607;
  t7125 = t7086 + t6675 + t7118 + t6686;
  t7755 = 3.5899*t7117*t5200;
  t7758 = 3.5899*t7084*t5410;
  t7762 = 3.5899*t5673*t7201;
  t7763 = 3.5899*t6049*t7241;
  t7764 = t7755 + t7758 + t7762 + t7763;
  t7378 = 3.5899*t5673*t2786;
  t7379 = 3.5899*t6049*t3607;
  t7382 = t7378 + t7379;
  t7787 = 3.5899*t6049*t5200;
  t7795 = 3.5899*t5673*t5410;
  t7796 = 0.0378 + t7787 + t7795;
  t7800 = Power(t6049,2);
  t7802 = Power(t5673,2);
  t6162 = 0.5399209599999999*t2786;
  t7518 = 0.5399209599999999*t4062;
  t7718 = 0.5399209599999999*t5410;
  t7721 = -0.0378 + t7718;
  t7806 = 0.5399209599999999*t5673;
  t7807 = -0.0378 + t7806;
  t7855 = -0.5399209599999999*t6407*t6784;
  t7856 = -0.5399209599999999*t6309*t6671;
  t7384 = -0.5399209599999999*t2786;
  t7708 = -0.5399209599999999*t4062;
  t7798 = -0.5399209599999999*t5410;
  t7799 = 0.0378 + t7798;
  t7842 = -0.5399209599999999*t5673;
  t7843 = 0.0378 + t7842;
  p_output1[0]=-3.5899*t2787 - 3.5899*t3796;
  p_output1[1]=t4612;
  p_output1[2]=t5509;
  p_output1[3]=t6160;
  p_output1[4]=t6162;
  p_output1[5]=-0.5399209599999999*t4062*t6176 + t6188*t6230 + (7.1798*t2786*t4062 + 7.1798*t3607*t4455)*t6309 + t6407*t6570 + t6595*t6621;
  p_output1[6]=t6673 + t6188*t6688 + t6735 + t6810 + t6595*t7043;
  p_output1[7]=t6673 + t6735 + t6810 + t6188*t7125 + t6595*t7291;
  p_output1[8]=3.5899*t2787 + 3.5899*t3796;
  p_output1[9]=t7322;
  p_output1[10]=t7342;
  p_output1[11]=t7382;
  p_output1[12]=t7384;
  p_output1[13]=t4612;
  p_output1[14]=-3.5899*t6470 - 3.5899*t6506;
  p_output1[15]=t7496;
  p_output1[16]=t7516;
  p_output1[17]=t7518;
  p_output1[18]=-0.5399209599999999*t6176*t6447 + t6407*(7.1798*t4062*t6447 + 7.1798*t4455*t6555) + t6309*t6570 + t6188*t7547 + t6595*t7593;
  p_output1[19]=t7600 + t6188*t7610 + t7622 + t7627 + t6595*t7645;
  p_output1[20]=t7600 + t7622 + t7627 + t6188*t7679 + t6595*t7689;
  p_output1[21]=t7322;
  p_output1[22]=t6474 + t6527;
  p_output1[23]=t6621;
  p_output1[24]=t6230;
  p_output1[25]=t7708;
  p_output1[26]=t5509;
  p_output1[27]=t7496;
  p_output1[28]=-0.0378 - 3.5899*t7709 - 3.5899*t7711;
  p_output1[29]=t7717;
  p_output1[30]=t7721;
  p_output1[31]=t6309*t6621 + t6407*t7593;
  p_output1[32]=-0.5399209599999999*t6176*t6953 + t6595*(7.1798*t5410*t6953 + 7.1798*t5200*t7027) + t6309*t7043 + t6407*t7645 + t6188*t7735;
  p_output1[33]=-0.5399209599999999*t6176*t7201 + t6595*(7.1798*t5410*t7201 + 7.1798*t5200*t7241) + t6309*t7291 + t6407*t7689 + t6188*t7764;
  p_output1[34]=t7342;
  p_output1[35]=t6621;
  p_output1[36]=0.0378 + 3.5899*t7709 + 3.5899*t7711;
  p_output1[37]=t7796;
  p_output1[38]=t7799;
  p_output1[39]=t6160;
  p_output1[40]=t7516;
  p_output1[41]=t7717;
  p_output1[42]=-0.0378 - 3.5899*t7800 - 3.5899*t7802;
  p_output1[43]=t7807;
  p_output1[44]=t6230*t6309 + t6407*t7547;
  p_output1[45]=t6309*t6688 + t6407*t7610 + t6595*t7735;
  p_output1[46]=-0.5399209599999999*t6176*t7084 + t6188*(7.1798*t5673*t7084 + 7.1798*t6049*t7117) + t6309*t7125 + t6407*t7679 + t6595*t7764;
  p_output1[47]=t7382;
  p_output1[48]=t6230;
  p_output1[49]=t7796;
  p_output1[50]=0.0378 + 3.5899*t7800 + 3.5899*t7802;
  p_output1[51]=t7843;
  p_output1[52]=t6162;
  p_output1[53]=t7518;
  p_output1[54]=t7721;
  p_output1[55]=t7807;
  p_output1[56]=-0.11900411238399997;
  p_output1[57]=-0.5399209599999999*t4062*t6309 - 0.5399209599999999*t6407*t6447;
  p_output1[58]=-0.5399209599999999*t6595*t6953 + t7855 + t7856;
  p_output1[59]=-0.5399209599999999*t6188*t7084 - 0.5399209599999999*t6595*t7201 + t7855 + t7856;
  p_output1[60]=t7384;
  p_output1[61]=t7708;
  p_output1[62]=t7799;
  p_output1[63]=t7843;
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

#include "J_dxDiscreteMap6_LeftLateImpactRelabel.hh"

namespace LeftLateImpactRelabel
{

void J_dxDiscreteMap6_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
