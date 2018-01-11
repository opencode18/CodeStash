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
vector< pair<ll, ll> > v;
double a[N],ans[N];

int main()
{
    ll i=0,x,j=0;
    while(cin>>x)
    {
        v.push_back({x, i});
        i++;
    }

    sort(v.begin(), v.end());

    for(i=0; i<v.size(); i++)
    {
        if(i+1<v.size() && v[i].f==v[i+1].f)
        {
            ll sum = 0,cnt=0;
            for(j=i; j<v.size(); j++)
            {
                if(v[j].f!=v[i].f)
                    break;
                sum += j+1;
                cnt++;
            }
            a[v[i].f]= (double)sum/cnt;
            i = j-1;
        }
        else
        {
            a[v[i].f] = (double)(i+1)/1;
        }


    }

    for(i=0; i<v.size(); i++)
        ans[v[i].s] = a[v[i].f];

    for(i=0; i<v.size(); i++)
        cout<<setprecision(1)<<fixed<<ans[i]<<" ";

    return 0;
}
