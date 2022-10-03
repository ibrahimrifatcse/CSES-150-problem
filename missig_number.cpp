#include "bits/stdc++.h"
#define debug(...) 42
using namespace std;
#define optimize() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
 
 
int main()
{
    optimize();
 
 int n;cin>>n;
 int missing=0,temp=0;
 for(int i=1;i<=n;i++) missing^=i;
 for(int j=1;j<n;j++) cin>>temp, missing^=temp;
 cout<<missing<<"\n";
 
    return 0;
}
