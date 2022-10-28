#include <bits/stdc++.h>
using namespace std;

// program to check if a string is rotate by k or not (frontside or backside)

bool isRotated(string str1, string str2)
{
    string str;
    str = str1;
    int n = str1.size();
    char temp[n];
    char temp1[n];
    int k = 2;

    // checking from front by k

    for (int i = k, j = 0; i < n, j < n - k; i++, j++)
    {
        temp[j] = str1[i];
    }
    for (int i = 0, j = n - k; i < k, j < n; i++, j++)
    {
        temp[j] = str1[i];
    }
    for (int i = 0; i < n; i++)
    {
        str1[i] = temp[i];
    }

    // checking from back by k

    for (int i = n - k, j = 0; i < n, j < k; i++, j++)
    {
        temp1[j] = str[i];
    }
    for (int i = 0, j = k; i <= k, j < n; i++, j++)
    {
        temp1[j] = str[i];
    }
    for (int i = 0; i < n; i++)
    {
        str[i] = temp1[i];
    }

    int i = str1.compare(str2);
    int j = str.compare(str2);

    if (i == 0 || j == 0) // this condition shows that, 2 strings are exactly same
        return 1;

    else
        return 0;
}

int main()
{
    string s1 = "fsbcnuvqhffbsaqxwp";
    string s2 = "wpfsbcnuvqhffbsaqx";

    cout << isRotated(s1, s2) << endl;

    string str1 = "amazon";
    string str2 = "azonam";

    cout << isRotated(str1, str2) << endl;

    return 0;
}