#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    p = {5, "Arghya"};

    pair<int, string> &q = p;
    q.first = 3;

    cout << p.first << " " << p.second << endl;

    int arr1[3] = {1, 2, 3};
    int arr2[3] = {4, 5, 6};

    pair<int, int> p_arr[3];
    p_arr[0] = {1, 4};
    p_arr[1] = {2, 5};
    p_arr[2] = {3, 6};

    for (int i = 0; i < 3; i++)
    {
        cout << p_arr[i].first << " " << p_arr[i].second << endl;
    }
}