#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 
using vll = vector<long long>; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    ll n; 
    cin >> n; 
    ll count = 0; 
    while(n>0){
        n = n/5; 
        count += n; 
    }
    cout << count << endl; 
}