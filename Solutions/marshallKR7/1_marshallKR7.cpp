#include<bits/stdc++.h>;
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
    ll x,y,p,i,ans=0;
    cin>>x>>y>>p;
    for(i=1;i<=p;i++)
    {
        if(i%2!=0)
        x*=2;
        else
        y*=2;
    }
    ans=(max(x,y))/(min(x,y));
    cout<<ans<<"\n";
    }
    return 0;
}
