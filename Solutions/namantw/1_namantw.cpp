#include <bits/stdc++.h>;
using namespace std;

int main () {
    int testcases;
    cin>>testcases;
    
    while (testcases--) {
        int X, Y, P, ans = 0;
        cin >> X >> Y >> P;
        for (int turn = 1; turn <= P; ++turn) {
            if (turn%2 != 0) 
                X *= 2; //For every even turn
            else 
                Y *= 2; //For every odd turn
        }
        ans = max(X, Y) / min(X, Y);
        cout << ans << endl;
    }
    return 0;
}