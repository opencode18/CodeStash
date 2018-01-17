/* code by AbhiTaker  */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define M 1000000007
#define N 1000016
#define ff first.first
#define fs first.second
#define sf second.first
#define ss second.second
#define f first
#define s second
#define inf 9000000000000000000
vector<ll> v;

int main()
{
   //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   ll t;
   cin>>t;
   while(t--)
   {
        v.clear();
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
