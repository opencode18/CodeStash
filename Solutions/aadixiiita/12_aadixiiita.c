#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,*p,*count;
	scanf("%d",&n);	
    p=(int *)malloc(n*sizeof(int));
    count=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
	scanf("%d",&p[i]);
    for(i=0;i<n;i++)
	{
	    count[i]=0;
	    for(j=i+1;j<n;j++)
	    {
		
		if(p[j]<p[i])
		    count[i]++;
	    }
	    printf("%d ",count[i]);
	}
    return 0;
}    



     

