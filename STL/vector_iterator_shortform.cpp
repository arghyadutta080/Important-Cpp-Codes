#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // vector print using shortcut for loop
    
    for (auto value : v) // 'auto' keyword can be used instead of using and data type int, float, char, string etc.
    {                    // This for loop is shortcut
        cout << value << " ";
    }
    cout << endl;


    // vector print using shortcut iterator

    // vector<int>::iterator it;    No need to use this line while using auto
    for (auto it = v.begin(); it < v.end(); it++) // pointing first element with iterator 'it' and then increment
    {
        cout << (*it) << " ";
    }
    cout << endl;

    vector<pair<int, int>> p = {{1, 2}, {3, 4}, {5, 6}};

    // nested-vector-pair print using shortcut for loop
    for (auto value : p)
    {
        cout << value.first << " " << value.second << endl;
    }

    // nested-vector-pair print using shortcut iterator
    for (auto it = p.begin(); it < p.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
}