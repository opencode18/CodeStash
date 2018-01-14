#include <bits/stdc++.h>
using namespace std;
int hello(int n, int l, int r)
{
    int p;
    p = (((1 << (l - 1)) - 1) ^ ((1 << (r)) - 1));

	return (n | p);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
	int n , l , r ;
	cin>>n>>l>>r;
	cout << hello(n, l, r)<<endl;;
    }
	return 0;
}
