#include <stdio.h>

int main()
{
    int var = 10;
    int *ptr = &var;

    printf("The value of var is %d\n", *ptr);
    printf("The address of var is %u\n", ptr);

    *ptr = 20;

    printf("After doing *ptr = 20, var is %d", var);

    return 0;
}