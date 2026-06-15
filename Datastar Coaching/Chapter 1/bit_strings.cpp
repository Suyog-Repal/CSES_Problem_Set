#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
using vll = vector<long long>; 

const long long MOD = 1e9 + 7; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    ll n; 
    cin >> n; 
    ll ans = 1; 
    for(ll i = 1; i<=n; i++){
        ans = (ans*2)%MOD; 
    }
    cout << ans << '\n'; 
    return 0; 
}