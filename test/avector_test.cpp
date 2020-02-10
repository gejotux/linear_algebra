#include <gtest/gtest.h>
#define private public
#include <limits>
#include <avector.h>

namespace linear_algebra_operations
{
TEST(VectorTest,Vector_Constructor_Test)
{
    Vector vec(3,1);
    Array1D arr{1,1,1};

    Vector to_compare(arr);

    EXPECT_EQ(vec,to_compare);
}


TEST(VectorTest,Vector_Copy_Constructor_Test)
{
    Vector vec(3,2);

    Vector copied_vec_obj(vec);

    Array1D arr{2,2,2};
    Vector to_compare(arr);
    EXPECT_EQ(copied_vec_obj,to_compare);
}

TEST(VectorTest,Vector_Addition_Operator_Test)
{
    Vector vecA(3,2);
    Vector vecB(3,4);
    
    Vector vecC = vecA + vecB;

    Array1D arr{6,6,6};
    Vector to_compare(arr);

    EXPECT_EQ(to_compare,vecC);
}


TEST(VectorTest,Vector_Cumulative_Addition_Operator_Test)
{
    Vector vecA(3,2);
    Vector vecB(3,4);
    Vector vecC(3,5);
    
    vecA += vecB;
    vecA += vecC;

    Array1D arr{11,11,11};
    Vector to_compare(arr);

    EXPECT_EQ(vecA,to_compare);
}

TEST(VectorTest,Vector_Subtaction_Operator_Test)
{
    Vector vecA(3,2);
    Vector vecB(3,4);
    
    Vector vecC = vecA - vecB;

    Array1D arr{-2,-2,-2};
    Vector to_compare(arr);

    EXPECT_EQ(to_compare,vecC);
}


TEST(VectorTest,Vector_Cumulative_Subtaction_Operator_Test)
{
    Vector vecA(3,2);
    Vector vecB(3,4);
    Vector vecC(3,5);
    
    vecA -= vecB;
    vecA -= vecC;

    Array1D arr{-7,-7,-7};
    Vector to_compare(arr);

    EXPECT_EQ(vecA,to_compare);
}


TEST(VectorTest,Vector_DotProduct_Test)
{
    Vector vecA(3,2);
    Vector vecB(3,4);
    
    int dotproduct = vecA.DotProduct(vecB);
    EXPECT_EQ(24,dotproduct);
}


TEST(VectorTest,Vector_ScalarMultiplication_Test)
{
    Vector vecA(3,2);

    Array1D arr{10,10,10};
    Vector to_compare(arr);
    
    Vector vecB = vecA *5 ;
    EXPECT_EQ(vecB,to_compare);
}

TEST(VectorTest,Vector_Cumulative_ScalarMultiplication_Test)
{
    Vector vecA(3,2);

    vecA *= 5;
    vecA *= 2;

    Array1D arr{20,20,20};
    Vector to_compare(arr);
 
    EXPECT_EQ(vecA,to_compare);
}








}