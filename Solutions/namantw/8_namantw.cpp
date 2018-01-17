#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
    	int r, c, i, j, x = 0;
    	cin>>r>>c;
    	int a[r*c];
    	for(i=0; i<r; i++) {
    		for(j=0; j<c; j++) {
    			cin>>a[x++];
    		}
    	}
    	sort(a, a+x);
    	cout<<a[x/2]<<endl;
    }
	return 0;
}