#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,i;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		if(n==0 || m==0){cout<<"1.000000\n";continue;}
		
		long double dp[1010];
		memset(dp,0,sizeof(0));
		dp[0]=1.000000;
		dp[1]=(long double)n/(n+1);
		for(int i=2;i<=m;i++)
		dp[i]=((long double)n/(n+i))+(((long double)i/(i+n))*((long double)(i-1)/(i+n-1))*dp[i-2]);

		printf("%.6llf\n",dp[m]);
		
	}
	return 0;
}