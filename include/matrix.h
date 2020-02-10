#ifndef MATRIX_H_
#define MATRIX_H_
#include <string>
#include <tuple>
#include <iostream>
#include <vector>

namespace linear_algebra_operations
{


    using Array2D = std::vector<std::vector<int> >;
class Matrix
{

  
public:
    Matrix(){}
    Matrix(int num_rows,int num_columns,int initial_value);
    Matrix(Array2D& arr);

    Matrix(const Matrix& mat);  //done
    Matrix& operator=(const Matrix &rhs) const ; //done
    Matrix& operator=(const Matrix &rhs) ; //done

    bool operator==(const Matrix &rhs) const;  //done
    bool operator!=(const Matrix &rhs) const;  //done
    Matrix operator-(const Matrix &rhs) ; //done
    Matrix& operator-=(const Matrix &rhs); //done
    Matrix operator+(const Matrix &rhs);  //done
    Matrix& operator+=(const Matrix &rhs); //done
    Matrix operator*(const Matrix& rhs); //done
    Matrix& operator*=(const Matrix &rhs); //done

    const int& operator()(const int& row,const int& column) const;  //done
    int& operator()(const int& row,const int& column); //done

    Matrix operator*(const int& rhs); 
    Matrix operator-(const int& rhs);
    Matrix operator+(const int& rhs) ; 
    Matrix& operator*=(const int& rhs);   
    Matrix& operator+=(const int& rhs) ;   
    Matrix& operator-=(const int& rhs) ;   

    friend std::ostream &operator<<(std::ostream &os, const Matrix &matrix); //done

    int GetRowSize() const{return num_rows_;}
    int GetColumnSize() const {return num_columns_;}

  private:
   int num_rows_;
   int num_columns_;
   
   Array2D m_values_;
};

}//end of namespace linear_algebra_operations


#endif //MATRIX_H

