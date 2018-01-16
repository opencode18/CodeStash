#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		string s,str;
		int c=0;
		cin >> s;
		s='.'+s;
		for(int i=s.length()-1;i>=0;i--)
		{
			if(s[i]=='.')
			{
				str=s.substr(i+1,c);
				if(i!=0)
				 cout<<str<<".";
				else
				 cout<<str;
				c=0;
			}
			else
			 c++;
		}
		cout<<endl;
	}
	return 0;
}