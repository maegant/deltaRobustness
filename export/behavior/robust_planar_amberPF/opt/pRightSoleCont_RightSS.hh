/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:20 GMT-08:00
 */

#ifndef PRIGHTSOLECONT_RIGHTSS_HH
#define PRIGHTSOLECONT_RIGHTSS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS
{

  void pRightSoleCont_RightSS_raw(double *p_output1, const double *var1,const double *var2);

  inline void pRightSoleCont_RightSS(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
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
    pRightSoleCont_RightSS_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // PRIGHTSOLECONT_RIGHTSS_HH