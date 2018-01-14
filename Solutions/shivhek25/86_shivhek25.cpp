#include <iostream>
using namespace std;
int minimum(int a[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		 s=a[i];
		else
		{
			if(a[i]<s)
			 s=a[i];
		}
	}
	return s;
}
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,cap;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
		 scanf("%d",&a[i]);
		scanf("%d",&cap);
		int arr[cap];
		int mark[cap];
		int c=0,priority=0,flag=0,count=0;
		for(int i=0;i<n;i++)
		{
			flag=0;
			if(c!=cap)
			{
				for(int j=0;j<c;j++)
				{
					if(arr[j]==a[i])
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					count++;
					mark[c]=priority;
					priority++;
					arr[c++]=a[i];
				}
			}
			else
			{
				for(int j=0;j<c;j++)
				{
					if(arr[j]==a[i])
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					count++;
					c=minimum(mark,cap);
					mark[c]=priority;
					priority++;
					arr[c++]=a[i];
					c=cap;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}