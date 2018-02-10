#include <bits/stdc++.h>
 using namespace std;
 
int main()
{
 
   int q,n;
   scanf("%d",&q);
    while(q-->0)
    {
      scanf("%d",&n);
      long long sum=1;
      for(int i=2;i<=sqrt(n);i++)
      {
      if(n%i==0 && (i!=(n/i)))
      sum+=i+(n/i);
      else if(n%i==0 && (i==(n/i)))
      sum+=i;
      }
      printf("%lld\n",sum);
  }
    return 0;
}
