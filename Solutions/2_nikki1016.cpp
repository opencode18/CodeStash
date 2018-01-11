#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int n; 
	cin >>n;
	int i, arr[n], brr[n];
	map<int , pair<int, double> > m;
	for(i =0; i< n; i++){
		cin >> arr[i];
		brr[i] = arr[i];
		map<int , pair<int, double> > :: iterator it = m.find(arr[i]);
		if(it == m.end()){
			m.insert(make_pair(arr[i], make_pair(1,0)));
		}
		else{
			(m.at(arr[i]).first)++;
		}
	}
	sort(arr, arr+n);
	for(i =0; i<n; i++){
		int cnt = m.at(arr[i]).first;
		int j = i;
		double val = cnt;
		while(cnt-- && j < n){
			val += j;
			j++;
		}
		i = j-1;
		val = val/m.at(arr[i]).first;
		m.at(arr[i]).second = val;
		//cout<<val<< endl;
	}
	for(i = 0; i<n ; i++){
		cout<<fixed<<setprecision(1)<<m.at(brr[i]).second << " ";
	}
	cout << endl;
	return 0;
}
