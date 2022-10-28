#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s; // sets also follows a sequence like maps

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string st;
        cin >> st;
        s.insert(st);
    }

    for (auto value : s)
    {
        cout << value << endl;
    }
}