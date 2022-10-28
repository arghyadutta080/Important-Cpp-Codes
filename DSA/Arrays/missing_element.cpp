#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {0,-10,1,3,-20};

    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (int i = 1; i <= 10^6; i++)
    {
        if (m[i] == 0)
        {
            cout << i << " ";
            break;
        }
    }

    return 0;
}