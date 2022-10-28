#include <bits/stdc++.h>
using namespace std;

bool areIsomorphic(string str1, string str2)
{
    map<char, int> m;
    for (int i = 0; i < str1.length(); i++)
    {
        m[str1[i]]++;
    }

    map<char, int> mp;
    for (int i = 0; i < str2.length(); i++)
    {
        mp[str2[i]]++;
    }

    map<map<char, int>, int> m1;
    for (auto i : m)
    {
        m1[m[i]]++;
    }

    map<map<char, int>, int> mp1;
    for (auto i : mp)
    {
        mp1[mp[i]]++;
    }

    for (auto i = 0; i < m1.size() || i < mp1.size(); i++)
    {
        if (m1.second != mp1.second)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    string s1 = "xxyy";
    string s2 = "aabb";

    cout << areIsomorphic(s1, s2);

    return 0;
}