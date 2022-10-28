#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "BB";
    int n = s.size() - 1;
    cout << n << endl;
    char c = s[n];
    cout << c << endl;
    int index = c - 'A' + 1;
    cout << index << endl;

    int num = index + (26 * (pow(26, n) - 1) / (26 - 1));
    cout << num;
}