#include<bits/stdc++.h>
using namespace std;

int findSum(int a[], int n, int k){
	unordered_map<int,int>m;
	int sum=0,max_len=0;
	for(int i=0;i<n;++i){
		sum+=a[i];
		if(sum==k){
			max_len=i+1;
		}else if(m.find(sum)==m.end()){
			m[sum]=i;
		}
		int x = sum-k;
		if(m.find(x)!=m.end()){
			if(max_len<(i-m[x])){
				max_len=i-m[x];
			}
		}
	}
	return max_len;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		cin>>k;
		cout<<findSum(a,n,k)<<endl;
	}
	return 0;
}
