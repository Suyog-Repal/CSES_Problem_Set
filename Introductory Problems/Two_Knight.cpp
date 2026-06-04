#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;
    cin >> t; 
    for(ll k = 1; k<=t; k++){
        ll total = k*k*(k*k - 1)/2; 
        ll attack = 4*(k-1)*(k-2); 
        cout << total - attack << '\n'; 
    }
    return 0; 
}