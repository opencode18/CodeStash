#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	int i;
   	for(i=0;i<n;i++)
   	cin>>a[i];
   	int k;
   	cin>>k;
   	
   	map<int,int> m;
   	int s=0,ans=0;
   	
   	for(i=0;i<n;i++)
   	{
   		s=s+a[i];
   		
   		if(s==k)
   		{
   			ans=i+1;
   		}
   		else if(m.find(s)==m.end())
   		{
   			m[s]=i;
   		}
   		if(m.find(s-k)!=m.end())
   		{
   			ans=max(ans,i-m[s-k]);
   		}
   	}
   	cout<<ans<<endl;
   }
 
    return 0;
}