/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:25:46 GMT-08:00
 */

#ifndef JS_CE1_VEC_L8_J4_AMBER3_FEET_HH
#define JS_CE1_VEC_L8_J4_AMBER3_FEET_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS1
{

  void Js_Ce1_vec_L8_J4_amber3_feet_raw(double *p_output1, const double *var1);

  inline void Js_Ce1_vec_L8_J4_amber3_feet(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 0, 0);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_Ce1_vec_L8_J4_amber3_feet_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_CE1_VEC_L8_J4_AMBER3_FEET_HH
