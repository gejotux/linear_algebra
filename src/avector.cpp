#ifndef AVECTOR_CPP_
#define AVECTOR_CPP_
#include <avector.h>
#include <algorithm>
#include <iterator>


namespace linear_algebra_operations
{
    template<typename T>
    Vector<T>::Vector(const int dimension,T initial_value)
    {
        m_value_.resize(dimension,initial_value);
        vec_size_ = m_value_.size();
    }

    template<typename T>
    Vector<T>::Vector(const Array1D<T>& array_1d)
    {
        for(const auto& val : array_1d)
        {   
            m_value_.push_back(val);
        }
        vec_size_= m_value_.size();
    }

    template<typename T>
    Vector<T>::Vector(const Vector<T>& vec)
    {
        this->m_value_ = vec.m_value_;
        this->vec_size_ = vec.vec_size_;
    }

    template<typename T>
    Vector<T>& Vector<T>::operator=(const Vector<T>& rhs)
    {
        //std::swap(this->m_value_,rhs.m_value_);
        
        if(this == &rhs)
        {
            return *this;
        }
        this->m_value_.assign(rhs.m_value_.begin(), rhs.m_value_.end());   
        return *this;
    }

    template<typename T>
    bool Vector<T>::operator==(const Vector<T>& vec) const
    {
        return this->m_value_ == vec.m_value_;
    }

    template<typename T>
    Vector<T> Vector<T>::operator+(const Vector<T>& vec)
    {
        Vector<T> sum(vec.GetVectorSize(),0);

        for(int vec_index = 0; vec_index < vec.GetVectorSize();vec_index++)
        {
            sum(vec_index) = this->m_value_[vec_index] + vec.m_value_[vec_index];
        }
        return sum;

    }

    template<typename T>
    Vector<T>& Vector<T>::operator+=(const Vector<T>& vec)
    {
        for(int vec_index = 0; vec_index < vec.GetVectorSize();vec_index++)
        {
            this->m_value_[vec_index] += vec.m_value_[vec_index];
        }
        return *this;
    }

    template<typename T>
    Vector<T> Vector<T>::operator-(const Vector<T>& vec)
    {
        Vector<T> difference(vec.GetVectorSize(),0);

        for(int vec_index = 0; vec_index < vec.GetVectorSize();vec_index++)
        {
            difference(vec_index) = this->m_value_[vec_index] - vec.m_value_[vec_index];
        }
        return difference;

    }
    
    template<typename T>
    Vector<T>& Vector<T>::operator-=(const Vector<T>& vec)
    {
        for(int vec_index = 0; vec_index < vec.GetVectorSize();vec_index++)
        {
            this->m_value_[vec_index] -= vec.m_value_[vec_index];
        }
        return *this;
    }

    template<typename T>
    int Vector<T>::DotProduct(const Vector<T>& vec_b)
    {
        int dot_product = 0 ;

        for(int vec_index = 0 ; vec_index < vec_b.GetVectorSize();vec_index++)
        {
            dot_product += this->m_value_[vec_index] * vec_b.m_value_[vec_index];
        }
        return dot_product;
    }

    template<typename T>
    Vector<T> Vector<T>::operator*(T rhs)
    {
        Vector<T> scaled(vec_size_,0);;
        for(int vec_index =0 ; vec_index < vec_size_;vec_index++)
        {
            scaled(vec_index) = this->m_value_[vec_index] * rhs;
        }
        return scaled;
    }

    template<typename T>
    Vector<T>& Vector<T>::operator*=(T rhs)
    {
        for(int vec_index =0 ; vec_index < vec_size_;vec_index++)
        {
            this->m_value_[vec_index] *= rhs;
        }
        return *this;
    }

    template<typename T>
    int& Vector<T>::operator()(const int& index) 
    {
        return m_value_.at(index);
    }

    template<typename T>
    Vector<T> Vector<T>::Multiply(const Matrix<T>& mat)
    {
        Vector<T> result(vec_size_,0);

        if(vec_size_ != mat.GetColumnSize())
        {
            throw IncomaptibleSizeException();
        }

        for(int row_index = 0;row_index < mat.GetRowSize();row_index++)
        {
            for(int col_index = 0; col_index < mat.GetColumnSize();col_index++ )
            {
                result(row_index)  += mat(row_index,col_index) * m_value_[col_index];
            }
        }
        return result;
    }



}//end of namespace

#endif