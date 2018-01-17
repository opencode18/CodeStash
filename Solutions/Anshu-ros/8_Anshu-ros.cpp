#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        int a[r+1][c+1],i,j;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }
        int ar[r*c+1],k;
        k=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                ar[k]=a[i][j];
                k++;
            }
        }
        sort(ar,ar+(r*c));
        int x;
        x=(r*c)/2;
        cout<<ar[x]<<endl;
    }
    return 0;
}