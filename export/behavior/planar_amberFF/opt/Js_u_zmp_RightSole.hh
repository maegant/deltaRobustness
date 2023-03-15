/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:19 GMT-08:00
 */

#ifndef JS_U_ZMP_RIGHTSOLE_HH
#define JS_U_ZMP_RIGHTSOLE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS2
{

  void Js_u_zmp_RightSole_raw(double *p_output1, const double *var1);

  inline void Js_u_zmp_RightSole(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_u_zmp_RightSole_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_U_ZMP_RIGHTSOLE_HH
