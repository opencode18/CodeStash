#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	while(getline(cin,s))
	{
		string ans="";
		int i=0;
		while(i<s.length())
		{
			if(s[i]=='/' && s[i+1]=='/')
				break;
			else if(s[i]=='-' && s[i+1]=='>')
			{
				ans+=".";
				i++;
			}
			else 
				ans+=s[i];
			i++;
		}
		while(i<s.length())
		{
			ans+=s[i];
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
