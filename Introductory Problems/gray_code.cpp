#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 
//using vs = vector<string>; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
     
    ll n; 
    cin >> n; 
    ll t = 1LL << n; 
   // vs a(t, 0); 
    
    for(ll i = 0; i<t; i++){
        string binary  = ""; 
        ll gray = i^(i >> 1); 
       for(ll j = 0; j<n; j++){
           binary += char('0' + (gray & 1)); 
           gray >>= 1; 
       }
        while((ll)binary.size() < n) binary += '0';
        reverse(binary.begin(), binary.end());
        cout << binary << '\n'; 
    }
    return 0; 
}