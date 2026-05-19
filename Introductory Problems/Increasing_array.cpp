#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 

int main(){
    ll n; 
    cin >> n; 
    vector<ll> a(n); 
    for(int i =0; i<n; i++){
        cin >> a[i]; 
    }
    ll moves = 0; 
    for(int i = 1; i<n; i++){
        if(a[i-1] > a[i]){
            moves += a[i-1] - a[i]; 
            a[i] = a[i-1]; 
        }
    }
    cout << moves << endl; 
    return 0; 
}
// mistakes that i did: 
// mistake i did: forgot to put the long long data type instead of int!!
// mistakes i did : forgot to update the element after moves done!!