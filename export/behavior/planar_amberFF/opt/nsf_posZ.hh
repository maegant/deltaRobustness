/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:34 GMT-08:00
 */

#ifndef NSF_POSZ_HH
#define NSF_POSZ_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS2
{

  void nsf_posZ_raw(double *p_output1, const double *var1);

  inline void nsf_posZ(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    nsf_posZ_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // NSF_POSZ_HH