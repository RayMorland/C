#include <stdio.h>

int main(void)
{
    printf("Hello, World! \n");
    printf("char size: %lu bytes \n", sizeof(char));
    printf("int size: %lu bytes \n", sizeof(int));
    printf("short size: %lu bytes \n", sizeof(short));
    printf("long size: %lu bytes \n", sizeof(long));
    printf("float size: %lu bytes \n", sizeof(float));
    printf("double size: %lu bytes \n", sizeof(double));
    printf("long double size: %lu bytes \n", sizeof(long double));

    int age = 37;
    printf("%ld\n", sizeof(age));
    printf("%ld", sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("%u", i);
    }
    printf("\n");

    int i = 1;
    while (1)
    {
        printf("%u", i);
        i++;
        if (i == 10)
        {
            break;
        }
    }
}