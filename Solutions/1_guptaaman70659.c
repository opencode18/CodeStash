#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x,y,p,i,min,max;
		scanf("%d %d %d",&x,&y,&p);
		for(i=0;i<p;i++)
		{
			if((i+1)%2==0)
			{
				y=2*y;
			}
			else
			{
				x=x*2;
			}
		}
		if(x>=y)
		{
		max=x;
		min=y;	
		}
		else if(y>=x)
		{
			min=x;
			max=y;
		}
		printf("%d\n",max/min);
	}
}
