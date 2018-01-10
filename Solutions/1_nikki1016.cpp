#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
		int x,y,p;
		cin >> x>> y>> p;
		while(p){
			if(p%2){
				x = x*2;
			}
			else{
				y = y*2;
			}
			p--;
		}
		int mx , mn;
		if(x >y){
			mx = x;
			mn = y;
		}
		else {
			mx = y;
			mn = x;
		}
		cout <<(int) (mx/mn) <<endl;
	}
	
	
	return 0;
}
