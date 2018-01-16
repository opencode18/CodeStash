#include <iostream>
using namespace std;
int main()
{
	int t,l,n,r,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%d %d",&l,&r);
		sum=n | (((1 << (l - 1)) - 1) ^ ((1 << r) - 1));
		printf("%d",sum);
		printf("\n");
	}
	return 0;
}
