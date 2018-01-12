#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t)
    {
        int x,y,p;
        scanf("%d%d%d",&x,&y,&p);
        for(i=0;i<p;i++)
        {
            if(i%2==0)
                x=x*2;
            else
                y=y*2;
        }
        if(x>=y)
            printf("%d\n",x/y);
        else
            printf("%d\n",y/x);
        t--;
    }
    return 0;
}
