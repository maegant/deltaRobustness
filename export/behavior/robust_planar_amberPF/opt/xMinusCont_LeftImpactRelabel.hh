/*
 * Automatically Generated from Mathematica.
 * Thu 2 Mar 2023 09:34:53 GMT-08:00
 */

#ifndef XMINUSCONT_LEFTIMPACTRELABEL_HH
#define XMINUSCONT_LEFTIMPACTRELABEL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftImpactRelabel
{

  void xMinusCont_LeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2);

  inline void xMinusCont_LeftImpactRelabel(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 7, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    xMinusCont_LeftImpactRelabel_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // XMINUSCONT_LEFTIMPACTRELABEL_HH