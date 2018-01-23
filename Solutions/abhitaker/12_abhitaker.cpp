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
ll ans[N];
pair<ll, ll> p[N],a[N],b[N];

void Merge(ll l, ll mid, ll r)
{
   ll i,j,ind,cnt=0;

   for(i=0; i+l<=mid; i++)
        a[i] = {p[i+l].f, p[i+l].s};

   for(i=0; i+mid+1<=r; i++)
        b[i] = {p[i+mid+1].f, p[i+mid+1].s} ;

    i = l; j=mid+1; ind=0;

   for(ind=0 ; i<=mid && j<=r; ind++ )
   {
       if(a[i-l].f > b[j-mid-1].f )
       {
           cnt++;
           p[ind+l] = {b[j-mid-1].f, b[j-mid-1].s};
           j++;
       }
       else{
            ans[a[i-l].s] += cnt;
            p[ind+l] = {a[i-l].f, a[i-l].s};
            i++;
       }
   }

   for( ; i<=mid; i++)
   {
      ans[a[i-l].s] += cnt;
      p[ind+l] = {a[i-l].f, a[i-l].s};
      ind++;
   }

   for( ; j<=r; j++)
   {
      p[ind+l] = {b[j-mid-1].f, b[j-mid-1].s};
      ind++;
   }
}
void invt(ll l, ll r)
{
    if(l<r)
    {
        ll mid = l + (r-l)/2;

        invt(l, mid);
        invt(mid+1, r);

        Merge(l, mid, r);
    }
}

int main()
{
   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   ll n,i;
   cin>>n;

   for(i=0; i<n; i++)
    {
        cin>>p[i].f;
        p[i].s = i;
    }

   invt(0, n-1);

   for(i=0; i<n; i++)
        cout<<ans[i]<<" ";


    return 0;
}
