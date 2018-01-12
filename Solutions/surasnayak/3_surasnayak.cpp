#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; scanf("%d", &t);
	while(t--)
	{
		int n; scanf("%d", &n);
		if(n==1) printf("1\n");
		else if(n%2==0) printf("%d\n", n/2);
		else printf("%d\n",(n-1)/2);
	}
}