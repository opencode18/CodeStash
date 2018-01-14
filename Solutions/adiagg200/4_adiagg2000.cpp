#include <bits/stdc++.h>
using namespace std;
int main()
{

	 int t;
	cin>>t;
	while(t--)
	{
		int n,c=0,a[1000],b[1000];;
		cin>>n;

		for(int i=0;i<n;i++)
		{
		    cin>>a[i];
		}

		sort(a,a+n);

		for(int i=0;i<1000;i++)
		{
		    b[i]=1;
		}

		for(int i=1;i<n;i++)
		{
        int k=a[i];
        for(int j=0;j<i;j++)
        {
            if((k%a[j]==0) || (a[j]%k==0))
            {
                b[i]=max(b[i],b[j]+1);
                c=max(c,b[i]);
            }
        }
		}

		if(c==1)
		{
		    cout<<-1<<endl;
		}
		else
		{
			cout<<c<<endl;
		}
	}
  return 0;
}
