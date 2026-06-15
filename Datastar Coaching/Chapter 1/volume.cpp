#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double r; 
    cin >> r; 
    double PI = acos(-1.0); 
    double volume = (4.0/3.0)*PI*r*r*r;
    cout << fixed << setprecision(9) << volume << '\n'; 
    return 0;
}