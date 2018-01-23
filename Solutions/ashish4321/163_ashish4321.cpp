#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long n;
	cin>>n;
	long long a[n];
	for(long long i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 }
	long long c;
	for(long long i=0;i<(n-1);i++)
	{
		c=0;
		for(long long j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			 c++;
		}
		cout<<c<<" ";
	}
	cout<<0;
	return 0;
}
