#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int test;
    cin>>test;
    while(test-->0)
    {
    	int r,c;
    	cin>>r>>c;
    	int a[r][c];
    	for(int i=0;i<r;i++)
    	{
    		for(int j=0;j<c;j++)
    		{
    			cin>>a[i][j];
    		}
    	}
        int min = INT_MAX, max = INT_MIN;
        for (int i=0; i<r; i++)
         {
           if (a[i][0] < min)
            min = a[i][0];

           if (a[i][c-1] > max)
            max = a[i][c-1];
         }
 
       int desired = (r * c + 1) / 2;
       while (min < max)
       {
        int mid = min + (max - min) / 2;
        int place = 0;
        for (int i = 0; i < r; ++i)
            place += upper_bound(a[i], a[i]+c, mid) - a[i];
        if (place < desired)
            min = mid + 1;
        else
            max = mid;
        }
    cout<<min<<endl;
    }
    return 0;
}