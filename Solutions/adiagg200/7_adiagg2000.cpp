#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;

	 while(t--)
	 {
    	string a, ans, w = "";
    	cin>>a;
    	for (int i = 0; i < a.size(); i++)
    	{
    		if (a[i] == '.')
    		{
    			if (ans.size()<1)
    			{
    				ans = w;
    			}
    			else
                {
    				ans = w+"."+ans;
    			}
    			w = "";
    		}
    		else
    		{
    			w =w+ a[i];
    		}
    	}
    	ans = w+"."+ans;
    	cout<<ans<<"\n";
    }
    return 0;
}
