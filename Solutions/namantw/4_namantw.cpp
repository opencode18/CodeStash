#include <bits/stdc++.h>

int main () {
	int t; 
	std::cin>>t; 
	while (t--) {
		int n, i, j, ar1[1010], ar2[1010];;
		std::cin>>n;
 
		for (i = 0; i < n; i++) std::cin>>ar1[i];
		std::sort(ar1, ar1+n);
		for (i = 0; i < 1010; i++) ar2[i]=1;
		int c = 0, num;
		for(i = 1; i < n; i++) {
			num = ar1[i];
			for(j = 0; j < i; j++) {
				if(num%ar1[j] == 0 or ar1[j]%num == 0) {
					ar2[i] = ar2[i] > (ar2[j]+1) ? ar2[i] : (ar2[j]+1);
					c = c > ar2[i] ? c : ar2[i];
				}
			}
		}
		if (c == 1) std::cout<<-1<<"\n";
		else std::cout<<c<<"\n";
	}
  return 0;
}