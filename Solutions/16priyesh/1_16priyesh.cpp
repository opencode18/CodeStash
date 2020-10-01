//coded by 16priyesh
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){ 
	//To reduce the runtime
	FAST;
	int t;
	cin>>t;
	while(t--){
		int x,y,p;
		cin>>x>>y>>p;
		//Check odd bitwise.
    		if(p&1) x*=2;
	   	int result=(x>y)?(x/y):(y/x);
		cout<<result<<endl;
	}
	return 0;
}
