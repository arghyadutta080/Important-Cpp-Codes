#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;
    // for (int i = 0; i < k; i++)
    // {
    //     int temp = arr[0];
    //     for (int i = 0; i < n-1; i++)
    //     {
    //         arr[i] = arr[i + 1];
    //     }

    //     arr[n - 1] = temp;
    // }

    
    
    // rotate by k from front side 

    int temp[n];

    for (int i = k, j = 0; i < n, j < n - k; i++, j++)
    {
        temp[j] = arr[i];
    }
    for (int i = 0, j = n - k; i < k, j < n; i++, j++)
    {
        temp[j] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    // rotate by k from back side 

    for (int i = n - k, j = 0; i < n, j < k; i++, j++)
    {
        temp[j] = arr[i];
    }
    for (int i = 0, j = k; i <= k, j < n; i++, j++)
    {
        temp[j] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}