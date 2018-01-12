#include <bits/stdc++.h>
using namespace std;
int main()
{
 
	long long int tcase; 
	cin>>tcase;
	while(tcase--)
	{
		long long int n,count=0;
		cin>>n;
		long long int arr1[1000005],arr2[1000005];
		for(long long int i=0;i<n;i++) 
		{
		    cin>>arr1[i];
		}
		
		sort(arr1,arr1+n);
		
		for(long long int i=0;i<100005;i++) 
		{
		    arr2[i]=1;
		}
		
		for(long long int i=1;i<n;i++)
		{
		int b=arr1[i];
		for(int j=0;j<i;j++)
		{
		    if((b%arr1[j]==0) or (arr1[j]%b==0))
		    {
			arr2[i]=max(arr2[i],arr2[j]+1);
			count=max(count,arr2[i]);
		    }
		}
		}
    
		if(count==1)
		{
		    cout<<-1<<'\n';
		}
		else
		{
			cout<<count<<'\n';
		}
	}
  return 0;
}
