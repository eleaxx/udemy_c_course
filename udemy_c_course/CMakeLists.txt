cmake_minimum_required(VERSION 3.28)
project(udemy_c_course C)

set(CMAKE_C_STANDARD 11)

add_executable(udemy_c_course
        src/ex1_pay_raise.c
        src/menu.c
        main.c
        include/ex1_pay_raise.h
        include/menu.h)
