#include<stdio.h>
int main()
{
    int z;
    scanf("%d",&z);
    while(z--)
    {
    	int a, b,c, i, j, x = 0,temp;
    	scanf("%d %d",&a,&b);
    	c=a*b;
    	int arr[c];
    	for(i=0; i<a; i++) 
    	{
    		for(j=0; j<b; j++) 
    		{
    		    scanf("%d",&arr[x++]);
    		}
    	}    
    	for(int k=0;k<x;k++)
    	{
    	    for(int l=0;l<x;l++)
    	    {
    	        if(arr[l]>arr[l+1])
    	        {
    	            temp=arr[l];
    	            arr[l]=arr[l+1];
    	            arr[l+1]=temp;
    	        }
    	    }
    	}
    	printf("%d",arr[x/2]);
    }
	return 0;
}
