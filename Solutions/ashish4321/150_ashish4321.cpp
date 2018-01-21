#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int n1,n2;
	cin>>n1>>n2;
	long long a[n1],b[n2],s1=0,s2=0;
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
		s1+=a[i];
	}
	for(int i=0;i<n2;i++)
	{
		cin>>b[i];
		s2+=b[i];
	}
	long long n,j,k;
	cin>>n;
	j=ceil(s1/5);
	k=ceil(s2/10);
	if((j+k)<=n)
	cout<<"Yes";
	else
	cout<<"No";
	return 0;
}