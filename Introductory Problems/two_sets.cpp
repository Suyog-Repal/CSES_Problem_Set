#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 
using vll = vector<long long>; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    ll n; 
    cin >> n; 
    ll sum = n*(n+1)/2;
    if(sum%2){
        cout << "NO" << '\n';
        return 0; 
    }
    cout << "YES" << '\n'; 

    ll target = sum/2; 
    vll a, b; 
    for(ll i = n; i>0; i--){
        if(i<= target){
            a.push_back(i); 
            target -= i; 
        }else{
            b.push_back(i);
        }
    }
    cout << a.size() << '\n'; 
    for(ll x: a) cout << x << " "; 
    cout << '\n'; 
    cout << b.size() << '\n'; 
    for(ll x: b) cout << x << " "; 
    cout << '\n'; 
  
    return 0; 
}