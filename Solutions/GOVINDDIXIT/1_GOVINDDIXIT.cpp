#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
    long long int x,y,p;
    cin>>x>>y>>p;
    while(p--)
    {
      if(p%2==0)
      {
        x=2*x;
      }
      else
      {
       y=2*y; 
      }
    }
    cout<<max(x,y)/min(x,y)<<'\n';
    
  }
}