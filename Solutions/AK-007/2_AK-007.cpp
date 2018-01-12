#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j,m;
   vector <int> a;
    while(cin>>m)
    {
      a.push_back(m);
    }
    int n=a.size();
    float ans[n]={0};
    float c=0,d=0;
    for (i=0;i<n;i++)
    {
        c=1;d=1;
        for (j=0;j<n;j++)
        {
            if (j!=i && a[j]<a[i])
                c=c+1;
            if (j!=i && a[j]==a[i])
                d=d+1;      
        }
        ans[i] = c + (float)(d - 1)/(float) 2;
    
    }  
     
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
 
    return 0;
}