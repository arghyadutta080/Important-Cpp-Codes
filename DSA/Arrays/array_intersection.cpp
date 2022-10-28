#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr2[5] = {8, 4, 5, 3, 3};
    int arr1[10] = {1, 2, 3, 5, 6, 3, 5, 7, 2, 9};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr2[i] == arr1[j])
            {
                arr1[j] = -23467;
                cout << arr2[i] << " ";
                break;
            }
        }
    }

    return 0;
}