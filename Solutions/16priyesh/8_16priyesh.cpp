/*coded by 16priyesh*/
#include <bits/stdc++.h>
using namespace std;

//In this algorithm i have used the constraint on the elements of matrix
//which are less than or equal to 1000. Neither have I constructed 
//the matrix nor used its row sorted property. Time complexity = O(n*m)
//space complexity=O(max size of elements). Here its constant as max size is 1000.
//if size of elements were large enough we may have used ordered map
//to avoid consumption of too much space.

int main(){
	int t,n,m,i,count,max_size;
	max_size=1001;
	cin>>t;
	int a[max_size]; //array of numbers to keep track of their count
	while(t--){
		cin>>n>>m;
		for(i=0; i<max_size; i++){
			a[i]=0; //setting initial counts of all elements equal to 0
		}
		n=n*m; //total number of elements of matrix
		for(i=0; i<n; i++){
			cin>>m;
			a[m]++; //increasing count of each number if encountered
		}
		count=a[1]; //to keep track of count of elements less than or equal to median
		i=1; //start checking from 1 if its median or not
		n=n/2 + 1; //index of the median if the matrix was a sorted list
				   //we are given that total number of elements is odd
		while(count<n){
			i++;
			count+=a[i];
		}
		cout<<i<<endl; //i is the median since it is the element for which 
					   //number of elements less than it is n*m/2
	}
	return 0;
}