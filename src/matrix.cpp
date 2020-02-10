
#include <matrix.h>

namespace linear_algebra_operations
{

    Matrix::Matrix(int num_rows,int num_columns,int initial_value):
                num_rows_{num_rows},num_columns_{num_columns}
    {   
         m_values_.resize(num_rows);
         for(int row_index = 0; row_index < num_rows;row_index++)
         {
                 m_values_[row_index].resize(num_columns,initial_value);
         }
    }

    Matrix::Matrix(Array2D& array_2d)
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

    Matrix::Matrix(const Matrix& mat)
    {
        m_values_ = mat.m_values_;
        num_columns_ = mat.GetColumnSize();
        num_rows_ = mat.GetRowSize();
    }

    const int& Matrix::operator()(const int& row,const int& column) const
    {
        return m_values_.at(row).at(column);
    }

    int& Matrix::operator()(const int& row,const int& column) 
    {
        return m_values_.at(row).at(column);
    }


    Matrix Matrix::operator+(const Matrix &rhs)
    {
        Matrix result(num_rows_,num_columns_,0);

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

    Matrix& Matrix::operator+=(const Matrix &rhs)
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

    Matrix Matrix::operator-(const Matrix &rhs)
    {
        Matrix result(num_rows_,num_columns_,0);

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

    Matrix& Matrix::operator-=(const Matrix &rhs)
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

    Matrix Matrix::operator*(const Matrix& rhs)
    {

        unsigned rhs_rows = rhs.GetRowSize();
        unsigned rhs_cols = rhs.GetColumnSize();
        Matrix product(rhs_rows, rhs_rows, 0.0);

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

    Matrix& Matrix::operator*=(const Matrix& rhs)
    {
        Matrix temp = (*this) * rhs;
        *this = temp;
        return *this;

    }


    Matrix& Matrix::operator=(const Matrix& rhs) 
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

    bool Matrix::operator==(const Matrix &rhs) const
    {
        bool result = false;

        if(this->m_values_ == rhs.m_values_ )
        {
                result = true;
        }
        return result;

    }

    bool Matrix::operator!=(const Matrix &rhs) const
    {
        return !(*this == rhs);
    }




    std::ostream &operator<<(std::ostream &os, const Matrix &mat) 
    {
        for(int row_index = 0 ; row_index < mat.GetRowSize() ; row_index++)
        {
            for(int column_index = 0; column_index < mat.GetColumnSize();column_index++)
            {
                os << mat.m_values_[row_index][column_index] << " " ;
            }
            os << std::endl;
        }
        
        return os;
    }

    Matrix Matrix::operator+(const int& rhs) 
    {
        Matrix sum(num_rows_,num_columns_,0);
        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            for(int column_index = 0; column_index < num_columns_;column_index++)
            {
               sum(row_index,column_index) = m_values_[row_index][column_index] + rhs; 
            }
            
        }
        return sum;
    }

    Matrix Matrix::operator-(const int& rhs)
    {
        Matrix difference(num_rows_,num_columns_,0);
        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            for(int column_index = 0; column_index < num_columns_;column_index++)
            {
               difference(row_index,column_index) = m_values_[row_index][column_index] - rhs; 
            }
            
        }
        return difference;
    }

    Matrix& Matrix::operator+=(const int& rhs)
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

    Matrix& Matrix::operator-=(const int& rhs)
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

    Matrix Matrix::operator*(const int& rhs)
    {
        Matrix scalar_product(num_rows_,num_columns_,0);
        for(int row_index = 0 ; row_index < num_rows_ ; row_index++)
        {
            for(int column_index = 0; column_index < num_columns_;column_index++)
            {
                scalar_product(row_index,column_index) = m_values_[row_index][column_index] * rhs; 
            }
        }
        return scalar_product;
    }

    Matrix& Matrix::operator*=(const int& rhs)
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