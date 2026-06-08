#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 
using vll = vector<long long>; 
int main(){
     ios::sync_with_stdio(false); 
     cin.tie(nullptr); 

    ll t; 
    cin >> t; 

    for(ll i = 0; i<t; i++){
        ll a, b; 
        cin >> a >> b; 
       
        if((a+b)%3 == 0 && max(a, b) <= 2*min(a, b)){
            cout << "YES" << '\n'; 
        }else{
             cout << "NO" << '\n';
        }
    }
    return 0; 
}