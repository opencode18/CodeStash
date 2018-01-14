#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    int x,y,p;
    cin>>x>>y>>p;

    while(p>0){
      if(p%2 == 0)
        y *= 2;
      else
        x *= 2;
      p--;
    }

    int max = (x>y) ? x : y;
    int min = (x>y) ? y : x;

    cout<< max/min << "\n";
  }
}
