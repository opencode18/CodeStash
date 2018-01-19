#include <iostream>
using namespace std;
 
int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,l;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		 cin >> a[i];
		cin >> l;
		int len=0;
		for(int i=0;i<n-1;i++)
		{
			int s=0;
			for(int j=i;j<n;j++)
			{
				s=s+a[j];
				if(s==l)
				{
					int m=j-i+1;
					if(m>len)
					 len=m;
				}
			}
		}
		if(len==0 && a[n-1]==l)
		 cout<<1<<endl;
		else
		 cout<<len<<endl;
 
	}
	return 0;
}