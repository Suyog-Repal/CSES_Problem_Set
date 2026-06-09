#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 
using vll = vector<ll>; 

void hanoi(ll n, ll source, ll helper, ll destination){
      if(n == 1){
        cout << source << " " << destination << '\n'; 
        return; 
      }
      hanoi(n-1, source, destination, helper); 
      cout << source << " " << destination << '\n'; 
      hanoi(n-1, helper, source, destination); 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; 
    cin >> n; 
    ll moves = (1LL << n) - 1; 
    cout << moves << endl; 
    hanoi(n, 1 , 2, 3); 
    return 0; 
}