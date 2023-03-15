/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 15:18:04 GMT-08:00
 */

#ifndef HS_INT_X_HH
#define HS_INT_X_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace RightSS2
{

  void hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8);

  inline void hs_int_x(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4,const Eigen::VectorXd &var5,const Eigen::VectorXd &var6,const Eigen::VectorXd &var7,const Eigen::VectorXd &var8)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 9, 1);
    assert_size_matrix(var3, 9, 1);
    assert_size_matrix(var4, 9, 1);
    assert_size_matrix(var5, 9, 1);
    assert_size_matrix(var6, 9, 1);
    assert_size_matrix(var7, 9, 1);
    assert_size_matrix(var8, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    hs_int_x_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data(),var5.data(),var6.data(),var7.data(),var8.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // HS_INT_X_HH
