/*
 * Automatically Generated from Mathematica.
 * Thu 16 Feb 2023 09:34:46 GMT-08:00
 */

#ifndef JS_FRIGHTSOLE_VEC_RIGHTSS0_HH
#define JS_FRIGHTSOLE_VEC_RIGHTSS0_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS0
{

  void Js_fRightSole_vec_RightSS0_raw(double *p_output1, const double *var1);

  inline void Js_fRightSole_vec_RightSS0(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 17, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_fRightSole_vec_RightSS0_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_FRIGHTSOLE_VEC_RIGHTSS0_HH
