#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,r,c;
		cin>>r>>c;
		vector<int> v;
		int a;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cin>>a;
				v.push_back(a);
			}
		}
		sort(v.begin(),v.end());
		cout<<v[(r*c)/2]<<endl;
	}
	return 0;
}