#include <stdio.h>
#include "../include/menu.h"
#include "../include/ex1_pay_raise.h"

void run_menu() {

    int option;
    printf("WELCOME!\n\n");

    do{
        printf("\nOptions:\n"
               "\t 1 -> Calculate a pay raise.\n"
               "\t 0 -> Exit.\n");
        scanf("%i", &option);
        switch(option){
            case 1:
                pay_raise();
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