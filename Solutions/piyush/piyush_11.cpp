#include <bits/stdc++.h>
using namespace std ;
#define ll long long int
double dp[1003][1003];
int main()
{

  ll t;
  cin>>t;
  while(t--){
     ll n,m,i,j;
     for(i=0;i<1003;i++)
     {
         for(j=0;j<1003;j++)
            dp[i][j]=0;
     }
     cin>>n>>m;
     for (i = 0; i <=n; i++)
     {
        for (j = 0; j <=m; j++)
        {
          if(i==0){ dp[i][j]=1; continue;}
          if(j==0){ dp[i][j]=1; continue;}
          dp[i][j]= i*1.0/(i+j)+ (j*1.0/(i+j))*((j-1)*1.0/(i+j-1))*dp[i][j-2];
        }
     }
     printf("%.6f\n",dp[n][m]);
  }

return 0;
}
