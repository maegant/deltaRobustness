/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:31 GMT-08:00
 */

#ifndef JS_TAU_VELOCITY_RIGHTSS2_HH
#define JS_TAU_VELOCITY_RIGHTSS2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS2
{

  void Js_tau_velocity_RightSS2_raw(double *p_output1, const double *var1);

  inline void Js_tau_velocity_RightSS2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 5, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_tau_velocity_RightSS2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_TAU_VELOCITY_RIGHTSS2_HH
