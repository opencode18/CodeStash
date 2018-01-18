#include<bits/stdc++.h>
using namespace std;

int getAns(int arr[],int n,int sum)
{
    int csum,max=0,ans;
    for (int i=0;i<(n-1);i++)
    {
    	ans=0;
        csum=arr[i];
        for (int j=i+1;j<n;j++)
        {
        	 csum+=arr[j];
            if (csum==sum)
            {
                ans=(j+1-i);
                if(ans>max)
                max=ans;
            }
        }
    }
    ans=0;
    if(arr[n-1]==sum)
    {
        ans=1;
        if(ans>max)
        max=ans;
    }
    return max;
}

int main()
{
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
    	int sum;
    	cin>>sum;
    	int ans=getAns(a,n,sum);
    	cout<<ans<<endl;
    }
    return 0;
}