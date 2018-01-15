#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,r,i;
        cin>>n>>l>>r;
        l--;r--;
        for(i=l;i<=r;i++)
        {
            n=(n|(1<<i));
        }
        cout<<n<<"\n";
    }
    return 0;
}