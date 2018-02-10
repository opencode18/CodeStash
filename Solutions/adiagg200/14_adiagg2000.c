    #include <stdio.h>
     
    int main()
    {
     
       int t,n,add=0;
       scanf("%d",&t);
      while(t-- )
      {
          scanf("%d",&n);
          add=0;
          for(int i=1;i<n;i++)
          {
          	if(n%i==0)
            add=add+i;
          }
          printf("%d\n",add);
      }
        return 0;
    }
