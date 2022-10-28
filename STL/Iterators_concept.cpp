#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    vector<int>::iterator it = vec.begin();       // Iterator works as pointer to point vector elements
    for (it; it < vec.end(); it++)
    {
        cout << (*it) << " ";
    }

    vector<pair<int, int>> p = {{1, 2}, {33, 4}, {5, 6}};
    vector<pair<int, int>>::iterator ite = p.begin();
    for (ite; ite < p.end(); ite++)
    {
        cout << (*ite).first << " " << (*ite).second << endl;
    }
}