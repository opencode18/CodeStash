/*coded by 16priyesh*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

/*
	cases when satyam wins are R+ GGR + GGGGR +.... until one or less green balls remains
	and two special cases when either number of red balls or green balls or both are zero
	thus probability of satyam winning(p) = pr + (pg)^2*pr + (pg)^4*pr + ....
		=> p = pr[ 1 + (pg)^2 + (pg)^4 + .... upto (gif(g/2)+1) terms]
		=> p = pr[{1-(pg)^(gif(g/2)+1)}/(1-(pg)^2)]
*/

int main() {
	int t,r,g;
	double pr,pg,p;
	cin>>t;
	while(t--){
		cin>>r>>g; //number of red and green balls
		if(r==0||g==0) p=1;
		else{
			pr=static_cast<double>(r)/(r+g); //probability of finding a red ball
			pg=static_cast<double>(g)/(r+g); //probability of finding a green ball
			pg=pg*pg;
			p=pr*(1-pow(pg,g/2+1))/(1-pg); //probability of satyam winning
		}
		cout<<setiosflags(ios::fixed | ios::showpoint)<<setprecision(6)<<p<<endl;
	}
	return 0;
}