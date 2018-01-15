#include <bits/stdc++.h>
using namespace std;

int fun(int pages[], int n, int capacity)
{

    unordered_set<int> s;
 
    unordered_map<int, int> indexes;
 
    int page_faults = 0;
    for (int i=0; i<n; i++)
    {

        if (s.size() < capacity)
        {

            if (s.find(pages[i])==s.end())
            {
                s.insert(pages[i]);
 

                page_faults++;
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
 
                page_faults++;
            }
 
            indexes[pages[i]] = i;
        }
    }
 
    return page_faults;
}

int main() {
	
	int t; scanf("%d", &t);
	while(t--)
	{
		int n; scanf("%d", &n);
		int a[100000007];
		for(int i=0; i<n; i++) scanf("%d", &a[i]);
		int cap; scanf("%d", &cap);
		cout << fun(a, n, cap) << endl;
	}
}