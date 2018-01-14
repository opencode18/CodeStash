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
		int b,ans=0,flag,k=0,p=0;
		cin>>b;
		int c[b];
		c[k]=a[0];
		ans+=1;
		k++;
		p++;
		for(int i=1;i<n;i++)
		{
		  flag=0;
		  for(int j=0;j<p;j++)
		  {
		          if(a[i]==c[j])
		          flag=1;
		  }
		  if(flag==0)
		   {
		    c[k]=a[i];
		    k++;
		    if(p<=b)
		    p++;
		    k%=b;
		    ans+=1;
		  }
		
		}
		cout<<ans<<endl;
	}
	return 0;
}