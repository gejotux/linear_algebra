#include <avector.h>
#include <algorithm>
#include <iterator>


namespace linear_algebra_operations
{
    Vector::Vector(const int dimension,int initial_value)
    {
        m_value_.resize(dimension,initial_value);
        vec_size_ = m_value_.size();
    }

    Vector::Vector(const Array1D& array_1d)
    {
        for(const auto& val : array_1d)
        {   
            m_value_.push_back(val);
        }
        vec_size_= m_value_.size();
    }

    Vector::Vector(const Vector& vec)
    {
        this->m_value_ = vec.m_value_;
        this->vec_size_ = vec.vec_size_;
    }

    Vector& Vector::operator=(const Vector& rhs)
    {
        //std::swap(this->m_value_,rhs.m_value_);
        
        if(this == &rhs)
        {
            return *this;
        }
        this->m_value_.assign(rhs.m_value_.begin(), rhs.m_value_.end());   
        return *this;
    }

    bool Vector::operator==(const Vector& vec) const
    {
        return this->m_value_ == vec.m_value_;
    }

    Vector Vector::operator+(const Vector& vec)
    {
        Vector sum(vec.GetVectorSize(),0);

        for(int vec_index = 0; vec_index < vec.GetVectorSize();vec_index++)
        {
            sum(vec_index) = this->m_value_[vec_index] + vec.m_value_[vec_index];
        }
        return sum;

    }
    
    Vector& Vector::operator+=(const Vector& vec)
    {
        for(int vec_index = 0; vec_index < vec.GetVectorSize();vec_index++)
        {
            this->m_value_[vec_index] += vec.m_value_[vec_index];
        }
        return *this;
    }

    Vector Vector::operator-(const Vector& vec)
    {
        Vector difference(vec.GetVectorSize(),0);

        for(int vec_index = 0; vec_index < vec.GetVectorSize();vec_index++)
        {
            difference(vec_index) = this->m_value_[vec_index] - vec.m_value_[vec_index];
        }
        return difference;

    }
    
    Vector& Vector::operator-=(const Vector& vec)
    {
        for(int vec_index = 0; vec_index < vec.GetVectorSize();vec_index++)
        {
            this->m_value_[vec_index] -= vec.m_value_[vec_index];
        }
        return *this;
    }


    int Vector::DotProduct(const Vector& vec_b)
    {
        int dot_product = 0 ;

        for(int vec_index = 0 ; vec_index < vec_b.GetVectorSize();vec_index++)
        {
            dot_product += this->m_value_[vec_index] * vec_b.m_value_[vec_index];
        }
        return dot_product;
    }


    Vector Vector::operator*(int rhs)
    {
        Vector scaled(vec_size_,0);;
        for(int vec_index =0 ; vec_index < vec_size_;vec_index++)
        {
            scaled(vec_index) = this->m_value_[vec_index] * rhs;
        }
        return scaled;
    }

    Vector& Vector::operator*=(int rhs)
    {
        for(int vec_index =0 ; vec_index < vec_size_;vec_index++)
        {
            this->m_value_[vec_index] *= rhs;
        }
        return *this;
    }

    int& Vector::operator()(const int& index) 
    {
        return m_value_.at(index);
    }
/*
    const int& Vector::operator()(const int& index) const
    {
        return m_value_.at(index);
    }*/



}//end of namespace