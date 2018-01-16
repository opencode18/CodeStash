/* code by AbhiTaker  */
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define M 1000000007
#define N 5000016
#define ff first.first
#define fs first.second
#define sf second.first
#define ss second.second
#define f first
#define s second

ll power(ll x, ll n)
{
    if(n==0)
        return 1;

    if(n%2==0)
        return power(x*x, n/2);
    else
        return x*power(x*x, (n-1)/2);
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,r,i;
        cin>>n>>l>>r;
        ll a[40];
        fill(a, a+40, 0);
        i=1;
        while(n!=0)
        {
            a[i] = n%2 + 1;
            n /= 2;
            i++;
        }

        for(i=l; i<=r; i++)
            a[i] = 2;

        ll ans = 0;

        for(i=1; i<=35; i++)
        {
            if(a[i]==2)
                ans += power(2, i-1);
        }

        cout<<ans<<"\n";
    }



    return 0;
}
