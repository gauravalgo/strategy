cmake_minimum_required(VERSION 3.30)
project(strategy_pattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(strategy_pattern Strategy.h Strategy.cpp  main.cpp )

