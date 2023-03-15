/*
 * Automatically Generated from Mathematica.
 * Wed 1 Mar 2023 13:20:46 GMT-08:00
 */

#ifndef JD2YD_POSITION_RIGHTSS1_HH
#define JD2YD_POSITION_RIGHTSS1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Jd2yd_position_RightSS1_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void Jd2yd_position_RightSS1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 9, 1);
    assert_size_matrix(var3, 30, 1);
    assert_size_matrix(var4, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 5, 18);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jd2yd_position_RightSS1_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JD2YD_POSITION_RIGHTSS1_HH
