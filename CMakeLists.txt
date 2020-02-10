cmake_minimum_required(VERSION 2.6)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} src include)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests test/matrix_test.cpp test/avector_test.cpp src/matrix.cpp src/avector.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)


