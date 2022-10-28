#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, -3, 2, -3, 1};
    int S = 0;

    set<vector<int>> ans;       // set is used so that we don't get same numbers as different output with differnt order 

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == S)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);

                    sort(temp.begin(), temp.end());     // sorting used just to help set to work properly

                    ans.insert(temp);
                }
            }
        }
    }

    for (auto value : ans)
    {
        for (int i = 0; i < value.size(); i++)
        {
            cout << value[i] << " ";
        }
        cout << endl;
    }

    return 0;
}