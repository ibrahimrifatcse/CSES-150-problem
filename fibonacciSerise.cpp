// value of must be less than <48. value of n should be max 47; 

#include "bits/stdc++.h"
#define debug(...) 42
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

 int dp[1000];

 int fib(int n) {
 if(n<=1) return n;

 if(dp[n]!=-1) return dp[n];

return dp[n]=(fib(n-2)+fib(n-1));
 }


    int main() {
 optimize();
 int n;cin>>n;
 for(int i=0;i<1000;i++) dp[i]=-1;

   for(int i =0;i<n;i++) cout<<fib(i)<<" " ;
 return 0;
    }
 
