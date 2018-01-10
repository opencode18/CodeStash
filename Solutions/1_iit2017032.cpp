#include<iostream>
using namespace std;
int main()
{
	int x,y,p,i,z;
	cin>>x>>y>>p;
	for(i=1;i<=p;i++)
	{
	  if(i%2==0)
	  {
	    y=y*2;
	  }
	  else
	  {
	     x=x*2;
	  }
	}
	if(x>y)
		{z=x/y;
	cout<<z;}
	else 
		{ z=y/x;
	cout<<z;}
	return 0;

}