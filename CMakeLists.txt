cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -pedantic")

project(TestCombine2NumbersC++)
# add_executable(myapp main.c++)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTest test.cpp)
target_link_libraries(runTest ${GTEST_LIBRARIES} pthread)
