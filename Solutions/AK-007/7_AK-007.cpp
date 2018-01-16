#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	string s;
    	cin>>s;
    	string f="";
    	vector <string> v;
    	for(int i=0;i<s.length();i++)
    	{
    		if(s[i]=='.')
    		{
    			v.push_back(f);
    			f="";
    			continue;
    		}
    		f+=s[i];
    	}
    	v.push_back(f);
    	for(int i=v.size()-1;i>=1;i--)
    	{
    		cout<<v[i]<<".";
    	}
    	cout<<v[0]<<endl;
    	
    }
	return 0;
}