#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,c;
   cin>>b>>c;
    ll cup[100000], saucers[100000], sumCups=0,sumSaucers=0,shelfCups,shelfSaucers;
    
    for(int i=0;i<b;i++)
    {
        cin>>cup[i];
        sumCups=sumCups+cup[i];
    }
    for(int j=0;j<c;j++)
    {
        cin>>saucers[j];
        sumSaucers=sumSaucers+saucers[j];
    }
    
    cin>>a;
    
    if(sumCups%5==0)
        shelfCups=sumCups/5;
    else
        shelfCups=(sumCups/5)+1;
    if(sumSaucers%10==0)
        shelfSaucers=sumSaucers/10;
    else
        shelfSaucers=(sumSaucers/10)+1;
    
    ll total=shelfCups+shelfSaucers;
    if(total<=a)
    cout<<"Yes"<<endl;
    else
       cout<<"No"<<endl;
    return 0;
}
