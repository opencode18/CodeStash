#include<stdio.h>
int t,i,j,x,y,n;
main()
{scanf("%d",&t);
for(i=0;i<t;i++)
{scanf("%d %d %d",&x,&y,&n);
for(j=1;j<=n;j++)
{if(j%2!=0)
{x=2*x;}
else if(j%2==0)
{y=2*y;}
}}
if(x>y)
{i=x/y;
printf("%d\n",i);}
else if(y>x)
{j=y/x;
printf("%d\n",j);}}
