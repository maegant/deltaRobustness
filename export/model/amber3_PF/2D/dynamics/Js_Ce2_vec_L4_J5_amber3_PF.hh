/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:32:32 GMT-08:00
 */

#ifndef JS_CE2_VEC_L4_J5_AMBER3_PF_HH
#define JS_CE2_VEC_L4_J5_AMBER3_PF_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS
{

  void Js_Ce2_vec_L4_J5_amber3_PF_raw(double *p_output1, const double *var1);

  inline void Js_Ce2_vec_L4_J5_amber3_PF(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 0, 0);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_Ce2_vec_L4_J5_amber3_PF_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_CE2_VEC_L4_J5_AMBER3_PF_HH
