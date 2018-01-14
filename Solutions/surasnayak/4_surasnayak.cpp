#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; scanf("%d", &t);
	while(t--)
	{
		int n; scanf("%d", &n);
		int a[100009];
		for(int i=0; i<n; i++) scanf("%d", &a[i]);
		
		sort(a, a+n);
		int b[100009];
		for(int i=0; i<100007; i++) b[i]=1;
		int max_max=0;
		for(int i=1; i<n; i++)
		{
			int tmp=a[i];
			for(int j=0; j<i; j++)
			{
				if(tmp%a[j]==0 || a[j]%tmp==0)
				{
					b[i]=max(b[i], b[j]+1);
					max_max=max(max_max, b[i]);
				}
				
			}
		}
		// for(int i=0; i<n; i++) printf("%d ", b[i]);
		// printf("\n");
		if(max_max == 1) printf("-1\n");
		else{
			printf("%d\n", max_max);
		}
	}
}