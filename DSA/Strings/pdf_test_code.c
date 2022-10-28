#include <stdio.h>
int main()
{
    int arr[10][10], m, n, i, j;
    printf("Enter total number of rows : ");
    scanf("%d", &m);
    printf("Enter total number of columns : ");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter number : ");
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Row-Major Ordering : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
