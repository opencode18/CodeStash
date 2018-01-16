#include <iostream>
using namespace std;

int main() {
	
	int t; scanf("%d", &t);
	
	 while(t--) 
	 {
    	string s, ans, word = "";
    	cin>>s;
    	for (int i = 0; i < s.size(); ++i) 
    	{
    		if (s[i] == '.') 
    		{
    			if (ans.size()<1) 
    			{
    				ans = word;
    			}
    			else 
                {
    				ans = word+"."+ans;
    			}
    			word = "";
    		}
    		else 
    		{
    			word += s[i];
    		}
    	}
    	ans = word+"."+ans;
    	cout<<ans<<endl;
    }
}