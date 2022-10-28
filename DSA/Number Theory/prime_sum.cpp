//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
    bool prime(int a) {
        for(int i = 2; i <= a; i++){
            if ((a%i == 0) && a!=2){
                return 0;
                break;
            }
            else {
                return 1;
            }
        }
    }
  public:
    vector<int> getPrimes(int N) {
        // code here
        vector<int> v;
        map<int, int> m;
        int a = 2;
        int b = N - a;
        while(a <= b){
            b = N - a;
            if(prime(a) && prime(b))
            {
                m[a] = b;
            }
            a++;
        }
        int n = 0;
        for(auto i : m){
            if(i.first > n){
                n = i.first;
            }
        }
        if(m.empty()){
           v.push_back(-1);
           v.push_back(-1);
        }
        else{
            v.push_back(n);
            v.push_back(m[n]);
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<int> ptr = ob.getPrimes(N);
        cout << ptr[0]<<" "<<ptr[1] << endl;
    }
    return 0;
}
// } Driver Code Ends