#include <bits/stdc++.h>
using namespace std;

int main()
{
    // String User Input as a value

    map<int, string> m;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        m[i] = s;
    }

    for (auto value : m)
    {
        cout << value.first << " " << value.second << endl;
    }


    // No of same string count and dictionary order of string --> String User Input as Key

    map<string, int> mp;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;

        // cout << mp[s] << endl;

        // mp[s] = 0 initially
        // mp[s]++ this increment works when SAME STRING is inputted repeatedly in key of map and COUNTS the no of a particular string inputted
        // while only mp[s] is used, it doesn't increment and count remains zero(0), doesn't matter how many times the same string is inputted.
    }
    
    for (auto value : mp)
    {
        cout << value.first << " " << value.second << endl;
    }


    // No of same string count only for 2 queries --> String User Input as Key

    unordered_map<string, int> m1;

    int M;
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        string s;
        cin >> s;
        m1[s]++;
    }
    int q;
    cin >> q;

    while (q--)
    {
       string str;
       cin >> str;
       cout << m1[str] << endl;
    }    
}