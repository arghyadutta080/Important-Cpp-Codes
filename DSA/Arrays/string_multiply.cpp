#include <bits/stdc++.h>
using namespace std;

long long int convert(string s)
{
    long long int m = 1;
    long long int num = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (i == 0 && s[i] == '-')
            break;
        int a = s[i] - '0';
        a = a * m;
        num = num + a;
        m = m * 10;
    }
    int x = -1;
    if (s[0] == '-')
    {
        return num * x;
    }
    else
        return num;
}
string multiplyStrings(string s1, string s2)
{
    long long int a = convert(s1);
    long long int b = convert(s2);
    long long int c = a * b;
    string st = to_string(c);
    return st;
}

int main()
{
    string ans = multiplyStrings("505041410988047", "3318139");
    cout << ans << endl;
}