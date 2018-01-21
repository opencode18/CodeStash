#include <iostream>
using namespace std;
#define ll long long
int main() {
	ll n;
	scanf("%lld",&n);
	ll a[n];
	for(ll i=0;i<n;i++)
	 scanf("%lld",&a[i]);
	ll count[n]={0};
	for(ll i=0;i<n-1;i++)
	{
		for(ll j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			 count[i]++;
		}
	}
	for(ll i=0;i<n;i++)
	 printf("%lld ",count[i]);
	return 0;
}