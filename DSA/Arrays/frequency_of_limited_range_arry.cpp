#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 5;
    int arr[N] = {1, 1, 1, 1, 1};
    map<int, int> m;
    for (int i = 0; i < N; i++)
    {
        m[arr[i]]++;
    }
    for (int i = 1; i <= N; i++)
    {
        cout << i << " : " << m[i] << endl;
    }

    return 0;
}