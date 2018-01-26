/* code by AbhiTaker
         ____
        /    \
       /  __  \              _______      __       _   _    _____    _____
      /  /  \  \            |__   __|    /  \     | | / /  |  ___|  |  _  \
     /  /____\  \     ___      | |      / /\ \    | |/ /   | |__    | |_)  )
    /  /______\  \   |___|     | |     / /__\ \   |   /    |  __|   |    _/
   /  /        \  \            | |    / /----\ \  | |\ \   | |___   | |\ \
  /__/          \__\           |_|   /_/      \_\ |_| \_\  |_____|  |_| \_\
*/
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
   string s;
   while(getline(cin, s))
   {
       vector<char> v;
       ll flag = 0;
       for(int i=0; i<s.size(); i++)
       {
           if(flag)
           {
               v.push_back(s[i]);
               continue;
           }
           if(s[i]=='/' && s[i+1]=='/')
                flag = 1;

            if(s[i]=='-' && s[i+1]=='>')
            {
                v.push_back('.');
                i++;
                continue;
            }
            v.push_back(s[i]);
       }
       for(auto j: v)
            cout<<j;
        cout<<"\n";
   }


    return 0;
}
