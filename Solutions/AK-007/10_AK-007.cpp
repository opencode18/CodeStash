#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int i;
    int a[n1],b[n2];
    for(i=0;i<n1;i++)
     cin>>a[i];
    for(i=0;i<n2;i++)
     cin>>b[i];
     int n;
     cin>>n;
	int sum1=0, sum2= 0;
    for(int i = 0; i < 2; i++)
        sum1 += a[i];
    for(int i = 0; i < 2; i++)
        sum2 += b[i];
        int x,y;
	if(sum1%5==0)
    	x=sum1/5;
	else 
    	x=(sum1/5)+1;
    if(sum2%10==0)
        y=sum2/10;
    else
        y=(sum2/10)+1;
    
    if(x+y>n)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    return 0;
}