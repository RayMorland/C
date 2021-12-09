#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[8] = "Raymond";
    char name2[8];

    printf("%s", name);
    strcpy(name2, name);
    printf("%s", name2);
}