#include <bits/stdc++.h>
using namespace std;

int fun(int n, int l, int r)
{
    int num = ((1 << r) - 1) ^ ((1 << (l - 1)) - 1);
    return (n ^ num);
}

int main() {
	
	int t; scanf("%d", &t);
	while(t--)
	{
		int n, l, r; scanf("%d%d%d", &n, &l, &r);
		cout << fun(n, l, r) << endl;
	}
}
