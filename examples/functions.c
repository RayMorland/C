#include <stdio.h>
#include "calculate_age.h"

void doSomething(int value)
{
    printf("%u", value);
}

int main(int argc, char *argv[])
{
    // doSomething(1);
    // char name[20];
    // printf("Enter your name: ");
    // scanf("%s", name);
    // printf("you entered %s", name);

    // typedef enum
    // {
    //     monday,
    //     tuesday,
    //     wednesday,
    //     thursday,
    //     friday,
    //     saturday,
    //     sunday
    // } WEEKDAY;

    // WEEKDAY day = monday;

    // if (day == monday)
    // {
    //     printf("Its monday!");
    // }
    // else
    // {
    //     printf("Its not monday");
    // }

    // struct person
    // {
    //     int age;
    //     char *name;
    // };

    // typedef struct
    // {
    //     int age;
    //     char *name;
    // } PERSON;

    // PERSON ray = {28, "Raymond"};

    // printf("%d, %s", ray.age, ray.name);

    // printf("%u", calculateAge(1990));

    printf("%s", __TIME__);
}