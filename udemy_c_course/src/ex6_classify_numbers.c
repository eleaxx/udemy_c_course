#include <stdio.h>

#include "../include/ex6_classify_numbers.h"

#define MINIMUN 5
#define MARKS 7
#define DECIMALS 100

//Classsify a number. guess if it is negative or positive and if it is even or odd. (0 id odd).
void classify_numbers(){
    int number;


    printf("Hi, introduce the number: \n");
    scanf("%i",&number);

    if(number%2 != 0) {
        printf("Number %i is odd ", number);
    }else {
        printf("Number %i is even ", number);
    }

    if(number >= 0) {
        printf("and postive.\n");
    }else {
        printf("and negative.\n");
    }
}