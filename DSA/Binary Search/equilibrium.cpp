#include <bits/stdc++.h>
using namespace std;

int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int s1 = 0;
        int e2 = n-1;
        int mid = s1 + (e2 - s1)/2;
        int e1 = mid - 1;
        int s2 = mid + 1;
        int sum1 = 0;
        int sum2 = 0;
        
        for(s1; s1<=e1; s1++)
        {
            sum1 = sum1 + a[s1];
        }
        
        for(s2; s2<=e2; s2++)
        {
            sum2 = sum2 + a[s2];
        }
        
        while(s1<=e2)
        {
            if(sum1==sum2)
                return mid+1;
                
                
            else if(sum1>sum2)
            {
                e1 = e1 -1;
                mid = mid - 1;
                s2 = s2-1;
            }
            
            else if(sum1<sum2)
            {
                e1 = e1 + 1;
                mid = mid + 1;
                s2 = s2 + 1;
            }
        }
    }

int main()    
{
    int arr[5] = {1,1,2,5,2,2};
}