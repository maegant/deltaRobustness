/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:17:14 GMT-08:00
 */

#ifndef XDISCRETEMAPLEFTIMPACTRELABEL_HH
#define XDISCRETEMAPLEFTIMPACTRELABEL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftImpactRelabel
{

  void xDiscreteMapLeftImpactRelabel_raw(double *p_output1, const double *var1,const double *var2);

  inline void xDiscreteMapLeftImpactRelabel(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 9, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    xDiscreteMapLeftImpactRelabel_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // XDISCRETEMAPLEFTIMPACTRELABEL_HH
