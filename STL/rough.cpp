#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int count = 0;
    map<int,int> m;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        m[a] = b;
    }
    for(auto it : m){
        if(it.first == it.second){
            count++;
        }
        else{
            break;
        }
    }
    cout << count;
    return 0;
}
