// Enter N strings as input, then enter q queries, if query enter string is present there print "Yes", if not print "No"

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string st;
        cin >> st;
        s.insert(st);
    }

    int q;
    cin >> q;

    while (q--)
    {
        string str;
        cin >> str;

        if (s.find(str) != s.end())
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}
