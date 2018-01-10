#include<stdio.h>
int t,i,j,x,y,n,u,v;
main()
{scanf("%d",&t);
for(i=0;i<t;i++)
{scanf("%d %d %d",&x,&y,&n);
for(j=1;j<=n;j++)
{if(j%2!=0)
{x=2*x;}
else if(j%2==0)
{y=2*y;}
}
if(x>y)
{u=x/y;
printf("%d\n",u);}
else
{v=y/x;
printf("%d\n",v);}}}

