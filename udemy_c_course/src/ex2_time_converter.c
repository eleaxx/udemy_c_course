#include <stdio.h>
#include "../include/ex2_time_converter.h"

#define MONTHS 12
#define WEEKS 52
#define DAYS 365
#define HOURS 24

//Calculate in other time units the number of years the user introduces
void timer_converter(){
    int years;

    printf("Hello, introduce years: \n");
    scanf("%i",&years);

    printf("%i years are: \n", years);
    printf("\t%i months\n", years*MONTHS);
    printf("\t%i weeks\n", years*WEEKS);
    printf("\t%i days\n", years*DAYS);
    int hours = years*DAYS*HOURS;
    printf("\t%i hours\n", hours);
}
