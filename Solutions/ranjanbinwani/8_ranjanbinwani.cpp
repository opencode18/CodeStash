#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int r,c,temp;
		cin>>r>>c;
		int k = r*c;
		multiset<int>se;
		while(k--){
			cin>>temp;
			se.insert(temp);
		}
		k=r*c;
		multiset<int>::iterator it=se.begin();
		advance(it, k/2);
		/*for (it = se.begin(); it != se.end(); it++) 
            cout << *it << ' ';    
        cout << '\n';*/
        cout << *it << endl; 
	}
	return 0;
}
