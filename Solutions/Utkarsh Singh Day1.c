#include <stdio.h>
#include <math.h>
long long min(long long int a,long long int b);
long long max(long long int a,long long int b);
int main()
{
  int t;
  scanf("%d",&t);
  while (t--) {
    long long int x,y,p;
    scanf("%lld %lld %lld",&x,&y,&p);
    if(p%2!=0)
    {
      x=x*pow(2,(p+1)/2);
      y=y*pow(2,(p-1)/2);
    }
    else{
      x=x*pow(2,p/2);
      y=y*pow(2,p/2);
    }
    printf("%lld\n",max(x,y)/min(x,y));
  }
}
long long max(long long int a,long long int b)
{
  if(a>b)
    return a;
  return b;
}
long long min(long long int a,long long int b)
{
  if(a<b)
    return a;
  return b;
}
