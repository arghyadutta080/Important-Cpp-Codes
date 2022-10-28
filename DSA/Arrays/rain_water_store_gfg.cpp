#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {8, 8, 2, 4, 5, 5, 1};

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

    cout << second_large << endl;
    cout << arr[n - 2] << " " << arr[n - 1] << endl;

    int water_store = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < second_large && )
        {
            int remain_space = second_large - arr[i];
            water_store = water_store + remain_space;
        }
    }

    cout << water_store;

    return 0;
}