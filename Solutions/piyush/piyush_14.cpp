#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code here
	int q;
	cin>>q;
	int arr[100001],i,j;
	for(i=2;i*i<=100000;i++)
	{
		for(j=2*i;j<=100000;j+=i)
		{
			arr[j]+=i;
		}
	}
	while(q--)
	{
		int v;
		cin>>v;
		cout<<arr[v]+1<<endl;
	}
	return 0;
}