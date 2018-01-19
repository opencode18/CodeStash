/*coded by 16priyesh*/
#include <iostream>
using namespace std;

int main() {
	int n,l1,l2,a=0,b=0,i;
	cin>>l1>>l2; //number of different cups and saucers
	for(i=0; i<l1; i++){
		cin>>n;
		a+=n; //counting total number of cups
	}
	for(i=0; i<l2; i++){
		cin>>n;
		b+=n; //counting total number of saucers
	}
	cin>>n; //number of selves
	l1=a%5+a/5; //number of selves required for cups for neat arrangement
	l2=b%10+b/10; //number of selves required for saucers for neat arrangement
	if(l1+l2<=n) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}