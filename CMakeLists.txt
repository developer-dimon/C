cmake_minimum_required(VERSION 3.20)
project(C C)
add_library(math STATIC main.c)
set(CMAKE_C_STANDARD 99)

add_executable(C main.c base_function/tools.h labs/lab_3/1-20.h)
