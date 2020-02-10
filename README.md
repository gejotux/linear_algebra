Programming Task

Matrix and Vector class implementation


Test cases
------------
1. Matrices and vectors shall be able to be multiplied. 
2. Addition and scalar multiplication shall be supported as well.
3. No linear algebra functions are sought for (e.g. inverse, linear solving, svd etc.). 

The focus is on correctness, efficiency and a clean and convincing software design.

Design
------

Matrix class

1. m x n matrix
2. data types supported
3. Matrix addition, multiplication, subtraction,
4. Multiplication with scalars and vectors
5. Storage : std::vector(good API) or std::valarray(compiler optimations)
             std::vector is better choice 
             std::vector(m x n ) or std::vector(std::vector(n),m) 
             vector of vector approach is better(easy/direct access)
             vector (equality operator(flexible UT))