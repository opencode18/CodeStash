#include <iostream>
using namespace std;

int main() 
{
	for(int i=1;i<=2000;i++)
	{
		string s,str="";
		getline(cin,s);
		if(s=="")
		 break;
		int p=s.find('/');
		for(int i=0;i<p;i++)
		{
			if(s[i]=='-'&&s[i+1]=='>')
			{
				str+='.';
				i++;
			}
			else
			 str+=s[i];
		}
		if(p!=-1)
		{
			for(int i=p;i<s.length();i++)
			 str+=s[i];
		}
		else
		{
			for(int i=0;i<s.length();i++)
			{
			if(s[i]=='-'&&s[i+1]=='>')
			{
				str+='.';
				i++;
			}
			else
			 str+=s[i];
			}	
		}
		cout<<str<<endl;
	}
	return 0;
}