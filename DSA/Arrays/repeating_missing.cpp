#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 3, 5};
    int v[2];

    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (m[i] == 2)
            v[0] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        if (m[i] == 0)
           v[1] = i;
    }

    for (int i = 0; i < 2; i++)
    {
        cout << v[i] << " ";
    }
    

    return 0;
}