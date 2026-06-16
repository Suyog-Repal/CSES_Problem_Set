#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    string s; 
    cin >> s; 
    ll count = 1; 
    ll maxi = 1;  
    for(ll i = 1; i<(ll)s.size(); i++){
        if(s[i] == s[i-1]){
            count++; 
        }else{
            count = 1; 
        }
        maxi = max(maxi, count); 
    }
    cout << maxi << '\n'; 
    return 0; 
}