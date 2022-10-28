#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a = '3';
    char b = '3';
    char c = (a - '0') + (b - '0');
    cout << a - '0' << endl << endl;

    string s = "673";

    int m = 1;
    int num = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        int a = s[i] - '0';
        cout << a << endl;
        a = a * m;
        num = num + a;
        m = m * 10;
    }

    cout << endl;
    cout << num;
}