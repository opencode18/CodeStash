#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n1,n2,i,n;
	cin>>n1>>n2;
	int arr[n1],brr[n2],k1,k2;
	for(i=0;i<n1;i++)
		cin>>arr[i];
	for(i=0;i<n2;i++)
		cin>>brr[i];
	cin>>n;
	k1=0;
	k2=0;
	for(i=0;i<n1;i++)
	{
		k1=k1+arr[i];
	}
	for(i=0;i<n2;i++)
	{
		k2=k2+brr[i];
	}
	int x1,x2;
	x1=k1/5;
	x2=k2/10;
	if((x1*5)<k1)
		x1++;
	if((x2*10)<k2)
		x2++;
	if((x1+x2)<=n)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}