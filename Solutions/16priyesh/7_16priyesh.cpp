/*coded by 16priyesh*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i,l;
    string line, temp;
    stack<string> s;
    cin>>t;
    while(t--){
        cin>>line;
        l = line.length();
        i=0;
        while(i<l){
            temp="";
            while(i<l&&line.at(i)!='.'){ //getting each word of string
                temp = temp+line.at(i);
                i++;
            }
            s.push(temp); //storing them in stack
            i++;
        }
        cout<<s.top();
        s.pop();
        while (!s.empty()) {
            cout << "."+s.top(); //pushing all the strings out of stack to get a reversed form
            s.pop();
        }
        cout<<endl;
    }
    return 0;
}