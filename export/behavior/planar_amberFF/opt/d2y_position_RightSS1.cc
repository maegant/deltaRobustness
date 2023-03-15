/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:40 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5)
{
  double t221;
  double t290;
  double t353;
  double t359;
  double t382;
  double t439;
  double t490;
  double t598;
  double t611;
  double t671;
  double t705;
  double t953;
  double t998;
  double t1440;
  double t1441;
  double t1549;
  double t1633;
  double t2026;
  double t2120;
  double t2124;
  double t2133;
  double t2139;
  double t2157;
  double t2290;
  double t2296;
  double t2329;
  double t2332;
  double t2335;
  double t2372;
  double t2373;
  double t2465;
  double t2476;
  double t2490;
  double t2491;
  double t2516;
  double t2576;
  double t2588;
  double t2593;
  double t2652;
  double t2681;
  double t2688;
  double t2708;
  double t2716;
  double t2443;
  double t2775;
  double t2842;
  double t2853;
  double t2886;
  double t3241;
  double t2905;
  double t2955;
  double t2956;
  double t2965;
  double t3003;
  double t3031;
  double t3062;
  double t3174;
  double t3248;
  double t3265;
  double t4135;
  double t4138;
  double t4168;
  double t4196;
  double t4197;
  double t4214;
  double t4351;
  double t4354;
  double t4373;
  double t4385;
  double t4390;
  double t4434;
  double t4448;
  double t4588;
  double t4624;
  double t4626;
  double t4633;
  double t4784;
  double t4800;
  double t4831;
  double t4846;
  double t4848;
  double t4860;
  double t4871;
  double t4874;
  double t4875;
  double t4575;
  double t4902;
  double t4909;
  double t4934;
  double t4969;
  double t4974;
  double t5056;
  double t5059;
  double t5060;
  double t5061;
  double t5063;
  double t5122;
  double t5124;
  double t5152;
  double t5234;
  double t5657;
  double t5680;
  double t5682;
  double t5692;
  double t5693;
  double t5695;
  double t5701;
  double t5706;
  double t5713;
  double t5715;
  double t5721;
  double t5732;
  double t5740;
  double t5791;
  double t5797;
  double t5801;
  double t5815;
  double t5841;
  double t5843;
  double t5845;
  double t5851;
  double t5859;
  double t5860;
  double t5862;
  double t5867;
  double t5877;
  double t5786;
  double t5885;
  double t5891;
  double t5893;
  double t5917;
  double t5922;
  double t5928;
  double t5930;
  double t5932;
  double t5936;
  double t5937;
  double t5950;
  double t5952;
  double t5960;
  double t5961;
  double t6156;
  double t6168;
  double t6185;
  double t6189;
  double t6206;
  double t6212;
  double t6225;
  double t6228;
  double t6231;
  double t6245;
  double t6246;
  double t6248;
  double t6250;
  double t6261;
  double t6265;
  double t6275;
  double t6278;
  double t6280;
  double t6282;
  double t6284;
  double t6286;
  double t6290;
  double t6305;
  double t6316;
  double t6321;
  double t6324;
  double t6260;
  double t6340;
  double t6341;
  double t6348;
  double t6363;
  double t6364;
  double t6369;
  double t6375;
  double t6379;
  double t6382;
  double t6383;
  double t6391;
  double t6399;
  double t6421;
  double t6434;
  double t6558;
  double t6561;
  double t6574;
  double t6575;
  double t6581;
  double t6586;
  double t6592;
  double t6594;
  double t6595;
  double t6596;
  double t6601;
  double t6604;
  double t6606;
  double t6629;
  double t6632;
  double t6634;
  double t6635;
  double t6640;
  double t6641;
  double t6643;
  double t6646;
  double t6647;
  double t6651;
  double t6652;
  double t6658;
  double t6679;
  double t6622;
  double t6686;
  double t6687;
  double t6695;
  double t6723;
  double t6727;
  double t6733;
  double t6734;
  double t6736;
  double t6752;
  double t6753;
  double t6759;
  double t6767;
  double t6771;
  double t6772;
  t221 = -1.*var5[1];
  t290 = var5[0] + t221;
  t353 = Power(t290,-2);
  t359 = 1/t290;
  t382 = 0.8128*var1[2];
  t439 = 0.8128*var1[6];
  t490 = 0.4064*var1[7];
  t598 = 0. + t221 + t382 + t439 + t490;
  t611 = -1.*t359*t598;
  t671 = 1. + t611;
  t705 = Power(t671,3);
  t953 = Power(t290,-3);
  t998 = Power(t671,2);
  t1440 = Power(t290,-4);
  t1441 = Power(t598,2);
  t1549 = Power(t290,-5);
  t1633 = Power(t598,3);
  t2026 = 6.6064384*var4[0]*t353*t705;
  t2120 = -13.2128768*var4[5]*t353*t705;
  t2124 = 6.6064384*var4[10]*t353*t705;
  t2133 = 19.8193152*var4[5]*t953*t998*t598;
  t2139 = -39.6386304*var4[10]*t953*t998*t598;
  t2157 = 19.8193152*var4[15]*t953*t998*t598;
  t2290 = 19.8193152*var4[10]*t1440*t671*t1441;
  t2296 = -39.6386304*var4[15]*t1440*t671*t1441;
  t2329 = 19.8193152*var4[20]*t1440*t671*t1441;
  t2332 = 6.6064384*var4[15]*t1549*t1633;
  t2335 = -13.2128768*var4[20]*t1549*t1633;
  t2372 = 6.6064384*var4[25]*t1549*t1633;
  t2373 = t2026 + t2120 + t2124 + t2133 + t2139 + t2157 + t2290 + t2296 + t2329 + t2332 + t2335 + t2372;
  t2465 = 13.2128768*var4[0]*t353*t705;
  t2476 = -26.4257536*var4[5]*t353*t705;
  t2490 = 13.2128768*var4[10]*t353*t705;
  t2491 = 39.6386304*var4[5]*t953*t998*t598;
  t2516 = -79.2772608*var4[10]*t953*t998*t598;
  t2576 = 39.6386304*var4[15]*t953*t998*t598;
  t2588 = 39.6386304*var4[10]*t1440*t671*t1441;
  t2593 = -79.2772608*var4[15]*t1440*t671*t1441;
  t2652 = 39.6386304*var4[20]*t1440*t671*t1441;
  t2681 = 13.2128768*var4[15]*t1549*t1633;
  t2688 = -26.4257536*var4[20]*t1549*t1633;
  t2708 = 13.2128768*var4[25]*t1549*t1633;
  t2716 = t2465 + t2476 + t2490 + t2491 + t2516 + t2576 + t2588 + t2593 + t2652 + t2681 + t2688 + t2708;
  t2443 = -1.*var2[7]*t2373;
  t2775 = -1.*var2[2]*t2716;
  t2842 = -1.*var2[6]*t2716;
  t2853 = t2443 + t2775 + t2842;
  t2886 = Power(t671,4);
  t3241 = Power(t598,4);
  t2905 = 4.064*var4[0]*t359*t2886;
  t2955 = -4.064*var4[5]*t359*t2886;
  t2956 = 16.256*var4[5]*t353*t705*t598;
  t2965 = -16.256*var4[10]*t353*t705*t598;
  t3003 = 24.383999999999997*var4[10]*t953*t998*t1441;
  t3031 = -24.383999999999997*var4[15]*t953*t998*t1441;
  t3062 = 16.256*var4[15]*t1440*t671*t1633;
  t3174 = -16.256*var4[20]*t1440*t671*t1633;
  t3248 = 4.064*var4[20]*t1549*t3241;
  t3265 = -4.064*var4[25]*t1549*t3241;
  t4135 = 6.6064384*var4[1]*t353*t705;
  t4138 = -13.2128768*var4[6]*t353*t705;
  t4168 = 6.6064384*var4[11]*t353*t705;
  t4196 = 19.8193152*var4[6]*t953*t998*t598;
  t4197 = -39.6386304*var4[11]*t953*t998*t598;
  t4214 = 19.8193152*var4[16]*t953*t998*t598;
  t4351 = 19.8193152*var4[11]*t1440*t671*t1441;
  t4354 = -39.6386304*var4[16]*t1440*t671*t1441;
  t4373 = 19.8193152*var4[21]*t1440*t671*t1441;
  t4385 = 6.6064384*var4[16]*t1549*t1633;
  t4390 = -13.2128768*var4[21]*t1549*t1633;
  t4434 = 6.6064384*var4[26]*t1549*t1633;
  t4448 = t4135 + t4138 + t4168 + t4196 + t4197 + t4214 + t4351 + t4354 + t4373 + t4385 + t4390 + t4434;
  t4588 = 13.2128768*var4[1]*t353*t705;
  t4624 = -26.4257536*var4[6]*t353*t705;
  t4626 = 13.2128768*var4[11]*t353*t705;
  t4633 = 39.6386304*var4[6]*t953*t998*t598;
  t4784 = -79.2772608*var4[11]*t953*t998*t598;
  t4800 = 39.6386304*var4[16]*t953*t998*t598;
  t4831 = 39.6386304*var4[11]*t1440*t671*t1441;
  t4846 = -79.2772608*var4[16]*t1440*t671*t1441;
  t4848 = 39.6386304*var4[21]*t1440*t671*t1441;
  t4860 = 13.2128768*var4[16]*t1549*t1633;
  t4871 = -26.4257536*var4[21]*t1549*t1633;
  t4874 = 13.2128768*var4[26]*t1549*t1633;
  t4875 = t4588 + t4624 + t4626 + t4633 + t4784 + t4800 + t4831 + t4846 + t4848 + t4860 + t4871 + t4874;
  t4575 = -1.*var2[7]*t4448;
  t4902 = -1.*var2[2]*t4875;
  t4909 = -1.*var2[6]*t4875;
  t4934 = t4575 + t4902 + t4909;
  t4969 = 4.064*var4[1]*t359*t2886;
  t4974 = -4.064*var4[6]*t359*t2886;
  t5056 = 16.256*var4[6]*t353*t705*t598;
  t5059 = -16.256*var4[11]*t353*t705*t598;
  t5060 = 24.383999999999997*var4[11]*t953*t998*t1441;
  t5061 = -24.383999999999997*var4[16]*t953*t998*t1441;
  t5063 = 16.256*var4[16]*t1440*t671*t1633;
  t5122 = -16.256*var4[21]*t1440*t671*t1633;
  t5124 = 4.064*var4[21]*t1549*t3241;
  t5152 = -4.064*var4[26]*t1549*t3241;
  t5234 = t4969 + t4974 + t5056 + t5059 + t5060 + t5061 + t5063 + t5122 + t5124 + t5152;
  t5657 = 6.6064384*var4[2]*t353*t705;
  t5680 = -13.2128768*var4[7]*t353*t705;
  t5682 = 6.6064384*var4[12]*t353*t705;
  t5692 = 19.8193152*var4[7]*t953*t998*t598;
  t5693 = -39.6386304*var4[12]*t953*t998*t598;
  t5695 = 19.8193152*var4[17]*t953*t998*t598;
  t5701 = 19.8193152*var4[12]*t1440*t671*t1441;
  t5706 = -39.6386304*var4[17]*t1440*t671*t1441;
  t5713 = 19.8193152*var4[22]*t1440*t671*t1441;
  t5715 = 6.6064384*var4[17]*t1549*t1633;
  t5721 = -13.2128768*var4[22]*t1549*t1633;
  t5732 = 6.6064384*var4[27]*t1549*t1633;
  t5740 = t5657 + t5680 + t5682 + t5692 + t5693 + t5695 + t5701 + t5706 + t5713 + t5715 + t5721 + t5732;
  t5791 = 13.2128768*var4[2]*t353*t705;
  t5797 = -26.4257536*var4[7]*t353*t705;
  t5801 = 13.2128768*var4[12]*t353*t705;
  t5815 = 39.6386304*var4[7]*t953*t998*t598;
  t5841 = -79.2772608*var4[12]*t953*t998*t598;
  t5843 = 39.6386304*var4[17]*t953*t998*t598;
  t5845 = 39.6386304*var4[12]*t1440*t671*t1441;
  t5851 = -79.2772608*var4[17]*t1440*t671*t1441;
  t5859 = 39.6386304*var4[22]*t1440*t671*t1441;
  t5860 = 13.2128768*var4[17]*t1549*t1633;
  t5862 = -26.4257536*var4[22]*t1549*t1633;
  t5867 = 13.2128768*var4[27]*t1549*t1633;
  t5877 = t5791 + t5797 + t5801 + t5815 + t5841 + t5843 + t5845 + t5851 + t5859 + t5860 + t5862 + t5867;
  t5786 = -1.*var2[7]*t5740;
  t5885 = -1.*var2[2]*t5877;
  t5891 = -1.*var2[6]*t5877;
  t5893 = t5786 + t5885 + t5891;
  t5917 = 4.064*var4[2]*t359*t2886;
  t5922 = -4.064*var4[7]*t359*t2886;
  t5928 = 16.256*var4[7]*t353*t705*t598;
  t5930 = -16.256*var4[12]*t353*t705*t598;
  t5932 = 24.383999999999997*var4[12]*t953*t998*t1441;
  t5936 = -24.383999999999997*var4[17]*t953*t998*t1441;
  t5937 = 16.256*var4[17]*t1440*t671*t1633;
  t5950 = -16.256*var4[22]*t1440*t671*t1633;
  t5952 = 4.064*var4[22]*t1549*t3241;
  t5960 = -4.064*var4[27]*t1549*t3241;
  t5961 = t5917 + t5922 + t5928 + t5930 + t5932 + t5936 + t5937 + t5950 + t5952 + t5960;
  t6156 = 6.6064384*var4[3]*t353*t705;
  t6168 = -13.2128768*var4[8]*t353*t705;
  t6185 = 6.6064384*var4[13]*t353*t705;
  t6189 = 19.8193152*var4[8]*t953*t998*t598;
  t6206 = -39.6386304*var4[13]*t953*t998*t598;
  t6212 = 19.8193152*var4[18]*t953*t998*t598;
  t6225 = 19.8193152*var4[13]*t1440*t671*t1441;
  t6228 = -39.6386304*var4[18]*t1440*t671*t1441;
  t6231 = 19.8193152*var4[23]*t1440*t671*t1441;
  t6245 = 6.6064384*var4[18]*t1549*t1633;
  t6246 = -13.2128768*var4[23]*t1549*t1633;
  t6248 = 6.6064384*var4[28]*t1549*t1633;
  t6250 = t6156 + t6168 + t6185 + t6189 + t6206 + t6212 + t6225 + t6228 + t6231 + t6245 + t6246 + t6248;
  t6261 = 13.2128768*var4[3]*t353*t705;
  t6265 = -26.4257536*var4[8]*t353*t705;
  t6275 = 13.2128768*var4[13]*t353*t705;
  t6278 = 39.6386304*var4[8]*t953*t998*t598;
  t6280 = -79.2772608*var4[13]*t953*t998*t598;
  t6282 = 39.6386304*var4[18]*t953*t998*t598;
  t6284 = 39.6386304*var4[13]*t1440*t671*t1441;
  t6286 = -79.2772608*var4[18]*t1440*t671*t1441;
  t6290 = 39.6386304*var4[23]*t1440*t671*t1441;
  t6305 = 13.2128768*var4[18]*t1549*t1633;
  t6316 = -26.4257536*var4[23]*t1549*t1633;
  t6321 = 13.2128768*var4[28]*t1549*t1633;
  t6324 = t6261 + t6265 + t6275 + t6278 + t6280 + t6282 + t6284 + t6286 + t6290 + t6305 + t6316 + t6321;
  t6260 = -1.*var2[7]*t6250;
  t6340 = -1.*var2[2]*t6324;
  t6341 = -1.*var2[6]*t6324;
  t6348 = t6260 + t6340 + t6341;
  t6363 = 4.064*var4[3]*t359*t2886;
  t6364 = -4.064*var4[8]*t359*t2886;
  t6369 = 16.256*var4[8]*t353*t705*t598;
  t6375 = -16.256*var4[13]*t353*t705*t598;
  t6379 = 24.383999999999997*var4[13]*t953*t998*t1441;
  t6382 = -24.383999999999997*var4[18]*t953*t998*t1441;
  t6383 = 16.256*var4[18]*t1440*t671*t1633;
  t6391 = -16.256*var4[23]*t1440*t671*t1633;
  t6399 = 4.064*var4[23]*t1549*t3241;
  t6421 = -4.064*var4[28]*t1549*t3241;
  t6434 = t6363 + t6364 + t6369 + t6375 + t6379 + t6382 + t6383 + t6391 + t6399 + t6421;
  t6558 = 6.6064384*var4[4]*t353*t705;
  t6561 = -13.2128768*var4[9]*t353*t705;
  t6574 = 6.6064384*var4[14]*t353*t705;
  t6575 = 19.8193152*var4[9]*t953*t998*t598;
  t6581 = -39.6386304*var4[14]*t953*t998*t598;
  t6586 = 19.8193152*var4[19]*t953*t998*t598;
  t6592 = 19.8193152*var4[14]*t1440*t671*t1441;
  t6594 = -39.6386304*var4[19]*t1440*t671*t1441;
  t6595 = 19.8193152*var4[24]*t1440*t671*t1441;
  t6596 = 6.6064384*var4[19]*t1549*t1633;
  t6601 = -13.2128768*var4[24]*t1549*t1633;
  t6604 = 6.6064384*var4[29]*t1549*t1633;
  t6606 = t6558 + t6561 + t6574 + t6575 + t6581 + t6586 + t6592 + t6594 + t6595 + t6596 + t6601 + t6604;
  t6629 = 13.2128768*var4[4]*t353*t705;
  t6632 = -26.4257536*var4[9]*t353*t705;
  t6634 = 13.2128768*var4[14]*t353*t705;
  t6635 = 39.6386304*var4[9]*t953*t998*t598;
  t6640 = -79.2772608*var4[14]*t953*t998*t598;
  t6641 = 39.6386304*var4[19]*t953*t998*t598;
  t6643 = 39.6386304*var4[14]*t1440*t671*t1441;
  t6646 = -79.2772608*var4[19]*t1440*t671*t1441;
  t6647 = 39.6386304*var4[24]*t1440*t671*t1441;
  t6651 = 13.2128768*var4[19]*t1549*t1633;
  t6652 = -26.4257536*var4[24]*t1549*t1633;
  t6658 = 13.2128768*var4[29]*t1549*t1633;
  t6679 = t6629 + t6632 + t6634 + t6635 + t6640 + t6641 + t6643 + t6646 + t6647 + t6651 + t6652 + t6658;
  t6622 = -1.*var2[7]*t6606;
  t6686 = -1.*var2[2]*t6679;
  t6687 = -1.*var2[6]*t6679;
  t6695 = t6622 + t6686 + t6687;
  t6723 = 4.064*var4[4]*t359*t2886;
  t6727 = -4.064*var4[9]*t359*t2886;
  t6733 = 16.256*var4[9]*t353*t705*t598;
  t6734 = -16.256*var4[14]*t353*t705*t598;
  t6736 = 24.383999999999997*var4[14]*t953*t998*t1441;
  t6752 = -24.383999999999997*var4[19]*t953*t998*t1441;
  t6753 = 16.256*var4[19]*t1440*t671*t1633;
  t6759 = -16.256*var4[24]*t1440*t671*t1633;
  t6767 = 4.064*var4[24]*t1549*t3241;
  t6771 = -4.064*var4[29]*t1549*t3241;
  t6772 = t6723 + t6727 + t6733 + t6734 + t6736 + t6752 + t6753 + t6759 + t6767 + t6771;
  p_output1[0]=t2853*var2[2] + t2853*var2[6] + (t2905 + t2955 + t2956 + t2965 + t3003 + t3031 + t3062 + t3174 + t3248 + t3265)*var3[2] + (1. + t2905 + t2955 + t2956 + t2965 + t3003 + t3031 + t3062 + t3174 + t3248 + t3265)*var3[6] + var3[7]*(2.032*t2886*t359*var4[0] - 2.032*t2886*t359*var4[5] + 8.128*t353*t598*t705*var4[5] - 8.128*t353*t598*t705*var4[10] + 12.191999999999998*t1441*t953*t998*var4[10] + 8.128*t1440*t1633*t671*var4[15] - 12.191999999999998*t1441*t953*t998*var4[15] + 2.032*t1549*t3241*var4[20] - 8.128*t1440*t1633*t671*var4[20] - 2.032*t1549*t3241*var4[25]) + var2[7]*(-1.*t2373*var2[2] - 1.*t2373*var2[6] - 1.*var2[7]*(3.3032192*t353*t705*var4[0] - 6.6064384*t353*t705*var4[5] + 9.9096576*t598*t953*t998*var4[5] + 9.9096576*t1440*t1441*t671*var4[10] + 3.3032192*t353*t705*var4[10] - 19.8193152*t598*t953*t998*var4[10] + 3.3032192*t1549*t1633*var4[15] - 19.8193152*t1440*t1441*t671*var4[15] + 9.9096576*t598*t953*t998*var4[15] - 6.6064384*t1549*t1633*var4[20] + 9.9096576*t1440*t1441*t671*var4[20] + 3.3032192*t1549*t1633*var4[25]));
  p_output1[1]=t4934*var2[2] + t4934*var2[6] + t5234*var3[2] + t5234*var3[6] + var3[7]*(1. + 2.032*t2886*t359*var4[1] - 2.032*t2886*t359*var4[6] + 8.128*t353*t598*t705*var4[6] - 8.128*t353*t598*t705*var4[11] + 12.191999999999998*t1441*t953*t998*var4[11] + 8.128*t1440*t1633*t671*var4[16] - 12.191999999999998*t1441*t953*t998*var4[16] + 2.032*t1549*t3241*var4[21] - 8.128*t1440*t1633*t671*var4[21] - 2.032*t1549*t3241*var4[26]) + var2[7]*(-1.*t4448*var2[2] - 1.*t4448*var2[6] - 1.*var2[7]*(3.3032192*t353*t705*var4[1] - 6.6064384*t353*t705*var4[6] + 9.9096576*t598*t953*t998*var4[6] + 9.9096576*t1440*t1441*t671*var4[11] + 3.3032192*t353*t705*var4[11] - 19.8193152*t598*t953*t998*var4[11] + 3.3032192*t1549*t1633*var4[16] - 19.8193152*t1440*t1441*t671*var4[16] + 9.9096576*t598*t953*t998*var4[16] - 6.6064384*t1549*t1633*var4[21] + 9.9096576*t1440*t1441*t671*var4[21] + 3.3032192*t1549*t1633*var4[26]));
  p_output1[2]=t5893*var2[2] + t5893*var2[6] + t5961*var3[2] + var3[3] + t5961*var3[6] + var3[7]*(2.032*t2886*t359*var4[2] - 2.032*t2886*t359*var4[7] + 8.128*t353*t598*t705*var4[7] - 8.128*t353*t598*t705*var4[12] + 12.191999999999998*t1441*t953*t998*var4[12] + 8.128*t1440*t1633*t671*var4[17] - 12.191999999999998*t1441*t953*t998*var4[17] + 2.032*t1549*t3241*var4[22] - 8.128*t1440*t1633*t671*var4[22] - 2.032*t1549*t3241*var4[27]) + var2[7]*(-1.*t5740*var2[2] - 1.*t5740*var2[6] - 1.*var2[7]*(3.3032192*t353*t705*var4[2] - 6.6064384*t353*t705*var4[7] + 9.9096576*t598*t953*t998*var4[7] + 9.9096576*t1440*t1441*t671*var4[12] + 3.3032192*t353*t705*var4[12] - 19.8193152*t598*t953*t998*var4[12] + 3.3032192*t1549*t1633*var4[17] - 19.8193152*t1440*t1441*t671*var4[17] + 9.9096576*t598*t953*t998*var4[17] - 6.6064384*t1549*t1633*var4[22] + 9.9096576*t1440*t1441*t671*var4[22] + 3.3032192*t1549*t1633*var4[27]));
  p_output1[3]=t6348*var2[2] + t6348*var2[6] + t6434*var3[2] + var3[4] + t6434*var3[6] + var3[7]*(2.032*t2886*t359*var4[3] - 2.032*t2886*t359*var4[8] + 8.128*t353*t598*t705*var4[8] - 8.128*t353*t598*t705*var4[13] + 12.191999999999998*t1441*t953*t998*var4[13] + 8.128*t1440*t1633*t671*var4[18] - 12.191999999999998*t1441*t953*t998*var4[18] + 2.032*t1549*t3241*var4[23] - 8.128*t1440*t1633*t671*var4[23] - 2.032*t1549*t3241*var4[28]) + var2[7]*(-1.*t6250*var2[2] - 1.*t6250*var2[6] - 1.*var2[7]*(3.3032192*t353*t705*var4[3] - 6.6064384*t353*t705*var4[8] + 9.9096576*t598*t953*t998*var4[8] + 9.9096576*t1440*t1441*t671*var4[13] + 3.3032192*t353*t705*var4[13] - 19.8193152*t598*t953*t998*var4[13] + 3.3032192*t1549*t1633*var4[18] - 19.8193152*t1440*t1441*t671*var4[18] + 9.9096576*t598*t953*t998*var4[18] - 6.6064384*t1549*t1633*var4[23] + 9.9096576*t1440*t1441*t671*var4[23] + 3.3032192*t1549*t1633*var4[28]));
  p_output1[4]=t6695*var2[2] + t6695*var2[6] + t6772*var3[2] + var3[5] + t6772*var3[6] + var3[7]*(2.032*t2886*t359*var4[4] - 2.032*t2886*t359*var4[9] + 8.128*t353*t598*t705*var4[9] - 8.128*t353*t598*t705*var4[14] + 12.191999999999998*t1441*t953*t998*var4[14] + 8.128*t1440*t1633*t671*var4[19] - 12.191999999999998*t1441*t953*t998*var4[19] + 2.032*t1549*t3241*var4[24] - 8.128*t1440*t1633*t671*var4[24] - 2.032*t1549*t3241*var4[29]) + var2[7]*(-1.*t6606*var2[2] - 1.*t6606*var2[6] - 1.*var2[7]*(3.3032192*t353*t705*var4[4] - 6.6064384*t353*t705*var4[9] + 9.9096576*t598*t953*t998*var4[9] + 9.9096576*t1440*t1441*t671*var4[14] + 3.3032192*t353*t705*var4[14] - 19.8193152*t598*t953*t998*var4[14] + 3.3032192*t1549*t1633*var4[19] - 19.8193152*t1440*t1441*t671*var4[19] + 9.9096576*t598*t953*t998*var4[19] - 6.6064384*t1549*t1633*var4[24] + 9.9096576*t1440*t1441*t671*var4[24] + 3.3032192*t1549*t1633*var4[29]));
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

  double *var1,*var2,*var3,*var4,*var5;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 5)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Five input(s) required (var1,var2,var3,var4,var5).");
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
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5);


}

#else // MATLAB_MEX_FILE

#include "d2y_position_RightSS1.hh"

namespace RightSS1
{

void d2y_position_RightSS1_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5);

}

}

#endif // MATLAB_MEX_FILE
