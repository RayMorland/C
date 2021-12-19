#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[8] = "Raymond";
    char name2[8];

    printf("%s", name);
    strcpy(name2, name);
    printf("%s", name2);

    int age;
    int *address = &age;
    *address = 28;

    printf("%p = %u, %p = %u", address, *address, &age, age);
}