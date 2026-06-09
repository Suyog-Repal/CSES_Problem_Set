#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 
using vll = vector<ll>; 

ll facto(ll n){
    if(n <2) return 1;
   vll dp(n+1); 
   dp[0] = 1; 
   dp[1] = 1; 
   for(ll i = 2; i<=n; i++){
      dp[i] = i*dp[i-1];
   }
   return dp[n]; 
}

void generate(string &s, string &current, vector<bool> &used){
    if(current.size() == s.size()){
        cout << current << '\n'; 
        return; 
    }
    for(ll i = 0; i<s.size(); i++){
        if(used[i]) continue; 
        used[i] = true; 
        current.push_back(s[i]); 
        generate(s, current, used); 
        current.pop_back();
        used[i] = false; 
    }
} 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
 
    string s; 
    cin >> s; 
    ll n = s.size(); 
    unordered_map<char, ll> freq; 
    ll ans = 0; 
    for(char c : s) freq[c]++; 
    ll product = 1; 
    for(auto &p: freq){
       product *= facto(p.second); 
    }
    ans = facto(n)/product; 
    cout << ans << '\n'; 
    vector<bool> used(s.size(), false); 
    string current = "";
    generate(s, current, used); 
     return 0; 
}