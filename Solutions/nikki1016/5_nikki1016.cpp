//C++ implementation of above algorithm
#include<bits/stdc++.h>
using namespace std;


int lru(int pages[], int n, int capacity)
{

	unordered_set<int> s;
	unordered_map<int, int> indexes;

	int pf = 0;
	for (int i=0; i<n; i++)
	{
		if (s.size() < capacity)
		{
			if (s.find(pages[i])==s.end())
			{
				s.insert(pages[i]);
				pf++;
			}
			indexes[pages[i]] = i;
		}

		else
		{
			
			if (s.find(pages[i]) == s.end())
			{
				
				int lru = INT_MAX, val;
				for (auto it=s.begin(); it!=s.end(); it++)
				{
					if (indexes[*it] < lru)
					{
						lru = indexes[*it];
						val = *it;
					}
				}

				s.erase(val);
				s.insert(pages[i]);
				pf++;
			}
			indexes[pages[i]] = i;
		}
	}

	return pf;
}

int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
    	int pages[n];
    	int c ;
    	for(int i =0; i<n; i++){
    	    cin >> pages[i];
    	}
    	cin >> c;
    	cout << lru(pages, n, c)<< endl;
    }
	return 0;
}

