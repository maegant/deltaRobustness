/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:43 GMT-08:00
 */

#ifndef DXDISCRETEMAP4_LEFTLATEIMPACTRELABEL_HH
#define DXDISCRETEMAP4_LEFTLATEIMPACTRELABEL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftLateImpactRelabel
{

  void dxDiscreteMap4_LeftLateImpactRelabel_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void dxDiscreteMap4_LeftLateImpactRelabel(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 9, 1);
    assert_size_matrix(var3, 9, 1);
    assert_size_matrix(var4, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 9, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dxDiscreteMap4_LeftLateImpactRelabel_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DXDISCRETEMAP4_LEFTLATEIMPACTRELABEL_HH
