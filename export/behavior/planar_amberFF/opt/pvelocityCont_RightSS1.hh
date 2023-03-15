/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:11 GMT-08:00
 */

#ifndef PVELOCITYCONT_RIGHTSS1_HH
#define PVELOCITYCONT_RIGHTSS1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS1
{

  void pvelocityCont_RightSS1_raw(double *p_output1, const double *var1,const double *var2);

  inline void pvelocityCont_RightSS1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 2);
    assert_size_matrix(var2, 1, 2);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    pvelocityCont_RightSS1_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // PVELOCITYCONT_RIGHTSS1_HH
