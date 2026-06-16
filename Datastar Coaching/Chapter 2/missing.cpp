#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 
using vll = vector<ll>; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    ll n; 
    cin >> n; 
    ll sum = 0; 
    for(ll i = 1; i<n; i++){
        ll x; 
        cin >> x; 
        sum += x; 
    }
    cout << n*(n+1)/2 - sum << '\n'; 
    return 0; 
}