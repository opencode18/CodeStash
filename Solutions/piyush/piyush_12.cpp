#include <bits/stdc++.h>
 using namespace std;
 #define ll long long
 int main() {
 	ll n;
 	scanf("%lld",&n);
 	ll i,arr[n];
 	for(i=0;i<n;i++)
 	 scanf("%lld",&arr[i]);
 	ll j,ctr[n]={0};
 	for(i=0;i<n-1;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 			if(arr[i]>arr[j])
 			 ctr[i]++;
 		}
 	}
 	for(i=0;i<n;i++)
 	 printf("%lld ",ctr[i]);
 	return 0;
 } 