#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y, p, i;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> p;
        for( i = p ; i > 0 ; --i)
        {   
            if( i % 2 == 1) //checking if p is odd
            {
                x = x * 2;
            }
            else
            {
                y = y * 2;
            }
        }
        cout << max(x, y)/min(x, y) << endl;
    }
}
