#include <stdio.h>
#include "../include/ex3_trapezium_area.h"

#define INCREMENT 0.1

//calculate the pay raise(10%)
void trapezium_area(){
    float first_base, second_base, height, area;

    printf("Let`s calculate the area of a trapezium.\n");
    printf("Please, tell me the height (cm):\n");
    scanf("%f",&height);
    printf("Now introduce the lenght of one of the bases (cm): \n");
    scanf("%f",&first_base);
    printf("Finally the lenght of the other base (cm): \n");
    scanf("%f",&second_base);

    area = (first_base+second_base)*height/2;
    printf("The area of the trapezium is %0.2f cm2\n", area);
}