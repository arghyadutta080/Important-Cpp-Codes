#include <stdio.h>

void sum(int *a, int *b, int *t)
{
    *t = *a + *b;
}

int main()
{
    int num1, num2, total;

    printf("Enter two numbers : \n");
    scanf("%d %d", &num1, &num2);

    sum(&num1, &num2, &total);

    printf("Total = %d", total);

    return 0;
}

