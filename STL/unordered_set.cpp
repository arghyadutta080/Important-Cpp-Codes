#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S = "gffgffg";
    // string str;
    unordered_set<char> s;
    for (int i = 0; i < S.size(); i++)
    {
        s.insert(S[i]);
    }
    unordered_set<char> s2;
    for (auto it : s)
    {
        s2.insert(it);
    }
    S.clear();
    for (auto itr : s2)
    {
        S.push_back(itr);
    }
    cout << S;
}