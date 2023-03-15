/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:26 GMT-08:00
 */

#ifndef H_RIGHTSOLE_RIGHTSS_HH
#define H_RIGHTSOLE_RIGHTSS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS
{

  void h_RightSole_RightSS_raw(double *p_output1, const double *var1,const double *var2);

  inline void h_RightSole_RightSS(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    h_RightSole_RightSS_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // H_RIGHTSOLE_RIGHTSS_HH
