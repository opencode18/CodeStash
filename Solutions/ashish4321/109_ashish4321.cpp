#include <bits/stdc++.h>
using namespace std;

void printReverse(string s)
{
    int length=s.length();
    string ns="";
    int i,c=0;
    for (i=length-1;i>=0;i--) 
    {
        if (s[i] == '.') 
        {
            c+=1;
            ns+=s.substr(i,c);
            c=0;
            //cout<<ns<<endl;
            //printf("%s.",&(s[i])+1,c);
        }
        else
        c++;
    }
    ns+=s.substr(0,c);
    for(int i=1;i<=length;i++)
    cout<<ns[i];
}
int main()
{
	int test;
	cin>>test;
	while(test-->0)
	{
		string s;
		cin>>s;
		s="."+s;
                        printReverse(s);
                        cout<<endl;
	}
                return 0;
}