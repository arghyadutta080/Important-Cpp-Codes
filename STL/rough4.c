#include <stdio.h>
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int main()
{
	int x, y;
	printf("Enter Value of x : ");
	scanf("%d", &x);
	printf("Enter Value of y : ");
	scanf("%d", &y);
    printf("Before Swapping: x = %d, y = %d\n", x, y);
	swap(&x, &y);
	printf("After Swapping: x = %d, y = %d", x, y);
	return 0;
}


