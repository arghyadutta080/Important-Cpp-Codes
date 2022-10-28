#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1, 0, 2, 1, 0, 2, 1, 0, 1, 0};

    // sort(arr.begin(), arr.end());

    int start = 0;
    int mid = 0;
    int end = 9;

    while (mid <= end)
    {
        if (arr[mid] == 0)
        {
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }

        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[end]);
            end--;
        }
    }

    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}