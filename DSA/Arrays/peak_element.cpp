#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3;
    int A[n] = {1, 2, 3};

    const int N = sizeof(A) / sizeof(int);

    cout << "Index of max element: "
         << distance(A, max_element(A, A + N))
         << endl;

    return 0;
}