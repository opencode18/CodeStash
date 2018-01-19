#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	int a[n];
	int b[m];
	int s1=0,s2=0;
	int p1,p2;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		s1+=a[i];
	}
	for(int i=0;i<m;i++)
	{
		cin >> b[i];
		s2+=b[i];
	}
	int k;
	cin >> k;
	p1=(s1/5);
	if(s1%5!=0)
	 p1++;
	p2=(s2/10);
	if(s2%10!=0)
	 p2++;
	if((p1+p2)<=k)
	 cout<<"Yes"<<endl;
	 else
	  cout<<"No"<<endl;
	return 0;
}