#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    ll n; 
    cin >> n; 
    vector<ll> freq(n, 0); 
    freq[0] = 1; 
    vector<ll> a(n); 
    for(ll i = 0; i<n; i++) cin >> a[i]; 
    ll count = 0; 
    ll pref = 0; 
    for(ll i = 0; i<n; i++){
       pref += a[i]; 
       ll rem = (pref%n + n)%n; 
       count += freq[rem]; 
       freq[rem]++; 
    }
    cout << count << endl; 
    return 0; 
}