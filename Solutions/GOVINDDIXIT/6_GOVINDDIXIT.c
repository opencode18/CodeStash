#include <stdio.h>
int main() 
{
	int Z,L,N,R,ans;
	scanf("%d",&Z);
	while(Z--)
	{
		scanf("%d %d %d",&N,&L,&R);
		ans=N|(((1 << (L - 1)) - 1) ^ ((1 << (R)) - 1));
		printf("%d\n",ans);
	}
	return 0;
}
