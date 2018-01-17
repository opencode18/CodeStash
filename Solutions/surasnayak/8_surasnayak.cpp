#include<bits/stdc++.h>
using namespace std;
#define ll long long int

 
int main()
{
   int t;
   cin>>t;

   while(t--)
   {
       vector<ll> v;

       ll n,i,j,m,x;

       cin>>n>>m;
 
       for(i=0; i<n; i++)
       {
           for(j=0; j<m; j++)
            {
                cin>>x;
                v.push_back(x);
            }
       }
 
       n = n*m;
       sort(v.begin(), v.end());
 
       cout<<v[n/2]<<"\n";
   }
 
    return 0;
}
