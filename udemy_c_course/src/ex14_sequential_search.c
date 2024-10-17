#include <stdio.h>
#include "../include/ex14_sequential_search.h"

#define SIZE 10

//Try to find if a number exists in the array
void sequential_search() {
    int numbers[SIZE] = {1,4,6,10,5,20,18,12,14,9};
    int number;

    printf("Choose a number between 0 and 20:\n ");
    scanf("%i", &number);

    for(int i=0; i<10; i++) {
        if(number == numbers[i] ) {
            printf("Number %i exists, it is at position %i.", number, i+1);
            return;
        }
    }
    printf("Sorry, it does not exist.");
}