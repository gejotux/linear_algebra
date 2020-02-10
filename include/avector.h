#ifndef AVECTOR_H_
#define AVECTOR_H_
#include <string>
#include <tuple>
#include <iostream>
#include <vector>
#include "matrix.h"
#include "noncompatible_dimension_exception.h"


namespace linear_algebra_operations
{
    template <typename T>
    using Array1D = std::vector<T>;

    template <typename T>
    class Vector
    {
        public:
            Vector() = default; 
            Vector(const Array1D<T>& array_1d);
            Vector(const int dimension,T initial_value);
            Vector(const Vector<T>& vec);
            Vector(Vector<T>&& vec);
            
            Vector<T>& operator=(Vector<T>&& vec);
            Vector<T>& operator=(Vector<T>&& vec) const;

            virtual ~Vector() = default;

            Vector<T>& operator=(const Vector<T>& vec);
            Vector<T>& operator=(const Vector<T>& vec) const;

            Vector<T> operator+(const Vector<T>& vec) ;
            Vector<T>& operator+=(const Vector<T>& vec);
            Vector<T> operator-(const Vector<T>& vec);
            Vector<T>& operator-=(const Vector<T>& vec);

            Vector<T> operator*(T rhs);
            Vector<T>& operator*=(T rhs);

            T& operator()(const int& index) ;
            T& operator[](const int& index);
            T operator[](const int& index) const;
            bool operator==(const Vector<T>& vec) const;
            
            T DotProduct(const Vector<T>& vec_b);
            int GetVectorSize()const {return vec_size_;}

            Vector<T> Multiply(const Matrix<T>& mat);

        private:
        Array1D<T> m_value_;
        int vec_size_;

    };



} //end of namespace


#include <avector.cpp>

#endif