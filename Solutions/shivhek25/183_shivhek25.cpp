#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int s=1;
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
			 s+=i;
		}
		cout<<s<<endl;
	}
	return 0;
}