#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> m)
{
    for (auto value : m)
    {
        cout << value.first << " " << value.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[0] = "Hello";
    m[3] = "Arghya";
    m[2] = "Amit";
    m[5] = "Sansrita";
    m[4] = "Swastika";

    m.erase(3);

    printMap(m);

    auto it = m.find(7);

    if (it != m.end())
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
}