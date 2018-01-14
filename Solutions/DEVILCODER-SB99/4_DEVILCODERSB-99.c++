#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        vector <int> a(n,0);
        vector<int> dp(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int max=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]%a[j]==0 && i!=j)
                {
                    if(dp[i]<=dp[j])
                   { 
                       dp[i]=dp[j]+1;
                   if(dp[i]>max)
                    max=dp[i];
                   }
                }
            }
        }
        if(max!=0)
            cout<<max+1<<endl;
        else
            cout<<-1<<endl;
        t--;
    }
	return 0;
}