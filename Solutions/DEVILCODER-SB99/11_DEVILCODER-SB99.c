#include<stdio.h>
int main(){
	int t;
	double g;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		g=n;
		g=g/(n+k);
		printf("%.6f\n",g);
	}
	return 0;
}