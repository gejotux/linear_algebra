#include <gtest/gtest.h>
#define private public
#include <limits>
#include <matrix.h>
#include <memory>


namespace linear_algebra_operations
{

    class MatrixTest : public ::testing::Test
    {   
        public:
            MatrixTest(){}
            virtual ~MatrixTest(){}
            void SetUp()
            {
                matrix_ = std::make_unique<Matrix>();
            }
            void TearDown()
            {
                matrix_.reset();
            }
        std::unique_ptr<Matrix> matrix_;
    };
using Array2D = std::vector<std::vector<int> >;
TEST_F(MatrixTest, Create_Instance_Test)
{
    EXPECT_NE(nullptr, matrix_);
}

TEST_F(MatrixTest, Populate_2x2Matrix_SameInitialValue_1)
{
    Matrix mat(2,2,1);
    Array2D arr{{1,1},{1,1}};
    Matrix mat_to_compare(arr);

    EXPECT_EQ(mat,mat_to_compare);
       
}

TEST_F(MatrixTest, Populate_2x2Matrix_DifferentInitialValue)
{
    Matrix mat(2,2,1);
    Array2D arr{{1,2},{1,1}};
    Matrix mat_to_compare(arr);

    EXPECT_NE(mat,mat_to_compare);
       
}


TEST_F(MatrixTest, Populate_3x3Matrix_SameInitialValue_1)
{
    Matrix mat(3,3,1);
    Array2D arr{{1,1,1},{1,1,1},{1,1,1}};
    Matrix mat_to_compare(arr);

    EXPECT_EQ(mat,mat_to_compare);
       
}


TEST_F(MatrixTest, Populate_3x3Matrix_DifferentInitialValue)
{
    Matrix mat(3,3,1);
    Array2D arr{{1,1,2},{1,1,1},{1,1,1}};
    Matrix mat_to_compare(arr);

    EXPECT_NE(mat,mat_to_compare);
       
}

TEST_F(MatrixTest, CopyConstructor_2x2Matrix_Test)
{
    Matrix mat(2,2,1);
    Array2D arr{{1,1},{1,1}};
    Matrix mat_to_compare(arr);
    Matrix copied_matrix(mat);

    EXPECT_EQ(copied_matrix,mat_to_compare); 
}

TEST_F(MatrixTest, CopyConstructor_3x3Matrix_Test)
{
    Matrix mat(3,3,2);
    Array2D arr{{2,2,2},{2,2,2},{2,2,2}};
    Matrix mat_to_compare(arr);
    Matrix copied_matrix(mat);

    EXPECT_EQ(copied_matrix,mat_to_compare); 
}

TEST_F(MatrixTest, CopyConstructor_4x4Matrix_Test)
{
    Matrix mat(4,4,2);
    Array2D arr{{2,2,2,2},{2,2,2,2},{2,2,2,2},{2,2,2,2}};
    Matrix mat_to_compare(arr);
    Matrix copied_matrix(mat);

    EXPECT_EQ(copied_matrix,mat_to_compare); 
}


TEST_F(MatrixTest, Assignment_2x2Matrix_Test)
{
    Matrix mat(2,2,1);
    Array2D arr{{1,1},{1,1}};
    Matrix mat_to_compare(arr);
    Matrix assigned_matrix = mat;

    EXPECT_EQ(assigned_matrix,mat_to_compare); 
}

TEST_F(MatrixTest, Assignment_3x3Matrix_Test)
{
    Matrix mat(3,3,2);
    Array2D arr{{2,2,2},{2,2,2},{2,2,2}};
    Matrix mat_to_compare(arr);
    Matrix assigned_matrix = mat;

    EXPECT_EQ(assigned_matrix,mat_to_compare); 
}

TEST_F(MatrixTest, Assignment_4x4Matrix_Test)
{
    Matrix mat(4,4,3);
    Array2D arr{{3,3,3,3},{3,3,3,3},{3,3,3,3},{3,3,3,3}};
    Matrix mat_to_compare(arr);
    Matrix assigned_matrix = mat;

    EXPECT_EQ(assigned_matrix,mat_to_compare); 
}

TEST_F(MatrixTest, Addition_2x2Matrix_Test)
{
    Matrix matA(2,2,1);
    Matrix matB(2,2,3);
    Matrix matC(2,2,4);
    
    Matrix sum = matA + matB; 

    EXPECT_EQ(matC,sum); 
}

TEST_F(MatrixTest, Addition_3x3Matrix_Test)
{
    Matrix matA(3,3,1);
    Matrix matB(3,3,3);
    Matrix matC(3,3,4);
    
    Matrix sum = matA + matB; 

    EXPECT_EQ(matC,sum); 
}

TEST_F(MatrixTest, Addition_4x4Matrix_Test)
{
    Matrix matA(4,4,1);
    Matrix matB(4,4,3);
    Matrix matC(4,4,4);
    
    Matrix sum = matA + matB; 

    EXPECT_EQ(matC,sum); 
}


TEST_F(MatrixTest, Cumulative_Addition_2x2Matrix_Test)
{
    Matrix matA(2,2,1);
    Matrix matB(2,2,3);
    Matrix matC(2,2,4);
    
    Matrix sum(2,2,0);
    sum += matA; 
    sum += matB;
    EXPECT_EQ(matC,sum); 
}

TEST_F(MatrixTest, Cumulative_Addition_3x3Matrix_Test)
{
    Matrix matA(3,3,1);
    Matrix matB(3,3,3);
    Matrix matC(3,3,4);
    
    Matrix sum(3,3,0);
    sum += matA; 
    sum += matB; 

    EXPECT_EQ(matC,sum); 
}

TEST_F(MatrixTest, Cumulative_Addition_4x4Matrix_Test)
{
    Matrix matA(4,4,1);
    Matrix matB(4,4,3);
    Matrix matC(4,4,4);
    
    Matrix sum(4,4,0);
    sum += matA; 
    sum += matB; 

    EXPECT_EQ(matC,sum); 
}




TEST_F(MatrixTest, Subtraction_2x2Matrix_Test)
{
    Matrix matA(2,2,1);
    Matrix matB(2,2,3);
    Matrix matC(2,2,-2);
    
    Matrix difference = matA - matB; 

    EXPECT_EQ(matC,difference); 
}

TEST_F(MatrixTest, Subtraction_3x3Matrix_Test)
{
    Matrix matA(3,3,5);
    Matrix matB(3,3,3);
    Matrix matC(3,3,2);
    
    Matrix difference = matA - matB; 

    EXPECT_EQ(matC,difference); 
}

TEST_F(MatrixTest, Subtraction_4x4Matrix_Test)
{
    Matrix matA(4,4,5);
    Matrix matB(4,4,3);
    Matrix matC(4,4,2);
    
    Matrix difference = matA - matB; 

    EXPECT_EQ(matC,difference); 
}


TEST_F(MatrixTest, Cumulative_Subtraction_2x2Matrix_Test)
{
    Matrix matA(2,2,5);
    Matrix matB(2,2,3);
    Matrix matC(2,2,-8);
    
    Matrix difference(2,2,0);
    difference -= matA; 
    difference -= matB;
    EXPECT_EQ(matC,difference); 
}

TEST_F(MatrixTest, Cumulative_Subtraction_3x3Matrix_Test)
{
    Matrix matA(3,3,5);
    Matrix matB(3,3,3);
    Matrix matC(3,3,-8);
    
    Matrix difference(3,3,0);
    difference -= matA; 
    difference -= matB; 

    EXPECT_EQ(matC,difference); 
}

TEST_F(MatrixTest, Cumulative_Subtraction_4x4Matrix_Test)
{
    Matrix matA(4,4,5);
    Matrix matB(4,4,3);
    Matrix matC(4,4,-8);
    
    Matrix difference(4,4,0);
    difference -= matA; 
    difference -= matB; 

    EXPECT_EQ(matC,difference); 
}

TEST_F(MatrixTest, Multiplication_2x2Matrix_Test)
{
    Array2D arrA{{1,2},{3,4}};
    Matrix matA(arrA);
    Array2D arrB{{5,6},{7,8}};

    Matrix matB(arrB);

    Matrix product = matA * matB;

    Array2D arrC{{19,22},{43,50}};
    Matrix mat_to_compare(arrC);

    EXPECT_EQ(product,mat_to_compare); 
}


TEST_F(MatrixTest, Multiplication_3x3Matrix_Test)
{
    Array2D arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix matA(arrA);
    Array2D arrB{{10,11,12},{13,14,15},{16,17,18}};

    Matrix matB(arrB);

    Matrix product = matA * matB;
    Array2D arrC{{84,90,96},{201,216,231},{318,342,366}};
    Matrix mat_to_compare(arrC);

    EXPECT_EQ(product,mat_to_compare); 
}

TEST_F(MatrixTest, CumulativeMultiplication_2x2Matrix_Test)
{
    Array2D arrA{{1,2},{3,4}};
    Matrix matA(arrA);
    Array2D arrB{{5,6},{7,8}};

    Matrix matB(arrB);

    matA *= matB;

    Array2D arrC{{19,22},{43,50}};
    Matrix mat_to_compare(arrC);

    EXPECT_EQ(matA,mat_to_compare); 
}

TEST_F(MatrixTest, CumulativeMultiplication_3x3Matrix_Test)
{
    Array2D arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix matA(arrA);
    Array2D arrB{{10,11,12},{13,14,15},{16,17,18}};

    Matrix matB(arrB);

    matA *= matB;
    Array2D arrC{{84,90,96},{201,216,231},{318,342,366}};
    Matrix mat_to_compare(arrC);

    EXPECT_EQ(matA,mat_to_compare); 
}

TEST_F(MatrixTest, ScalarAddition_3x3Matrix_Test)
{
    Array2D arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix matA(arrA);
    

    Matrix matB(3,3,0);

    matB = matA + 5;
    Array2D arrC{{6,7,8},{9 ,10 ,11 },{12,13,14}};
    Matrix mat_to_compare(arrC);

    EXPECT_EQ(matB,mat_to_compare); 
}

TEST_F(MatrixTest, CumulativeScalarAddition_3x3Matrix_Test)
{
    Array2D arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix matA(arrA);


    matA += 5;
    Array2D arrC{{6,7,8},{9 ,10 ,11 },{12,13,14}};
    Matrix mat_to_compare(arrC);

    EXPECT_EQ(matA,mat_to_compare); 
}

TEST_F(MatrixTest, ScalarSubtraction_3x3Matrix_Test)
{
    Array2D arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix matA(arrA);
    Matrix matB(3,3,0);
    matB = matA - 5;
    Array2D arrC{{-4,-3,-2},{-1 ,0 ,1 },{2,3,4}};
    Matrix mat_to_compare(arrC);

    EXPECT_EQ(matB,mat_to_compare); 
}

TEST_F(MatrixTest, CumulativeScalarSubtraction_3x3Matrix_Test)
{
    Array2D arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix matA(arrA);
    Matrix matB(3,3,0);
    matA -= 5;
    Array2D arrC{{-4,-3,-2},{-1 ,0 ,1 },{2,3,4}};
    Matrix mat_to_compare(arrC);

    EXPECT_EQ(matA,mat_to_compare); 
}

TEST_F(MatrixTest, Product_Scalar_3x3Matrix_Test)
{
    Array2D arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix matA(arrA);
    Matrix matB(3,3,0);
    matB = matA * 5;
    Array2D arrC{{5,10,15},{20 ,25 ,30 },{35,40,45}};
    Matrix mat_to_compare(arrC);

    EXPECT_EQ(matB,mat_to_compare); 
}

TEST_F(MatrixTest, Cumulative_Product_Scalar_3x3Matrix_Test)
{
    Array2D arrA{{1,2,3},{4 ,5 ,6 },{7,8,9}};
    Matrix matA(arrA);

    matA *= 5;
    Array2D arrC{{5,10,15},{20 ,25 ,30 },{35,40,45}};
    Matrix mat_to_compare(arrC);

    EXPECT_EQ(matA,mat_to_compare); 
}




}//end of namespace linear_algebra_operations

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
