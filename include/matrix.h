#ifndef MATRIX_H_
#define MATRIX_H_
#include <string>
#include <tuple>
#include <iostream>
#include <vector>

namespace linear_algebra_operations
{
template <typename T>
using Array2D = std::vector<std::vector<T> >;

template <typename T>
class Matrix
{

  
public:
    Matrix(){}
    Matrix(int num_rows,int num_columns,T initial_value);
    virtual ~Matrix() = default;
    Matrix(Array2D<T>& arr);
    Matrix(const Matrix& mat);  //done
    Matrix<T>& operator=(const Matrix<T> &rhs) const ; //done
    Matrix<T>& operator=(const Matrix<T> &rhs) ; //done

    bool operator==(const Matrix<T> &rhs) const;  //done
    bool operator!=(const Matrix<T> &rhs) const;  //done
    Matrix<T> operator-(const Matrix<T> &rhs) ; //done
    Matrix<T>& operator-=(const Matrix<T> &rhs); //done
    Matrix<T> operator+(const Matrix<T> &rhs);  //done
    Matrix<T>& operator+=(const Matrix<T> &rhs); //done
    Matrix<T> operator*(const Matrix<T>& rhs); //done
    Matrix<T>& operator*=(const Matrix<T> &rhs); //done

    const T& operator()(const int& row,const int& column) const;  //done
    T& operator()(const int& row,const int& column); //done

    Matrix<T> operator*(const T& rhs); 
    Matrix<T> operator-(const T& rhs);
    Matrix<T> operator+(const T& rhs); 
    Matrix<T>& operator*=(const T& rhs);   
    Matrix<T>& operator+=(const T& rhs);   
    Matrix<T>& operator-=(const T& rhs);   

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

