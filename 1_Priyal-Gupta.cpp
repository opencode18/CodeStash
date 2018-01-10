#include <stdio.h>

int main(void) {
	int x,y,p,t,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d",&x,&y,&p);
		for(j=1;j<=p;j++)
		{
			if(j%2==0)
			y=y*2;
			else
			x=x*2;
		}
		if(x>y)
		p=x/y;
		else
		p=y/x;
		printf("%d\n",p);
	}
	return 0;
}

