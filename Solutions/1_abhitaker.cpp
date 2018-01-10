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

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,p,i;
        cin>>x>>y>>p;

        for(i=1; i<=p; i++)
        {
            if(i%2==0)
                y *= 2;
            else
                x *= 2;
        }
        ll ans = max(x,y)/min(x,y);
        cout<<ans<<"\n";
    }
    return 0;
}
