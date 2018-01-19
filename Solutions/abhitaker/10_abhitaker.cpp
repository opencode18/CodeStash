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

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n,m,i,k,sum=0,sum2=0,x;
    cin>>n>>m;

    for(i=0; i<n; i++)
    {
        cin>>x;
        sum += x;
    }

    for(i=0; i<m; i++)
    {
        cin>>x;
        sum2 += x;
    }

    cin>>k;

    n = ceil((float)sum/5) + ceil((float)sum2/10);

    if(n>k)
        cout<<"No\n";
    else
        cout<<"Yes\n";


    return 0;
}
