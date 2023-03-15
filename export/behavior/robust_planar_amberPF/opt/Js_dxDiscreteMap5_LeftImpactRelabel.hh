/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:35:13 GMT-08:00
 */

#ifndef JS_DXDISCRETEMAP5_LEFTIMPACTRELABEL_HH
#define JS_DXDISCRETEMAP5_LEFTIMPACTRELABEL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftImpactRelabel
{

  void Js_dxDiscreteMap5_LeftImpactRelabel_raw(double *p_output1, const double *var1);

  inline void Js_dxDiscreteMap5_LeftImpactRelabel(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 65, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_dxDiscreteMap5_LeftImpactRelabel_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_DXDISCRETEMAP5_LEFTIMPACTRELABEL_HH
