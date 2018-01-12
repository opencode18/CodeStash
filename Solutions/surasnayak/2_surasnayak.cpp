#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int a[10000009];
	int c[10000009];
	float b[1000009];
	int n; scanf("%d", &n);
	for(int i=0; i<n; i++) { scanf("%d", &a[i]); c[i]=a[i]; }
	
	sort(a, a+n);
	for(int i=0; i<n; i++)
	{
		float sum=0, ct=0;
		for(int j=0; j<n; j++)
		{
			if(a[i]==a[j]) { sum+=j+1; ct++; }
		}
		for(int j=0; j<n; j++)
		{
			if(a[i]==a[j])
			{
				b[j]=(sum/ct);
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(c[i] == a[j]) { printf("%.1lf ", b[j]); break; }
		}
	}printf("\n");
}