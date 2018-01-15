#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,l,r;
		int a[7] ={0};
		scanf("%d %d %d",&n,&l,&r);
		int k,c=0,p=0;
		while(n!=0)
		{
			k=n%2;
			a[c++]=k;
			n/=2;
		}
		int s=0;
		for(int i=0;i<c;i++)
		{
			p++;
			if(p>=l && p<=r)
			 s+=pow(2,p-1);
			else
			 s+=(a[i]*pow(2,p-1));
		}
		printf("%d\n",s);
	}
	return 0;
}