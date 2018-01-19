#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int longarr (int a[],int n,int k);
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        int ans;
        ans=longarr(a,n,k);
        cout<<ans<<endl;
    }
    return 0;
}
int longarr (int a[],int n,int k)
{
    unordered_map<int, int> ht;
    int s=0,len=0;
    int i;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        if(s==k)
        {
            len=i+1;
        }
        else if(ht.find(s-k)!=ht.end())
        {
            len=max(len,(i-ht[s-k]));
        }
        if (ht.find(s)==ht.end())
        {
            ht[s]=i;
        }
    }
    return len;
}