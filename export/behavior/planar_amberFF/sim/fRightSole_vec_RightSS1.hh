/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:20:51 GMT-08:00
 */

#ifndef FRIGHTSOLE_VEC_RIGHTSS1_HH
#define FRIGHTSOLE_VEC_RIGHTSS1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void fRightSole_vec_RightSS1_raw(double *p_output1, const double *var1,const double *var2);

  inline void fRightSole_vec_RightSS1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 9, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    fRightSole_vec_RightSS1_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FRIGHTSOLE_VEC_RIGHTSS1_HH
