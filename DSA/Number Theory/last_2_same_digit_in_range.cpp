//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int numbersInRange(int L, int R){
        long long int ans;
        if (L<10 && L!=R){
            ans = (10 - L) + (R/11);
        }
        else if (L<10 && L==R){
            ans = 1;
        }
        else {
            ans = (R/11) - (L/11);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout << ob.numbersInRange(L, R) << endl;
    }
    return 0; 
} 

// } Driver Code Ends