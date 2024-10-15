#include <stdio.h>
#include <math.h>
#include "../include/ex4_length_of_hypotenuse.h"

#define EXPONENT 2
//calculate the pay raise(10%)
void calculate_hypotenuse(){
    float hypotenuse, first_cathetus, second_cathetus;

    printf("Let´s calculate the length of the hypotenuse.\n");
    printf("Tell me the length of one of the cathetus (cm): \n");
    scanf("%f",&first_cathetus);
    printf("Tell me the length of the other one (cm): \n");
    scanf("%f",&second_cathetus);

    hypotenuse = sqrt(pow(first_cathetus, EXPONENT) + pow(second_cathetus, EXPONENT));
    printf("The lenght of the hypotenuse is %0.3f cm \n", hypotenuse);
}
