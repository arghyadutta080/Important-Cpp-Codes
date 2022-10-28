#include <bits/stdc++.h>
using namespace std;

void vectorPrint(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        cout << "vector size : " << v.size() << endl;
    }

    vector<int> v2 = v;  // here v2 doesn't have the capability to change v1, bcoz only copy passes here
    v2.push_back(50);

    vectorPrint(v);
    vectorPrint(v2);

    // vector<int> &v2 = v;  here v2 has the capability to change v1, bcoz call by referance pass here
    // v2.push_back(50);

    // vectorPrint(v);
    // vectorPrint(v2);

    vector<int> vec(10, 3);  // declare 10 variable of value 3 each and everyone
    cout << "vector size :" << vec.size() << endl; 
    vectorPrint(vec);
    
    vec.push_back(4); 
    cout << "vector size :" << vec.size() << endl; 
    vectorPrint(vec);

    vec.pop_back();         // delete value from end of a vector 
    cout << "vector size :" << vec.size() << endl; 
    vectorPrint(vec);
}