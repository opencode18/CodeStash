#include <stdio.h>
int main()
{
	int i , p, t , x , j , y , min , max ;
	scanf("%d",&t);
	for(i = 0 ; i < t ; i++)
	{
		scanf("%d %d %d", &x , &y, &p);
		for( j = 1 ; j <= p ; j++)
		{
			if(( j % 2) == 1)
			{
				x *= 2;
			}
			else
			{
				y *= 2;
			}
		}
		if(x < y)
		{
			max = y;
			min = x;
		}
		else
		{
			max = x;
			min = y;
		}
		printf("%d\n",max/min);
	}
	return 0;
}
