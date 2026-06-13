#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 
using vll = vector<ll>; 

ll n; 
ll ans = LLONG_MAX; 
ll total = 0; 
vll a; 


void solve(ll i, ll sum){
    if(i == n){
        ans = min(ans, abs(total - 2*sum)); 
        return; 
    }
    solve(i+1, sum); 
    solve(i+1, sum + a[i]);
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
     
    cin >> n; 
    a.resize(n); 
    for(ll i = 0; i<n; i++){
        cin >> a[i]; 
        total += a[i];
    }
    solve(0, 0); 
    cout << ans << '\n'; 
    return 0; 
}