#include <stdio.h>

int first_Occurance(int arr[], int n, int k)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }

        if (arr[mid] > k)
        {
            end = mid - 1;
        }

        if (arr[mid] < k)
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int last_Occurance(int arr[], int n, int k)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
        }

        if (arr[mid] > k)
        {
            end = mid - 1;
        }

        if (arr[mid] < k)
        {
            start = mid + 1;
        }
        
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[10] = {1, 3, 4, 5, 5, 5, 5, 5, 7, 10};

    printf("The first occurance of 5 is %d\n", first_Occurance(arr, 10, 5));
    printf("The last occurance of 5 is %d\n", last_Occurance(arr, 10, 5));

    return 0;
}