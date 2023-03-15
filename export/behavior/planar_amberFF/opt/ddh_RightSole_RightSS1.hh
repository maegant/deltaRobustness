/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:29 GMT-08:00
 */

#ifndef DDH_RIGHTSOLE_RIGHTSS1_HH
#define DDH_RIGHTSOLE_RIGHTSS1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS1
{

  void ddh_RightSole_RightSS1_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void ddh_RightSole_RightSS1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 9, 1);
    assert_size_matrix(var3, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    ddh_RightSole_RightSS1_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DDH_RIGHTSOLE_RIGHTSS1_HH
