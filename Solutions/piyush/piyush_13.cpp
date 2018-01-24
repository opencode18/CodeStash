#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
 
while(getline(cin,s))
{ 
	string s1=""; int p=0;
    for(int i=0;i<s.size();i++)
    {
        if(p==1)
         {
             s1=s1+s[i];
             continue;
         }
        if(i<s.size()-1&&s[i]=='/'&&s[i+1]=='/')
            {s1=s1+"//";
            i++;
            p=1; continue;}
        if(i<s.size()-1&&s[i]=='-'&&s[i+1]=='>')
        {
            s1=s1+".";
            i++;
            continue;
        }
        s1=s1+s[i];
    }
    cout<<s1<<endl;
}
}