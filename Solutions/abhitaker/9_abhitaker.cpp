/* code by AbhiTaker  */
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
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
map<ll, ll> mymap;
ll a[N];

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        mymap.clear();
        ll n,i,k,sum=0,maxi = 0;
        cin>>n;
        for(i=0; i<n; i++)
            cin>>a[i];

        cin>>k;

        for(i=0; i<n; i++)
        {
            sum += a[i];
            if( sum == k)
                maxi = i+1;
            else if(mymap.find(sum-k)!=mymap.end())
                maxi = max(maxi, i - mymap[sum-k]);

            if(!(mymap.find(sum)!=mymap.end()))
                mymap[sum] = i;

        }

        cout<<maxi<<"\n";

    }


    return 0;
}
