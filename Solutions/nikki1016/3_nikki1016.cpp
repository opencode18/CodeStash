#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
		int n, i;
		cin >>n;
		if(n%2){
			i = n%10;
			n = ((n/10)*10)/2;
			i = i/2 + n;
			cout <<i <<endl;
			
		}
		else{
			cout << n/2<< endl;
		}
	}
	return 0;
}
