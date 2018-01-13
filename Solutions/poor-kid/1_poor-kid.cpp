#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,X,Y,P;
	cin>>T;
	while(T--)
	{
		cin>>X>>Y>>P;
		while(P>0)
		{
			if(P%2==0)
				Y = Y*2;
			else
				X = X*2;
			P--;
		}
	int max_element = max(X,Y);
	int min_element = min(X,Y);
	int result = max_element/min_element;
	cout<<result<<endl;
	
	}
	return 0;

}