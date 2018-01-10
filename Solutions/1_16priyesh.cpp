//coded by 16priyesh
#include <bits/stdc++.h>
using namespace std;

int main(){ 
	int t;
	cin>>t;
	while(t--){
		int x,y,p;
		cin>>x>>y>>p;
    	if(p%2!=0) x*=2;
	    int result=(x>y)?(x/y):(y/x);
		cout<<result<<endl;
	}
	return 0;
}
