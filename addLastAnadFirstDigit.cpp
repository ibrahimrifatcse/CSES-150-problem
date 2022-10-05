#include "iostream"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define debug(...) 42

int main()
{
optimize();
  int n,f,l;cin>>n;
  f=n;
  l=n%10;
  for(f=n;f>=10;f=f/10);

  cout<<l+f; 

    return 0;
}
