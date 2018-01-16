#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int r,c;
int mat [101][101];
int solve()
{
    int minx=10000,maxx=-1;
    for(int i=0;i<r;i++)
    {
        if(minx>mat[i][0])
         minx=mat[i][0];
         if(maxx<mat[i][c-1])
           maxx=mat[i][c-1];
    }
    int d=(r*c+1)/2;
    while (minx < maxx)
    {
        int mid = minx + (maxx - minx) / 2;
        int place = 0;
 
    
        for (int i = 0; i < r; ++i)
            place += upper_bound(mat[i], mat[i]+c, mid) - mat[i];
        if (place < d)
            minx = mid + 1;
        else
            maxx = mid;
    }
    return minx;
    
}
int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    cin >> r >>c;
	    for(int i=0;i<r;i++)
	     for(int j=0;j<c;j++)
	      cin >>mat[i][j];
	      int x=solve();
	      printf("%d\n",x);
	}
	return 0;
}