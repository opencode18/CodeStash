#include <bits/stdc++.h>
using namespace std;

int main() 
{
	//ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
            string s;
	while(getline(cin,s))
	{
		string str="";
		int temp=0;
	   for(int i=0;i<s.size();i++)
	   {
	   	if(s[i]=='-' && s[i+1]=='>' && temp==0)
	   	{
	   	str.push_back('.');
	   	i++;
	   	}
	   	else if(s[i]=='/' && s[i+1]=='/')
	   	{
	   	str.push_back(s[i]);
	   	temp=1;
	   	}
	   	else
	   	str.push_back(s[i]);
	   }
	   cout<<str<<endl;
	}
	return 0;
}