#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >>n;
		int arr[n];
		int i,j;
		for(i =0; i<n; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);
		int subseq[1009]={0};
		for(i =0 ;i<n; i++){
			for(j =i; j <n ; j++){
				if(arr[j] % arr[i] == 0 && i != j){
					subseq[j] = max(subseq[i] +1, subseq[j]);
				}
				else {
					subseq[j] = max(subseq[i], subseq[j]);
				}
			}
		}
		if(subseq[n-1])
			cout << (subseq[n-1]+1) << endl;
		else cout <<"-1\n";
		
	}
	return 0;
}
