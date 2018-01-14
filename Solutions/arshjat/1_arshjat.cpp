#include <iostream>
using namespace std;

int main()
{
    int t,x,y,p,max,min;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>x>>y>>p;
        for(int i=1;i<=p;i++)
        {
            if(i%2==0)
            {
                y*=2;
            }
            else if(i%2!=0)
            {
                x*=2;
            }
        }
        if(x>y)
        {
            max=x;
            min=y;
        }
        else if(y>x)
        {
            max=y;
            min=x;
        }
        else{
            cout<<'1'<<endl;
            continue;
        }
        cout<<(max/min)<<endl;
    }
    return 0;
}
