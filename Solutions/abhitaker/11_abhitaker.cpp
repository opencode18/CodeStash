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
long double d[1100][1100];


int main()
{
   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   ll i,j;

   for(i=0; i<=1000; i++)
   {
       for(j=0; j<=1000; j++)
       {
           if(i==0 || j==0)
            d[i][j] = 1;

           if(j-2>=0)
            d[i][j] = (long double)i/(i+j) + d[i][j-2];
           else
            d[i][j] = (long double)i/(i+j);
       }
   }

   ll t;
   cin>>t;
   while(t--)
   {
       ll n,m;
       cin>>n>>m;
       if(n==0 || m==0)
       {
           cout<<"1.000000\n";
           continue;
       }

       long double ans = d[n][m]/(ceil((float)(m+1)/2);

       cout<<setprecision(6)<<fixed<<ans<<"\n";
   }

    return 0;
}
