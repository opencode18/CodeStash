#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t,x,y,p,i;
    cin>>t;
    while(t--){
        cin>>x>>y>>p;
        for(i=1;i<=p;i++){
            if(i&1){
                x*=2;
            }
            else{
                y*=2;
            }
        }
        cout<<max(x,y)/min(x,y)<<endl;
    }
    return 0;
}
