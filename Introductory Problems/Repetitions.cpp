#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin >> s; 
    int count = 0; 
    int n = s.size(); 
    int maxLen = 0; 
    for(int i = 1; i<n; i++){
       if(s[i] == s[i-1]){
        count++; 
       }else{
        count  = 0; 
       }
       maxLen = max(maxLen, count);
    }
    cout << maxLen +1 << endl; 
    return 0; 
}