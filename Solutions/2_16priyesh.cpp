/*coded by 16priyesh*/

/*
  assuming n numbers to be given as input on a single line
  and the expected output to be a array of floating point numbers
  with one decimal digit on a single line
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string line;
	vector<pair<int,int>> a; //using a pair to keep track of indices while sorting
	int enterNumber;
	getline(cin, line); //reading the numbers on the line in a string
	istringstream iss(line);
	int index=0;
	while (iss >> enterNumber)
	{
	    a.push_back(make_pair(enterNumber,index)); //adding the number index pair to a vector
	    index++;
	}
	sort(a.begin(),a.end()); //sorting the vector as per first element of pair
	double b[index]; //array of ranks
	for(int i=0; i<index; i++){
		int j=i+1;
		double rank=static_cast<double>(i+1);
		for(; j<index&&a[i].first==a[j].first; j++) rank+=j+1;
		rank=rank/(j-i); //finding average rank
		for(int k=i; k<j; k++) b[a[k].second]=rank; //assigning rank to the elements
		i=j-1;
	}
	//now printing the ranks upto one decimal position
	for(int i=0;i<index;i++) cout<<setiosflags(ios::fixed)<<setprecision(1)<<b[i]<<" ";
	cout<<endl;	
}