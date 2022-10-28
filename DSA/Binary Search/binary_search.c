#include <stdio.h>

int findIndex(int arr[], int n, int k)
{
    int start = 0; 
    int end = n - 1;
    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if (arr[mid] == k)
            return mid;

        else if (arr[mid] > k)
            end = mid - 1;

        else if (arr[mid] < k)
            start = mid + 1;

        mid = start + (end - start)/2;    
    }
    return -1;
}

int main()
{
    int arr[10] = {1, 3, 6, 7, 8, 10, 12, 14, 16, 19};
    int i = findIndex(arr, 10, 7);

    printf(" Index of 7 is %d\n", i);

    return 0;
}