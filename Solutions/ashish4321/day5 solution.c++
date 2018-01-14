#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int test;
	cin>>test;
	while(test-->0)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int b,ans,flag;
		cin>>b;
		int c[b];
		ans=b;
		for(int i=0;i<b;i++)
		c[i]=a[i];
		for(int i=b;i<n;i++)
		{
			flag=0;
			for(int j=0;j<b;j++)
			{
				if(a[i]==c[j])
				flag=1;
			}
			if(flag==0)
			{
			c[i%b]=a[i];
			ans+=1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}