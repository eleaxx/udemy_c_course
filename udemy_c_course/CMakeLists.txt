cmake_minimum_required(VERSION 3.28)
project(udemy_c_course C)

set(CMAKE_C_STANDARD 11)

add_executable(udemy_c_course
        src/ex1_pay_raise.c
        src/ex2_time_converter.c
        src/ex3_trapezium_area.c
        src/ex4_length_of_hypotenuse.c
        src/ex14_sequential_search.c
        src/ex15_binary_search.c
        src/menu.c
        main.c
        include/ex1_pay_raise.h
        include/ex2_time_converter.h
        include/ex3_trapezium_area.h
        include/ex4_length_of_hypotenuse.h
        include/ex14_sequential_search.h
        include/ex15_binary_search.h
        include/menu.h)
