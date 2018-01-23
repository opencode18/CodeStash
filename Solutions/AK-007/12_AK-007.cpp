#include <bits/stdc++.h>
 using namespace std;
 #define ll long long
 int main() {
	ll n;
cin>>n;
	ll i,a[n];
 	for(i=0;i<n;i++)
 	cin>>a[i];
	ll j,ans[n];
 memset(ans,0,sizeof(ans));
 	for(i=0;i<n-1;i++)
 	{
  		for(j=i+1;j<n;j++)
  		{
  			if(a[i]>a[j])
  			 ans[i]++;
  		}
  	}
  	for(i=0;i<n;i++)
  	 cout<<ans[i]<<" ";
  	return 0;
  }