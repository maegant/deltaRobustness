/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:16:17 GMT-08:00
 */

#ifndef PRIGHTSOLECONT_RIGHTSS1_HH
#define PRIGHTSOLECONT_RIGHTSS1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS1
{

  void pRightSoleCont_RightSS1_raw(double *p_output1, const double *var1,const double *var2);

  inline void pRightSoleCont_RightSS1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 3);
    assert_size_matrix(var2, 1, 3);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    pRightSoleCont_RightSS1_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // PRIGHTSOLECONT_RIGHTSS1_HH
