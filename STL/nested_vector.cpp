#include <bits/stdc++.h>
using namespace std;

void vector_pair_Print(vector<pair<int, int>> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << " " << vec[i].second << endl;
    }
    cout << endl;
}

void vectorPrint(vector<int> vec)
{
    cout << "Vector Size : " << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    // PAIR OF VECTORS

    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
    vector_pair_Print(v);

    // user input

    vector<pair<int, int>> vec;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vec.push_back({x, y});
    }
    vector_pair_Print(vec);

    // ARRAY OF VECTORS
    // Array consist of vectors. Each element of the array is a vector.

    int N;
    cin >> N;

    vector<int> arr[N];      // N no of vectors are created as elements of an array 'arr'.
    cout << "No. of vectors : " << N << endl;

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            arr[i].push_back(x);
        }

        vectorPrint(arr[i]);        // arr[i] is a vector
    }

    // VECTOR OF VECTORS
    // Vector consist of vectors.

    vector<vector<int>> vect;     // Each element of the vector 'vect' is a vector.

    int M;
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        vector<int> temp;
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }

        vect.push_back(temp);
    }

    for (int i = 0; i < vect.size(); i++)
    {
        cout << "Inside vector size : " << vect[i].size() << endl;
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
}