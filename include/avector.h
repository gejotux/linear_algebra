#ifndef AVECTOR_H_
#define AVECTOR_H_
#include <string>
#include <tuple>
#include <iostream>
#include <vector>

namespace linear_algebra_operations
{
    using Array1D = std::vector<int>;

    class Vector
    {
        public:
            Vector(){}
            Vector(const Array1D& array_1d);
            Vector(const int dimension,int initial_value);
            Vector(const Vector& vec);
            Vector& operator=(const Vector& vec);
            Vector& operator=(const Vector& vec) const;

            Vector operator+(const Vector& vec) ;
            Vector& operator+=(const Vector& vec);
            Vector operator-(const Vector& vec);
            Vector& operator-=(const Vector& vec);

            Vector operator*(int rhs);
            Vector& operator*=(int rhs);

            int& operator()(const int& index);
            bool operator==(const Vector& vec) const;
            
            int DotProduct(const Vector& vec_b);
            int GetVectorSize()const {return vec_size_;}

        private:
        Array1D m_value_;
        int vec_size_;

    };



}
#endif