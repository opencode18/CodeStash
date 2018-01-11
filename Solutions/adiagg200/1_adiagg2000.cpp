#include <bits/stdc++.h>
using namespace std;

int value(int X, int Y, int P)
{
    if (P % 2 == 0)
        return (max(X, Y) / min(X, Y));

    else
        return (max(2 * X, Y) / min(2 * X, Y));
}

int main()
{int X,Y,P;
int t;
cin>>t;
while(t--)
{
    cin>>X>>Y>>P;
    cout << value(X, Y, P) << endl;
}
}
