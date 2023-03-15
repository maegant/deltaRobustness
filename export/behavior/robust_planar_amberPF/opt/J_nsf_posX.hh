/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:44 GMT-08:00
 */

#ifndef J_NSF_POSX_HH
#define J_NSF_POSX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS
{

  void J_nsf_posX_raw(double *p_output1, const double *var1);

  inline void J_nsf_posX(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 5, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_nsf_posX_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_NSF_POSX_HH
