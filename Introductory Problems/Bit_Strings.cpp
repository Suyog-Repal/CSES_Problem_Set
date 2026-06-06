#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 
using vll = vector<long long>; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    ll n; 
    cin >> n; 
    const ll MOD = 1e9 + 7;
    ll ans = 1; 
    for(ll i = 1; i<=n; i++){
        ans = (2*ans)%MOD;
    }
    cout << ans << endl; 
    return 0; 
}

