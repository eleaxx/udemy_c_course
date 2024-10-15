#include <stdio.h>
#include "../include/menu.h"
#include "../include/ex1_pay_raise.h"
#include "../include/ex2_time_converter.h"
#include "../include/ex3_trapezium_area.h"
#include "../include/ex4_length_of_hypotenuse.h"

void run_menu() {

    int option;
    printf("WELCOME!\n\n");

    do{
        printf("\nOptions:\n"
               "\t 1 -> Calculate a pay raise.\n"
               "\t 2 -> Convert years into other time units.\n"
               "\t 3 -> Calculate the area of a trapezium.\n"
               "\t 4 -> Calculate the lenght of an hypotenuse.\n"
               "\t 0 -> Exit.\n");
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
                printf("SEE YOU SOON!\n");
                break;
            default:
                printf("This option is not valid, choose another.\n");
                break;
        }
    }while(option != 0);
}