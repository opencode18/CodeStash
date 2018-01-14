#include <bits/stdc++.h>
using namespace std;

void fastScan(int &number)
{
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    fastScan(t);
    
    while(t--)
    {
        int n;
        fastScan(n);
        int a[n];
        for(int i=0;i<n;i++) fastScan(a[i]);
        int lookup_table[n];
        for(int i=0;i<n;i++) lookup_table[i]=1;
        int answer=-1;
        sort(a,a+n);
        for(int i=1;i<n;i++)
        { 
            for(int j=0;j<i;j++)
            {
                if(!(a[i]%a[j])) if(lookup_table[i]<=lookup_table[j]) lookup_table[i]=lookup_table[j]+1;
            }
            if(lookup_table[i]>answer) answer=lookup_table[i];
        }
        if(answer!=1) cout<<answer<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}