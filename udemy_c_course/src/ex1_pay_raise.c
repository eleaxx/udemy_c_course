#include <stdio.h>
#include "../include/ex1_pay_raise.h"

#define INCREMENT 0.1

//calculate the pay raise(10%)
void pay_raise(){
    float base_salary;
    char name[40];

    printf("Hello, first of all, tell me your name: \n");
    scanf("%s",&name);
    printf("Which is your salary now: \n");
    scanf("%f",&base_salary);

    float new_salary = base_salary*INCREMENT + base_salary;
    printf("%s, your new salary with the new increment is %0.2f \n", name, new_salary);
}
