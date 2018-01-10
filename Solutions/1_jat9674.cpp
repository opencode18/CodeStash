#include <bits/stdc++.h>
using namespace std;
 
  
int main() {
 
 int t, x,y,p;
 cin>>t;
 while(t--)
 {
 cin>>x>>y>>p;
 while(p--)
 {
     if((p+1)%2==0)
     y=y*2;
     else
     x=x*2;
   }
   int s=max(x,y);
   int t=min(x,y);
   int u=s/t;
   cout<<u<<endl;
 }
}