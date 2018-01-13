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
ll n,a[N],d[N];

bool chk(vector<ll> &v, ll num)
{
    ll flag =0;
    for(ll i=0; i<v.size(); i++)
    {
        if(v[i]%num!=0 && num%v[i]!=0)
        {
            flag =  1;
            break;
        }
    }

    if(flag)
        return false;
    else
        return true;
}

ll recur(ll i, vector<ll> &v)
{
    if(i==n-1)
    {
       if(chk(v, a[i]))
            return 1;
       else
            return 0;
    }

    if( v.empty())
    {
        ll x,y;
        x = recur(i+1, v);
        v.push_back(a[i]);
        y = 1 + recur(i+1, v);
        v.pop_back();
        return max(x,y);
    }

    if(chk(v, a[i]))
    {
        ll x,y;
        x = recur(i+1, v);
        v.push_back(a[i]);
        y = 1 + recur(i+1, v);
        v.pop_back();
        return max(x,y);
    }
    else
        return recur(i+1, v);

}

int main()
{
   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   ll t;
   cin>>t;
   while(t--)
   {
       cin>>n;
       fill(d, d+n+1, 1);

       for(ll i=0; i<n; i++)
        cin>>a[i];

       vector<ll> v;
       v.clear();
       ll ans = recur(0, v);
       if(ans==1)
        cout<<"-1\n";
       else
        cout<<ans<<"\n";

   }

    return 0;
}
