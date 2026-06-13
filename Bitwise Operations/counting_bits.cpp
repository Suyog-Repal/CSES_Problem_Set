#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 
using ull = unsigned long long; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n; 
    cin >> n; 
    ll count = 0; 
    ll MOD = 1e9+7;
    for(ll i = 1; i<=n; i++){
         ll x = i; 
         while(x>0){
           count += ((x&1)%MOD);
           x = x/2;  
         }
    }
    cout << count << '\n'; 
    return 0; 
}