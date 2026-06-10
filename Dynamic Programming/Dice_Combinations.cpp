#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 
using vll = vector<long long>; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    ll n; 
    cin >> n; 
    vll dp(n+1); 
    dp[0] = 1; 
    ll MOD = 1e9 + 7; 
    for(ll i = 1; i<=n; i++){
        for(ll dice = 1; dice <= 6; dice++){
            if(i-dice >=0){
                dp[i] = (dp[i] + dp[i-dice])%MOD; 
            }
        }
    }
    cout << dp[n] << '\n'; 
    return 0;
}