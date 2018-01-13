#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,n;
		cin>>n;
		int arr[n],sec[n];
		for(i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		for(i=0;i<n;i++)
		sec[i]=1;
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(arr[i]%arr[j]==0 || arr[j]%arr[i]==0)
				{
					sec[i]=max(sec[i],sec[j]+1);
				}
			}
		}
		
		int ans=*max_element(sec,sec+n);
		if(ans==1)cout<<"-1\n";
		else cout<<ans<<endl;
	}
	return 0;
}