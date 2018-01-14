#include <bits/stdc++.h>
using namespace std;

long long int max(long long int a,long long int b)
{
    return a>b?a:b;
}

int main() {
    
    long long int t;
    cin>>t;
    
    while(t--)
    {
        long long int n,i,j;
        cin>>n;
        long long int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long int dp[n];
        for(i=0;i<n;i++)
        {
            dp[i]=1;
        }
        long long int res=-1;
        sort(arr,arr+n);
        
        for(i=1;i<n;i++)
        { 
           
            for(j=0;j<i;j++)
            {
                if(arr[i]%arr[j]==0)
                {
                     dp[i]=max(dp[j]+1,dp[i]);
                }
                
            }
            
            if(dp[i]>res)
            res=dp[i];
        }
        
        if(res!=1)
        cout<<res<<endl;
        
        else
        cout<<-1<<endl;
    }
	return 0;
}