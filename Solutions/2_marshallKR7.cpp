#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main()
{
    ll n=0,i=0;
    ll arr[1000007];
    ll temp[1000007];
    ll freq[1000007]={0};
    double ans[1000007]={0};
    while(scanf("%lld",&arr[i])!=EOF)
    {
        temp[i]=arr[i];
        freq[arr[i]]++;
        i++;
    }
    n=i;
    sort(temp,temp+n);
    i=0;
    while(i<n)
    {
        if(freq[temp[i]]>1)
        {
            ans[temp[i]]=((freq[temp[i]]*(i+1))+(((freq[temp[i]])*(freq[temp[i]]-1))/2.0))/(double)freq[temp[i]];
            i=i+freq[temp[i]];
        }
        else
        {
            ans[temp[i]]=(double)i+1;
            i++;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<setprecision(2)<<ans[arr[i]]<<" ";
    }
    return 0;
}
