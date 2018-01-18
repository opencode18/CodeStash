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
    	string a, ans, word = "";
    	cin>>a;
    	for (int i = 0; i < a.size(); ++i) {
    		if (a[i] == '.') {
    			if (ans.size()<1) {
    				ans = word;
    			}
    			else {
    				ans = word+"."+ans;
    			}
    			word = "";
    		}
    		else {
    			word += a[i];
    		}
    	}
    	ans = word+"."+ans;
    	cout<<ans<<endl;
    }
	return 0;
}