#include <stdio.h>
void main()
{
	int i,j,T,X,Y,P;
	scanf("%d",&T);
	for(i=0;i<T;++i)
	{
		scanf("%d %d %d",&X,&Y,&P);
		for(j=1;j<=P;++j)
		{
			if(j%2!=0)
				X*=2;
			else
				Y*=2;
		}
		if(X>Y)
			printf("%d\n",(X/Y));
		else
			printf("%d\n",(Y/X));
	}
}
	