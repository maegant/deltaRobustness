/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:27:05 GMT-08:00
 */

#ifndef YA_POSITION_RIGHTSS_HH
#define YA_POSITION_RIGHTSS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void ya_position_RightSS_raw(double *p_output1, const double *var1);

  inline void ya_position_RightSS(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    ya_position_RightSS_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // YA_POSITION_RIGHTSS_HH
