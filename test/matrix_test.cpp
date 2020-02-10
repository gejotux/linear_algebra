#include <gtest/gtest.h>
#include <limits>
#include <matrix.h>
#include <memory>
#include <avector.h>


namespace linear_algebra_operations
{

TEST(MatrixTest, Populate_2x2Matrix_SameInitialValue_1)
{
    Matrix<int> mat(2,2,1);
    Array2D<int> arr{{1,1},{1,1}};
    Matrix<int> mat_to_compare(arr);

    EXPECT_EQ(mat,mat_to_compare);
       
}

TEST(MatrixTest, Populate_2x2Matrix_DifferentInitialValue)
{
    Matrix<int> mat(2,2,1);
    Array2D<int> arr{{1,2},{1,1}};
    Matrix<int> mat_to_compare(arr);

    EXPECT_NE(mat,mat_to_compare);
       
}


TEST(MatrixTest, Populate_3x3Matrix_SameInitialValue_1)
{
    Matrix<int> mat(3,3,1);
    Array2D<int> arr{{1,1,1},{1,1,1},{1,1,1}};
    Matrix<int> mat_to_compare(arr);

    EXPECT_EQ(mat,mat_to_compare);
       
}


TEST(MatrixTest, Populate_3x3Matrix_DifferentInitialValue)
{
    Matrix<int> mat(3,3,1);
    Array2D<int> arr{{1,1,2},{1,1,1},{1,1,1}};
    Matrix<int> mat_to_compare(arr);

    EXPECT_NE(mat,mat_to_compare);
       
}

TEST(MatrixTest, CopyConstructor_2x2Matrix_Test)
{
    Matrix<int> mat(2,2,1);
    Array2D<int> arr{{1,1},{1,1}};
    Matrix<int> mat_to_compare(arr);
    Matrix<int> copied_matrix(mat);

    EXPECT_EQ(copied_matrix,mat_to_compare); 
}

TEST(MatrixTest, CopyConstructor_3x3Matrix_Test)
{
    Matrix<int> mat(3,3,2);
    Array2D<int> arr{{2,2,2},{2,2,2},{2,2,2}};
    Matrix<int> mat_to_compare(arr);
    Matrix<int> copied_matrix(mat);

    EXPECT_EQ(copied_matrix,mat_to_compare); 
}

TEST(MatrixTest, CopyConstructor_4x4Matrix_Test)
{
    Matrix<int> mat(4,4,2);
    Array2D<int> arr{{2,2,2,2},{2,2,2,2},{2,2,2,2},{2,2,2,2}};
    Matrix<int> mat_to_compare(arr);
    Matrix<int> copied_matrix(mat);

    EXPECT_EQ(copied_matrix,mat_to_compare); 
}


TEST(MatrixTest, Assignment_2x2Matrix_Test)
{
    Matrix<int> mat(2,2,1);
    Array2D<int> arr{{1,1},{1,1}};
    Matrix<int> mat_to_compare(arr);
    Matrix<int> assigned_matrix = mat;

    EXPECT_EQ(assigned_matrix,mat_to_compare); 
}

TEST(MatrixTest, Assignment_3x3Matrix_Test)
{
    Matrix<int> mat(3,3,2);
    Array2D<int> arr{{2,2,2},{2,2,2},{2,2,2}};
    Matrix<int> mat_to_compare(arr);
    Matrix<int> assigned_matrix = mat;

    EXPECT_EQ(assigned_matrix,mat_to_compare); 
}

TEST(MatrixTest, Assignment_4x4Matrix_Test)
{
    Matrix<int> mat(4,4,3);
    Array2D<int> arr{{3,3,3,3},{3,3,3,3},{3,3,3,3},{3,3,3,3}};
    Matrix<int> mat_to_compare(arr);
    Matrix<int> assigned_matrix = mat;

    EXPECT_EQ(assigned_matrix,mat_to_compare); 
}

TEST(MatrixTest, Addition_2x2Matrix_Test)
{
    Matrix<int> matA(2,2,1);
    Matrix<int> matB(2,2,3);
    Matrix<int> matC(2,2,4);
    
    Matrix<int> sum = matA + matB; 

    EXPECT_EQ(matC,sum); 
}

TEST(MatrixTest, Addition_3x3Matrix_Test)
{
    Matrix<int> matA(3,3,1);
    Matrix<int> matB(3,3,3);
    Matrix<int> matC(3,3,4);
    
    Matrix<int> sum = matA + matB; 

    EXPECT_EQ(matC,sum); 
}

TEST(MatrixTest, Addition_2x2Matrix_Float_Test)
{
    Matrix<float> matA(2,2,1.0);
    Matrix<float> matB(2,2,3.1);
    Matrix<float> matC(2,2,4.1);
    
    Matrix<float> sum = matA + matB; 

    EXPECT_EQ(matC,sum); 
}

TEST(MatrixTest, Addition_3x3Matrix_Float_Test)
{
    Matrix<float> matA(3,3,1.2);
    Matrix<float> matB(3,3,3.05);
    Matrix<float> matC(3,3,4.25);
    
    Matrix<float> sum = matA + matB; 

    EXPECT_EQ(matC,sum); 
}

TEST(MatrixTest, Addition_4x4Matrix_Test)
{
    Matrix<int> matA(4,4,1);
    Matrix<int> matB(4,4,3);
    Matrix<int> matC(4,4,4);
    
    Matrix<int> sum = matA + matB; 

    EXPECT_EQ(matC,sum); 
}


TEST(MatrixTest, Cumulative_Addition_2x2Matrix_Test)
{
    Matrix<int> matA(2,2,1);
    Matrix<int> matB(2,2,3);
    Matrix<int> matC(2,2,4);
    
    Matrix<int> sum(2,2,0);
    sum += matA; 
    sum += matB;
    EXPECT_EQ(matC,sum); 
}

TEST(MatrixTest, Cumulative_Addition_3x3Matrix_Test)
{
    Matrix<int> matA(3,3,1);
    Matrix<int> matB(3,3,3);
    Matrix<int> matC(3,3,4);
    
    Matrix<int> sum(3,3,0);
    sum += matA; 
    sum += matB; 

    EXPECT_EQ(matC,sum); 
}

TEST(MatrixTest, Cumulative_Addition_4x4Matrix_Test)
{
    Matrix<int> matA(4,4,1);
    Matrix<int> matB(4,4,3);
    Matrix<int> matC(4,4,4);
    
    Matrix<int> sum(4,4,0);
    sum += matA; 
    sum += matB; 

    EXPECT_EQ(matC,sum); 
}

TEST(MatrixTest, Cumulative_Addition_4x4Matrix_Double_Test)
{
    Matrix<double> matA(4,4,1.1);
    Matrix<double> matB(4,4,3.2);
    Matrix<double> matC(4,4,4.3);
    
    Matrix<double> sum(4,4,0.0);
    sum += matA; 
    sum += matB; 

    for(int i = 0 ; i < sum.GetRowSize();i++)
    {
        for(int j =0 ; j < sum.GetColumnSize();j++)
        {
          //  std::cout << sum.m_values_[i][j] << " ";
        }
        //std::cout << std::endl;
    }
    //EXPECT_NEAR(sum,matC,0.01);

}


TEST(MatrixTest, Subtraction_2x2Matrix_Test)
{
    Matrix<int> matA(2,2,1);
    Matrix<int> matB(2,2,3);
    Matrix<int> matC(2,2,-2);
    
    Matrix<int> difference = matA - matB; 

    EXPECT_EQ(matC,difference); 
}

TEST(MatrixTest, Subtraction_3x3Matrix_Test)
{
    Matrix<int> matA(3,3,5);
    Matrix<int> matB(3,3,3);
    Matrix<int> matC(3,3,2);
    
    Matrix<int> difference = matA - matB; 

    EXPECT_EQ(matC,difference); 
}

TEST(MatrixTest, Subtraction_4x4Matrix_Test)
{
    Matrix<int> matA(4,4,5);
    Matrix<int> matB(4,4,3);
    Matrix<int> matC(4,4,2);
    
    Matrix<int> difference = matA - matB; 

    EXPECT_EQ(matC,difference); 
}


TEST(MatrixTest, Cumulative_Subtraction_2x2Matrix_Test)
{
    Matrix<int> matA(2,2,5);
    Matrix<int> matB(2,2,3);
    Matrix<int> matC(2,2,-8);
    
    Matrix<int> difference(2,2,0);
    difference -= matA; 
    difference -= matB;
    EXPECT_EQ(matC,difference); 
}

TEST(MatrixTest, Cumulative_Subtraction_3x3Matrix_Test)
{
    Matrix<int> matA(3,3,5);
    Matrix<int> matB(3,3,3);
    Matrix<int> matC(3,3,-8);
    
    Matrix<int> difference(3,3,0);
    difference -= matA; 
    difference -= matB; 

    EXPECT_EQ(matC,difference); 
}

TEST(MatrixTest, Cumulative_Subtraction_4x4Matrix_Test)
{
    Matrix<int> matA(4,4,5);
    Matrix<int> matB(4,4,3);
    Matrix<int> matC(4,4,-8);
    
    Matrix<int> difference(4,4,0);
    difference -= matA; 
    difference -= matB; 

    EXPECT_EQ(matC,difference); 
}

TEST(MatrixTest, Multiplication_2x2Matrix_Test)
{
    Array2D<int> arrA{{1,2},{3,4}};
    Matrix<int> matA(arrA);
    Array2D<int> arrB{{5,6},{7,8}};

    Matrix<int> matB(arrB);

    Matrix<int> product = matA * matB;

    Array2D<int> arrC{{19,22},{43,50}};
    Matrix<int> mat_to_compare(arrC);

    EXPECT_EQ(product,mat_to_compare); 
}


TEST(MatrixTest, Multiplication_3x3Matrix_Test)
{
    Array2D<int> arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix<int> matA(arrA);
    Array2D<int> arrB{{10,11,12},{13,14,15},{16,17,18}};

    Matrix<int> matB(arrB);

    Matrix<int> product = matA * matB;
    Array2D<int> arrC{{84,90,96},{201,216,231},{318,342,366}};
    Matrix<int> mat_to_compare(arrC);

    EXPECT_EQ(product,mat_to_compare); 
}

TEST(MatrixTest, Multiplication_3x3Matrix_Float_Test)
{
    Array2D<float> arrA{{1.0,2.0,3.0},{4.0 ,5.0 ,6.0 },{7.0,8.0,9.0}};
    Matrix<float> matA(arrA);
    Array2D<float> arrB{{10.0,11.0,12.0},{13.0,14.0,15.0},{16.0,17.0,18.0}};

    Matrix<float> matB(arrB);

    Matrix<float> product = matA * matB;
    Array2D<float> arrC{{84.0,90.0,96.0},{201.0,216.0,231.0},{318.0,342.0,366.0}};
    Matrix<float> mat_to_compare(arrC);

    EXPECT_EQ(product,mat_to_compare); 
}


TEST(MatrixTest, CumulativeMultiplication_2x2Matrix_Test)
{
    Array2D<int> arrA{{1,2},{3,4}};
    Matrix<int> matA(arrA);
    Array2D<int> arrB{{5,6},{7,8}};

    Matrix<int> matB(arrB);

    matA *= matB;

    Array2D<int> arrC{{19,22},{43,50}};
    Matrix<int> mat_to_compare(arrC);

    EXPECT_EQ(matA,mat_to_compare); 
}

TEST(MatrixTest, CumulativeMultiplication_3x3Matrix_Test)
{
    Array2D<int> arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix<int> matA(arrA);
    Array2D<int> arrB{{10,11,12},{13,14,15},{16,17,18}};

    Matrix<int> matB(arrB);

    matA *= matB;
    Array2D<int> arrC{{84,90,96},{201,216,231},{318,342,366}};
    Matrix<int> mat_to_compare(arrC);

    EXPECT_EQ(matA,mat_to_compare); 
}

TEST(MatrixTest, ScalarAddition_3x3Matrix_Test)
{
    Array2D<int> arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix<int> matA(arrA);
    

    Matrix<int> matB(3,3,0);

    matB = matA + 5;
    Array2D<int> arrC{{6,7,8},{9 ,10 ,11 },{12,13,14}};
    Matrix<int> mat_to_compare(arrC);

    EXPECT_EQ(matB,mat_to_compare); 
}

TEST(MatrixTest, CumulativeScalarAddition_3x3Matrix_Test)
{
    Array2D<int> arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix<int> matA(arrA);


    matA += 5;
    Array2D<int> arrC{{6,7,8},{9 ,10 ,11 },{12,13,14}};
    Matrix<int> mat_to_compare(arrC);

    EXPECT_EQ(matA,mat_to_compare); 
}

TEST(MatrixTest, ScalarSubtraction_3x3Matrix_Test)
{
    Array2D<int> arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix<int> matA(arrA);
    Matrix<int> matB(3,3,0);
    matB = matA - 5;
    Array2D<int> arrC{{-4,-3,-2},{-1 ,0 ,1 },{2,3,4}};
    Matrix<int> mat_to_compare(arrC);

    EXPECT_EQ(matB,mat_to_compare); 
}

TEST(MatrixTest, CumulativeScalarSubtraction_3x3Matrix_Test)
{
    Array2D<int> arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix<int> matA(arrA);
    Matrix<int> matB(3,3,0);
    matA -= 5;
    Array2D<int> arrC{{-4,-3,-2},{-1 ,0 ,1 },{2,3,4}};
    Matrix<int> mat_to_compare(arrC);

    EXPECT_EQ(matA,mat_to_compare); 
}

TEST(MatrixTest, Product_Scalar_3x3Matrix_Test)
{
    Array2D<int> arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix<int> matA(arrA);
    Matrix<int> matB(3,3,0);
    matB = matA * 5;
    Array2D<int> arrC{{5,10,15},{20 ,25 ,30 },{35,40,45}};
    Matrix<int> mat_to_compare(arrC);

    EXPECT_EQ(matB,mat_to_compare); 
}

TEST(MatrixTest, Cumulative_Product_Scalar_3x3Matrix_Test)
{
    Array2D<int> arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix<int> matA(arrA);

    matA *= 5;
    Array2D<int> arrC{{5,10,15},{20 ,25 ,30 },{35,40,45}};
    Matrix<int> mat_to_compare(arrC);

    EXPECT_EQ(matA,mat_to_compare); 
}

TEST(MatrixTest, Matrix_Vector_Multiplication_3x3Matrix_Test)
{
    Vector<int> vecA({2,1,3});

    Array2D<int> arr{{1,2,3},{4,5,6},{7,8,9}};
    Matrix<int> matA(arr);

    Vector<int> product = matA.Multiply(vecA);

    std::vector<int> arr1{13,31,49};
    Vector<int> to_compare(arr1);

    EXPECT_EQ(product,to_compare);
}


}//end of namespace linear_algebra_operations

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
