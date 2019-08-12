#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Header/headerOne.h"

int main()
{
    /*
    %s = strings
    %d = intergers
    %f = float
     */
    printf("Hello %s!, Thank you for signing up for this course %s\n", "Assoua","C Programming" );
    printf("We will study %d projects and %1.2f will be the rating", 99,100.0);
        /*
    Initializing an array */
    char name[22] ="Eloumbat Assoua Albert";
    printf("\n My name is %s", name);
    /*
    String Copy */
    /*
    Creating Header files and using them */
    printf("\n\nThe class number is %d\n\n", ClassNumber);

    /*
    Using the scanf function
    */
    char firstName[20], lastName[20];
    int age, salary;
    printf("What is your firstname?\n");
    scanf("%s", firstName);
        printf("What is your lastname?\n");
    scanf("%s", lastName);
        printf("What is your age?\n");
    scanf("%d", &age);
        printf("What is your salary?\n");
    scanf("%d", &salary);
    printf("%s %s is %d years old and his salary is %d", firstName, lastName, age, salary);
    return 0;


}
