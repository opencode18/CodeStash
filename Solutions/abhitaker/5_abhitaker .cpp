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
ll a[N];

int main()
{
   //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   ll t;
   cin>>t;
   while(t--)
   {
       ll n,i,k;
       cin>>n;
       unordered_map<ll, ll> mymap;
       unordered_set<ll> myset;
       vector<ll> v;

       for(i=0; i<n; i++)
       {
           cin>>a[i];
           myset.insert(a[i]);
           mymap[a[i]] += 1;
       }
       cin>>k;

       if(myset.size()<=k)
       {
           cout<<myset.size()<<"\n";
           return 0;
       }
       i = 0;
       myset.clear();
       ll ans = 0;

       while(v.empty() || v.size()!=k)
       {
           if(!(myset.find(a[i])!=myset.end()))
           {
               v.push_back(a[i]);
               ans++;
               myset.insert(a[i]);
           }
           i++;
       }

       for( ; i<n; i++)
       {
           if(!(myset.find(a[i])!=myset.end()))
           {
               ans++;

               for(auto num: myset)
               {
                   if(num==v[0])
                   {
                       myset.erase(num);
                       break;
                   }
               }
               v.erase(v.begin());
               v.push_back(a[i]);
               myset.insert(a[i]);
           }
           else
           {
               for(ll j=0; j<v.size(); j++)
               {
                   if(v[j]==a[i])
                   {
                       v.erase(v.begin() + j);
                       v.push_back(a[i]);
                       break;
                   }
               }
           }
       }

       cout<<ans<<"\n";

   }

    return 0;
}
