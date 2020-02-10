#ifndef MATRIX_H_
#define MATRIX_H_
#include <string>
#include <tuple>
#include <iostream>
#include <vector>
#include "noncompatible_dimension_exception.h"

namespace linear_algebra_operations
{

template <typename T>
using Array2D = std::vector<std::vector<T> >;

template <typename T>
class Vector;

template <typename T>
class Matrix
{

  
public:
    Matrix() = default;
    Matrix(int num_rows,int num_columns,T initial_value);
    virtual ~Matrix() = default;
    Matrix(Array2D<T>& arr);
    Matrix(const Matrix& mat);  
    Matrix<T>& operator=(const Matrix<T> &rhs) const ; 
    Matrix<T>& operator=(const Matrix<T> &rhs) ; 

    bool operator==(const Matrix<T> &rhs) const;  
    bool operator!=(const Matrix<T> &rhs) const;  
    Matrix<T> operator-(const Matrix<T> &rhs) ; 
    Matrix<T>& operator-=(const Matrix<T> &rhs); 
    Matrix<T> operator+(const Matrix<T> &rhs);  
    Matrix<T>& operator+=(const Matrix<T> &rhs); 
    Matrix<T> operator*(const Matrix<T>& rhs); 
    Matrix<T>& operator*=(const Matrix<T> &rhs); 

    const T& operator()(const int& row,const int& column) const;  
    T& operator()(const int& row,const int& column); 

    Matrix<T> operator*(const T& rhs); 
    Matrix<T> operator-(const T& rhs);
    Matrix<T> operator+(const T& rhs); 
    Matrix<T>& operator*=(const T& rhs);   
    Matrix<T>& operator+=(const T& rhs);   
    Matrix<T>& operator-=(const T& rhs); 
    
    Vector<T> Multiply(const Vector<T>& vec);  

    int GetRowSize() const{return num_rows_;}
    int GetColumnSize() const {return num_columns_;}

  private:
   int num_rows_;
   int num_columns_;

   Array2D<T> m_values_;
};



}//end of namespace linear_algebra_operations

#include <matrix.cpp>


#endif //MATRIX_H

