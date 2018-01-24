#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int e=0;
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if(i<l-1 && s[i]=='/' && s[i+1]=='/')
            e=1;
            if(i<l-1 && s[i]=='-' && s[i+1]=='>' && e==0)
            {
                cout<<".";
                ++i;
                continue;
            }
            else
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}