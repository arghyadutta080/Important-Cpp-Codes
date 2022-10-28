#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 10;
    int arr[N] = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1};

    int sum = arr[0];
    int count = 0;
    int i = 0;
    int k;

    while (count < N-1)
    {
        int val = sum;
        if (val == 0)
        {
            k = -1;
            break;
        }
        count = count + val;
        sum = arr[count];
        i = i + 1;
    }

    if (k == -1)
        cout << k;
    else
        cout << i;

    return 0;
}