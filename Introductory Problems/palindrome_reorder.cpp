#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    string s; 
    cin >> s; 
    unordered_map<char, long long> freq; 
    for(char c: s) freq[c]++; 
    ll odd = 0; 
    for(auto &p: freq){
       if(p.second%2 == 1) odd++; 
       
    }
    if(odd>1){
        cout << "NO SOLUTION\n"; 
        return 0; 
    }
    string left = ""; 
    for(auto &p: freq){
        char ch = p.first; 
        ll count = p.second; 
        left += string(count/2, ch); 
    }
    string right = left; 
    reverse(right.begin(), right.end()); 
   string middle = ""; 
    for(auto &p: freq){
        char ch = p.first; 
        if(p.second%2 == 1) middle += string(1, ch); 

        
    }
  cout << left + middle + right << endl; 
    return 0; 
}