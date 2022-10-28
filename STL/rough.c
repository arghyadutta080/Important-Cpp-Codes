#include <stdio.h>

int main()
{
	int var = 10;
	int *ptr1 = &var;
    int **ptr2 = &ptr1;

	printf("Value of var = %d\n", var );
    printf("Address of var = %d\n", &var);
    printf("Value of var using single pointer = %d\n", *ptr1 );
    printf("Address of var using single pointer = %d\n", ptr1 );
    printf("Address of single pointer = %d\n", &ptr1);
    printf("Value of var using double pointer = %d\n", **ptr2);
    printf("Address of single pointer using double pointer = %d\n", ptr2);
    printf("Address of double pointer = %d\n", &ptr2);

	return 0;
}


