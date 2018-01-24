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
ll table[N];

int main()
{
   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   ll n,q;
   cin>>q;

   while(q--)
   {
       cin>>n;
       if(table[n])
       {
           cout<<table[n]<<"\n";
           continue;
       }
       for(ll j=1; j<= n/2; j++)
      {
            if(n%j==0)
                table[n] += j;
        }

        cout<<table[n]<<"\n";
   }

    return 0;
}
