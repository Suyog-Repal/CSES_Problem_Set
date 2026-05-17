//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std; 

int main(){
   int n; 
   cin >> n; 
   int num = n; 
   int count = 0; 
   while(n != 0){
      int maxi = 0; 
      while(num != 0){
         int digit =  num%10; 
          maxi = max(maxi, digit); 
          num = num/10;
      }
      n = n - maxi; 
      num = n; 
      count++; 
   }
   cout << count << endl; 
   return 0;
}