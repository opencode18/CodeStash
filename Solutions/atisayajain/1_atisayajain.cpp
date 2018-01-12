#include<iostream>
using namespace std;
int main()
{
    int t, x, y, p, mx, mn;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>p;
        while(p>0){
            if(p%2!=0) x *= 2;
            else y *= 2;
            p--;
        }
        mx = (x>y)?x:y;
        mn = (x>y)?y:x;

        cout<<mx/mn<<"\n";
    }
    return 0;
}
