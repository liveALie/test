CMAKE_MINIMUM_REQUIRED(VERSION 3.11)
PROJECT(auto-driving)
ADD_COMPILE_OPTIONS(-g -Wall -std=c++11)
SET(CMAKE_VERBOSE_MAKEFILE ON)
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})
ADD_DEFINITIONS("-D_GLIBCXX_USE_CXX11_ABI=0")

include_directories(
    googletest/include
)
link_directories(
    googletest/lib
    )
add_executable(test test.cpp)
target_link_libraries(test libgtest.a libgtest_main.a pthread)