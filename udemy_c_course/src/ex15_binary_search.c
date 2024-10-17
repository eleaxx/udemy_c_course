#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

//Sort a list of numbers and find if a number is on the list.
void binary_search() {
    int numbers[SIZE];
    int number, aux;

    //Create list with random numbers
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = rand() % (20);
    }
    // printf("List of numbers:\n");
    // for (int i = 0; i < SIZE; i++) {
    //     printf("%i ", numbers[i]);
    // }
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
    bool exit = false;
    int max = SIZE;
    int min = 0;
    int iterations = 0;
    int position = (min+max) / 2;
    do {
        if (numbers[position] == number) {
            printf("Number %i fin at position %i\n", number, position + 1);
            exit = true;
        } else {
            if (numbers[position] < number) {
                min = position;
                position = (position + max) / 2;
            } else {
                max = position;
                position = (min + position) / 2;
            }
            iterations++;
        }
    } while ((position != min || position != max) && exit == false);

    //Print list
    printf("Sorted list of numbers:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%i ", numbers[i]);
    }
    printf("Iterations: %i\n", iterations);
    printf("\n");
}