#include <stdio.h>
#include "../include/menu.h"
#include "../include/ex1_pay_raise.h"
#include "../include/ex2_time_converter.h"
#include "../include/ex3_trapezium_area.h"
#include "../include/ex4_length_of_hypotenuse.h"
#include "../include/ex14_sequential_search.h"
#include "../include/ex15_binary_search.h"

void run_menu() {

        int option;
    printf("WELCOME!\n\n");

    do{
        printf("\nOptions:\n"
               "\t 1 -> Expressions and operators.\n"
               "\t 2 -> Sorting algorithms.\n"
               "\t 0 -> Exit.\n");
        scanf("%i", &option);
        switch(option){
            case 1:
                run_section_4_menu();
                break;
            case 2:
                run_section_14_menu();
                break;
            case 0:
                printf("SEE YOU SOON!\n");
                break;
            default:
                printf("This option is not valid, choose another.\n");
                break;
        }
    }while(option != 0);
}

void run_section_14_menu() {
    int option;
    printf("\nSECTION 6\n");

    do{
        printf("\nOptions:\n"
               "\t 1 -> Find a number (sequential search).\n"
               "\t 2 -> Sort a list (bubble sort) and find a number (binary search).\n"
               "\t 0 -> Go back.\n");
        scanf("%i", &option);
        switch(option){
            case 1:
                sequential_search();
                break;
            case 2:
                binary_search();
                break;
            case 0:
                break;
            default:
                printf("This option is not valid, choose another.\n");
                break;
        }
    }while(option != 0);

}

void run_section_4_menu() {
    int option;
    printf("\nSECTION 4\n");

    do{
        printf("\nOptions:\n"
               "\t 1 -> Calculate a pay raise.\n"
               "\t 2 -> Convert years into other time units.\n"
               "\t 3 -> Calculate the area of a trapezium.\n"
               "\t 4 -> Calculate the lenght of an hypotenuse.\n"
               "\t 0 -> Go back.\n");
        scanf("%i", &option);
        switch(option){
            case 1:
                pay_raise();
                break;
            case 2:
                timer_converter();
                break;
            case 3:
                trapezium_area();
                break;
            case 4:
                calculate_hypotenuse();
                break;
            case 0:
                break;
            default:
                printf("This option is not valid, choose another.\n");
                break;
        }
    }while(option != 0);

}