#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[10] = {1, 3, 5, 1, 7, 3, 5, 3, 5, 0};
    vector<int> ans;

    for (int i = 0; i < 10; i++)
    {
        int element = arr[i];
        int count = 1;
        for (int j = i + 1; j < 8; j++)
        {
            if (element == arr[j])
            {
                count = count + 1;
                if (count == 2)
                    ans.push_back(element);
            }
        }
    }

    for (auto value : ans)
    {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}