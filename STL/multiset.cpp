#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
{
    for (auto value : s)
    {
        cout << value << endl;
    }
}

int main()
{
    multiset<string> s;      // sets print a value one time even if, it is entered multiple time, but multiset prints multiple times

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string st;
        cin >> st;
        s.insert(st);
    }

    print(s);       // function call

    string str;
    cin >> str;
    auto it = s.find(str);      // if u use iteratoer instead of using direct s.erase(str) it will erase only first appeared str of same strings 

    if (it != s.end())
    {
       s.erase(it);
    }
    
    print(s); 
}