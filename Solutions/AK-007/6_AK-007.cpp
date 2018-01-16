#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,l,r;
		cin>>n>>l>>r;
		int ans=n|(((1 << (l - 1)) - 1) ^ ((1 << (r)) - 1));
		cout<<ans<<endl;
	}
	return 0;
}