cmake_minimum_required(VERSION 3.20)
project(C C)
set(CMAKE_C_STANDARD 99)

add_executable(
        C main.c
        function/tools.h labs/lab_3/1-20.h
        labs/lab_4/1-2.h labs/lab_6/4.h
        labs/lab_6/1.h
        labs/lab_6/3.h
        labs/lab_7/2.h labs/lab_7/4.h labs/lab_8/1-3.h labs/lab_9/1.h labs/lab_9/2.h labs/lab_9/4.h labs/lab_10/1.h labs/lab_10/2.h labs/lab_10/3.h labs/lab_10/4.h labs/lab_10/5.h labs/lab_10/6.h labs/lab_10/7.h)
