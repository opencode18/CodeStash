#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k,s=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		 cin >> a[i];
		cin >> k;
		int len=0;
		for(int i=0;i<n-1;i++)
		{
			s=0;
			for(int j=i;j<n;j++)
			{
				s+=a[j];
				if(s==k)
				{
					int l=j-i+1;
					if(l>len)
					 len=l;
				}
			}
		}
		if(len==0 && a[n-1]==k)
		 cout<<1<<endl;
		else
		 cout<<len<<endl;
		
	}
	return 0;
}