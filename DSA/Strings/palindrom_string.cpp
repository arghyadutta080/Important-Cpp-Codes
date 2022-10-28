#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string S)
	{
	    // Your code goes here
	    int st = 0;
	    int e = S.size() - 1;
	    
	    while(st<=e)
	    {
	        if(S[st] != S[e])
	        {
	            return 0;
	            break;
	        }
	        
	        else if(S[st] == S[e])
	        {
	            st++;
	            e--;
	        }
	        
	    }
	    return 1;
	}

int main()    
{
    string str;
    cin >> str;

    cout << isPalindrome(str);
}