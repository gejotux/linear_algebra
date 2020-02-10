#include <gtest/gtest.h>
#include <limits>
#include <avector.h>

namespace linear_algebra_operations
{
TEST(VectorTest,Vector_Constructor_Test)
{
    Vector<int> vec(3,1);
    Array1D<int> arr{1,1,1};

    Vector<int> to_compare(arr);

    EXPECT_EQ(vec,to_compare);
}


TEST(VectorTest,Vector_Copy_Constructor_Test)
{
    Vector<int> vec(3,2);

    Vector<int> copied_vec_obj(vec);

    Array1D<int> arr{2,2,2};
    Vector<int> to_compare(arr);
    EXPECT_EQ(copied_vec_obj,to_compare);
}

TEST(VectorTest,Vector_Copy_Assignment_Test)
{
    Vector<int> vec(3,2);

    Vector<int> copied_vec_obj ;
    copied_vec_obj = vec;

    Array1D<int> arr{2,2,2};
    Vector<int> to_compare(arr);
    EXPECT_EQ(copied_vec_obj,to_compare);
}


TEST(VectorTest,Vector_Move_Constructor_Test)
{
    Vector<int> vec(3,2);

    Vector<int> copied_vec_obj(std::move(vec));

    Array1D<int> arr{2,2,2};
    Vector<int> to_compare(arr);
    EXPECT_EQ(copied_vec_obj,to_compare);
}

TEST(VectorTest,Vector_Move_Assignment_Test)
{
    Vector<int> vec(3,2);

    Vector<int> copied_vec_obj;
    copied_vec_obj = std::move(vec);

    Array1D<int> arr{2,2,2};
    Vector<int> to_compare(arr);
    EXPECT_EQ(copied_vec_obj,to_compare);
}



TEST(VectorTest,Vector_Addition_Operator_Test)
{
    Vector<int> vecA(3,2);
    Vector<int> vecB(3,4);
    
    Vector<int> vecC = vecA + vecB;

    Array1D<int> arr{6,6,6};
    Vector<int> to_compare(arr);

    EXPECT_EQ(to_compare,vecC);
}


TEST(VectorTest,Vector_Cumulative_Addition_Operator_Test)
{
    Vector<int> vecA(3,2);
    Vector<int> vecB(3,4);
    Vector<int> vecC(3,5);
    
    vecA += vecB;
    vecA += vecC;

    Array1D<int> arr{11,11,11};
    Vector<int> to_compare(arr);

    EXPECT_EQ(vecA,to_compare);
}

TEST(VectorTest,Vector_Subtaction_Operator_Test)
{
    Vector<int> vecA(3,2);
    Vector<int> vecB(3,4);
    
    Vector<int> vecC = vecA - vecB;

    Array1D<int> arr{-2,-2,-2};
    Vector<int> to_compare(arr);

    EXPECT_EQ(to_compare,vecC);
}


TEST(VectorTest,Vector_Cumulative_Subtaction_Operator_Test)
{
    Vector<int> vecA(3,2);
    Vector<int> vecB(3,4);
    Vector<int> vecC(3,5);
    
    vecA -= vecB;
    vecA -= vecC;

    Array1D<int> arr{-7,-7,-7};
    Vector<int> to_compare(arr);

    EXPECT_EQ(vecA,to_compare);
}


TEST(VectorTest,Vector_DotProduct_Test)
{
    Vector<int> vecA(3,2);
    Vector<int> vecB(3,4);
    
    int dotproduct = vecA.DotProduct(vecB);
    EXPECT_EQ(24,dotproduct);
}


TEST(VectorTest,Vector_ScalarMultiplication_Test)
{
    Vector<int> vecA(3,2);

    Array1D<int> arr{10,10,10};
    Vector<int> to_compare(arr);
    
    Vector<int> vecB = vecA *5 ;
    EXPECT_EQ(vecB,to_compare);
}

TEST(VectorTest,Vector_Cumulative_ScalarMultiplication_Test)
{
    Vector<int> vecA(3,2);

    vecA *= 5;
    vecA *= 2;

    Array1D<int> arr{20,20,20};
    Vector<int> to_compare(arr);
 
    EXPECT_EQ(vecA,to_compare);
}

TEST(VectorTest,Vector_Matrix_Multiplication_Test)
{
    Vector<int> vecA({2,1,3});

    Array2D<int> arr{{1,2,3},{4,5,6},{7,8,9}};
    Matrix<int> matA(arr);

    Vector<int> product = vecA.Multiply(matA);

    Array1D<int> arr1{13,31,49};
    Vector<int> to_compare(arr1);

    EXPECT_EQ(product,to_compare);
}









}