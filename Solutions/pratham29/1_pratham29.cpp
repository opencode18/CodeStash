#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,p;
        scanf("%d %d %d",&x,&y,&p);

        for(int i=1; i<=p; i++)
        {
            if(i%2==0)
                y = y*2;
            else
                x = x*2;
        }
        printf("%d\n",max(x,y)/min(x,y));
    }
    return 0;
}
