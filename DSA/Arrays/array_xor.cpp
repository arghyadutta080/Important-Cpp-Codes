#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[10] = {1, 3, 2, 4, 3, 5, 2, 3, 2, 3};
    int n = 10;

    set<int> ans;
    vector<int>v1;

    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (element == arr[j])
            {
                count = count + 1;
                if (count == 2)
                    ans.insert(element);
            }
        }
    }

    if (ans.empty())
    {
        v1.push_back(-1);
        return v1;
    }
    else
    {
        for (auto value : ans)
        {
            v1.push_back(value);
            // cout << value << " ";
        }
        return v1;
    }
}
