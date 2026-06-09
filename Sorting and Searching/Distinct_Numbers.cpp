#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 
using vll = vector<ll>; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n; 
    cin >> n; 
    set<ll> s; 
    ll x; 
    for(ll i = 0; i<n; i++){
        cin >> x;
       s.insert(x); 
    }
    cout << s.size();  
    return 0; 
}