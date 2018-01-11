#include<stdio.h>

int max (int x, int y)
{
    if(x>=y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int min (int x, int y)
{
    if(x<=y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int t, x, y, p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&x,&y,&p);
        if(p%2==0)
        {
            printf("%d\n",max(x,y)/min(x,y));
        }
        else
        {
            x*=2;
            printf("%d\n",max(x,y)/min(x,y));
        }
    }
    return 0;
}
