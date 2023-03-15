/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:36 GMT-08:00
 */

#ifndef NSF_PITCH_RIGHTSS2_HH
#define NSF_PITCH_RIGHTSS2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS2
{

  void nsf_pitch_RightSS2_raw(double *p_output1, const double *var1);

  inline void nsf_pitch_RightSS2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    nsf_pitch_RightSS2_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // NSF_PITCH_RIGHTSS2_HH
