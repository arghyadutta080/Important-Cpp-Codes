#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> v[n1];
    for (int i = 0; i < n1; i++)
    {
        int size;
        cin >> size;
        for (int j = 0; j < size; j++)
        {
            int val;
            cin >> val;
            v[i].push_back(val);
        }
    }
    for (int i = 0; i < n2; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << v[a][b] << endl;
    }
    return 0;
}