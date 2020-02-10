#ifndef MATRIX_CPP_
#define MATRIX_CPP_

#include <matrix.h>

namespace linear_algebra_operations
{
    template<typename T>
    Matrix<T>::Matrix(int num_rows,int num_columns,T initial_value):
                num_rows_{num_rows},num_columns_{num_columns}
    {   
         m_values_.resize(num_rows);
         for(int row_index = 0; row_index < num_rows;row_index++)
         {
              m_values_[row_index].resize(num_columns,initial_value);
         }
    }
    template<typename T>
    Matrix<T>::Matrix(Array2D<T>& array_2d)
    {   
         m_values_.resize(array_2d.size());
         for(int row_index = 0; row_index < array_2d.size();row_index++)
         {
             for(int col_index = 0; col_index < array_2d[row_index].size();col_index++)
             {
                m_values_.at(row_index).emplace_back(array_2d[row_index][col_index]);
             }
         }
         num_rows_ = array_2d.size();
         num_columns_ = array_2d.at(0).size();
    }
    template<typename T>
    Matrix<T>::Matrix(const Matrix<T>& mat)
    {
        m_values_ = mat.m_values_;
        num_columns_ = mat.GetColumnSize();
        num_rows_ = mat.GetRowSize();
    }
    template<typename T>
    const T& Matrix<T>::operator()(const int& row,const int& column) const
    {
        return m_values_.at(row).at(column);
    }
    template<typename T>
    T& Matrix<T>::operator()(const int& row,const int& column) 
    {
        return m_values_.at(row).at(column);
    }

    template<typename T>
    Matrix<T> Matrix<T>::operator+(const Matrix<T> &rhs)
    {
        Matrix<T> result(num_rows_,num_columns_,0);

        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            for(int column_index = 0; column_index < num_columns_;column_index++)
            {
                result(row_index,column_index) = m_values_[row_index][column_index]
                             + rhs(row_index,column_index);
            }
        }
        return result;

    }
    template<typename T>
    Matrix<T>& Matrix<T>::operator+=(const Matrix<T> &rhs)
    {
        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            for(int column_index = 0; column_index < num_columns_;column_index++)
            {
                this->m_values_[row_index][column_index] += rhs(row_index,column_index);
            }
        }
        return *this;
    }  
    template<typename T>
    Matrix<T> Matrix<T>::operator-(const Matrix<T> &rhs)
    {
        Matrix<T> result(num_rows_,num_columns_,0);

        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            for(int column_index = 0; column_index < num_columns_;column_index++)
            {
                result(row_index,column_index) = m_values_[row_index][column_index]
                             - rhs(row_index,column_index);
            }
        }
        return result;
    }

    template<typename T>
    Matrix<T>& Matrix<T>::operator-=(const Matrix<T> &rhs)
    {
        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            for(int column_index = 0; column_index < num_columns_;column_index++)
            {
                this->m_values_[row_index][column_index] -= rhs(row_index,column_index);
            }
        }
        return *this;
    }  
    
    template<typename T>
    Matrix<T> Matrix<T>::operator*(const Matrix<T>& rhs)
    {

        unsigned rhs_rows = rhs.GetRowSize();
        unsigned rhs_cols = rhs.GetColumnSize();
        Matrix<T> product(rhs_rows, rhs_rows, 0.0);

        for (unsigned i=0; i<rhs_rows; i++) 
        {
            for (unsigned j=0; j<rhs_cols; j++) 
            {
                for (unsigned k=0; k<rhs_rows; k++)
                {
                    product(i,j) += this->m_values_[i][k] * rhs(k,j);
                }
            }
        }
         return product;
    }

    template<typename T>
    Matrix<T>& Matrix<T>::operator*=(const Matrix<T>& rhs)
    {
        Matrix<T> temp = (*this) * rhs;
        *this = temp;
        return *this;

    }

    template<typename T>
    Matrix<T>& Matrix<T>::operator=(const Matrix<T>& rhs) 
    {
        if(this == &rhs)
        {
            return *this;
        }

        num_rows_ = rhs.GetRowSize();
        num_columns_ = rhs.GetColumnSize();

        m_values_.resize(num_rows_);

        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            m_values_[row_index].resize(num_columns_);
        }

        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            for(int column_index = 0; column_index < num_columns_;column_index++)
            {
                m_values_.at(row_index).at(column_index) = rhs(row_index,column_index);
            }
        }

        return *this;
    } 
    template<typename T>
    bool Matrix<T>::operator==(const Matrix<T> &rhs) const
    {
        bool result = false;

        if(this->m_values_ == rhs.m_values_ )
        {
                result = true;
        }
        return result;

    }
    template<typename T>
    bool Matrix<T>::operator!=(const Matrix<T> &rhs) const
    {
        return !(*this == rhs);
    }

    template<typename T>
    Matrix<T> Matrix<T>::operator+(const T& rhs) 
    {
        Matrix<T> sum(num_rows_,num_columns_,0);
        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            for(int column_index = 0; column_index < num_columns_;column_index++)
            {
               sum(row_index,column_index) = m_values_[row_index][column_index] + rhs; 
            }
            
        }
        return sum;
    }
    template<typename T>
    Matrix<T> Matrix<T>::operator-(const T& rhs)
    {
        Matrix<T> difference(num_rows_,num_columns_,0);
        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            for(int column_index = 0; column_index < num_columns_;column_index++)
            {
               difference(row_index,column_index) = m_values_[row_index][column_index] - rhs; 
            }
            
        }
        return difference;
    }
    template<typename T>
    Matrix<T>& Matrix<T>::operator+=(const T& rhs)
    {
        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            for(int column_index = 0; column_index < num_columns_;column_index++)
            {
               this->m_values_[row_index][column_index] +=  rhs; 
            }
        }
        return *this;
    }
    template<typename T>
    Matrix<T>& Matrix<T>::operator-=(const T& rhs)
    {
        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            for(int column_index = 0; column_index < num_columns_;column_index++)
            {
               this->m_values_[row_index][column_index] -=  rhs; 
            }
        }
        return *this;
    }
    template<typename T>
    Matrix<T> Matrix<T>::operator*(const T& rhs)
    {
        Matrix<T> scalar_product(num_rows_,num_columns_,0);
        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            for(int column_index = 0; column_index < num_columns_;column_index++)
            {
                scalar_product(row_index,column_index) = m_values_[row_index][column_index] * rhs; 
            }
        }
        return scalar_product;
    }
    template<typename T>
    Matrix<T>& Matrix<T>::operator*=(const T& rhs)
    {
        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            for(int column_index = 0; column_index < num_columns_;column_index++)
            {
                this->m_values_[row_index][column_index] *= rhs; 
            }
        }
        return *this;
    }

    

}

#endif