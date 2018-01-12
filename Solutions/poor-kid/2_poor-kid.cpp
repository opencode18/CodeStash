#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<pair <int,int> > v;
	
	int N,input,k,n,index;
	float r =1.0;
	cin>>N;
	float rank[N+1];
	for(int i=0;i<N;i++)
	{
		cin>>input;
		v.push_back(make_pair(input,i));
	}
	sort(v.begin(),v.end());
	/*for(int i=0;i<N;i++)
	cout<<v[i].first<<" "<<v[i].second<<endl;*/

	for(int j=0;j<N;j=j+n)
	{
		k =j;
		while(k<N & v[k].first==v[k+1].first)
		{
			k=k+1;
		}
		n = k-j+1;
		for( int l=0;l<n;l++)
		{
			index = v[j+l].second;
			//cout<<index<<" ";
			rank[index] = r+ (float)(n-1)*(0.5);//(r+(r+1)+(r+2)...+(r+n-1)/n)
			//cout<<rank[index];
		}
		r = r+n;
		
	}
	for(int i=0;i<N;i++)
		cout<<fixed<<setprecision(1)<<rank[i]<<endl;
}