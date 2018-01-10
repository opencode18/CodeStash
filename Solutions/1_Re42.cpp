#include<bits/stdc++.h>
using namespace std;
int main(){
int max,min,t,x,y,z;
cin>>t;
for(int i=0;i<t;i++){
	scanf("%d %d %d",&x,&y,&z);
	for(int j=1;j<=z;j++){
		if(j%2==0){
		y*=2;
		}
		else{
			x*=2;
		}
	}
	max=x>y?x:y;
	min=x>y?y:x;
	cout<<(max/min);
	}
}