/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:51 GMT-08:00
 */

#ifndef JS_DXDISCRETEMAP3_LEFTLATEIMPACTRELABEL_HH
#define JS_DXDISCRETEMAP3_LEFTLATEIMPACTRELABEL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftLateImpactRelabel
{

  void Js_dxDiscreteMap3_LeftLateImpactRelabel_raw(double *p_output1, const double *var1);

  inline void Js_dxDiscreteMap3_LeftLateImpactRelabel(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 65, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_dxDiscreteMap3_LeftLateImpactRelabel_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_DXDISCRETEMAP3_LEFTLATEIMPACTRELABEL_HH
