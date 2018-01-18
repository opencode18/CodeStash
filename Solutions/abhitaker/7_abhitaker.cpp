/* code by AbhiTaker  */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define M 1000000007
#define N 1000016
#define ff first.first
#define fs first.second
#define sf second.first
#define ss second.second
#define f first
#define s second
#define inf 9000000000000000000


int main()
{
   //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   ll t;
   cin>>t;
   while(t--)
   {
       string s;
       vector<string> v;
       cin>>s;

       for(ll i=0; i<s.size(); i++)
       {
           string s2="";
           while(s[i]!='.' && i<s.size())
           {
               s2 += s[i];
               i++;
           }
           v.push_back(s2);
       }

       for(ll i=v.size()-1; i>=0; i--)
        {
            cout<<v[i];
            if(i!=0)
                cout<<".";
        }
        cout<<"\n";
   }

    return 0;
}
