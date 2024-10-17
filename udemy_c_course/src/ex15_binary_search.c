#include "../include/ex15_binary_search.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

//Sort a list of numbers and find if a number is on the list.
void binary_search() {
    int numbers[SIZE];
    int number, aux=0;

    //Create list with random numbers
    while(aux < SIZE) {
        int num = rand() % 20 + 1;
        if(!check_is_not_repeated(numbers, aux, num)){
            numbers[aux] = num;
            aux++;
        }
    }

    printf("\n");
    //Sort the list
    for (int i = SIZE; i > 0; i--) {
        for (int j = 0; j < SIZE - 1; j++) {
            //Change position
            if (numbers[j] > numbers[j + 1]) {
                aux = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = aux;
            }
        }
    }

    printf("Choose a number between 0 and 20:\n");
    scanf("%i", &number);

    //Find number
    int max = SIZE - 1;
    int min = 0;
    int iterations = 0;

    while (min <= max) {
        int position = (min + max) / 2;
        if (numbers[position] == number) {
            printf("Number %i found at position %i\n", number, position + 1);
            break;
        }
        if (numbers[position] < number) {
            min = position + 1;
        } else {
            max = position - 1;
        }
        iterations++;
    }

    //Print list
    printf("Sorted list of numbers:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%i ", numbers[i]);
    }
    printf("\n\tIterations: %i\n", iterations);
    printf("\n");

}

bool check_is_not_repeated(int numbers[], int n, int num) {
    for (int i = 0; i <= n; i++) {
        if (numbers[i] == num) {
            return true;
        }
    }
    return false;
}
