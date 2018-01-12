#include <bits/stdc++.h>
using namespace std;

void fastScan(int &number)
{
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
	
	int t;
	fastScan(t);
	while(t--){
		int n;
		fastScan(n);
		if(n==1) cout<<n<<endl;
		else cout<<n/2<<endl;
	}
	
	return 0;
}