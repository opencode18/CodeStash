#include <bits/stdc++.h>
 using namespace std;
 
int ans[100001];

void solve()
{
	for (int i = 1; i <= 100000; ++i) {
		for (int j = i+i; j <= 100000; j += i) {
			ans[j] += i;
		}
	}
}

int main()
{
	solve();
	int n,x;
	cin >> n;
	while (n--) {
		cin >> x;
		cout << ans[x] << endl;
	}	

	return 0;
}
