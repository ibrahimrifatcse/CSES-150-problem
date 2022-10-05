#include "bits/stdc++.h"
#define debug(...) 42
using namespace std;
#define optimize() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ll long long

    bool isPalindrome(int x) {

         if(x<0) return false;

        ll a=0,b=x;
        while(b){
            a=a*10+b%10;
            b/=10;
        }
        cout<<boolalpha<<( a==x);
    }

    int main() {

    int n;cin>>n;

    isPalindrome(n);

    return 0;
    }




