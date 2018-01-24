#include <stdio.h>
 
int main()
{
 
   int t,n,sum=0;
   scanf("%d",&t);
  while(t-- ){
      scanf("%d",&n);
      sum=0;
      for(int i=1;i<n;i++)
      if(n%i==0)
      sum+=i;
      printf("%d\n",sum);
  }
    return 0;
}