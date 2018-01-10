#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,p,i,max,min,c;
        scanf("%d%d%d",&x,&y,&p);
        for(i=1;i<=p;i++)
        {
            if(i%2==0)
            y=y+y;
            else if((i+1)%2==0)
            x=x+x;
        }
        if(x>=y)
        {
            max=x;
            min=y;
        }
        else
        {
            max=y;
            min=x;
        }
        c=max/min;
        printf("%d\n",c);
    }
    return 0;
}