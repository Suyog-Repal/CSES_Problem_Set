#include <bits/stdc++.h>
using namespace std; 
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code
    ll n; 
    cin >> n; 
    if(n == 1) cout << "1";
    else if(n == 2 || n == 3){
      cout << "NO SOLUTION"; 
    }else{
        for(ll i = 2; i<=n; i+=2){
        cout << i << " "; 
       }
    for(ll i = 1; i<=n; i+=2){
        cout << i << " ";
    }
    }
    return 0; 
}
// Mistake 1:
// Used endl inside loops.
// endl flushes buffer every time -> slow I/O.

// Mistake 2:
// Iterated from 1 to n and checked i % 2.
// Unnecessary modulo operations.

// Better:
// for(ll i = 2; i <= n; i += 2)

// Mistake 3:
// Printed each element on a new line.
// Space-separated output is simpler and faster.

// Mistake 4:
// Used int loop variable while n was ll.
// Keep data types consistent.

// Mistake 5:
// Did not use fast I/O.

// Add:
// ios::sync_with_stdio(false);
// cin.tie(nullptr);

// Mistake 6:
// Kept commented old code in final submission.
// Remove unnecessary commented code for cleaner code.

// Mistake 7:
// Added unnecessary trailing spaces after single outputs.

// Avoid:
// cout << "1" << " ";
// cout << "NO SOLUTION" << " ";

// Better:
// cout << "1";
// cout << "NO SOLUTION";

// IMPORTANT: 
// 1. Solve the problem first.

// 2. Get AC (Accepted).

// 3. Analyze:
//    - Can loops be reduced?
//    - Any unnecessary operations?
//    - Better data structure?
//    - Better complexity?
//    - Cleaner logic?
//    - Faster I/O?
//    - Less memory?

// 4. Improve the code.

// 5. Compare performance and learn from it.