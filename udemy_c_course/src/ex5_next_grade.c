#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "../include/ex5_next_grade.h"

#define MINIMUN 5
#define MARKS 7
#define DECIMALS 100

//A student cannot fail 4 subjects, otherwise the student will not move up to next grade.
void next_grade(){
    float mark_1, mark_2, mark_3, mark_4, mark_5, mark_6, mark_7, average;
    int fails = 0;
    char name[40];
    char * message;
    printf("Hello, tell me your name please: \n");
    scanf("%s",&name);

    printf("Now, I need you to introduce your marks one by one: \n");
    printf("First: \n");
    scanf("%f",&mark_1);
    if(check_mark(mark_1)) {
        fails++;
    };

    printf("Second: \n");
    scanf("%f",&mark_2);
    if(check_mark(mark_2)) {
        fails++;
    };

    printf("Third: \n");
    scanf("%f",&mark_3);
    if(check_mark(mark_3)) {
        fails++;
    };

    printf("Fourth: \n");
    scanf("%f",&mark_4);
    if(check_mark(mark_4)) {
        fails++;
    };

    printf("Fifth: \n");
    scanf("%f",&mark_5);
    if(check_mark(mark_5)) {
        fails++;
    };

    printf("Sixth: \n");
    scanf("%f",&mark_6);
    if(check_mark(mark_6)) {
        fails++;
    };

    printf("Seventh: \n");
    scanf("%f",&mark_7);
    if(check_mark(mark_7)) {
        fails++;
    };

    average = round((mark_1+mark_2+mark_3+mark_4+mark_5+mark_6+mark_7)/MARKS*DECIMALS/DECIMALS);
    message = choose_message(average);

    printf("%s, let's calculate your average:\n", name);
    printf("Your average is %0.2f.\n %s\n", average, message);

    message = final_mesage(fails, average);
    printf("%s\n", message);
}

bool check_mark(float mark) {
    if(mark<MINIMUN) {
        return true;
    }
    return false;
}

char * choose_message (float average) {
    if(average >= 9) {
        return "Congratulations, well done!\n";
    }else if(average >= 7 && average <= 8.99){
        return "Good job, you did it great!\n";
    }else if(average >= 5 && average <= 6.99){
        return "Ok, not bad.\n";
    }else{
        return "Try harder next time, you can do it better.\n";
    }
}

char * final_mesage (int fails, float average) {
    if(fails < 4 && average >=5) {
        return "Move up to next grade!\n";
    }else if(fails > 3 && average >= 5){
        return "Your average is more than 5, but you failed more than 3 subjects, try harder next year.\n";
    }else if(fails < 4 && average <= 5){
        return "Your average is lower than 5, try again next year.\n";
    }else{
        return "I'm sorry, but you will definitely have to repeat the year.\n";
    }
}