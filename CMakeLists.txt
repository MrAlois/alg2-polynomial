cmake_minimum_required(VERSION 3.23)
project(alg2_polynomial)

set(CMAKE_CXX_STANDARD 23)

add_executable(alg2_polynomial main.cpp Polynomial.cpp Polynomial.h PolynomialUtils.h PolynomialUtils.cpp)
