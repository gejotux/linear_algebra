#ifndef NONCOMPATIBLE_DIM_EXCEPTION_H_
#define NONCOMPATIBLE_DIM_EXCEPTION_H_

#include <exception>

namespace linear_algebra_operations
{
    class IncomaptibleSizeException: public std::exception
    {
        public:
        virtual const char* what() const throw()
        {
            return "IncomaptibleSizeException: \ntrying to multiple vector/matrix of incompatible dimensions";
        }
    };
}
#endif