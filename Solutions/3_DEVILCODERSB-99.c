#include <stdio.h>

 
int main() {
	int t,n;
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		if(n==1)
		printf("1\n");
		else
		printf("%d\n",n/2);
	}
	return 0;
}