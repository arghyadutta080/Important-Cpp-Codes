#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {1, 6, 3, 7, 4, 13, 10};

    int large = INT_MIN;
    int second_large = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }
        else if ((arr[i] > second_large) && (arr[i] < large))
        {
            second_large = arr[i];
        }
    }

    cout << second_large;

    return 0;
}