/*coded by 16priyesh*/
#include <bits/stdc++.h>
using namespace std;

//function to return the largest subarray with total value equal to sum
int longestSubArraySum(int a[], int n, int sum){
	unordered_map<int,int> look_up; //presum hashmap
	int current_sum=0, max_length=0, i; //current_sum is presum at current index
										//max_length is maximum length of such subarray till now
	look_up.insert(pair <int,int> (0, -1)); //presum=0 if no element is 0
											//used when the subarray starts from beginning
	for(i=0; i<n; i++){
		current_sum+=a[i];
		if(look_up.find(current_sum) == look_up.end()) //adding current presum to table if not present
	       look_up.insert(pair <int,int> (current_sum, i));
		if(look_up.find(current_sum-sum) != look_up.end()) //if the sum can be formed using this
		   max_length=max(max_length,i-look_up[current_sum-sum]); //element as a member of subarray
																//and it is larger then update max
	}
	return max_length;
}

int main(){
	int t,n,k,i;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		for(i=0; i<n; i++) cin>>a[i];
		cout<<longestSubArraySum(a,n,k)<<endl;
	}
}