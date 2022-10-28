#include <bits/stdc++.h>
using namespace std;

bool valid(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
    {
        return 1;
    }
    return 0;
}

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int palindrom(string s)
{
    // first, all valid characters are inputted into str

    string str;

    for (int i = 0; i < s.size(); i++)
    {
        if (valid(s[i]))
        {
            str.push_back(s[i]);
        }
    }

    // converting all characters into lower case

    for (int i = 0; i < str.size(); i++)
    {
       str[i] = toLowerCase(str[i]);
    }

    cout << str << endl;

    // palindrom checking

    int st = 0;
    int e = str.size() - 1;

    while (st <= e)
    {
        if (str[st] != str[e])
        {
            return 0;
            break;
        }

        else if (str[st] == str[e])
        {
            st++;
            e--;
        }
    }
    return 1;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    cout << palindrom(s);

    return 0;
}