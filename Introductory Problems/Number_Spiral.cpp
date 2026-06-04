#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; 
    cin >> t; 
    ll x; 
    ll y; 
    for(ll i = 0; i<t; i++){
       cin >> x >> y; 
       if(y>x){
        if(y%2==1){
            cout << y*y - (x-1) << "\n";
        }else{
            cout << (y-1)*(y-1) + x << "\n"; 
        }
       }else{
        if(x%2 == 0){
            cout << x*x - (y-1) << "\n";
        }else{
            cout << (x-1)*(x-1)  + y << "\n";
        }
       }
    }
    return 0; 
}