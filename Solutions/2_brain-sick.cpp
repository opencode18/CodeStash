#include<bits/stdc++.h>
using namespace std;

int main()
{
    int z;
    cin>>z;
    string num;
    getline(cin,num);
    stringstream ss(num);
    int x,i=0;
    map<int,vector<int> > mp;
    map<int,int> frq;
    while(ss>>x)
    {
        mp[x].push_back(i);
        frq[x]++;
        i++;
    }
    int n=i;
    float rank[n];
    float rk=1.0;
    map<int,vector<int> >::iterator it;
    for(it=mp.begin();it!=mp.end();it++,rk+=1.0)
    {
        for(int j=0;j<int(((*it).second).size());j++)
            rank[((*it).second)[j]]=rk/frq[(*it).first];
    }
    for(int i=0;i<n;i++)
    {
        if(floor(rank[i])==rank[i])
        {
            cout<<rank[i]<<".0 ";
        }
        else
            cout<<rank[i]<<" ";
    }

    return 0;
}
