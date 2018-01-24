#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	while(getline(cin,s))
	{
		string t="";
		int i;
		for( i=0;i<s.length();i++)
		{
			if(s[i]=='/' && s[i+1]=='/')
			break;
			else if(s[i]=='-' && s[i+1]=='>')
			{
				t+=".";
				i++;
			}
			else t+=s[i];
		}
		while(i<s.length())
		{
			t+=s[i];
			i++;
		}
		cout<<t<<endl;
	}
	return 0;
}